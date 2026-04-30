__int64 __fastcall sub_21AE30(signed int a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // r12d
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __m128i v14; // xmm2
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm3
  __int64 v20; // r14
  __m128i v21; // xmm1
  __int64 v22; // rcx
  __m128i v23; // xmm4
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdi
  __m128i v28; // xmm5
  double v29; // xmm0_8
  const char *v30; // rsi
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rbp
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rdi
  __m128i v41; // [rsp+0h] [rbp-148h] BYREF
  __m128i v42; // [rsp+10h] [rbp-138h] BYREF
  _QWORD *v43; // [rsp+20h] [rbp-128h] BYREF
  __int64 v44; // [rsp+28h] [rbp-120h]
  _QWORD *v45; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v46; // [rsp+38h] [rbp-110h]
  __int64 v47; // [rsp+40h] [rbp-108h] BYREF
  __m128i v48; // [rsp+48h] [rbp-100h]
  __int64 v49; // [rsp+58h] [rbp-F0h]
  __m128i v50; // [rsp+60h] [rbp-E8h]
  __int64 v51; // [rsp+70h] [rbp-D8h]
  __m128i v52; // [rsp+78h] [rbp-D0h]
  __int64 v53; // [rsp+88h] [rbp-C0h]
  __m128i v54; // [rsp+90h] [rbp-B8h]
  int v55[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v56; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-90h]
  __m128i v58; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-78h]
  __m128i v60; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-60h]
  __m128i v62; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+108h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  if ( a1 >= 16 * ((qword_8CBB18 == 0) + (unsigned int)((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
           + (unsigned int)((qword_8CBAF0 - qword_8CBAE0) >> 5)
           + (unsigned int)((qword_8CBB00 - qword_8CBB08) >> 5) )
    return 0;
  if ( !a2 )
    return 0;
  v4 = sub_2383E0(a2, 0);
  v5 = v4;
  if ( v4 == -1 )
    return 0;
  v6 = sub_20F460((__int64)qword_8CBAA0, a1);
  if ( *(_DWORD *)(v6 + 8) != 1 )
    return 0;
  v7 = (unsigned __int8)byte_8CBC08;
  if ( !byte_8CBC08 )
  {
    v44 = a1;
    v43 = qword_8CBAA0;
    if ( a1 < (unsigned __int64)sub_219300(&qword_8CBB00, &qword_8CBAE0) )
    {
      v9 = sub_219340(&v43, 0);
      v45 = v9;
      v46 = v10;
      if ( v9 )
      {
        if ( v46 < 16 * ((unsigned __int64)(v9[15] == 0) + ((__int64)(v9[15] - v9[11]) >> 3) - 1)
                 + ((__int64)(v9[10] - v9[8]) >> 5)
                 + ((__int64)(v9[12] - v9[13]) >> 5) )
        {
          sub_215280((__int64)&v47, *(_DWORD *)(dbg + 64));
          sub_2195B0((__int64)v55, &v45);
          v11 = *(_QWORD *)v55;
          *(_QWORD *)v55 = 0;
          v12 = _mm_loadu_si128(&v56);
          v56 = 0;
          if ( v47 )
          {
            v41 = v12;
            v48.m128i_i64[0] = 0;
            qfree(v47, (const char *)&v45);
            v12 = _mm_load_si128(&v41);
          }
          v13 = v49;
          v48 = v12;
          v14 = _mm_load_si128(&v58);
          v47 = v11;
          v41.m128i_i64[0] = v57;
          v57 = 0;
          v42 = v14;
          v58 = 0;
          if ( v49 )
          {
            v15 = v50.m128i_i64[0];
            if ( v50.m128i_i64[0] )
            {
              v16 = 0;
              do
              {
                v17 = v13 + 32 * v16;
                if ( *(int *)v17 >= -1 )
                {
                  v18 = *(_QWORD *)(v17 + 8);
                  if ( v18 )
                  {
                    *(_QWORD *)(v17 + 16) = 0;
                    qfree(v18, (const char *)&v45);
                    v13 = v49;
                  }
                }
                ++v16;
              }
              while ( v15 != v16 );
            }
            v50.m128i_i64[0] = 0;
            qfree(v13, (const char *)&v45);
          }
          v19 = _mm_load_si128(&v42);
          v20 = v59;
          v59 = 0;
          v21 = _mm_loadu_si128(&v60);
          v49 = v41.m128i_i64[0];
          v50 = v19;
          v60 = 0;
          if ( v51 )
          {
            v41 = v21;
            v52.m128i_i64[0] = 0;
            qfree(v51, (const char *)&v45);
            v21 = _mm_load_si128(&v41);
          }
          v22 = v53;
          v51 = v20;
          v23 = _mm_load_si128(&v62);
          v52 = v21;
          v41.m128i_i64[0] = v61;
          v61 = 0;
          v42 = v23;
          v62 = 0;
          if ( v53 )
          {
            v24 = v54.m128i_i64[0];
            v25 = 0;
            if ( v54.m128i_i64[0] )
            {
              do
              {
                v26 = v22 + 32 * v25;
                v27 = *(_QWORD *)(v26 + 8);
                if ( v27 )
                {
                  *(_QWORD *)(v26 + 16) = 0;
                  qfree(v27, (const char *)&v45);
                  v22 = v53;
                }
                ++v25;
              }
              while ( v24 != v25 );
            }
            v54.m128i_i64[0] = 0;
            qfree(v22, (const char *)&v45);
          }
          v28 = _mm_load_si128(&v42);
          v53 = v41.m128i_i64[0];
          v54 = v28;
          v29 = sub_20DA00((__int64 *)v55, (const char *)&v45);
          v30 = (const char *)&v47;
          sub_216480((__int64)v55, &v47);
          if ( a3 )
          {
            if ( (v5 & 0x80000000) == 0LL && v5 < (unsigned __int64)xmmword_8CC398 )
            {
              v34 = qword_8CC390 + 56 * v5;
              if ( v34 )
              {
                v30 = (const char *)a3;
                sub_236190(
                  v34,
                  a3,
                  (unsigned int)v55,
                  v31,
                  v32,
                  v33,
                  v41.m128i_i32[0],
                  v41.m128i_i32[2],
                  v42.m128i_i32[0],
                  v42.m128i_i32[2],
                  (_DWORD)v43,
                  v44,
                  (__int64)v45);
              }
            }
          }
          v35 = *(_QWORD *)v55;
          if ( *(_QWORD *)v55 )
          {
            v36 = v56.m128i_i64[0];
            if ( v56.m128i_i64[0] )
            {
              v37 = 0;
              do
              {
                v38 = v35 + 32 * v37;
                if ( *(int *)v38 >= -1 )
                {
                  v39 = *(_QWORD *)(v38 + 8);
                  if ( v39 )
                  {
                    *(_QWORD *)(v38 + 16) = 0;
                    v29 = qfree(v39, v30, v29);
                    v35 = *(_QWORD *)v55;
                  }
                }
                ++v37;
              }
              while ( v36 != v37 );
            }
            v56.m128i_i64[0] = 0;
            qfree(v35, v30, v29);
          }
          v7 = 1;
          sub_20DA00(&v47, v30);
        }
      }
    }
    return v7;
  }
  v40 = *(_QWORD **)(v6 + 24);
  if ( !v40 )
    return 0;
  return sub_20D210(v40, v5, a3, 1);
}
