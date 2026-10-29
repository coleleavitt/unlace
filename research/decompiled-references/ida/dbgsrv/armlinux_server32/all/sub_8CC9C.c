/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CC9C
// Address: 0x0008CC9C

//----- (0008CC9C) --------------------------------------------------------
unsigned int *__fastcall sub_8CC9C(unsigned int *a1, int a2, int a3, char *s)
{
  size_t v8; // r0
  unsigned int v9; // r2
  size_t v10; // r5
  size_t v11; // r1
  unsigned int v12; // r5

  v8 = strlen(s);
  v9 = a3 - a2;
  v10 = a1[1];
  v11 = a2 - *a1;
  if ( v11 > v10 )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2 - *a1, a1[1]);
  v12 = v10 - v11;
  if ( v9 >= v12 )
    v9 = v12;
  return sub_8C79C(a1, v11, v9, s, v8);
}
