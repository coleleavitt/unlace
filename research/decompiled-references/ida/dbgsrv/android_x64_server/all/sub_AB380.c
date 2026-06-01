/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB380
// Address: 0x00000000000AB380

//----- (00000000000AB380) ----------------------------------------------------
__int64 __fastcall sub_AB380(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 88) = a2;
  result = *(unsigned int *)__errno(a1);
  *(_DWORD *)(a1 + 96) = result;
  return result;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
