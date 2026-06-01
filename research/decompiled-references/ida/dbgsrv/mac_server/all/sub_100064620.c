/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100064620
// Address: 0x0000000100064620

//----- (0000000100064620) ----------------------------------------------------
bool __fastcall sub_100064620(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  const char *v3; // rcx
  const char *v6; // rsi
  const char *v7; // rdi

  if ( *(_QWORD *)a1 != *(_QWORD *)a2 || *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) )
    return 0;
  v2 = _s1;
  v3 = _s1;
  if ( *(_QWORD *)(a1 + 24) )
    v3 = *(const char **)(a1 + 16);
  if ( *(_QWORD *)(a2 + 24) )
    v2 = *(const char **)(a2 + 16);
  if ( strcmp(v3, v2) )
    return 0;
  v6 = _s1;
  v7 = _s1;
  if ( *(_QWORD *)(a1 + 48) )
    v7 = *(const char **)(a1 + 40);
  if ( *(_QWORD *)(a2 + 48) )
    v6 = *(const char **)(a2 + 40);
  return !strcmp(v7, v6)
      && *(_QWORD *)(a1 + 64) == *(_QWORD *)(a2 + 64)
      && *(_BYTE *)(a1 + 72) == *(_BYTE *)(a2 + 72)
      && *(_BYTE *)(a1 + 73) == *(_BYTE *)(a2 + 73);
}
