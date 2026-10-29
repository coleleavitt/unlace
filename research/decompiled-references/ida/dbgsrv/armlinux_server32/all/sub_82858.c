/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82858
// Address: 0x00082858

//----- (00082858) --------------------------------------------------------
_DWORD *__fastcall sub_82858(_DWORD *a1, size_t a2, unsigned int a3, unsigned __int8 a4)
{
  if ( a2 > *(_DWORD *)(*a1 - 12) )
    sub_83E54(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::insert",
      a2,
      *(_DWORD *)(*a1 - 12));
  return sub_827D0(a1, a2, 0, a3, a4);
}
