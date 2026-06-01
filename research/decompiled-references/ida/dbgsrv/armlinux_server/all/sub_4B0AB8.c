/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0AB8
// Address: 0x00000000004B0AB8

//----- (00000000004B0AB8) ----------------------------------------------------
size_t __fastcall sub_4B0AB8(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  size_t v4; // x19

  v4 = a2 - *a1;
  sub_4B0898(a1, v4, 0, 1u, a3);
  return *a1 + v4;
}
