/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4860D0
// Address: 0x00000000004860D0

//----- (00000000004860D0) ----------------------------------------------------
__int64 __fastcall sub_4860D0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(result + 16) = 0;
  return result;
}
