/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87770
// Address: 0x0000000000087770

//----- (0000000000087770) ----------------------------------------------------
__int64 __fastcall sub_87770(__int64 a1, __int64 a2, _DWORD *a3, double a4, __m128 a5)
{
  __int64 result; // rax

  result = sub_862A0(a1, a2, 0, a3, a4, a5);
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)(a1 + 64) )
      return sub_871E0(a1, a2, a4, a5);
  }
  return result;
}
