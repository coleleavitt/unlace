/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B340
// Address: 0x000000000045B340

//----- (000000000045B340) ----------------------------------------------------
__int64 __fastcall sub_45B340(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 440);
  *(_BYTE *)(result + 860) = 1;
  return result;
}
