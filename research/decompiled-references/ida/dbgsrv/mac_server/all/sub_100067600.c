/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067600
// Address: 0x0000000100067600

//----- (0000000100067600) ----------------------------------------------------
__int64 __fastcall sub_100067600(__int64 a1, const char *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // r13
  __int64 v6; // r12

  v3 = *(_QWORD *)(a1 + 552);
  v4 = -1;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 544);
    v6 = 0;
    while ( strcasecmp(a2, *(const char **)v5) )
    {
      ++v6;
      v5 += 32;
      if ( v3 == v6 )
        return v4;
    }
    if ( a3 )
      *a3 = *(unsigned __int8 *)(v5 + 12);
    return (unsigned int)v6;
  }
  return v4;
}
