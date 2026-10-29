__int64 __fastcall sub_822AB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  void *v5; // rdx
  __int64 result; // rax
  void *v7; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-60h]
  unsigned int v9; // [rsp+10h] [rbp-58h] BYREF
  char v10; // [rsp+14h] [rbp-54h]
  void *v11; // [rsp+18h] [rbp-50h]
  unsigned int v12; // [rsp+20h] [rbp-48h]
  char v13; // [rsp+24h] [rbp-44h]

  v4 = *(_DWORD *)(a1 + 8);
  v8 = v4;
  if ( v4 > 0x40 )
  {
    sub_2585B30(&v7);
    v4 = v8;
    v5 = v7;
  }
  else
  {
    v5 = *(void **)a1;
    v7 = *(void **)a1;
  }
  v10 &= ~1u;
  v8 = 0;
  v13 = 1;
  v9 = 2;
  v11 = v5;
  v12 = v4;
  sub_6A01B0(a3, (__int64)&v9);
  if ( v9 > 1 )
    sub_69F740((__int64)&v9);
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  result = sub_B101F0(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  *(_BYTE *)(a3 + 20) = result;
  return result;
}

