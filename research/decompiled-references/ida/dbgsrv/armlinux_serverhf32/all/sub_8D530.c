/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D530
// Address: 0x0008D530

//----- (0008D530) --------------------------------------------------------
int __fastcall sub_8D530(_DWORD *a1, unsigned int a2, unsigned int a3, void *s2, size_t n)
{
  unsigned int v5; // r4
  unsigned int v6; // r4
  size_t v7; // r2
  int result; // r0

  v5 = a1[1];
  if ( a2 > v5 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, a1[1]);
  v6 = v5 - a2;
  if ( v6 >= a3 )
    v6 = a3;
  v7 = v6;
  if ( v6 >= n )
    v7 = n;
  if ( !v7 )
    return v6 - n;
  result = memcmp((const void *)(*a1 + a2), s2, v7);
  if ( !result )
    return v6 - n;
  return result;
}
