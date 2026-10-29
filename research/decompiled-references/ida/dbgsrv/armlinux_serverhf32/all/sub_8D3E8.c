/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D3E8
// Address: 0x0008D3E8

//----- (0008D3E8) --------------------------------------------------------
int __fastcall sub_8D3E8(_DWORD *a1, unsigned int a2, size_t n, int a4)
{
  unsigned int v4; // r4
  size_t v5; // r4
  size_t v6; // r6
  size_t v7; // r2
  int result; // r0

  v4 = a1[1];
  if ( a2 > v4 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, a1[1]);
  v5 = v4 - a2;
  v6 = *(_DWORD *)(a4 + 4);
  if ( v5 >= n )
    v5 = n;
  v7 = *(_DWORD *)(a4 + 4);
  if ( v6 >= v5 )
    v7 = v5;
  if ( !v7 )
    return v5 - v6;
  result = memcmp((const void *)(*a1 + a2), *(const void **)a4, v7);
  if ( !result )
    return v5 - v6;
  return result;
}
