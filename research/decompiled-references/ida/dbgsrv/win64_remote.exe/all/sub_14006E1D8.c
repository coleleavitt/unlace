/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006E1D8
// Address: 0x000000014006E1D8

//----- (000000014006E1D8) ----------------------------------------------------
__int64 __fastcall sub_14006E1D8(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0;
  sub_14006C6AC(a2 + 8, a1 + 8);
  *(_QWORD *)a1 = &std::bad_exception::`vftable';
  return a1;
}
// 1400AE648: using guessed type void *std::exception::`vftable';
// 1400AE7C8: using guessed type void *std::bad_exception::`vftable';
