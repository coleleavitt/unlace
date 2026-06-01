/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B040
// Address: 0x000000000009B040

//----- (000000000009B040) ----------------------------------------------------
__int64 __fastcall sub_9B040(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 248);
  *(_BYTE *)(result + 732) = 1;
  return result;
}
