/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D434
// Address: 0x0008D434

//----- (0008D434) --------------------------------------------------------
int __fastcall sub_8D434(_DWORD *a1, unsigned int a2, size_t n, _DWORD *a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // r4
  unsigned int v7; // r5
  size_t v8; // r4
  unsigned int v9; // r5
  size_t v10; // r2
  int result; // r0

  v6 = a1[1];
  if ( a2 > v6 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, a1[1]);
  v7 = a4[1];
  if ( a5 > v7 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a5, a4[1]);
  v8 = v6 - a2;
  v9 = v7 - a5;
  if ( v8 >= n )
    v8 = n;
  if ( v9 >= a6 )
    v9 = a6;
  v10 = v9;
  if ( v9 >= v8 )
    v10 = v8;
  if ( !v10 )
    return v8 - v9;
  result = memcmp((const void *)(*a1 + a2), (const void *)(a5 + *a4), v10);
  if ( !result )
    return v8 - v9;
  return result;
}
