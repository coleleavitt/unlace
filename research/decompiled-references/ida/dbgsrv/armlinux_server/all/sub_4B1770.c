/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1770
// Address: 0x00000000004B1770

//----- (00000000004B1770) ----------------------------------------------------
__int64 *__fastcall sub_4B1770(__int64 *a1, _BYTE *a2, size_t a3)
{
  if ( a3 > 0x7FFFFFFFFFFFFFFFLL - a1[1] )
    sub_4A04D0("basic_string::append");
  return sub_4B1578(a1, a2, a3);
}
