/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0710
// Address: 0x00000000000A0710

//----- (00000000000A0710) ----------------------------------------------------
__int64 __fastcall sub_A0710(_QWORD *a1, const char *a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rbx

  v2 = a1[13];
  v3 = -1;
  if ( v2 )
  {
    v4 = a1[12];
    v5 = 0;
    while ( strcmp(a2, *(const char **)(v4 + 8 * v5)) )
    {
      if ( ++v5 >= v2 )
        return v3;
    }
    return *(_QWORD *)(a1[9] + 8 * v5);
  }
  return v3;
}
