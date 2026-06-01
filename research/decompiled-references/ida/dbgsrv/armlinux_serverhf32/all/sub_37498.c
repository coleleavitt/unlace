/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37498
// Address: 0x00037498

//----- (00037498) --------------------------------------------------------
int __fastcall sub_37498(int a1, int a2)
{
  const char *v3; // r0
  const char *v4; // r6
  size_t v5; // r0
  size_t v6; // r5
  size_t v7; // r7
  void *v8; // r0

  if ( !*(_DWORD *)(a1 + 36) )
  {
    v3 = sub_42658(a1, (char *)&dword_8DA5C);
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
  v3 = sub_42658(a1, *(char **)(a1 + 32));
  v4 = v3;
  if ( !v3 )
    goto LABEL_7;
LABEL_3:
  v5 = strlen(v3);
  v6 = v5;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v5 )
  {
    v7 = v5 + 1;
    v8 = sub_77EB0(a2 + 8, nullptr, v5 + 1, 1u);
    *(_DWORD *)(a2 + 8) = v8;
    *(_DWORD *)(a2 + 12) = v7;
    memmove(v8, v4, v6);
    *(_BYTE *)(*(_DWORD *)(a2 + 8) + v6) = 0;
  }
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
