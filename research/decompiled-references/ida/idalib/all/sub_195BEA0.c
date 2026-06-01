__int64 __fastcall sub_195BEA0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi

  v4 = *(_QWORD *)(a2 + 16);
  v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v4 & 4) != 0 )
    v5 = *(_QWORD *)(v5 + 40);
  return sub_1944E10(a1, (unsigned __int16 *)v5, a3, a4);
}
