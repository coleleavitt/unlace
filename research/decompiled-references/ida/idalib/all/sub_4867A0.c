unsigned __int64 __fastcall sub_4867A0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 (*v6)(void); // rax
  unsigned __int64 *v7; // rax
  __int64 v9; // rsi
  _QWORD v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v4 = *a1;
  v12 = __readfsqword(0x28u);
  v6 = *(__int64 (**)(void))(v4 + 32);
  if ( (char *)v6 == (char *)sub_3DB7B0 )
    v7 = (unsigned __int64 *)(a1 + 2);
  else
    v7 = (unsigned __int64 *)v6();
  if ( a3 >= *v7
    && a3 < v7[1]
    && a3 == (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD))(*a1 + 40))(a1, a3, 0) )
  {
    v9 = *(_QWORD *)a1[5];
    v10[0] = a2;
    v10[1] = a1;
    v11 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2C408), (__m128i)(unsigned __int64)sub_490CA0);
    sub_486110((__int64)a1, (unsigned __int64 *)(16 * a3 + v9), (__int64)v10);
    if ( v11.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v11.m128i_i64[0])(v10, v10, 3);
  }
  return v12 - __readfsqword(0x28u);
}
