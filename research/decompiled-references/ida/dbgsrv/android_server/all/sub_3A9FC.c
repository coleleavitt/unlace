/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A9FC
// Address: 0x000000000003A9FC

//----- (000000000003A9FC) ----------------------------------------------------
__int64 __fastcall sub_3A9FC(__int64 a1, char *s2)
{
  __int64 v4; // x21
  unsigned __int64 v7; // x21
  __int64 v8; // x23
  __int64 v9; // x22
  int v10; // w24

  if ( !s2 )
    return -1;
  v4 = *(_DWORD *)(a1 + 1600) - 1;
  while ( (v4 & 0x80000000) == 0 )
  {
    if ( !strcmp(*(const char **)(*(_QWORD *)(a1 + 1616) + 8 * v4--), s2) )
      return *(_QWORD *)(*(_QWORD *)(a1 + 1592) + 8 * v4 + 8);
  }
  v7 = *(_QWORD *)(a1 + 1648);
  if ( !v7 )
    return -1;
  v8 = *(_QWORD *)(a1 + 1664);
  v9 = 0;
  v10 = 1;
  while ( strcmp(*(const char **)(v8 + 8 * v9), s2) )
  {
    v9 = v10;
    if ( v7 <= v10++ )
      return -1;
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 1640) + 8 * v9);
}
