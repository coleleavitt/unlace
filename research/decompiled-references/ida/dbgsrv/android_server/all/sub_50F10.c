/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50F10
// Address: 0x0000000000050F10

//----- (0000000000050F10) ----------------------------------------------------
_QWORD *__usercall sub_50F10@<X0>(__int64 a1@<X0>, int a2@<W1>, _QWORD *a3@<X8>)
{
  char *v5; // x0
  _QWORD *result; // x0

  v5 = sub_55E38(a1, a2);
  result = sub_39140(a3, v5);
  if ( a3[1] <= 1u )
    return (_QWORD *)sub_3C748((__int64)a3, "%X", a2);
  return result;
}
