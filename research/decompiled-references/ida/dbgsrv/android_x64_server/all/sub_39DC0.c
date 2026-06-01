/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39DC0
// Address: 0x0000000000039DC0

//----- (0000000000039DC0) ----------------------------------------------------
__int64 __fastcall sub_39DC0(__int64 a1, const char *a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  int v9; // r14d

  v2 = -1;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a1 + 896) - 1;
    while ( 1 )
    {
      v4 = v3;
      if ( (v3 & 0x80000000) != 0LL )
        break;
      v5 = strcmp(*(const char **)(*(_QWORD *)(a1 + 912) + 8 * v3), a2);
      v3 = v4 - 1;
      if ( !v5 )
      {
        v6 = *(_QWORD *)(a1 + 888);
        return *(_QWORD *)(v6 + 8 * v4);
      }
    }
    v7 = *(_QWORD *)(a1 + 944);
    if ( !v7 )
      return v2;
    v8 = *(_QWORD *)(a1 + 960);
    v9 = 1;
    v4 = 0;
    while ( strcmp(*(const char **)(v8 + 8 * v4), a2) )
    {
      v4 = v9++;
      if ( v7 <= v4 )
        return -1;
    }
    v6 = *(_QWORD *)(a1 + 936);
    return *(_QWORD *)(v6 + 8 * v4);
  }
  return v2;
}
