/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_828B4
// Address: 0x000828B4

//----- (000828B4) --------------------------------------------------------
_DWORD *__fastcall sub_828B4(_DWORD *a1, size_t a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  size_t v5; // r4
  unsigned int v6; // r4

  v5 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v5 )
    sub_83E54(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a2,
      *(_DWORD *)(*a1 - 12));
  v6 = v5 - a2;
  if ( a3 >= v6 )
    a3 = v6;
  return sub_827D0(a1, a2, a3, a4, a5);
}
