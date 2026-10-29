/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B740
// Address: 0x0006B740

//----- (0006B740) --------------------------------------------------------
int __fastcall sub_6B740(int a1, char *haystack)
{
  int result; // r0
  unsigned int v5; // r3
  size_t v6; // r4
  unsigned int v7; // r7
  _BYTE *v8; // r0

  result = (int)strstr(haystack, ".clt");
  if ( result )
  {
    v5 = *(_DWORD *)(a1 + 8);
    v6 = result - (_DWORD)haystack;
    v7 = result - (_DWORD)haystack + 1;
    *(_DWORD *)(a1 + 4) = 0;
    v8 = *(_BYTE **)a1;
    if ( v7 > v5 )
    {
      v8 = sub_78018(a1, *(void **)a1, v7, 1u);
      *(_DWORD *)a1 = v8;
    }
    *(_DWORD *)(a1 + 4) = v7;
    v8[v6] = 0;
    memmove(*(void **)a1, haystack, v6);
    return 1;
  }
  return result;
}
