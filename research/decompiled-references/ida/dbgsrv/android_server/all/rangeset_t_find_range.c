/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_find_range
// Address: 0x00000000000C525C

//----- (00000000000C525C) ----------------------------------------------------
unsigned __int64 *__fastcall rangeset_t_find_range(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // x8
  __int64 v3; // x9
  unsigned __int64 v4; // x11
  unsigned __int64 v5; // x12
  unsigned __int64 *v6; // x13
  unsigned __int64 v7; // x14
  unsigned __int64 *v8; // x13

  v2 = *(unsigned __int64 **)(a1 + 24);
  if ( v2 && *v2 <= a2 && v2[1] > a2 )
    return v2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( 16 * v3 )
  {
    v4 = (16 * v3) >> 4;
    v2 = *(unsigned __int64 **)a1;
    do
    {
      v5 = v4 >> 1;
      v6 = &v2[2 * (v4 >> 1)];
      v7 = v6[1];
      v8 = v6 + 2;
      v4 += ~(v4 >> 1);
      if ( v7 <= a2 )
        v2 = v8;
      else
        v4 = v5;
    }
    while ( v4 );
  }
  else
  {
    v2 = *(unsigned __int64 **)a1;
  }
  if ( v2 == (unsigned __int64 *)(*(_QWORD *)a1 + 16 * v3) )
    return nullptr;
  if ( *v2 > a2 )
    return nullptr;
  if ( v2[1] > a2 )
  {
    *(_QWORD *)(a1 + 24) = v2;
    return v2;
  }
  return nullptr;
}
