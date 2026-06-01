/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16A3C
// Address: 0x00016A3C

//----- (00016A3C) --------------------------------------------------------
int __fastcall sub_16A3C(int a1, char *s)
{
  size_t v4; // r0
  size_t v5; // r6
  unsigned int v7; // r7
  void *v8; // r0

  if ( s && (v4 = strlen(s), (v5 = v4) != 0) )
  {
    v7 = v4 + 1;
    v8 = *(void **)(a1 + 8);
    if ( v7 > *(_DWORD *)(a1 + 16) )
    {
      v8 = sub_77EB0(a1 + 8, *(void **)(a1 + 8), v7, 1u);
      *(_DWORD *)(a1 + 8) = v8;
    }
    *(_DWORD *)(a1 + 12) = v7;
    memmove(v8, s, v5);
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + v5) = 0;
    return 2;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = 0;
    return 2;
  }
}
