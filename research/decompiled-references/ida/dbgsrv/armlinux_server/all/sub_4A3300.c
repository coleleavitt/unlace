/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3300
// Address: 0x00000000004A3300

//----- (00000000004A3300) ----------------------------------------------------
__int64 *__usercall sub_4A3300@<X0>(char *a1@<X0>, _BYTE **a2@<X1>, __int64 *a3@<X8>)
{
  size_t v6; // x21

  v6 = strlen(a1);
  *a3 = (__int64)&std::string::_Rep::_S_empty_rep_storage[3];
  sub_4A29C0(a3, v6 + *((_QWORD *)*a2 - 3));
  sub_4A2CA8(a3, a1, v6);
  sub_4A2AC8(a3, a2);
  return a3;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
