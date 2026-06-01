/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033A60
// Address: 0x0000000100033A60

//----- (0000000100033A60) ----------------------------------------------------
__int64 __fastcall sub_100033A60(_QWORD *a1, const char *a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  const char *v5; // rdi

  if ( a2 )
  {
    v3 = a1[1];
    while ( --v3 >= 0 )
    {
      v4 = *(_QWORD *)(*a1 + 8 * v3);
      v5 = _s1;
      if ( *(_QWORD *)(v4 + 8) )
        v5 = *(const char **)v4;
      if ( !strcmp(v5, a2) )
        return v3;
    }
  }
  return -1;
}
