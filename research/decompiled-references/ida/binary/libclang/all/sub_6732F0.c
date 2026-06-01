__int64 __fastcall sub_6732F0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 result; // rax
  __int64 v7; // rsi

  result = sub_673340(a1, *(_QWORD *)(a2 + 32));
  if ( (_BYTE)result && (*(_BYTE *)(a2 + 19) & 2) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    if ( v7 )
      return sub_672CC0(a1, v7, a3, a4, a5, a6);
  }
  return result;
}

