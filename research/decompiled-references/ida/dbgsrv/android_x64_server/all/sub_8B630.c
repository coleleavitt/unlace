/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B630
// Address: 0x000000000008B630

//----- (000000000008B630) ----------------------------------------------------
__int64 __fastcall sub_8B630(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 152) = a2;
  return result;
}
