unsigned __int64 __fastcall sub_59500(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int128 *v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8
  _QWORD v15[2]; // [rsp+0h] [rbp-288h] BYREF
  _OWORD v16[9]; // [rsp+10h] [rbp-278h] BYREF
  __m128i v17; // [rsp+A0h] [rbp-1E8h]
  __int128 v18; // [rsp+B0h] [rbp-1D8h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-1C8h]
  __int128 v20; // [rsp+C8h] [rbp-1C0h]
  __int128 v21; // [rsp+D8h] [rbp-1B0h]
  __int64 v22; // [rsp+E8h] [rbp-1A0h] BYREF
  __int128 v23; // [rsp+F0h] [rbp-198h]
  __int128 v24; // [rsp+100h] [rbp-188h]
  __int64 v25; // [rsp+110h] [rbp-178h]
  __int64 v26; // [rsp+118h] [rbp-170h]
  __int128 v27; // [rsp+120h] [rbp-168h]
  __m128 si128; // [rsp+130h] [rbp-158h]
  __int64 v29; // [rsp+140h] [rbp-148h]
  __int64 v30; // [rsp+148h] [rbp-140h]
  __int64 v31; // [rsp+150h] [rbp-138h]
  __int128 v32; // [rsp+158h] [rbp-130h]
  __int64 v33; // [rsp+168h] [rbp-120h]
  int v34; // [rsp+170h] [rbp-118h]
  int v35; // [rsp+180h] [rbp-108h] BYREF
  __int64 v36; // [rsp+188h] [rbp-100h]
  int *v37; // [rsp+190h] [rbp-F8h]
  int *v38; // [rsp+198h] [rbp-F0h]
  __int128 v39; // [rsp+1A0h] [rbp-E8h]
  __int128 v40; // [rsp+1B0h] [rbp-D8h]
  __int128 v41; // [rsp+1C0h] [rbp-C8h]
  __int128 v42; // [rsp+1D0h] [rbp-B8h]
  __int128 v43; // [rsp+1E0h] [rbp-A8h]
  __m128 v44; // [rsp+1F0h] [rbp-98h]
  __int64 v45; // [rsp+200h] [rbp-88h]
  __int16 v46; // [rsp+208h] [rbp-80h]
  __int64 v47; // [rsp+20Ah] [rbp-7Eh]
  __int64 v48; // [rsp+218h] [rbp-70h]
  __int128 v49; // [rsp+220h] [rbp-68h]
  __int128 v50; // [rsp+230h] [rbp-58h]
  int v51; // [rsp+240h] [rbp-48h]
  __int64 v52; // [rsp+248h] [rbp-40h]
  __int128 v53; // [rsp+250h] [rbp-38h]
  unsigned __int64 v54; // [rsp+268h] [rbp-20h]

  v54 = __readfsqword(0x28u);
  v15[0] = a1;
  v15[1] = get_ph(a1, a2, a3);
  v11 = v16;
  do
  {
    *((_BYTE *)v11 + 10) = 0;
    v11 = (__int128 *)((char *)v11 + 40);
    *((_QWORD *)v11 - 5) = 0;
    *((_WORD *)v11 - 16) = 0;
    *((_DWORD *)v11 - 7) = 0;
    *(__int128 *)((char *)v11 - 24) = 0;
    *((_QWORD *)v11 - 1) = 0;
  }
  while ( &v18 != v11 );
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  sub_2E130(&v22, (__int64)v15);
  v25 = -1;
  v26 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v33 = 0;
  v34 = -1;
  v35 = 0;
  v36 = 0;
  v37 = &v35;
  v38 = &v35;
  v45 = 0;
  v46 = a2;
  v47 = 0x8000;
  v48 = 0;
  v51 = 0;
  v52 = 0;
  v23 = 0;
  v24 = 0;
  v27 = 0;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_6BEC0);
  v32 = 0;
  v39 = 0;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = si128;
  v49 = 0;
  v50 = 0;
  v53 = 0;
  v16[0] = _mm_load_si128((const __m128i *)&xmmword_8C260);
  v16[1] = _mm_load_si128((const __m128i *)&xmmword_8C270);
  v16[2] = _mm_load_si128((const __m128i *)&xmmword_8C280);
  v16[3] = _mm_load_si128((const __m128i *)&xmmword_8C290);
  v16[4] = _mm_load_si128((const __m128i *)&xmmword_8C2A0);
  v16[5] = _mm_load_si128((const __m128i *)&xmmword_8C2B0);
  v16[6] = _mm_load_si128((const __m128i *)&xmmword_8C2C0);
  v16[7] = _mm_load_si128((const __m128i *)&xmmword_8C2D0);
  v16[8] = _mm_load_si128((const __m128i *)&xmmword_8C2E0);
  v17 = _mm_load_si128((const __m128i *)&xmmword_8C2F0);
  sub_55F40((__int64)v15, *(double *)v17.m128i_i64, (__m128)-1LL, si128, a7, v12, v13, a10, a11);
  sub_3FAC0((__int64)v15);
  return v54 - __readfsqword(0x28u);
}

