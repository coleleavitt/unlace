/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C9EC
// Address: 0x0008C9EC

//----- (0008C9EC) --------------------------------------------------------
unsigned int *__fastcall sub_8C9EC(unsigned int *a1, size_t a2, char *s)
{
  size_t v6; // r0
  unsigned int v7; // r3

  v6 = strlen(s);
  v7 = a1[1];
  if ( a2 > v7 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v7);
  return sub_8C660(a1, a2, 0, s, v6);
}
