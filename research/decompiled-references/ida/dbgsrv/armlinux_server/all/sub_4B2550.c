/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2550
// Address: 0x00000000004B2550

//----- (00000000004B2550) ----------------------------------------------------
__int64 __usercall sub_4B2550@<X0>(unsigned __int8 a1@<W0>, __int64 a2@<X1>, __int64 a3@<X8>)
{
  *(_QWORD *)a3 = a3 + 16;
  *(_QWORD *)(a3 + 8) = 0;
  *(_BYTE *)(a3 + 16) = 0;
  sub_4B0328((_QWORD *)a3, *(_QWORD *)(a2 + 8) + 1LL);
  sub_4B0898((_QWORD *)a3, *(_QWORD *)(a3 + 8), 0, 1u, a1);
  sub_4B1578((__int64 *)a3, *(_BYTE **)a2, *(_QWORD *)(a2 + 8));
  return a3;
}
