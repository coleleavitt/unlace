void __fastcall sub_7A0760(__int64 a1)
{
  _QWORD **v1; // rbx
  _BYTE *v2; // rbp
  _QWORD *v3; // rsi
  _BYTE *v4; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  _BYTE v6[56]; // [rsp+10h] [rbp-38h] BYREF

  if ( (*(_BYTE *)(a1 + 9) & 4) != 0 )
  {
    v5 = 0x200000000LL;
    v4 = v6;
    sub_79DDC0(a1, (__int64)&v4);
    v1 = (_QWORD **)v4;
    v2 = &v4[8 * (unsigned int)v5];
    if ( v4 != v2 )
    {
      do
      {
        v3 = *v1++;
        sub_79FBA0(a1, v3, *(_BYTE *)(a1 + 9) & 1);
      }
      while ( v2 != (_BYTE *)v1 );
      v2 = v4;
    }
    *(_BYTE *)(a1 + 9) &= ~4u;
    if ( v2 != v6 )
      free(v2);
  }
}

