/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1C58
// Address: 0x00000000004B1C58

//----- (00000000004B1C58) ----------------------------------------------------
unsigned __int64 __fastcall sub_4B1C58(__int64 *a1, void *s, unsigned __int64 a3, size_t n)
{
  unsigned __int64 v4; // x19
  unsigned __int64 v5; // x21
  __int64 v8; // x23

  if ( !n )
    return -1;
  v4 = a3;
  v5 = a1[1];
  if ( a3 >= v5 )
    return -1;
  v8 = *a1;
  do
  {
    if ( memchr(s, *(unsigned __int8 *)(v8 + v4), n) )
      return v4;
    ++v4;
  }
  while ( v4 != v5 );
  return -1;
}
