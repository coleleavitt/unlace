unsigned __int64 __fastcall sub_3A3810(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128 v11; // xmm0
  __int64 v12; // rax
  const __m128i *v13; // rbx
  _BYTE *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 func; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 *v22; // r15
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 i; // rbp
  __int64 *v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 j; // rbp
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rsi
  __m128 *v37; // r15
  __m128i v38; // xmm0
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rbp
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // [rsp+0h] [rbp-178h]
  __int64 v54; // [rsp+0h] [rbp-178h]
  __int64 v55; // [rsp+8h] [rbp-170h]
  __int64 v56; // [rsp+8h] [rbp-170h]
  __int64 v57; // [rsp+10h] [rbp-168h]
  __int64 v58; // [rsp+10h] [rbp-168h]
  __int64 v59; // [rsp+18h] [rbp-160h]
  __int64 v60; // [rsp+18h] [rbp-160h]
  __int64 v61; // [rsp+20h] [rbp-158h]
  double v62; // [rsp+28h] [rbp-150h]
  const double *v63; // [rsp+38h] [rbp-140h]
  __int64 v64; // [rsp+48h] [rbp-130h]
  __int64 v65; // [rsp+50h] [rbp-128h]
  __int64 v66; // [rsp+50h] [rbp-128h]
  __int64 *v67; // [rsp+58h] [rbp-120h]
  int v68; // [rsp+64h] [rbp-114h] BYREF
  __int64 v69; // [rsp+68h] [rbp-110h] BYREF
  __int64 v70; // [rsp+70h] [rbp-108h] BYREF
  __int128 v71; // [rsp+78h] [rbp-100h]
  __int64 v72; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v73; // [rsp+98h] [rbp-E0h]
  __int64 v74; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v75; // [rsp+B8h] [rbp-C0h]
  _QWORD v76[5]; // [rsp+D0h] [rbp-A8h] BYREF
  __m128 v77; // [rsp+F8h] [rbp-80h]
  _BYTE v78[40]; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int64 v79; // [rsp+138h] [rbp-40h]

  v59 = a1;
  v79 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1376);
  if ( (_DWORD)v6 )
  {
    v7 = *(__int64 **)(a1 + 1368);
    *(_QWORD *)(a1 + 1368) = 0;
    *(_OWORD *)(a1 + 1376) = 0;
    v67 = v7;
    if ( (int)v6 > 0 )
    {
      v63 = (const double *)v7;
      v64 = (__int64)&v7[3 * (unsigned int)(v6 - 1) + 3];
      do
      {
        v61 = *((_QWORD *)v63 + 1);
        v62 = *v63;
        v11 = _mm_loadh_ps(v63 + 2);
        v70 = 0;
        v76[0] = &off_4D41E0;
        v76[3] = 0;
        v76[4] = &v70;
        v71 = 0;
        *(__m128i *)&v76[1] = _mm_load_si128((const __m128i *)&xmmword_411C00);
        v77 = v11;
        callui(1147, v76, 8, &callui, a5, a6, v53, v55, v57, v59);
        v11.m128_u64[0] = 0;
        v12 = 0;
        v72 = 0;
        v74 = 0;
        HIDWORD(v55) = 0;
        v73 = 0;
        v75 = 0;
        if ( (_QWORD)v71 )
        {
          do
          {
            v13 = (const __m128i *)(v70 + 96 * v12);
            v14 = (_BYTE *)callui(1105, v13[2].m128i_u32[2], v8, &callui, v9, v10, v53, v55, v57, v59);
            if ( !v14 || *v14 != 36 || (v52 = qsscanf(v14, "$%a", v76), v15 = v76[0], v52 != 1) )
              v15 = -1;
            v16 = v13[2].m128i_i64[0];
            v68 = v16;
            v17 = sub_2B2530(v60, v15 + v61 - *(_QWORD *)&v62, 0);
            v18 = netnode_altval(v17, (int)v16, 110) + v15;
            if ( v18 != -1 )
              v18 += v61 - *(_QWORD *)&v62;
            func = get_func(v15 + v61 - *(_QWORD *)&v62);
            if ( func )
            {
              v76[0] = func;
              memset(&v76[1], 0, 24);
              v20 = *(_QWORD *)(v60 + 112);
              sub_149380(&v69, v20, v76, nullptr, 0);
              if ( v76[1] )
              {
                v76[2] = 0;
                qfree(v76[1]);
              }
              if ( v69 )
              {
                sub_254560(v69, v20, v21);
                sub_3A1AF0(v69, &v68, v18, 0.0);
                v22 = (__int64 *)v69;
                if ( v69 )
                {
                  if ( (*(_DWORD *)(v69 + 104))-- == 1 )
                  {
                    sub_254CF0(v22);
                    v24 = v22[23];
                    if ( v24 )
                    {
                      v25 = v22[24];
                      if ( v25 )
                      {
                        HIDWORD(v58) = HIDWORD(v13);
                        v65 = v18;
                        for ( i = 0; i != v25; ++i )
                        {
                          v27 = (__int64 *)(v24 + 24 * i);
                          v28 = *v27;
                          if ( *v27 )
                          {
                            v27[1] = 0;
                            qfree(v28);
                            v24 = v22[23];
                          }
                        }
                        v18 = v65;
                      }
                      v22[24] = 0;
                      qfree(v24);
                    }
                    v29 = v22[20];
                    if ( v29 )
                    {
                      v22[21] = 0;
                      qfree(v29);
                    }
                    v30 = v22[16];
                    if ( v30 )
                    {
                      v31 = v22[17];
                      if ( v31 )
                      {
                        HIDWORD(v58) = HIDWORD(v13);
                        v66 = v18;
                        for ( j = 0; j != v31; ++j )
                        {
                          v33 = (__int64 *)(v30 + 32 * j);
                          v34 = *v33;
                          if ( *v33 )
                          {
                            v33[1] = 0;
                            qfree(v34);
                            v30 = v22[16];
                          }
                        }
                        v18 = v66;
                      }
                      v22[17] = 0;
                      qfree(v30);
                    }
                    sub_2513D0((__int64)(v22 + 2));
                    j__qfree(v22);
                  }
                }
              }
            }
            v35 = v73;
            v36 = v72;
            if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v73 + 1) )
            {
              v72 = qvector_reserve(&v72, v72, v73 + 1, 32);
              v35 = v73;
              v36 = v72;
            }
            v37 = (__m128 *)(v36 + 32 * v35);
            v37->m128_u64[0] = -1;
            v37->m128_u64[1] = 0;
            v37[1].m128_u64[0] = -1;
            v37[1].m128_u64[1] = 0;
            v38 = _mm_loadu_si128(v13 + 2);
            *(_QWORD *)&v73 = v73 + 1;
            *v37 = (__m128)v38;
            qsnprintf(v78, 32, "$%a", *(double *)v38.m128i_i64);
            LODWORD(v58) = v68;
            v13[2].m128i_i32[2] = callui(1104, v78, v39, &callui, v40, v41, v54, v56, v58, v60);
            v13[2].m128i_i32[3] = 3;
            v8 = v75;
            v13[2].m128i_i64[0] = (int)v57;
            v11 = (__m128)_mm_loadu_si128(v13 + 2);
            v13[3].m128i_i64[1] = -1;
            v42 = v74;
            v43 = v8 + 1;
            v37[1] = v11;
            if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v8 + 1) )
            {
              v51 = qvector_reserve(&v74, v42, v8 + 1, 24);
              v8 = v75;
              v74 = v51;
              v42 = v51;
              v43 = v75 + 1;
            }
            *(_QWORD *)&v75 = v43;
            v44 = (__int64 *)(v42 + 24 * v8);
            ++HIDWORD(v55);
            *v44 = v15;
            v44[1] = v15 + v61 - *(_QWORD *)&v62;
            v44[2] = v18;
            v12 = SHIDWORD(v55);
          }
          while ( SHIDWORD(v55) < (unsigned __int64)v71 );
        }
        sub_3A12A0(v59, &v72, &v74, *(double *)v11.m128_u64);
        if ( v74 )
        {
          *(_QWORD *)&v75 = 0;
          qfree(v74);
        }
        if ( v72 )
        {
          *(_QWORD *)&v73 = 0;
          qfree(v72);
        }
        v45 = v70;
        if ( v70 )
        {
          v46 = v71;
          if ( (_QWORD)v71 )
          {
            v47 = 0;
            do
            {
              v48 = v45 + 96 * v47;
              v49 = *(_QWORD *)(v48 + 8);
              if ( v49 )
              {
                *(_QWORD *)(v48 + 16) = 0;
                qfree(v49);
                v45 = v70;
              }
              ++v47;
            }
            while ( v46 != v47 );
          }
          *(_QWORD *)&v71 = 0;
          qfree(v45);
        }
        v63 += 3;
      }
      while ( (const double *)v64 != v63 );
    }
    sub_13D250(v59, 0);
    sub_385CE0(v59, -1, 1);
    if ( v67 )
      qfree(v67);
  }
  return v79 - __readfsqword(0x28u);
}
