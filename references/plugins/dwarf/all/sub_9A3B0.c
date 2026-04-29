__int64 __fastcall sub_9A3B0(__int64 a1, __m128i *a2, __m128i *a3)
{
  __int64 v3; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // [rsp+Ch] [rbp-5Ch] BYREF
  _UNKNOWN **v9; // [rsp+10h] [rbp-58h] BYREF
  __m128i si128; // [rsp+18h] [rbp-50h]
  __m128i v11; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v3 = a3->m128i_i64[0];
  v12 = __readfsqword(0x28u);
  v8 = 0;
  v9 = nullptr;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _UNKNOWN ***))(a3[16].m128i_i64[0] + 112))(
          *(_QWORD *)(v3 + 24),
          85,
          &v8,
          &v9)
    && v8 )
  {
    a2[2].m128i_i32[0] = 1;
    if ( (a3[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && a3[14].m128i_i64[0] != -1 )
    {
      *a2 = _mm_loadu_si128(a3 + 14);
      v9 = &off_C94D8;
      si128 = _mm_load_si128((const __m128i *)&xmmword_AB150);
      v11 = (__m128i)-1LL;
      sub_96BC0(a3->m128i_i64, 0x55u, (__int64)&v9);
      a2[1] = _mm_loadu_si128(&v11);
      return 1;
    }
    goto LABEL_15;
  }
  v6 = a3->m128i_i64[0];
  v9 = nullptr;
  v8 = 0;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _UNKNOWN ***))(a3[16].m128i_i64[0] + 112))(
          *(_QWORD *)(v6 + 24),
          17,
          &v8,
          &v9) )
  {
    if ( v8 )
    {
      v7 = a3->m128i_i64[0];
      v9 = nullptr;
      v8 = 0;
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _UNKNOWN ***))(a3[16].m128i_i64[0] + 112))(
              *(_QWORD *)(v7 + 24),
              18,
              &v8,
              &v9) )
      {
        if ( v8 )
        {
          a2[2].m128i_i32[0] = 2;
          if ( (a3[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && a3[14].m128i_i64[0] != -1 )
          {
            *a2 = _mm_loadu_si128(a3 + 14);
            a2[1].m128i_i64[0] = sub_9A0A0((__int64)a3);
            a2[1].m128i_i64[1] = sub_9A220(a3->m128i_i64);
            return 1;
          }
LABEL_15:
          if ( !under_debugger )
            interr(30478);
          BUG();
        }
      }
    }
  }
  return 0;
}
