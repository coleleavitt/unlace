/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B030
// Address: 0x000000000009B030

//----- (000000000009B030) ----------------------------------------------------
__int64 __fastcall sub_9B030(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 440);
  *(_BYTE *)(result + 732) = 1;
  return result;
}
