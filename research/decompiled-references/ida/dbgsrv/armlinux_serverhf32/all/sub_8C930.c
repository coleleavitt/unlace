/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C930
// Address: 0x0008C930

//----- (0008C930) --------------------------------------------------------
unsigned int *__fastcall sub_8C930(unsigned int *a1, size_t a2, unsigned int a3, int a4)
{
  size_t v4; // r4
  unsigned int v5; // r4

  v4 = a1[1];
  if ( a2 > v4 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  v5 = v4 - a2;
  if ( a3 >= v5 )
    a3 = v5;
  return sub_8C660(a1, a2, a3, *(char **)a4, *(_DWORD *)(a4 + 4));
}
