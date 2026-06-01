/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lreadbytes
// Address: 0x00000000000B9E50

//----- (00000000000B9E50) ----------------------------------------------------
__int64 __fastcall lreadbytes(__int64 a1, void *dest, size_t n, char a4)
{
  size_t v7; // x0
  bool v8; // zf
  __int64 result; // x0

  if ( a1 )
  {
    if ( *(int *)a1 < 2 )
      v7 = qfread(*(FILE **)(a1 + 8), dest, n);
    else
      v7 = sub_B9818((pthread_mutex_t *)a1, dest, n);
  }
  else
  {
    v7 = -1;
  }
  v8 = v7 == n;
  if ( v7 == n )
    result = 0;
  else
    result = 0xFFFFFFFFLL;
  if ( v8 && (a4 & 1) != 0 )
  {
    memrev((char *)dest, n);
    return 0;
  }
  return result;
}
