/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A33A8
// Address: 0x00000000004A33A8

//----- (00000000004A33A8) ----------------------------------------------------
__int64 *__usercall sub_4A33A8@<X0>(unsigned __int8 a1@<W0>, _BYTE **a2@<X1>, __int64 *a3@<X8>)
{
  *a3 = (__int64)&std::string::_Rep::_S_empty_rep_storage[3];
  sub_4A29C0(a3, *((_QWORD *)*a2 - 3) + 1LL);
  sub_4A2E50(a3, 1u, a1);
  sub_4A2AC8(a3, a2);
  return a3;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
