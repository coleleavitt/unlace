void __fastcall sub_B947A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD **v6; // rbx
  _BYTE *v7; // rbp
  _QWORD *v8; // rsi
  _BYTE *v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]
  _BYTE v11[56]; // [rsp+10h] [rbp-38h] BYREF

  if ( (*(_BYTE *)(a1 + 9) & 4) != 0 )
  {
    v9 = v11;
    v10 = 0x200000000LL;
    sub_B92230(a1, (__int64)&v9, a3, a4, a5, a6);
    v6 = (_QWORD **)v9;
    v7 = &v9[8 * (unsigned int)v10];
    if ( v9 != v7 )
    {
      do
      {
        v8 = *v6++;
        sub_B93EF0(a1, v8, *(_BYTE *)(a1 + 9) & 1);
      }
      while ( v7 != (_BYTE *)v6 );
      v7 = v9;
    }
    *(_BYTE *)(a1 + 9) &= ~4u;
    if ( v7 != v11 )
      free(v7);
  }
}
