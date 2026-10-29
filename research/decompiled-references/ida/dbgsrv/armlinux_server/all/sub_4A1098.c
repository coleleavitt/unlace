/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1098
// Address: 0x00000000004A1098

//----- (00000000004A1098) ----------------------------------------------------
__int64 __fastcall sub_4A1098(__int64 *a1, void *s, unsigned __int64 a3, size_t n)
{
  __int64 v4; // x22
  __int64 v5; // x19
  __int64 v6; // x4
  bool v7; // zf
  unsigned __int64 v8; // x4

  v4 = *a1;
  v5 = -1;
  v6 = *(_QWORD *)(*a1 - 24);
  if ( v6 )
    v7 = n == 0;
  else
    v7 = 1;
  if ( !v7 )
  {
    v8 = v6 - 1;
    if ( v8 > a3 )
      v5 = a3;
    else
      v5 = v8;
    while ( !memchr(s, *(unsigned __int8 *)(v4 + v5), n) )
    {
      if ( !v5 )
        return -1;
      --v5;
    }
  }
  return v5;
}
