/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52578
// Address: 0x0000000000052578

//----- (0000000000052578) ----------------------------------------------------
_QWORD *__usercall sub_52578@<X0>(__int64 a1@<X0>, _QWORD *a2@<X8>)
{
  char *v4; // x0
  _QWORD *result; // x0

  v4 = sub_51C78(a1);
  result = sub_39140(a2, v4);
  if ( a2[1] <= 1u )
    return (_QWORD *)sub_3C748((__int64)a2, "Unknown CPU [%u]", *(unsigned __int16 *)(a1 + 522));
  return result;
}
