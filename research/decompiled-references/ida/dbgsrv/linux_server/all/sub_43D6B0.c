/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D6B0
// Address: 0x000000000043D6B0

//----- (000000000043D6B0) ----------------------------------------------------
__int64 __fastcall sub_43D6B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax

  v4 = *(int *)(a1 + 8);
  if ( (v4 & 0x80000000) != 0LL )
    return sub_43D640(a2, ~(_DWORD)v4);
  result = *(_QWORD *)a1;
  if ( result )
  {
    if ( *(_DWORD *)result == 289621065 && v4 < *(_QWORD *)(result + 32) )
      return *(_QWORD *)(result + 24) + 32 * v4;
    else
      return 0;
  }
  return result;
}
