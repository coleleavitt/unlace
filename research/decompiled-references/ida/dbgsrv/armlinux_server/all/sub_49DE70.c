/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DE70
// Address: 0x000000000049DE70

//----- (000000000049DE70) ----------------------------------------------------
__int64 __fastcall sub_49DE70(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const char *v11; // x19
  const char *v12; // x1
  const char *v14; // x1

  v11 = *(const char **)(a1 + 8);
  if ( a5 != a7 )
  {
    v12 = *(const char **)(a4 + 8);
    if ( v12 == v11 )
    {
LABEL_5:
      *(_QWORD *)a8 = a5;
      *(_DWORD *)(a8 + 8) = a3;
      *(_DWORD *)(a8 + 16) = 1;
      return 0;
    }
    if ( *v11 == 42 )
      return 0;
LABEL_4:
    if ( !strcmp(v11, v12) )
      goto LABEL_5;
    return 0;
  }
  v14 = *(const char **)(a6 + 8);
  if ( v14 != v11 )
  {
    if ( *v11 == 42 )
    {
      if ( *(const char **)(a4 + 8) != v11 )
        return 0;
      goto LABEL_5;
    }
    if ( strcmp(v11, v14) )
    {
      v12 = *(const char **)(a4 + 8);
      if ( v11 == v12 )
        goto LABEL_5;
      goto LABEL_4;
    }
  }
  *(_DWORD *)(a8 + 12) = a3;
  return 0;
}
