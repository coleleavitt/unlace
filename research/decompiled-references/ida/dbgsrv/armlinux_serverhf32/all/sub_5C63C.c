/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C63C
// Address: 0x0005C63C

//----- (0005C63C) --------------------------------------------------------
void *__fastcall sub_5C63C(int a1, void *src, size_t n)
{
  size_t v4; // r6
  void *v7; // r3
  void *result; // r0

  v4 = n + 1;
  v7 = *(void **)a1;
  if ( n + 1 > *(_DWORD *)(a1 + 8) )
  {
    v7 = sub_77EB0(a1, *(void **)a1, n + 1, 1u);
    *(_DWORD *)a1 = v7;
  }
  *(_DWORD *)(a1 + 4) = v4;
  result = memmove(v7, src, n);
  *(_BYTE *)(*(_DWORD *)a1 + n) = 0;
  return result;
}
