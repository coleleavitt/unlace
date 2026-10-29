/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003DCD0
// Address: 0x000000014003DCD0

//----- (000000014003DCD0) ----------------------------------------------------
__int64 __fastcall sub_14003DCD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 176) = a2;
  return result;
}
