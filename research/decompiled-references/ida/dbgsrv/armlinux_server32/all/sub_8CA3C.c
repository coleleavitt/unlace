/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CA3C
// Address: 0x0008CA3C

//----- (0008CA3C) --------------------------------------------------------
unsigned int *__fastcall sub_8CA3C(unsigned int *a1, size_t a2, char *src, size_t a4)
{
  if ( a2 > a1[1] )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  return sub_8C79C(a1, a2, 0, src, a4);
}
