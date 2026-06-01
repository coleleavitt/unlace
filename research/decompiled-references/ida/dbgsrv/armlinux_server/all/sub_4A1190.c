/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1190
// Address: 0x00000000004A1190

//----- (00000000004A1190) ----------------------------------------------------
unsigned __int64 __fastcall sub_4A1190(__int64 *a1, void *s, unsigned __int64 a3, size_t n)
{
  __int64 v4; // x20
  unsigned __int64 v5; // x22
  unsigned __int64 v6; // x19

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 - 24);
  if ( a3 >= v5 )
    return -1;
  v6 = a3;
  if ( n )
  {
    while ( memchr(s, *(unsigned __int8 *)(v4 + v6), n) )
    {
      if ( ++v6 == v5 )
        return -1;
    }
  }
  return v6;
}
