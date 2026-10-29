/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_375B8
// Address: 0x000375B8

//----- (000375B8) --------------------------------------------------------
int __fastcall sub_375B8(int a1, int a2)
{
  const char *v2; // r5
  size_t v4; // r0
  size_t v5; // r6
  size_t v6; // r7
  void *v7; // r0

  if ( !*(_DWORD *)(a1 + 12) )
  {
    v2 = (const char *)&dword_8DB98;
    if ( &dword_8DB98 )
      goto LABEL_3;
LABEL_7:
    *(_DWORD *)(a2 + 8) = v2;
    *(_DWORD *)(a2 + 12) = v2;
    *(_DWORD *)(a2 + 16) = v2;
    *(_BYTE *)a2 = 7;
    return 0;
  }
  v2 = *(const char **)(a1 + 8);
  if ( !v2 )
    goto LABEL_7;
LABEL_3:
  v4 = strlen(v2);
  v5 = v4;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v4 )
  {
    v6 = v4 + 1;
    v7 = sub_78018(a2 + 8, nullptr, v4 + 1, 1u);
    *(_DWORD *)(a2 + 8) = v7;
    *(_DWORD *)(a2 + 12) = v6;
    memmove(v7, v2, v5);
    *(_BYTE *)(*(_DWORD *)(a2 + 8) + v5) = 0;
  }
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
