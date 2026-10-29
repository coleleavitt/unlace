/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4129B8
// Address: 0x00000000004129B8

//----- (00000000004129B8) ----------------------------------------------------
__int64 __fastcall sub_4129B8(
        __int64 a1,
        unsigned int a2,
        __off64_t a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        unsigned __int8 a6)
{
  int v7; // w22
  __off64_t v9; // x27
  unsigned __int64 v11; // x19
  unsigned int v12; // w0
  int v13; // w26
  int i; // w2
  unsigned __int64 v16; // x4
  unsigned int v17; // w20
  int v19; // w0
  unsigned __int8 *v20; // x2
  unsigned __int8 *v23; // [xsp+68h] [xbp-8h]

  if ( a5 )
  {
    v7 = a3 & 0xFFF;
    v9 = a3;
    v11 = a5;
    v12 = *(unsigned __int8 *)(a1 + 2053);
    v13 = a6 ^ 1;
    for ( i = *(_DWORD *)(a1 + 2044); ; i = *(_DWORD *)(a1 + 2044) )
    {
      do
      {
        v16 = (unsigned int)(4096 - v7);
        v17 = v12;
        if ( v16 > v11 )
          LODWORD(v16) = v11;
        if ( (int)v16 > 128 && v13 != 0 )
          LODWORD(v16) = 128;
      }
      while ( v12 || i == -1 );
      v23 = a4;
      v19 = sub_412600(a1, a2, v9, a4, v16, a6);
      if ( v19 < 0 )
        break;
      a4 = v23;
      if ( v19 )
      {
        if ( !*v23 )
          return 1;
        v20 = v23 + 1;
        while ( &v23[v19 - 1 + 1] != v20 )
        {
          if ( !*v20++ )
            return 1;
        }
        v9 += v19;
        a4 = &v23[v19];
        v11 -= v19;
        if ( !v11 )
          return 1;
        v7 = v9 & 0xFFF;
      }
      v12 = *(unsigned __int8 *)(a1 + 2053);
    }
  }
  else
  {
    return 1;
  }
  return v17;
}
