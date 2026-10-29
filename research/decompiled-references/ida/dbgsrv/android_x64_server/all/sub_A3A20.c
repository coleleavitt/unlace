/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3A20
// Address: 0x00000000000A3A20

//----- (00000000000A3A20) ----------------------------------------------------
bool __fastcall sub_A3A20(__int64 a1, __int64 a2)
{
  const char *v4; // rsi
  const char *v5; // rdi
  const char *v6; // rsi
  const char *v7; // rdi

  if ( *(_QWORD *)a1 != *(_QWORD *)a2 || *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) )
    return 0;
  v4 = s1;
  v5 = s1;
  if ( *(_QWORD *)(a1 + 24) )
    v5 = *(const char **)(a1 + 16);
  if ( *(_QWORD *)(a2 + 24) )
    v4 = *(const char **)(a2 + 16);
  if ( strcmp(v5, v4) )
    return 0;
  v6 = s1;
  v7 = s1;
  if ( *(_QWORD *)(a1 + 48) )
    v7 = *(const char **)(a1 + 40);
  if ( *(_QWORD *)(a2 + 48) )
    v6 = *(const char **)(a2 + 40);
  return !strcmp(v7, v6)
      && *(_QWORD *)(a1 + 64) == *(_QWORD *)(a2 + 64)
      && *(_BYTE *)(a1 + 72) == *(_BYTE *)(a2 + 72)
      && *(_BYTE *)(a1 + 73) == *(_BYTE *)(a2 + 73);
}
