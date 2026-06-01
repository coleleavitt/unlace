/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444D88
// Address: 0x0000000000444D88

//----- (0000000000444D88) ----------------------------------------------------
__int64 __fastcall sub_444D88(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v6; // x3
  char v7; // w0

  v6 = (_QWORD *)(a1 + 8);
  v7 = 1;
  if ( !a2 && a3 != v6 )
    v7 = *(_QWORD *)(a4 + 32) < a3[4];
  sub_49F830(v7, a4, a3, v6);
  ++*(_QWORD *)(a1 + 40);
  return a4;
}
