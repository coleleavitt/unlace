/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1648
// Address: 0x00000000004B1648

//----- (00000000004B1648) ----------------------------------------------------
__int64 *__fastcall sub_4B1648(__int64 *a1, __int64 *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // x4
  __int64 v5; // x1
  size_t v7; // x2
  _BYTE *v8; // x1

  v4 = a2[1];
  v5 = *a2;
  if ( a3 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::append", a3, v4);
  v7 = v4 - a3;
  v8 = (_BYTE *)(v5 + a3);
  if ( v7 > a4 )
    v7 = a4;
  return sub_4B1578(a1, v8, v7);
}
