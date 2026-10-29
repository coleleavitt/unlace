/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7620
// Address: 0x00000000000A7620

//----- (00000000000A7620) ----------------------------------------------------
__int64 __fastcall sub_A7620(__int64 a1, const char *a2, _DWORD *a3)
{
  unsigned __int64 v3; // r13
  unsigned int v4; // r15d
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp

  v3 = *(_QWORD *)(a1 + 552);
  v4 = -1;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 544);
    v7 = 0;
    while ( strcasecmp(a2, *(const char **)v6) )
    {
      ++v7;
      v6 += 32;
      if ( v7 >= v3 )
        return v4;
    }
    if ( a3 )
      *a3 = *(unsigned __int8 *)(v6 + 12);
    return (unsigned int)v7;
  }
  return v4;
}
