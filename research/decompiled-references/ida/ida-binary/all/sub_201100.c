__int64 __fastcall sub_201100(
        const __m128i *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  const char *v13; // rsi
  double v14; // xmm0_8
  __int64 v15; // rcx
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 (__fastcall *v18)(const __m128i *, const char *, _DWORD *, __int64, double, __m128, __m128, __m128, double, double, __m128, __m128); // rdx
  __int64 (__fastcall *v19)(const __m128i *, __int64, __int128 *); // rax
  unsigned int v20; // ebx
  __int128 v22; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+10h] [rbp-A8h]
  int v24; // [rsp+18h] [rbp-A0h]
  __int64 v25; // [rsp+20h] [rbp-98h]
  __int128 v26; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h] BYREF
  int v28; // [rsp+48h] [rbp-70h]
  char v29; // [rsp+50h] [rbp-68h]
  __int64 v30; // [rsp+58h] [rbp-60h]
  int v31; // [rsp+60h] [rbp-58h]
  __int64 v32; // [rsp+68h] [rbp-50h]
  __int128 v33; // [rsp+70h] [rbp-48h]
  __int64 v34; // [rsp+80h] [rbp-38h]
  char v35; // [rsp+88h] [rbp-30h]
  unsigned __int64 v36; // [rsp+98h] [rbp-20h]

  v36 = __readfsqword(0x28u);
  v26 = 0;
  v13 = (const char *)&v22;
  LODWORD(v22) = 0;
  *((_QWORD *)&v22 + 1) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  v14 = 0.0;
  v23 = -1;
  v24 = -1;
  v25 = 0;
  v28 = -1;
  v29 = 0;
  v30 = -1;
  v31 = -2;
  v32 = -1;
  v34 = 0xFFFFFFFFLL;
  v35 = 0;
  v33 = 0;
  sub_1ED900((__int64)a1, &v22, 2, a12, 0.0);
  v18 = sub_2010D0;
  v19 = *(__int64 (__fastcall **)(const __m128i *, __int64, __int128 *))(a1->m128i_i64[0] + 872);
  if ( (char *)v19 == (char *)sub_2010D0 )
  {
    if ( !(_DWORD)v22 || (v13 = (const char *)a2, !sub_192EC0((__int64)&v22, a2)) )
      sub_200F00(a1, v13, 0.0, a4, a5, a6, v16, v17, a9, a10, (__int64)v18, v15);
    v20 = 1;
  }
  else
  {
    v13 = (const char *)a2;
    v20 = v19(a1, a2, &v22);
  }
  if ( v31 >= -1 && v32 )
  {
    *(_QWORD *)&v33 = 0;
    v14 = qfree(v32, v13);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, v13, v14);
  }
  return v20;
}
