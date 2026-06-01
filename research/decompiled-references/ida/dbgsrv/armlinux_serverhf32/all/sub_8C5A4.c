/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C5A4
// Address: 0x0008C5A4

//----- (0008C5A4) --------------------------------------------------------
_DWORD *__fastcall sub_8C5A4(_DWORD *a1, size_t a2, size_t n, unsigned __int8 c)
{
  if ( a2 > a1[1] )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, a1[1]);
  return sub_8C478(a1, a2, 0, n, c);
}
