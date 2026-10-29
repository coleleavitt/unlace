/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D730
// Address: 0x000000000007D730

//----- (000000000007D730) ----------------------------------------------------
void __fastcall sub_7D730(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 v9; // x8
  void **v10; // x20
  void **v11; // x21
  __int64 v12; // x8
  __int64 i; // x9
  __int64 v14; // [xsp+0h] [xbp-20h]
  int v15; // [xsp+8h] [xbp-18h]
  __int64 v16; // [xsp+10h] [xbp-10h]

  if ( !*(_BYTE *)(a1 + 672) )
    sub_7EEFC(*(void ***)(a1 + 624), a2, a3, a4, a5, a6, a7, a8, v14, v15, v16);
  v9 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 624) = 0;
  *(_BYTE *)(a1 + 672) = 0;
  if ( v9 )
  {
    v10 = *(void ***)(a1 + 648);
    if ( v10 )
    {
      do
      {
        v11 = (void **)*v10;
        sub_865B4((__int64)(v10 + 5));
        if ( ((_BYTE)v10[2] & 1) != 0 )
          operator delete(v10[4]);
        operator delete(v10);
        v10 = v11;
      }
      while ( v11 );
    }
    v12 = *(_QWORD *)(a1 + 640);
    *(_QWORD *)(a1 + 648) = 0;
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
        *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8 * i) = 0;
    }
    *(_QWORD *)(a1 + 656) = 0;
  }
}
// 7D748: variable 'v14' is possibly undefined
// 7D748: variable 'v15' is possibly undefined
// 7D748: variable 'v16' is possibly undefined
