/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28C34
// Address: 0x00028C34

//----- (00028C34) --------------------------------------------------------
int __fastcall sub_28C34(int a1, char *s)
{
  size_t v4; // r2
  int v5; // r0
  int v6; // r6
  size_t v7; // r3
  unsigned int v8; // r7
  _BYTE *v9; // r0
  size_t v11; // [sp+4h] [bp-8h]
  size_t v12; // [sp+8h] [bp-4h]

  if ( s )
  {
    v4 = strlen(s);
    v5 = *(_DWORD *)(a1 + 4);
    v6 = v5 - 1;
    if ( !v5 )
      v6 = 0;
    v7 = v6 + v4;
    v8 = v6 + v4 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v8 )
    {
      v9 = *(_BYTE **)a1;
    }
    else
    {
      v11 = v6 + v4;
      v12 = v4;
      v9 = qvector_reserve(a1, *(void **)a1, v6 + v4 + 1, 1u);
      v7 = v11;
      v4 = v12;
      *(_DWORD *)a1 = v9;
    }
    *(_DWORD *)(a1 + 4) = v8;
    v9[v7] = 0;
    memmove((void *)(*(_DWORD *)a1 + v6), s, v4);
  }
  return a1;
}
