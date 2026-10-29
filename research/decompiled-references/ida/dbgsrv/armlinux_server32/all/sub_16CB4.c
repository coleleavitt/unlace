/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16CB4
// Address: 0x00016CB4

//----- (00016CB4) --------------------------------------------------------
int __fastcall sub_16CB4(int a1, char *s, int a3)
{
  int v6; // r6
  size_t v7; // r0
  size_t v8; // r8
  unsigned int v10; // r10
  void *v11; // r0

  v6 = *(_DWORD *)(a1 + 12);
  if ( s && (v7 = strlen(s), (v8 = v7) != 0) )
  {
    v10 = v7 + 1;
    v11 = *(void **)(v6 + 68);
    if ( v10 > *(_DWORD *)(v6 + 76) )
    {
      v11 = sub_78018(v6 + 68, *(void **)(v6 + 68), v10, 1u);
      *(_DWORD *)(v6 + 68) = v11;
    }
    *(_DWORD *)(v6 + 72) = v10;
    memmove(v11, s, v8);
    *(_BYTE *)(*(_DWORD *)(v6 + 68) + v8) = 0;
  }
  else
  {
    *(_DWORD *)(v6 + 72) = 0;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 80) = a3;
  sub_53ED4(*(_DWORD *)(a1 + 8), "debuglink '%s' of '%s'\n", s, *(const char **)(a1 + 12));
  return 0;
}
