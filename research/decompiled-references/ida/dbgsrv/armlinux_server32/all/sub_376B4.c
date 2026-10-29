/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_376B4
// Address: 0x000376B4

//----- (000376B4) --------------------------------------------------------
int __fastcall sub_376B4(int a1, int a2)
{
  int *v3; // r0
  int *v4; // r6
  size_t v5; // r0
  size_t v6; // r5
  size_t v7; // r7
  void *v8; // r0

  if ( !*(_DWORD *)(a1 + 36) )
  {
    v3 = sub_4272C(a1, (char *)&dword_8DB98);
    v4 = v3;
    if ( v3 )
      goto LABEL_3;
LABEL_7:
    *(_DWORD *)(a2 + 8) = v3;
    *(_DWORD *)(a2 + 12) = v3;
    *(_DWORD *)(a2 + 16) = v3;
    *(_BYTE *)a2 = 7;
    return 0;
  }
  v3 = sub_4272C(a1, *(char **)(a1 + 32));
  v4 = v3;
  if ( !v3 )
    goto LABEL_7;
LABEL_3:
  v5 = strlen((const char *)v3);
  v6 = v5;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v5 )
  {
    v7 = v5 + 1;
    v8 = sub_78018(a2 + 8, nullptr, v5 + 1, 1u);
    *(_DWORD *)(a2 + 8) = v8;
    *(_DWORD *)(a2 + 12) = v7;
    memmove(v8, v4, v6);
    *(_BYTE *)(*(_DWORD *)(a2 + 8) + v6) = 0;
  }
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
