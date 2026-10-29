/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B690
// Address: 0x000000000008B690

//----- (000000000008B690) ----------------------------------------------------
__int64 __fastcall sub_8B690(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = a2;
  return result;
}
