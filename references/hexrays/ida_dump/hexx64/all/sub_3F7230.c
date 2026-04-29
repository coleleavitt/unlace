__int64 __fastcall sub_3F7230(__int64 a1, int a2, unsigned int a3, unsigned __int8 a4, double a5, __m128 a6)
{
  __int64 result; // rax
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // si

  result = sub_3F7170(a1, (__int64)"read", a2, nullptr, a3, a4, a5, a6);
  if ( *(_WORD *)(a1 + 48) == 126 )
  {
    v8 = *(_BYTE *)(a1 + 69);
    v9 = *(_BYTE *)(a1 + 109);
    if ( v8 != v9 )
      return sub_1D6840(a1, v9, v8, a3, a3, 0);
  }
  return result;
}
