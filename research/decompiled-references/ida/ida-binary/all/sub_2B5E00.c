__int64 __fastcall sub_2B5E00(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        int a15)
{
  void (*v17)(void); // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  unsigned int v23; // r15d
  unsigned __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  __m128 v32; // xmm1
  __m128i v33; // xmm0
  __m128 v34; // xmm2
  double v35; // xmm0_8
  __int64 v36; // rax
  void (*v37)(void); // rax
  __int128 v38; // rax
  int v39; // eax
  __int64 v40; // [rsp+0h] [rbp-D8h]
  __int64 v41; // [rsp+0h] [rbp-D8h]
  int v42; // [rsp+8h] [rbp-D0h]
  _QWORD *v43; // [rsp+8h] [rbp-D0h]
  int v44; // [rsp+10h] [rbp-C8h]
  __int64 v45; // [rsp+10h] [rbp-C8h]
  int v46; // [rsp+18h] [rbp-C0h]
  int v47; // [rsp+18h] [rbp-C0h]
  char v48; // [rsp+1Ch] [rbp-BCh]
  __int64 v49; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+28h] [rbp-B0h]
  __int64 *v51; // [rsp+30h] [rbp-A8h]
  __int64 v52; // [rsp+38h] [rbp-A0h]
  __int64 v53; // [rsp+40h] [rbp-98h]
  __int64 v54; // [rsp+48h] [rbp-90h]
  __int64 v55; // [rsp+50h] [rbp-88h]
  _QWORD *v56; // [rsp+58h] [rbp-80h]
  __int64 v57; // [rsp+60h] [rbp-78h]
  char v58; // [rsp+68h] [rbp-70h]
  char v59; // [rsp+69h] [rbp-6Fh]
  _DWORD v60[7]; // [rsp+6Ch] [rbp-6Ch] BYREF
  __int128 v61; // [rsp+88h] [rbp-50h]
  unsigned __int64 v62; // [rsp+98h] [rbp-40h]

  v42 = a3;
  v44 = a4;
  v46 = a15;
  v62 = __readfsqword(0x28u);
  v17 = *(void (**)(void))(*a1 + 312LL);
  if ( (char *)v17 == (char *)sub_2B2520 )
    a7 = (__m128)*(unsigned __int64 *)sub_1EA6C0(
                                        a1[2] + 384LL,
                                        a2,
                                        a3,
                                        a4,
                                        a5,
                                        (__int64)a6,
                                        a7,
                                        a8,
                                        a9,
                                        a10,
                                        a11,
                                        a12,
                                        a13,
                                        a14,
                                        v40,
                                        a3,
                                        a4,
                                        a15,
                                        v49,
                                        v50,
                                        (__int64)v51,
                                        v52,
                                        v53,
                                        v54,
                                        v55,
                                        (int)v56,
                                        v57);
  else
    v17();
  LOBYTE(v18) = *(double *)a7.m128_u64 != 0.0 && a5 != 0;
  v23 = v18;
  if ( (_BYTE)v18 )
  {
    v25 = (unsigned __int64 *)sub_1EA6C0(
                                a1[2] + 384LL,
                                a2,
                                v18,
                                1,
                                v19,
                                v20,
                                a7,
                                (__m128)0LL,
                                a9,
                                a10,
                                v21,
                                v22,
                                a13,
                                a14,
                                v40,
                                v42,
                                v44,
                                v46,
                                (__int64)GraphRenderer::find_item_at,
                                v50,
                                (__int64)a1,
                                a5,
                                a6->m128i_i64[0],
                                v54,
                                v55,
                                (int)v56,
                                v57);
    v32 = 0;
    v33 = _mm_loadl_epi64(a6);
    v34 = (__m128)*v25;
    if ( *(double *)v34.m128_u64 > 0.0 )
    {
      v34 = (__m128)_mm_unpacklo_pd((__m128d)v34, (__m128d)v34);
      v32 = *(__m128 *)(v25 + 1);
      v33.m128i_i64[0] = _mm_cvttpd_epi32(_mm_add_pd(_mm_div_pd(_mm_cvtepi32_pd(v33), (__m128d)v34), (__m128d)v32)).m128i_u64[0];
    }
    v54 = v33.m128i_i64[0];
    v35 = 0.0;
    memset(v60, 255, 20);
    v56 = v43;
    v57 = v45;
    v58 = v47;
    v61 = 0;
    v59 = v48;
    v36 = *v51;
    v55 = a2;
    v37 = *(void (**)(void))(v36 + 312);
    if ( (char *)v37 == (char *)sub_2B2520 )
      v35 = *(double *)sub_1EA6C0(
                         v51[2] + 384,
                         a2,
                         v26,
                         v27,
                         v28,
                         v29,
                         (__m128)0LL,
                         v32,
                         v34,
                         a10,
                         v30,
                         v31,
                         a13,
                         a14,
                         v41,
                         (int)v43,
                         v45,
                         v47,
                         v49,
                         v50,
                         (__int64)v51,
                         v52,
                         v53,
                         v54,
                         v55,
                         (int)v56,
                         v57);
    else
      v37();
    *(double *)&v60[5] = v35 * 10000.0;
    *(_QWORD *)&v38 = sub_2B4EB0(v51);
    v61 = v38;
    if ( !(unsigned int)sub_298EA0(a5, &v49, 1, v35 * 10000.0) && v60[2] == -1 )
    {
      if ( (_BYTE)v47 && (v39 = v60[0], v60[0] >= 0) )
      {
        if ( a2 )
        {
          *(_BYTE *)a2 = 1;
          *(_DWORD *)(a2 + 4) = v39;
          *(_QWORD *)(a2 + 8) = -1;
          *(_DWORD *)(a2 + 16) = -1;
        }
        if ( v43 )
          *v43 = *(_QWORD *)v60;
      }
      else
      {
        return 0;
      }
    }
  }
  return v23;
}
