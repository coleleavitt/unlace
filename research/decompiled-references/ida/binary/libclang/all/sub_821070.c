void __fastcall sub_821070(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  void *v4; // rsi
  char v5; // cl
  int v6; // edx
  __int64 v7; // rdi
  void *v8; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-70h]
  char v10; // [rsp+Ch] [rbp-6Ch]
  int v11; // [rsp+10h] [rbp-68h]
  unsigned int v12; // [rsp+20h] [rbp-58h] BYREF
  char v13; // [rsp+24h] [rbp-54h]
  void *v14; // [rsp+28h] [rbp-50h]
  unsigned int v15; // [rsp+30h] [rbp-48h]
  char v16; // [rsp+34h] [rbp-44h]
  int v17; // [rsp+38h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 8);
  v9 = v3;
  if ( v3 > 0x40 )
  {
    sub_2585B30(&v8);
    v3 = v9;
    v4 = v8;
  }
  else
  {
    v4 = *(void **)a2;
    v8 = v4;
  }
  v5 = *(_BYTE *)(a2 + 12);
  v6 = *(_DWORD *)(a2 + 16);
  v14 = v4;
  v7 = *(_QWORD *)(a1 + 8);
  v15 = v3;
  v13 &= ~1u;
  v10 = v5;
  v11 = v6;
  v9 = 0;
  v16 = v5;
  v17 = v6;
  v12 = 4;
  sub_6A01B0(v7, (__int64)&v12);
  if ( v12 > 1 )
    sub_69F740((__int64)&v12);
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

