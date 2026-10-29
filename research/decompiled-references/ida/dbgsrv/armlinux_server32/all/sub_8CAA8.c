/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CAA8
// Address: 0x0008CAA8

//----- (0008CAA8) --------------------------------------------------------
unsigned int *__fastcall sub_8CAA8(unsigned int *a1, size_t a2, int a3)
{
  if ( a2 > a1[1] )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  return sub_8C79C(a1, a2, 0, *(char **)a3, *(_DWORD *)(a3 + 4));
}
