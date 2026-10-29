/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90640
// Address: 0x0000000000090640

//----- (0000000000090640) ----------------------------------------------------
__int64 __fastcall sub_90640(__int64 a1, int a2)
{
  const char *v2; // r12
  unsigned __int64 v3; // r15
  __int64 v4; // rbx
  int v5; // ebp
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  const char *v8; // rdi

  v2 = ".debug_types";
  if ( a2 )
    v2 = ".debug_info";
  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(a1 + 232);
  v5 = 1;
  v6 = 0;
  while ( 1 )
  {
    v7 = 9 * v6;
    v8 = s1;
    if ( *(_QWORD *)(v4 + 72 * v6 + 32) )
      v8 = *(const char **)(v4 + 72 * v6 + 24);
    if ( !strcmp(v8, v2) )
      break;
    v6 = v5++;
    if ( v3 <= v6 )
      return 0;
  }
  return v4 + 8 * v7;
}
