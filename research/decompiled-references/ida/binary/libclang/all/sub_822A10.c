void __fastcall sub_822A10(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  void *v3; // rcx
  char v4; // dl
  void *v5; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-60h]
  char v7; // [rsp+Ch] [rbp-5Ch]
  unsigned int v8; // [rsp+10h] [rbp-58h] BYREF
  char v9; // [rsp+14h] [rbp-54h]
  void *v10; // [rsp+18h] [rbp-50h]
  unsigned int v11; // [rsp+20h] [rbp-48h]
  char v12; // [rsp+24h] [rbp-44h]

  v2 = *(_DWORD *)(a1 + 8);
  v6 = v2;
  if ( v2 > 0x40 )
  {
    sub_2585B30(&v5);
    v2 = v6;
    v3 = v5;
  }
  else
  {
    v3 = *(void **)a1;
    v5 = *(void **)a1;
  }
  v4 = *(_BYTE *)(a1 + 12);
  v9 &= ~1u;
  v8 = 2;
  v7 = v4;
  v6 = 0;
  v10 = v3;
  v11 = v2;
  v12 = v4;
  sub_6A01B0(a2, (__int64)&v8);
  if ( v8 > 1 )
    sub_69F740((__int64)&v8);
  if ( v6 > 0x40 )
  {
    if ( v5 )
      operator delete[](v5);
  }
}

