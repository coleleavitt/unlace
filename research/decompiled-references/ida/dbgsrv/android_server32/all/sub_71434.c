/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71434
// Address: 0x00071434

//----- (00071434) --------------------------------------------------------
int __fastcall sub_71434(int a1, const char *a2)
{
  char *v4; // r0
  int v5; // r1
  size_t v6; // r6
  unsigned int v7; // r7
  _BYTE *v8; // r0

  v4 = strstr(a2, ".clt");
  v5 = 0;
  if ( v4 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    v6 = v4 - a2;
    v7 = v4 - a2 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v7 )
    {
      v8 = *(_BYTE **)a1;
    }
    else
    {
      v8 = qvector_reserve(a1, *(void **)a1, v7, 1u);
      *(_DWORD *)a1 = v8;
    }
    *(_DWORD *)(a1 + 4) = v7;
    v8[v6] = 0;
    memmove(*(void **)a1, a2, v6);
    return 1;
  }
  return v5;
}
