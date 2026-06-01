/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CBE0
// Address: 0x000000000006CBE0

//----- (000000000006CBE0) ----------------------------------------------------
__int64 __fastcall sub_6CBE0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  const char *v6; // rdi
  int v7; // eax

  if ( a2 )
  {
    v3 = a1[1];
    v4 = v3;
    while ( --v4 >= 0 )
    {
      v5 = *(_QWORD *)(*a1 + 8 * v3 - 8);
      v6 = s1;
      if ( *(_QWORD *)(v5 + 8) )
        v6 = *(const char **)v5;
      v7 = strcmp(v6, a2);
      v3 = v4;
      if ( !v7 )
        return v4;
    }
  }
  return -1;
}
