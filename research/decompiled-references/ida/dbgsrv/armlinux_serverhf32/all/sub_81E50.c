/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81E50
// Address: 0x00081E50

//----- (00081E50) --------------------------------------------------------
int __fastcall sub_81E50(int *a1, unsigned int a2, size_t n, const void **a4)
{
  int v4; // r6
  unsigned int v6; // r4
  _DWORD *v7; // r1
  size_t v8; // r4
  size_t v9; // r5
  size_t v10; // r2
  int result; // r0

  v4 = *a1;
  v6 = *(_DWORD *)(v4 - 12);
  if ( a2 > v6 )
    sub_83B6C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::compare",
      a2,
      *(_DWORD *)(v4 - 12));
  v7 = *a4;
  v8 = v6 - a2;
  if ( v8 >= n )
    v8 = n;
  v9 = *(v7 - 3);
  v10 = v9;
  if ( v9 >= v8 )
    v10 = v8;
  if ( !v10 )
    return v8 - v9;
  result = memcmp((const void *)(a2 + v4), v7, v10);
  if ( !result )
    return v8 - v9;
  return result;
}
