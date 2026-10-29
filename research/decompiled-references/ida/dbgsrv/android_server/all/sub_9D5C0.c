/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D5C0
// Address: 0x000000000009D5C0

//----- (000000000009D5C0) ----------------------------------------------------
bool __fastcall sub_9D5C0(__int64 a1, __int64 a2)
{
  const char *v4; // x0
  const char *v5; // x1
  const char *v6; // x0
  const char *v7; // x1

  if ( *(_QWORD *)a1 == *(_QWORD *)a2
    && *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8)
    && (!*(_QWORD *)(a1 + 24) ? (v4 = &byte_F154B) : (v4 = *(const char **)(a1 + 16)),
        *(_QWORD *)(a2 + 24) ? (v5 = *(const char **)(a2 + 16)) : (v5 = &byte_F154B),
        !strcmp(v4, v5)
     && (!*(_QWORD *)(a1 + 48) ? (v6 = &byte_F154B) : (v6 = *(const char **)(a1 + 40)),
         *(_QWORD *)(a2 + 48) ? (v7 = *(const char **)(a2 + 40)) : (v7 = &byte_F154B),
         !strcmp(v6, v7)
      && *(_QWORD *)(a1 + 64) == *(_QWORD *)(a2 + 64)
      && *(unsigned __int8 *)(a1 + 72) == *(unsigned __int8 *)(a2 + 72))) )
  {
    return *(unsigned __int8 *)(a1 + 73) == *(unsigned __int8 *)(a2 + 73);
  }
  else
  {
    return 0;
  }
}
// F154B: using guessed type char byte_F154B;
