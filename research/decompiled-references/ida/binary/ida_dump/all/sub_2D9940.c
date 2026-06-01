unsigned __int64 __fastcall sub_2D9940(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 *a6)
{
  __int64 v6; // r13
  __int64 v7; // rbp
  bool v9; // al
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r15
  _QWORD *v13; // r12
  int v14; // eax
  const __m128i *v15; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // [rsp+8h] [rbp-A0h]
  const __m128i *v19; // [rsp+10h] [rbp-98h]
  __int64 v20; // [rsp+18h] [rbp-90h]
  __int64 v25; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v26[32]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v6 = a2;
  v7 = a3;
  v27 = __readfsqword(0x28u);
  if ( a2 >= (a3 - 1) / 2 )
  {
    v11 = a2;
    v15 = (const __m128i *)(a6 + 1);
  }
  else
  {
    v19 = (const __m128i *)(a6 + 1);
    v20 = (a3 - 1) / 2;
    while ( 1 )
    {
      v12 = 2 * (v6 + 1);
      v13 = (_QWORD *)(a1 + 32 * (v6 + 1));
      if ( !a6[3] )
        std::__throw_bad_function_call();
      v18 = (_QWORD *)(a1 + 16 * (v12 - 1));
      v14 = ((__int64 (__fastcall *)(const __m128i *, __int64, __int64))a6[4])(
              v19,
              *(_QWORD *)(*a6 + 24LL * *v13 + 16) + 88LL * v13[1],
              *(_QWORD *)(*a6 + 24LL * *v18 + 16) + 88LL * v18[1]);
      if ( v14 )
        v9 = v14 > 0;
      else
        v9 = *v13 == *v18 ? v18[1] < v13[1] : *v18 < *v13;
      v10 = v12 - v9;
      v11 = v10;
      *(__m128i *)(a1 + 16 * v6) = _mm_loadu_si128((const __m128i *)(a1 + 16 * v10));
      if ( v10 >= v20 )
        break;
      v6 = v10;
    }
    v15 = v19;
    v6 = a2;
    v7 = a3;
  }
  if ( (v7 & 1) == 0 && (v7 - 2) / 2 == v11 )
  {
    v17 = 16 * v11;
    v11 = 2 * v11 + 1;
    *(__m128i *)(a1 + v17) = _mm_loadu_si128((const __m128i *)(a1 + 16 * v11));
  }
  v25 = *a6;
  sub_2CDC00((__int64)v26, v15);
  sub_2D97E0(a1, v11, v6, a4, a5, (__int64)&v25);
  sub_66C50((__int64)v26);
  return v27 - __readfsqword(0x28u);
}
