/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004F520
// Address: 0x000000014004F520

//----- (000000014004F520) ----------------------------------------------------
__int64 __fastcall sub_14004F520(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 248);
  *(_BYTE *)(result + 692) = 1;
  return result;
}
