/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1D58
// Address: 0x00000000004B1D58

//----- (00000000004B1D58) ----------------------------------------------------
__int64 __fastcall sub_4B1D58(__int64 *a1, void *s, unsigned __int64 a3, size_t n)
{
  __int64 v4; // x19
  __int64 v5; // x4
  bool v6; // zf
  unsigned __int64 v7; // x4
  __int64 v10; // x22

  v4 = -1;
  v5 = a1[1];
  if ( v5 )
    v6 = n == 0;
  else
    v6 = 1;
  if ( !v6 )
  {
    v7 = v5 - 1;
    if ( v7 > a3 )
      v4 = a3;
    else
      v4 = v7;
    v10 = *a1;
    while ( !memchr(s, *(unsigned __int8 *)(v10 + v4), n) )
    {
      if ( !v4 )
        return -1;
      --v4;
    }
  }
  return v4;
}
