/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003DA70
// Address: 0x000000014003DA70

//----- (000000014003DA70) ----------------------------------------------------
__int64 __fastcall sub_14003DA70(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = a2;
  return result;
}
