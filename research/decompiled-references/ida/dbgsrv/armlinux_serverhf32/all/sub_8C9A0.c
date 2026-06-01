/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C9A0
// Address: 0x0008C9A0

//----- (0008C9A0) --------------------------------------------------------
unsigned int *__fastcall sub_8C9A0(unsigned int *a1, size_t a2, unsigned int a3, char *s)
{
  size_t v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r2

  v8 = strlen(s);
  v9 = a1[1];
  if ( a2 > v9 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  v10 = v9 - a2;
  if ( v10 >= a3 )
    v10 = a3;
  return sub_8C660(a1, a2, v10, s, v8);
}
