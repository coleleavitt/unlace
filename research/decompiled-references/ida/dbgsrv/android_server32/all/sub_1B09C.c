/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B09C
// Address: 0x0001B09C

//----- (0001B09C) --------------------------------------------------------
int __fastcall sub_1B09C(int a1, char *s)
{
  size_t v4; // r6
  unsigned int v5; // r2
  void *v6; // r0

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( s )
  {
    v4 = strlen(s);
    v5 = v4 + 1;
    if ( v4 == -1 )
    {
      v6 = *(void **)a1;
    }
    else
    {
      v6 = qvector_reserve(a1, *(void **)a1, v5, 1u);
      *(_DWORD *)a1 = v6;
      v5 = v4 + 1;
    }
    *(_DWORD *)(a1 + 4) = v5;
    memmove(v6, s, v4);
    *(_BYTE *)(*(_DWORD *)a1 + v4) = 0;
  }
  return a1;
}
