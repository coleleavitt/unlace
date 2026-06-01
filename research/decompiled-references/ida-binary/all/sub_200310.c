__int64 __fastcall sub_200310(
        const __m128i *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rax
  char v16; // bp
  __int64 v17; // rdi
  __m128i v18; // xmm0
  __m128 v19; // xmm0
  __int64 v21; // rdi
  __int32 v22; // eax
  struct _Unwind_Exception *v23; // rbx
  __m128i v24; // [rsp+0h] [rbp-88h] BYREF
  __m128i v25; // [rsp+10h] [rbp-78h] BYREF
  __int64 v26; // [rsp+20h] [rbp-68h]
  __m128i v27; // [rsp+30h] [rbp-58h] BYREF
  __m128 v28; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+50h] [rbp-38h]
  __int64 v30; // [rsp+58h] [rbp-30h]
  unsigned __int64 v31; // [rsp+68h] [rbp-20h]

  v31 = __readfsqword(0x28u);
  if ( !a1[26].m128i_i64[1] )
    sub_1E69C0(a7, (__int64)a1, (__int64)a2, a3, a4);
  v14 = a1[26].m128i_i64[0];
  v16 = a3;
  v24 = _mm_loadu_si128(a1 + 24);
  v26 = v14;
  v25 = _mm_loadu_si128(a1 + 25);
  if ( (_DWORD)a2 == 1 )
  {
    v25.m128i_i32[3] = 0;
    v17 = a1[57].m128i_i64[1];
  }
  else
  {
    v21 = 0;
    if ( a1[60].m128i_i8[8] )
    {
      v22 = a1[26].m128i_i32[0];
      switch ( v22 )
      {
        case 2:
          v21 = a1[56].m128i_i64[0];
          break;
        case 3:
          v21 = a1[56].m128i_i64[1];
          break;
        case 1:
          v21 = a1[55].m128i_i64[1];
          break;
      }
    }
    a2 = &v25.m128i_i8[8];
    (*(void (__fastcall **)(__int64, unsigned __int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v21 + 216LL))(
      v21,
      &v25.m128i_u64[1],
      a3,
      a4,
      a5,
      a6,
      v24.m128i_i64[0],
      v24.m128i_i64[1],
      v25.m128i_i64[0]);
    v17 = a1[58].m128i_i64[0];
  }
  v18 = _mm_load_si128(&v24);
  v30 = v17;
  v27 = v18;
  v19 = (__m128)_mm_load_si128(&v25);
  v29 = v26;
  v28 = v19;
  if ( v17 )
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v16 )
  {
    sub_1FFBB0((__int64)a1[24].m128i_i64, &v27, 0, v19, a8, a9, a10, a11, a12, a13, a14);
  }
  else
  {
    if ( !a1[26].m128i_i64[1] )
    {
      v23 = (struct _Unwind_Exception *)sub_1E69C0(*(double *)v19.m128_u64, v17, (__int64)a2, a3, a4);
      if ( v30 )
        qfree(v30, a2);
      _Unwind_Resume(v23);
    }
    v28.m128_i16[6] = a1[25].m128i_i16[6];
    sub_1FF700((__int64)a1[24].m128i_i64, &v27, v19, a8, a9, a10, a11, a12, a13, a14);
  }
  if ( v30 )
    qfree(v30, v27.m128i_i8);
  return 1;
}
