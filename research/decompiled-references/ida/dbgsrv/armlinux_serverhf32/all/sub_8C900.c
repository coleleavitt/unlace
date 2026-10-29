/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C900
// Address: 0x0008C900

//----- (0008C900) --------------------------------------------------------
unsigned int *__fastcall sub_8C900(unsigned int *a1, size_t a2, char *src, size_t a4)
{
  if ( a2 > a1[1] )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  return sub_8C660(a1, a2, 0, src, a4);
}
