/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_826BC
// Address: 0x000826BC

//----- (000826BC) --------------------------------------------------------
_DWORD *__fastcall sub_826BC(_DWORD *a1, size_t a2, unsigned int a3, unsigned __int8 a4)
{
  if ( a2 > *(_DWORD *)(*a1 - 12) )
    sub_83B6C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::insert",
      a2,
      *(_DWORD *)(*a1 - 12));
  return sub_82634(a1, a2, 0, a3, a4);
}
