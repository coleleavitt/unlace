/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008CBF0
// Address: 0x000000014008CBF0

//----- (000000014008CBF0) ----------------------------------------------------
__int64 __fastcall sub_14008CBF0(__int64 a1)
{
  __int64 result; // rax

  result = ValidateImageBase(0x140000000uLL);
  if ( (_DWORD)result )
  {
    result = FindPESection(0x140000000uLL, a1 - 0x140000000LL);
    if ( result )
      return *(_DWORD *)(result + 36) >= 0;
  }
  return result;
}
// 14008CBA0: using guessed type __int64 __fastcall FindPESection(_QWORD, _QWORD);
// 14008CC40: using guessed type __int64 __fastcall ValidateImageBase(_QWORD);
