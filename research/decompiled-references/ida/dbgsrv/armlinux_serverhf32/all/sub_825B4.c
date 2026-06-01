/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_825B4
// Address: 0x000825B4

//----- (000825B4) --------------------------------------------------------
_DWORD *__fastcall sub_825B4(_DWORD *a1, size_t a2, unsigned int a3)
{
  size_t v3; // r3

  v3 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v3 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", a2, v3);
  if ( a3 >= v3 - a2 )
    a3 = v3 - a2;
  sub_822F4(a1, a2, a3, 0);
  return a1;
}
