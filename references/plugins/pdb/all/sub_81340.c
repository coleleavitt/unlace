__int64 __fastcall sub_81340(__int64 a1)
{
  int v2; // eax
  char v3; // r14
  int v4; // edx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __m128i v7; // xmm0
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // r9
  __int64 v23; // rsi
  int v24; // edx
  void (*v25)(void); // rax
  __int64 *v27; // rbx
  __int64 v28; // rsi
  __m128i v29; // xmm0
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 *v41; // rbx
  __int64 v42; // rsi
  __m128i si128; // xmm0
  __int64 *v44; // rbx
  __m128i *v45; // rsi
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r13
  const __m128i *v50; // rdi
  __int64 v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // rcx
  __m128i v54; // xmm0
  bool v55; // cf
  int v56; // r8d
  unsigned int v57; // ebp
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r11
  unsigned __int16 v61; // ax
  __int16 v62; // r8
  __int64 v63; // rax
  __int64 v64; // r10
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  const __m128i *v73; // rdi
  __int64 v74; // r13
  __int64 v75; // rbp
  __int64 v76; // rdx
  const __m128i *v77; // rcx
  __int64 v78; // rax
  __m128i v79; // xmm1
  __int64 *v80; // [rsp+8h] [rbp-B0h]
  __int64 *v81; // [rsp+8h] [rbp-B0h]
  __int64 v82; // [rsp+18h] [rbp-A0h]
  __int64 v83; // [rsp+20h] [rbp-98h]
  __int16 v84; // [rsp+2Ch] [rbp-8Ch]
  char v85; // [rsp+37h] [rbp-81h] BYREF
  void *v86; // [rsp+38h] [rbp-80h] BYREF
  int v87; // [rsp+46h] [rbp-72h] BYREF
  int v88; // [rsp+4Ah] [rbp-6Eh]
  char v89; // [rsp+4Eh] [rbp-6Ah]
  __m128i v90; // [rsp+50h] [rbp-68h] BYREF
  _BYTE s1[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v92; // [rsp+78h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  v2 = sub_7F960(a1 + 72, 0, (unsigned __int8 *)&v85);
  if ( v2 == -1 )
  {
    v41 = *(__int64 **)(a1 + 64);
    v42 = *v41;
    if ( (unsigned __int64)v41[2] <= 0x1F )
    {
      v71 = qvector_reserve(v41, v42, 32, 1);
      *v41 = v71;
      v42 = v71;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_94360);
    v41[1] = 32;
    *(__m128i *)v42 = si128;
    *(__m128i *)(v42 + 15) = _mm_load_si128((const __m128i *)&xmmword_94370);
    *(_BYTE *)(*v41 + 31) = 0;
    return 1;
  }
  if ( v2 == 1 || (v3 = v85) != 0 )
  {
    v27 = *(__int64 **)(a1 + 64);
    v28 = *v27;
    if ( (unsigned __int64)v27[2] <= 0x2B )
    {
      v33 = qvector_reserve(v27, v28, 44, 1);
      *v27 = v33;
      v28 = v33;
    }
    v29 = _mm_load_si128((const __m128i *)&xmmword_94380);
    v27[1] = 44;
    *(__m128i *)v28 = v29;
    *(__m128i *)(v28 + 16) = _mm_load_si128((const __m128i *)&xmmword_94390);
    *(__m128i *)(v28 + 27) = _mm_load_si128((const __m128i *)&xmmword_943A0);
    *(_BYTE *)(*v27 + 43) = 0;
    return 2;
  }
  v4 = *(unsigned __int16 *)(a1 + 129);
  if ( (unsigned __int16)v4 > 0x1C4u )
  {
    if ( (_WORD)v4 == 0x8664 || (_WORD)v4 == 0xAA64 )
      goto LABEL_7;
LABEL_29:
    sub_37FD0(*(__int64 **)(a1 + 64), (__int64)"Unsupported COFF file architecture %x", v4);
    return 2;
  }
  if ( (unsigned __int16)v4 > 0x1A1u )
  {
    v5 = 0x540000001LL;
    if ( _bittest64(&v5, (unsigned int)(v4 - 418)) )
      goto LABEL_7;
    goto LABEL_29;
  }
  if ( (_WORD)v4 != 332 )
    goto LABEL_29;
LABEL_7:
  if ( !*(_DWORD *)(a1 + 133) )
  {
    v44 = *(__int64 **)(a1 + 64);
    v45 = (__m128i *)*v44;
    if ( (unsigned __int64)v44[2] <= 0x22 )
    {
      v70 = qvector_reserve(v44, v45, 35, 1);
      *v44 = v70;
      v45 = (__m128i *)v70;
    }
    v46 = _mm_load_si128((const __m128i *)&xmmword_943B0);
    v44[1] = 35;
    v45[2].m128i_i16[0] = 28271;
    *v45 = v46;
    v45[1] = _mm_load_si128((const __m128i *)&xmmword_943C0);
    *(_BYTE *)(*v44 + 34) = 0;
    return 1;
  }
  v6 = *(_QWORD *)(a1 + 480);
  if ( v6 == 5 )
    goto LABEL_11;
  v7 = _mm_load_si128((const __m128i *)&xmmword_94320);
  *(__m128i *)s1 = v7;
  if ( v6 <= 5 )
  {
    v30 = *(_QWORD *)(a1 + 472);
    v31 = *(_QWORD *)(a1 + 488);
    if ( (unsigned __int64)s1 < v30 || (unsigned __int64)s1 >= v30 + 16 * v31 )
    {
      if ( v31 <= 4 )
      {
        v47 = qvector_reserve(a1 + 472, 0, 5, 16);
        v48 = *(_QWORD *)(a1 + 480);
        v49 = *(_QWORD *)(a1 + 488);
        *(_QWORD *)(a1 + 488) = v31;
        v50 = *(const __m128i **)(a1 + 472);
        v51 = v47;
        v52 = v48 - 1;
        if ( v52 >= 0 )
        {
          v53 = v47;
          do
          {
            v54 = _mm_loadu_si128(v50);
            v53 += 16;
            ++v50;
            *(__m128i *)(v53 - 16) = v54;
            v55 = v52-- == 0;
          }
          while ( !v55 );
          v50 = *(const __m128i **)(a1 + 472);
        }
        qfree(v50);
        v6 = *(_QWORD *)(a1 + 480);
        *(_QWORD *)(a1 + 472) = v51;
        *(_QWORD *)(a1 + 488) = v49;
        if ( v6 > 4 )
          goto LABEL_10;
        v30 = v51;
      }
      v34 = 16 * v6;
      while ( 1 )
      {
        *(__m128i *)(v30 + v34) = _mm_load_si128((const __m128i *)s1);
        v34 += 16;
        if ( v34 == 80 )
          break;
        v30 = *(_QWORD *)(a1 + 472);
      }
    }
    else
    {
      if ( v31 > 4 )
        goto LABEL_44;
      v72 = qvector_reserve(a1 + 472, 0, 5, 16);
      v73 = *(const __m128i **)(a1 + 472);
      v74 = *(_QWORD *)(a1 + 488);
      *(_QWORD *)(a1 + 488) = v31;
      v75 = v72;
      v76 = v72;
      v77 = v73;
      v78 = *(_QWORD *)(a1 + 480) - 1LL;
      if ( v78 >= 0 )
      {
        do
        {
          v79 = _mm_loadu_si128(v77);
          v76 += 16;
          ++v77;
          *(__m128i *)(v76 - 16) = v79;
          v55 = v78-- == 0;
        }
        while ( !v55 );
        v73 = *(const __m128i **)(a1 + 472);
      }
      qfree(v73);
      v6 = *(_QWORD *)(a1 + 480);
      v30 = v75;
      *(_QWORD *)(a1 + 472) = v75;
      *(_QWORD *)(a1 + 488) = v74;
      v7 = _mm_load_si128((const __m128i *)&xmmword_94320);
      if ( v6 <= 4 )
      {
LABEL_44:
        v32 = 16 * v6;
        while ( 1 )
        {
          *(__m128i *)(v30 + v32) = v7;
          v32 += 16;
          if ( v32 == 80 )
            break;
          v30 = *(_QWORD *)(a1 + 472);
        }
      }
    }
  }
LABEL_10:
  *(_QWORD *)(a1 + 480) = 5;
LABEL_11:
  v8 = sub_7F200((unsigned __int16 *)(a1 + 129));
  qlseek(*(_QWORD *)(a1 + 464), v8, 0, v9);
  v10 = *(_QWORD *)(a1 + 472);
  *(_DWORD *)(v10 + 48) = qlseek(*(_QWORD *)(a1 + 464), 0, 1, v11);
  *(_DWORD *)(v10 + 52) = 40 * *(_DWORD *)(a1 + 133);
  v12 = *(unsigned int *)(a1 + 133);
  memset(s1, 0, sizeof(s1));
  if ( v12 )
  {
    *(_QWORD *)s1 = qvector_reserve(s1, 0, v12, 76);
    memset((void *)(*(_QWORD *)s1 + 76LL * *(_QWORD *)&s1[8]), 0, 76 * (v12 - *(_QWORD *)&s1[8]));
    v56 = *(_DWORD *)(a1 + 133);
    *(_QWORD *)&s1[8] = v12;
    if ( v56 )
    {
      v57 = 0;
      do
        sub_80250(*(_QWORD *)(a1 + 464), (unsigned __int16 *)(a1 + 129), *(_QWORD *)s1 + 76LL * (int)v57++, 0);
      while ( v57 < *(_DWORD *)(a1 + 133) );
    }
  }
  sub_80CC0(*(__m128i **)(a1 + 112), *(_QWORD *)(a1 + 464), (unsigned __int16 *)(a1 + 129), 0);
  v13 = *(_QWORD *)s1;
  v14 = *(_QWORD *)s1 + 76LL * *(_QWORD *)&s1[8];
  if ( *(_QWORD *)s1 != v14 )
  {
    while ( 1 )
    {
      if ( !strncmp((const char *)v13, ".debug$T", 8u) )
      {
        v15 = *(_QWORD *)(a1 + 472);
        *(_DWORD *)(v15 + 32) = *(_QWORD *)(v13 + 40);
        *(_DWORD *)(v15 + 36) = *(_QWORD *)(v13 + 32);
      }
      else
      {
        v16 = strncmp((const char *)v13, ".debug$S", 8u);
        if ( v16 )
          goto LABEL_16;
        v17 = *(_QWORD *)(v13 + 40);
        v90.m128i_i32[1] = *(_QWORD *)(v13 + 32);
        v90.m128i_i32[0] = v17;
        v90.m128i_i64[1] = 0xFFFFFFFF00000000LL;
        sub_81260(&v86, a1, &v90);
        v19 = *(_QWORD *)(a1 + 504);
        v20 = *(_QWORD *)(a1 + 496);
        v21 = v19;
        if ( *(_QWORD *)(a1 + 512) < (unsigned __int64)(v19 + 1) )
        {
          v40 = qvector_reserve(a1 + 496, v20, v19 + 1, 24);
          *(_QWORD *)(a1 + 496) = v40;
          v20 = v40;
          v21 = *(_QWORD *)(a1 + 504);
        }
        v22 = (__int64 *)(v20 + 24 * v21);
        *v22 = 0;
        *(_OWORD *)(v22 + 1) = 0;
        ++*(_QWORD *)(a1 + 504);
        v23 = *(_QWORD *)(v13 + 48);
        if ( v23 )
        {
          if ( *(_DWORD *)(v13 + 64) )
          {
            v80 = v22;
            qlseek(*(_QWORD *)(a1 + 464), v23, 0, v18);
            v22 = v80;
            if ( *(_DWORD *)(v13 + 64) )
            {
              do
              {
                v81 = v22;
                v58 = qlread(*(_QWORD *)(a1 + 464), &v87, 10);
                v22 = v81;
                if ( v58 != 10 )
                  break;
                v59 = *(_QWORD *)(a1 + 112);
                v60 = v88;
                if ( (unsigned __int64)v88 >= *(_QWORD *)(v59 + 64) )
                  break;
                v61 = *(_WORD *)(a1 + 129);
                if ( v61 != 450 )
                {
                  if ( v61 <= 0x1C2u )
                  {
                    if ( v61 != 418 && v61 != 448 )
                    {
                      if ( v61 != 332 )
                        goto LABEL_84;
LABEL_82:
                      if ( v89 == 11 )
                        goto LABEL_102;
                      if ( v89 == 10 )
                        goto LABEL_93;
                      goto LABEL_84;
                    }
                  }
                  else
                  {
                    if ( v61 == 0x8664 )
                      goto LABEL_82;
                    if ( v61 == 0xAA64 )
                    {
                      if ( v89 == 8 )
                        goto LABEL_102;
                      if ( v89 == 13 )
                      {
LABEL_93:
                        v62 = 1;
LABEL_94:
                        v63 = v81[1];
                        v64 = *(_QWORD *)(v59 + 56);
                        v65 = *v81;
                        v66 = v63 + 1;
                        if ( v81[2] < (unsigned __int64)(v63 + 1) )
                        {
                          v84 = v62;
                          v83 = *(_QWORD *)(v59 + 56);
                          v82 = v88;
                          v69 = qvector_reserve(v81, v65, v63 + 1, 12);
                          v22 = v81;
                          v65 = v69;
                          v62 = v84;
                          v64 = v83;
                          v60 = v82;
                          *v81 = v69;
                          v63 = v81[1];
                          v66 = v63 + 1;
                        }
                        v22[1] = v66;
                        v67 = v65 + 12 * v63;
                        v68 = v64 + 24 * v60;
                        *(_DWORD *)v67 = *(_DWORD *)(v13 + 40) + v87;
                        *(_WORD *)(v67 + 8) = v62;
                        if ( v62 == 1 )
                          *(_WORD *)(v67 + 4) = *(_DWORD *)(v68 + 16);
                        else
                          *(_DWORD *)(v67 + 4) = *(_QWORD *)(v68 + 8);
                        goto LABEL_84;
                      }
                      goto LABEL_84;
                    }
                    if ( v61 != 452 )
                      goto LABEL_84;
                  }
                }
                if ( v89 == 15 )
                {
LABEL_102:
                  v62 = 0;
                  goto LABEL_94;
                }
                if ( v89 == 14 )
                  goto LABEL_93;
LABEL_84:
                ++v16;
              }
              while ( v16 < *(_DWORD *)(v13 + 64) );
            }
          }
        }
        v24 = v19;
        if ( !v22[1] )
        {
          v35 = *(_QWORD *)(a1 + 504);
          if ( v35 )
          {
            v36 = v35 - 1;
            v37 = *(_QWORD *)(a1 + 496);
            *(_QWORD *)(a1 + 504) = v36;
            v38 = (__int64 *)(v37 + 24 * v36);
            v39 = *v38;
            if ( *v38 )
            {
              v38[1] = 0;
              qfree(v39);
            }
          }
          v24 = -1;
        }
        sub_80AF0(a1, &v86, v24);
        if ( v86 )
        {
          v25 = *(void (**)(void))(*(_QWORD *)v86 + 8LL);
          if ( (char *)v25 == (char *)sub_54910 )
            operator delete(v86, 0x40u);
          else
            v25();
        }
      }
      v3 = 1;
LABEL_16:
      v13 += 76;
      if ( v14 == v13 )
      {
        if ( v3 && (unsigned __int8)getinf(57) != 1 )
        {
          v90 = 0;
          v90.m128i_i8[0] = 1;
          set_compiler(&v90, 3, 0);
        }
        v14 = *(_QWORD *)s1;
        break;
      }
    }
  }
  if ( v14 )
  {
    *(_QWORD *)&s1[8] = 0;
    qfree(v14);
  }
  return 0;
}
