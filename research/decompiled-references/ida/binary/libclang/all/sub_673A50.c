__int64 __fastcall sub_673A50(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  _QWORD v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v10[0] = a2;
  v6 = sub_B03EA0(v10);
  if ( v6 )
    return sub_6739D0(a1, *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL, a3, a4, a5, a6);
  v8 = sub_B03E80(v10);
  result = 1;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 > 7 )
      return sub_6739D0(a1, v9 & 0xFFFFFFFFFFFFFFF8LL, a3, a4, a5, a6);
  }
  return result;
}

