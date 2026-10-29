/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CCC8
// Address: 0x0008CCC8

//----- (0008CCC8) --------------------------------------------------------
unsigned int *__fastcall sub_8CCC8(unsigned int *a1, size_t a2, unsigned int a3, __int64 *a4, size_t a5, size_t a6)
{
  __int64 v6; // kr00_8
  unsigned int v7; // r5
  size_t v8; // r4
  unsigned int v9; // r5

  v6 = *a4;
  if ( a5 > *((_DWORD *)a4 + 1) )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a5, HIDWORD(v6));
  v7 = a1[1];
  v8 = HIDWORD(v6) - a5;
  if ( HIDWORD(v6) - a5 >= a6 )
    v8 = a6;
  if ( a2 > v7 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  v9 = v7 - a2;
  if ( a3 >= v9 )
    a3 = v9;
  return sub_8C660(a1, a2, a3, (char *)(v6 + a5), v8);
}
