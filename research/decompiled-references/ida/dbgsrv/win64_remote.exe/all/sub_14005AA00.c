/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005AA00
// Address: 0x000000014005AA00

//----- (000000014005AA00) ----------------------------------------------------
_QWORD *__fastcall sub_14005AA00(_QWORD *a1)
{
  a1[2] = 0;
  a1[1] = "bad allocation";
  *a1 = &std::bad_alloc::`vftable';
  return a1;
}
// 1400AE660: using guessed type void *std::bad_alloc::`vftable';
