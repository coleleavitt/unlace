/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0AC0
// Address: 0x00000000004A0AC0

//----- (00000000004A0AC0) ----------------------------------------------------
_QWORD *__usercall sub_4A0AC0@<X0>(__int64 *a1@<X0>, _QWORD *a2@<X8>)
{
  __int64 v2; // x1

  v2 = *a1;
  *a2 = v2 + *(_QWORD *)(v2 - 24);
  return a2;
}
