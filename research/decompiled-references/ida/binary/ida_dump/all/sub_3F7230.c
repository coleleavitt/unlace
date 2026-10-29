__int64 __fastcall sub_3F7230(__int64 a1, int a2, unsigned int a3, double a4, __m128 a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi

  result = sub_3F7170(a1, a4, a5, (__int64)"read", a2, nullptr, a3);
  if ( *(_WORD *)(a1 + 48) == 126 )
  {
    v7 = *(unsigned __int8 *)(a1 + 69);
    v8 = *(unsigned __int8 *)(a1 + 109);
    if ( (_BYTE)v7 != (_BYTE)v8 )
      return sub_1D6840(a1, v8, v7, a3, a3, 0);
  }
  return result;
}
