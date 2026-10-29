unsigned __int64 __fastcall sub_3A7990(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128 v11; // xmm0
  __int64 v12; // rax
  const __m128i *v13; // rbx
  _BYTE *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 func; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 *v20; // r15
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 i; // rbp
  __int64 *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 j; // rbp
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rsi
  __m128 *v35; // r15
  __m128i v36; // xmm0
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rbp
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // [rsp+0h] [rbp-178h]
  __int64 v52; // [rsp+0h] [rbp-178h]
  __int64 v53; // [rsp+8h] [rbp-170h]
  __int64 v54; // [rsp+8h] [rbp-170h]
  __int64 v55; // [rsp+10h] [rbp-168h]
  __int64 v56; // [rsp+10h] [rbp-168h]
  __int64 v57; // [rsp+18h] [rbp-160h]
  __int64 v58; // [rsp+18h] [rbp-160h]
  __int64 v59; // [rsp+20h] [rbp-158h]
  __int64 v60; // [rsp+28h] [rbp-150h]
  __int64 v61; // [rsp+38h] [rbp-140h]
  __int64 v62; // [rsp+48h] [rbp-130h]
  __int64 v63; // [rsp+50h] [rbp-128h]
  __int64 v64; // [rsp+50h] [rbp-128h]
  __int64 v65; // [rsp+58h] [rbp-120h]
  int v66; // [rsp+64h] [rbp-114h] BYREF
  __int64 v67; // [rsp+68h] [rbp-110h] BYREF
  __int64 v68; // [rsp+70h] [rbp-108h] BYREF
  __int128 v69; // [rsp+78h] [rbp-100h]
  __int64 v70; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v71; // [rsp+98h] [rbp-E0h]
  __int64 v72; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v73; // [rsp+B8h] [rbp-C0h]
  _QWORD v74[5]; // [rsp+D0h] [rbp-A8h] BYREF
  __m128 v75; // [rsp+F8h] [rbp-80h]
  char v76[40]; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int64 v77; // [rsp+138h] [rbp-40h]

  v57 = a1;
  v77 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1376);
  if ( (_DWORD)v6 )
  {
    v7 = *(_QWORD *)(a1 + 1368);
    *(_QWORD *)(a1 + 1368) = 0;
    *(_OWORD *)(a1 + 1376) = 0;
    v65 = v7;
    if ( (int)v6 > 0 )
    {
      v61 = v7;
      v62 = v7 + 24LL * (unsigned int)(v6 - 1) + 24;
      do
      {
        v59 = *(_QWORD *)(v61 + 8);
        v60 = *(_QWORD *)v61;
        v11 = _mm_loadh_ps((const double *)(v61 + 16));
        v68 = 0;
        v74[0] = &off_4E70E0;
        v74[3] = 0;
        v74[4] = &v68;
        v69 = 0;
        *(__m128i *)&v74[1] = _mm_load_si128((const __m128i *)&xmmword_424800);
        v75 = v11;
        callui(1147, v74, 8, &callui, a5, a6, v51, v53, v55, v57);
        v11.m128_u64[0] = 0;
        v12 = 0;
        v70 = 0;
        v72 = 0;
        HIDWORD(v53) = 0;
        v71 = 0;
        v73 = 0;
        if ( (_QWORD)v69 )
        {
          do
          {
            v13 = (const __m128i *)(v68 + 96 * v12);
            v14 = (_BYTE *)callui(1105, v13[2].m128i_u32[2], v8, &callui, v9, v10, v51, v53, v55, v57);
            if ( !v14 || *v14 != 36 || (v50 = qsscanf(), v15 = v74[0], v50 != 1) )
              v15 = -1;
            v66 = v13[2].m128i_i64[0];
            sub_2B61B0(v58, v15 + v59 - v60, 0);
            v16 = netnode_altval() + v15;
            if ( v16 != -1 )
              v16 += v59 - v60;
            func = get_func();
            if ( func )
            {
              v74[0] = func;
              memset(&v74[1], 0, 24);
              v18 = *(_QWORD *)(v58 + 112);
              sub_14CDC0(&v67, v18, v74, nullptr, 0);
              if ( v74[1] )
              {
                v74[2] = 0;
                qfree(v74[1]);
              }
              if ( v67 )
              {
                sub_2581E0(v67, v18, v19);
                sub_3A5C70(v67, &v66, v16);
                v20 = (__int64 *)v67;
                if ( v67 )
                {
                  if ( (*(_DWORD *)(v67 + 104))-- == 1 )
                  {
                    sub_258970(v20);
                    v22 = v20[23];
                    if ( v22 )
                    {
                      v23 = v20[24];
                      if ( v23 )
                      {
                        HIDWORD(v56) = HIDWORD(v13);
                        v63 = v16;
                        for ( i = 0; i != v23; ++i )
                        {
                          v25 = (__int64 *)(v22 + 24 * i);
                          v26 = *v25;
                          if ( *v25 )
                          {
                            v25[1] = 0;
                            qfree(v26);
                            v22 = v20[23];
                          }
                        }
                        v16 = v63;
                      }
                      v20[24] = 0;
                      qfree(v22);
                    }
                    v27 = v20[20];
                    if ( v27 )
                    {
                      v20[21] = 0;
                      qfree(v27);
                    }
                    v28 = v20[16];
                    if ( v28 )
                    {
                      v29 = v20[17];
                      if ( v29 )
                      {
                        HIDWORD(v56) = HIDWORD(v13);
                        v64 = v16;
                        for ( j = 0; j != v29; ++j )
                        {
                          v31 = (__int64 *)(v28 + 32 * j);
                          v32 = *v31;
                          if ( *v31 )
                          {
                            v31[1] = 0;
                            qfree(v32);
                            v28 = v20[16];
                          }
                        }
                        v16 = v64;
                      }
                      v20[17] = 0;
                      qfree(v28);
                    }
                    sub_255050((__int64)(v20 + 2));
                    j__qfree((__int64)v20);
                  }
                }
              }
            }
            v33 = v71;
            v34 = v70;
            if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v71 + 1) )
            {
              v70 = qvector_reserve((__int64)&v70, v70, v71 + 1, 32);
              v33 = v71;
              v34 = v70;
            }
            v35 = (__m128 *)(v34 + 32 * v33);
            v35->m128_u64[0] = -1;
            v35->m128_u64[1] = 0;
            v35[1].m128_u64[0] = -1;
            v35[1].m128_u64[1] = 0;
            v36 = _mm_loadu_si128(v13 + 2);
            *(_QWORD *)&v71 = v71 + 1;
            *v35 = (__m128)v36;
            qsnprintf();
            LODWORD(v56) = v66;
            v13[2].m128i_i32[2] = callui(1104, v76, v37, &callui, v38, v39, v52, v54, v56, v58);
            v13[2].m128i_i32[3] = 3;
            v8 = v73;
            v13[2].m128i_i64[0] = (int)v55;
            v11 = (__m128)_mm_loadu_si128(v13 + 2);
            v13[3].m128i_i64[1] = -1;
            v40 = v72;
            v41 = v8 + 1;
            v35[1] = v11;
            if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v8 + 1) )
            {
              v49 = qvector_reserve((__int64)&v72, v40, v8 + 1, 24);
              v8 = v73;
              v72 = v49;
              v40 = v49;
              v41 = v73 + 1;
            }
            *(_QWORD *)&v73 = v41;
            v42 = (__int64 *)(v40 + 24 * v8);
            ++HIDWORD(v53);
            *v42 = v15;
            v42[1] = v15 + v59 - v60;
            v42[2] = v16;
            v12 = SHIDWORD(v53);
          }
          while ( SHIDWORD(v53) < (unsigned __int64)v69 );
        }
        sub_3A5420(v57, (__int64)&v70, &v72, *(double *)v11.m128_u64);
        if ( v72 )
        {
          *(_QWORD *)&v73 = 0;
          qfree(v72);
        }
        if ( v70 )
        {
          *(_QWORD *)&v71 = 0;
          qfree(v70);
        }
        v43 = v68;
        if ( v68 )
        {
          v44 = v69;
          if ( (_QWORD)v69 )
          {
            v45 = 0;
            do
            {
              v46 = v43 + 96 * v45;
              v47 = *(_QWORD *)(v46 + 8);
              if ( v47 )
              {
                *(_QWORD *)(v46 + 16) = 0;
                qfree(v47);
                v43 = v68;
              }
              ++v45;
            }
            while ( v44 != v45 );
          }
          *(_QWORD *)&v69 = 0;
          qfree(v43);
        }
        v61 += 24;
      }
      while ( v62 != v61 );
    }
    sub_140C90(v57, 0);
    sub_389E60(v57, -1, 1);
    if ( v65 )
      qfree(v65);
  }
  return v77 - __readfsqword(0x28u);
}
