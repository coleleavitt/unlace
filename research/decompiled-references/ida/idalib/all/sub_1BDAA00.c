void __fastcall sub_1BDAA00(__m128 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, char a5)
{
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  double v7[2]; // [rsp+0h] [rbp-10h] BYREF

  *(_QWORD *)&v7[0] = a3;
  *a1 = _mm_loadh_ps(v7);
  if ( !a5 && a2 != a3 && (unsigned __int64)(*a2 - 1LL) > 0xFFFFFFFFFFFFFFFDLL )
  {
    v5 = a2 + 1;
    do
    {
      v6 = v5;
      a1->m128_u64[0] = (unsigned __int64)v5;
      if ( a3 == v5 )
        break;
      ++v5;
    }
    while ( (unsigned __int64)(*v6 - 1LL) > 0xFFFFFFFFFFFFFFFDLL );
  }
}
