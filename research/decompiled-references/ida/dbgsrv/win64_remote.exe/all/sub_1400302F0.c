/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400302F0
// Address: 0x00000001400302F0

//----- (00000001400302F0) ----------------------------------------------------
__int64 __fastcall sub_1400302F0(__int64 a1)
{
  __int64 v3; // rax
  const char *v4; // rdi
  __int64 v5; // rsi
  const char *v6; // rdx
  const char *v7; // rcx

  if ( *(_DWORD *)(a1 + 208) != 1 )
    return sub_1400640B0(0x2Fu);
  v3 = *(_QWORD *)(a1 + 176);
  if ( !*(_DWORD *)(v3 + 16) )
    return sub_1400640B0(0x632u);
  v4 = Str1;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 64LL) + 8LL * *(int *)(v3 + 16));
  v6 = Str1;
  if ( *(_QWORD *)(a1 + 40) )
    v6 = *(const char **)(a1 + 32);
  v7 = Str1;
  if ( *(_QWORD *)(v5 + 32) )
    v7 = *(const char **)(v5 + 24);
  if ( strcmp(v7, v6) )
    return sub_1400640B0(0x632u);
  if ( *(_QWORD *)(v5 + 32) )
    v4 = *(const char **)(v5 + 24);
  return sub_140032C30(a1, v4);
}
