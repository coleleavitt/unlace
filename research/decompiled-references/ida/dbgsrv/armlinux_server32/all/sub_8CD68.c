/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CD68
// Address: 0x0008CD68

//----- (0008CD68) --------------------------------------------------------
unsigned int *__fastcall sub_8CD68(unsigned int *a1, int a2, char *a3, size_t a4)
{
  size_t v4; // r1

  v4 = a2 - *a1;
  if ( v4 > a1[1] )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", v4, a1[1]);
  return sub_8C79C(a1, v4, 0, a3, a4);
}
