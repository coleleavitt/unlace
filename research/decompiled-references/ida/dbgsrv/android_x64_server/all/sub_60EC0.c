/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60EC0
// Address: 0x0000000000060EC0

//----- (0000000000060EC0) ----------------------------------------------------
__int64 __fastcall sub_60EC0(__int64 *a1, const char *a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // r12
  int v4; // ebp
  unsigned __int64 v5; // rbx
  const char *v6; // rdi

  v2 = a1[1];
  if ( !v2 )
    return -1;
  v3 = *a1;
  v4 = 1;
  v5 = 0;
  while ( 1 )
  {
    v6 = s1;
    if ( *(_QWORD *)(v3 + 24 * v5 + 8) )
      v6 = *(const char **)(v3 + 24 * v5);
    if ( !strcmp(v6, a2) )
      break;
    v5 = v4++;
    if ( v2 <= v5 )
      return -1;
  }
  return v5;
}
