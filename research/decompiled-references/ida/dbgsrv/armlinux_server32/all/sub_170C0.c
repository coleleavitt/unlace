/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_170C0
// Address: 0x000170C0

//----- (000170C0) --------------------------------------------------------
int __fastcall sub_170C0(int a1, __int64 a2, char *s)
{
  int v5; // r4
  size_t v6; // r0
  size_t v7; // r5
  unsigned int v8; // r6
  void *v9; // r0

  if ( a2 != 14 )
    return 0;
  v5 = *(_DWORD *)(a1 + 8);
  if ( s && (v6 = strlen(s), (v7 = v6) != 0) )
  {
    v8 = v6 + 1;
    v9 = *(void **)v5;
    if ( v8 > *(_DWORD *)(v5 + 8) )
    {
      v9 = sub_78018(v5, *(void **)v5, v8, 1u);
      *(_DWORD *)v5 = v9;
    }
    *(_DWORD *)(v5 + 4) = v8;
    memmove(v9, s, v7);
    *(_BYTE *)(*(_DWORD *)v5 + v7) = 0;
    return 1;
  }
  else
  {
    *(_DWORD *)(v5 + 4) = 0;
    return 1;
  }
}
