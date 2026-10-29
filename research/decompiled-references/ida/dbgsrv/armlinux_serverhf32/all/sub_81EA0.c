/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81EA0
// Address: 0x00081EA0

//----- (00081EA0) --------------------------------------------------------
int __fastcall sub_81EA0(int *a1, unsigned int a2, size_t n, _DWORD *a4, unsigned int a5, unsigned int a6)
{
  int v6; // r6
  unsigned int v7; // r4
  unsigned int v8; // r5
  size_t v9; // r4
  unsigned int v10; // r5
  size_t v11; // r2
  int result; // r0

  v6 = *a1;
  v7 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v7 )
    sub_83B6C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::compare",
      a2,
      *(_DWORD *)(v6 - 12));
  v8 = *(_DWORD *)(*a4 - 12);
  if ( a5 > v8 )
    sub_83B6C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::compare",
      a5,
      *(_DWORD *)(*a4 - 12));
  v9 = v7 - a2;
  v10 = v8 - a5;
  if ( v9 >= n )
    v9 = n;
  if ( v10 >= a6 )
    v10 = a6;
  v11 = v10;
  if ( v10 >= v9 )
    v11 = v9;
  if ( !v11 )
    return v9 - v10;
  result = memcmp((const void *)(a2 + v6), (const void *)(a5 + *a4), v11);
  if ( !result )
    return v9 - v10;
  return result;
}
