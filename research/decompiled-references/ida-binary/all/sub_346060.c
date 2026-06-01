unsigned __int64 __fastcall sub_346060(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        unsigned __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const __m128i *v12; // rbx
  char v13; // bp
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 m128i_i64; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i v25; // [rsp+0h] [rbp-98h] BYREF
  __int64 v26; // [rsp+10h] [rbp-88h]
  __int64 v27; // [rsp+18h] [rbp-80h]
  __int64 v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+28h] [rbp-70h]
  char v30[56]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v12 = (const __m128i *)qword_8CC7C0;
  if ( qword_8CC7C0 )
  {
    v13 = a11;
    if ( (unsigned __int8)sub_331080(qword_8CC7C0, a10, a11, a12, a1) )
    {
      v26 = 0;
      v27 = -1;
      v28 = 0;
      v29 = 0;
      v25 = 0;
      sub_1E95D0((QT::QObject *)v30, (__int64)v12, 1, v13 & 2, -32768, 0.0);
      v17 = sub_1EC090((__int64)v12, 0, v15, v16, 0.0);
      if ( (unsigned int)sub_27DCD0(v12, (__int64)&v25, a10, -1, v17, 0, 0.0) == 1 )
      {
        m128i_i64 = (__int64)v12[24].m128i_i64;
        if ( (v13 & 1) != 0 )
          sub_1FFBB0(m128i_i64, &v25, 1u, (__m128)0LL, a2, a3, a4, v18, v19, a7, a8);
        else
          sub_1FF700(m128i_i64, &v25, (__m128)0LL, a2, a3, a4, v18, v19, a7, a8);
      }
      sub_1E9680((__int64)v30);
      if ( v29 )
        qfree(v29, v25.m128i_i8, v21, v22, v23, v24, *(_OWORD *)&v25, v26, v27, v28);
    }
  }
  return v31 - __readfsqword(0x28u);
}
