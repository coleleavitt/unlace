__int64 __fastcall sub_674A70(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 result; // rax
  __int64 v7; // rax

  result = sub_674990(a1, a2, a3, a4, a5, a6);
  if ( (_BYTE)result && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 )
  {
    result = (*(_BYTE *)(a2 + 97) & 8) != 0;
    if ( (*(_BYTE *)(a2 + 97) & 8) == 0 )
    {
      v7 = sub_77BC00(a2);
      return sub_672CC0(a1, v7, a3, a4, a5, a6);
    }
  }
  return result;
}

