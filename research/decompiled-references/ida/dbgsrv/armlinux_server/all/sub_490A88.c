/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490A88
// Address: 0x0000000000490A88

//----- (0000000000490A88) ----------------------------------------------------
__int64 __fastcall sub_490A88(FILE *a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // x23
  __int64 v7; // x0
  __int64 v9; // x1
  __int64 i; // x0
  char v11; // w2
  _BYTE ptr[32]; // [xsp+48h] [xbp-28h] BYREF

  v6 = a3;
  if ( a3 != sub_4904B8(a1, ptr, a3) )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    v9 = a2 + v6;
    for ( i = 0; (int)v6 > (int)i; --v9 )
    {
      v11 = ptr[i++];
      *(_BYTE *)(v9 - 1) = v11;
    }
  }
  else if ( (int)v6 > 0 )
  {
    v7 = 0;
    do
    {
      *(_BYTE *)(a2 + v7) = ptr[v7];
      ++v7;
    }
    while ( (int)v6 > (int)v7 );
  }
  return 0;
}
