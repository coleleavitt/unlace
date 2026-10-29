/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0FA8
// Address: 0x00000000004A0FA8

//----- (00000000004A0FA8) ----------------------------------------------------
unsigned __int64 __fastcall sub_4A0FA8(__int64 *a1, void *s, unsigned __int64 a3, size_t n)
{
  __int64 v4; // x21
  unsigned __int64 v5; // x19
  unsigned __int64 v7; // x22

  if ( !n )
    return -1;
  v4 = *a1;
  v5 = a3;
  v7 = *(_QWORD *)(*a1 - 24);
  if ( a3 >= v7 )
    return -1;
  while ( !memchr(s, *(unsigned __int8 *)(v4 + v5), n) )
  {
    if ( ++v5 == v7 )
      return -1;
  }
  return v5;
}
