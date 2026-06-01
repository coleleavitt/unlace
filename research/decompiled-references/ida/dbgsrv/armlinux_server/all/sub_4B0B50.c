/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0B50
// Address: 0x00000000004B0B50

//----- (00000000004B0B50) ----------------------------------------------------
size_t __fastcall sub_4B0B50(_QWORD *a1, __int64 a2, size_t n, unsigned __int8 a4)
{
  size_t v5; // x19

  v5 = a2 - *a1;
  sub_4B0898(a1, v5, 0, n, a4);
  return *a1 + v5;
}
