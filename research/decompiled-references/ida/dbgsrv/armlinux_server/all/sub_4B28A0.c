/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B28A0
// Address: 0x00000000004B28A0

//----- (00000000004B28A0) ----------------------------------------------------
__int64 *__usercall sub_4B28A0@<X0>(__int64 a1@<X0>, __int64 a2@<X1>, __int64 *a3@<X8>)
{
  *a3 = (__int64)(a3 + 2);
  sub_4B27A0(a3, *(_BYTE **)a1, *(_QWORD *)a1 + *(_QWORD *)(a1 + 8));
  sub_4B1578(a3, *(_BYTE **)a2, *(_QWORD *)(a2 + 8));
  return a3;
}
