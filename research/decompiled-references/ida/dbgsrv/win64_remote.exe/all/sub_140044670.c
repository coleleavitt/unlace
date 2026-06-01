/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044670
// Address: 0x0000000140044670

//----- (0000000140044670) ----------------------------------------------------
char __fastcall sub_140044670(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  const char *v9; // rdx
  const char *v10; // rcx
  const char *v11; // rdx
  const char *v12; // rcx

  v2 = *(_QWORD *)(a1 + 360);
  if ( v2 != a2[1] )
    return 0;
  v4 = 0;
  if ( !v2 )
    return 1;
  v5 = *(_QWORD *)(a1 + 352);
  v6 = *a2;
  v7 = v5 + 48;
  v8 = v5 - *a2;
  while ( *(_QWORD *)(v6 + v8) == *(_QWORD *)v6 && *(_QWORD *)(v7 - 40) == *(_QWORD *)(v6 + 8) )
  {
    v9 = Str1;
    if ( *(_QWORD *)(v6 + 24) )
      v9 = *(const char **)(v6 + 16);
    v10 = Str1;
    if ( *(_QWORD *)(v7 - 24) )
      v10 = *(const char **)(v7 - 32);
    if ( strcmp(v10, v9) )
      break;
    v11 = Str1;
    if ( *(_QWORD *)(v6 + 48) )
      v11 = *(const char **)(v6 + 40);
    v12 = Str1;
    if ( *(_QWORD *)v7 )
      v12 = *(const char **)(v7 - 8);
    if ( strcmp(v12, v11)
      || *(_QWORD *)(v7 + 16) != *(_QWORD *)(v6 + 64)
      || *(_BYTE *)(v7 + 24) != *(_BYTE *)(v6 + 72)
      || *(_BYTE *)(v7 + 25) != *(_BYTE *)(v6 + 73) )
    {
      break;
    }
    ++v4;
    v7 += 80;
    v6 += 80;
    if ( v4 >= v2 )
      return 1;
  }
  return 0;
}
