/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1E48
// Address: 0x00000000004B1E48

//----- (00000000004B1E48) ----------------------------------------------------
unsigned __int64 __fastcall sub_4B1E48(__int64 *a1, void *s, unsigned __int64 a3, size_t n)
{
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x19
  __int64 v8; // x23

  v4 = a1[1];
  if ( a3 >= v4 )
    return -1;
  v5 = a3;
  v8 = *a1;
  if ( n )
  {
    while ( memchr(s, *(unsigned __int8 *)(v8 + v5), n) )
    {
      if ( ++v5 == v4 )
        return -1;
    }
  }
  return v5;
}
