/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89FF0
// Address: 0x0000000000089FF0

//----- (0000000000089FF0) ----------------------------------------------------
__int64 __fastcall sub_89FF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) ^= result;
  return result;
}
