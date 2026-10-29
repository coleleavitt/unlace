/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79930
// Address: 0x0000000000079930

//----- (0000000000079930) ----------------------------------------------------
__int64 __fastcall sub_79930(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, int a5, double a6, __m128 a7)
{
  int v8; // esi
  __int64 v9; // rbp
  char *v10; // rbx

  if ( a4 )
  {
    v8 = a5 + a2 - a3;
    if ( v8 >= 0 && v8 < a5 )
    {
      v9 = a5 - (__int64)v8;
      v10 = (char *)(32LL * v8 + a4);
      do
      {
        sub_688B0(a1 + 24, v10, a6, a7);
        v10 += 32;
        --v9;
      }
      while ( v9 );
    }
    return a3;
  }
  return a2;
}
