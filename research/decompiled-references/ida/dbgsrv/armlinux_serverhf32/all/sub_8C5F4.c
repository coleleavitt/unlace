/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C5F4
// Address: 0x0008C5F4

//----- (0008C5F4) --------------------------------------------------------
_DWORD *__fastcall sub_8C5F4(_DWORD *a1, size_t a2, unsigned int a3, size_t a4, unsigned __int8 c)
{
  unsigned int v5; // r4
  unsigned int v6; // r4

  v5 = a1[1];
  if ( a2 > v5 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  v6 = v5 - a2;
  if ( a3 >= v6 )
    a3 = v6;
  return sub_8C478(a1, a2, a3, a4, c);
}
