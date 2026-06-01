void __fastcall sub_825510(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // eax
  void *v5; // rcx
  char v6; // dl
  void *v7; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-60h]
  char v9; // [rsp+Ch] [rbp-5Ch]
  unsigned int v10; // [rsp+10h] [rbp-58h] BYREF
  char v11; // [rsp+14h] [rbp-54h]
  void *v12; // [rsp+18h] [rbp-50h]
  unsigned int v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+24h] [rbp-44h]

  v2 = *a2;
  if ( (unsigned int)v2 <= 0xD && (v3 = 8322, _bittest64(&v3, v2)) || (a2[1] & 1) != 0 )
  {
    sub_6A63E0(a1, (__int64)a2);
  }
  else
  {
    v4 = a2[4];
    v8 = v4;
    if ( v4 > 0x40 )
    {
      sub_2585B30(&v7);
      v4 = v8;
      v5 = v7;
    }
    else
    {
      v5 = *((void **)a2 + 1);
      v7 = v5;
    }
    v6 = *((_BYTE *)a2 + 20);
    v11 &= ~1u;
    v10 = 2;
    v9 = v6;
    v8 = 0;
    v12 = v5;
    v13 = v4;
    v14 = v6;
    sub_6A01B0(a1, (__int64)&v10);
    if ( v10 > 1 )
      sub_69F740((__int64)&v10);
    if ( v8 > 0x40 )
    {
      if ( v7 )
        operator delete[](v7);
    }
  }
}

