unsigned __int64 __fastcall sub_A4F8D0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        const __m128i *a5,
        char a6)
{
  char v7; // r14
  __int64 *v10; // rbp
  const __m128i *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rsi
  unsigned __int64 v15; // r14
  __int32 v17; // ecx
  unsigned __int8 v18; // di
  __int64 v19; // r10
  char v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // r11
  __int64 *v23; // r9
  __int64 v24; // rax
  char v25; // r15
  __int32 v26; // esi
  __int64 v27; // r9
  __int64 v28; // r11
  __int64 v29; // r14
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __m128i v35; // xmm2
  __int64 v36; // r14
  __m128i v37; // xmm3
  __m128i v38; // xmm4
  __m128i v39; // xmm5
  __m128i v40; // xmm6
  unsigned __int64 v41; // rdi
  __m128i v42; // xmm7
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __m128i v48; // xmm1
  __m128i v49; // xmm2
  __m128i v50; // xmm3
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  __int64 v53; // rax
  __m128i v54; // xmm0
  unsigned int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 *v58; // rbx
  __int64 v59; // rdx
  _QWORD *v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  char v64; // al
  __int64 v65; // r15
  int v66; // r14d
  int v67; // edx
  __int64 v68; // rax
  char v69; // al
  __int64 *v70; // rdx
  __int64 *v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 *v74; // rdx
  char v75; // bl
  __int64 *v76; // r14
  __int64 *v77; // rbp
  __int64 v78; // rax
  char v79; // si
  __int64 v81; // [rsp+18h] [rbp-278h]
  __int64 v82; // [rsp+20h] [rbp-270h]
  const __m128i *v83; // [rsp+20h] [rbp-270h]
  __int64 *v84; // [rsp+20h] [rbp-270h]
  char v85; // [rsp+30h] [rbp-260h]
  const __m128i *v86; // [rsp+38h] [rbp-258h]
  const __m128i *v87; // [rsp+40h] [rbp-250h]
  __int64 *v88; // [rsp+40h] [rbp-250h]
  __int64 v89; // [rsp+48h] [rbp-248h]
  char v90; // [rsp+48h] [rbp-248h]
  char v91; // [rsp+48h] [rbp-248h]
  unsigned __int64 v92; // [rsp+50h] [rbp-240h]
  __int64 v93; // [rsp+60h] [rbp-230h] BYREF
  void *v94; // [rsp+68h] [rbp-228h] BYREF
  __int64 v95; // [rsp+70h] [rbp-220h]
  _BYTE v96[64]; // [rsp+78h] [rbp-218h] BYREF
  __m128i v97; // [rsp+B8h] [rbp-1D8h] BYREF
  __m128i v98; // [rsp+C8h] [rbp-1C8h]
  __m128i v99; // [rsp+D8h] [rbp-1B8h]
  __m128i v100; // [rsp+E8h] [rbp-1A8h]
  __m128i v101; // [rsp+F8h] [rbp-198h]
  __m128i v102; // [rsp+108h] [rbp-188h]
  __m128i v103; // [rsp+118h] [rbp-178h]
  __int64 v104; // [rsp+128h] [rbp-168h]
  void *ptr[2]; // [rsp+138h] [rbp-158h] BYREF
  _BYTE v106[128]; // [rsp+148h] [rbp-148h] BYREF
  void *v107[2]; // [rsp+1C8h] [rbp-C8h] BYREF
  _OWORD v108[6]; // [rsp+1D8h] [rbp-B8h] BYREF
  __int64 v109; // [rsp+238h] [rbp-58h]

  v7 = a6;
  v10 = a3;
  v11 = a5;
  ptr[0] = v106;
  ptr[1] = (void *)0x2000000000LL;
  sub_F3C590((unsigned int)ptr, a2, (_DWORD)a3, a4, (_DWORD)a5, a1, 1);
  v93 = 0;
  v81 = a1 + 384;
  v12 = sub_21FF620(a1 + 384, ptr, &v93, &off_2B17240);
  if ( !v12 || (v14 = v12 - 32, v12 == 32) )
  {
    v17 = v11[1].m128i_i32[2];
    v85 = *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 1LL) & 0x40;
    if ( v17 )
    {
      if ( !v85 )
      {
        v25 = 0;
        v7 = 0;
        goto LABEL_43;
      }
      v25 = 0;
      v7 = 1;
      v82 = 0;
      if ( (unsigned int)(v17 - 5) > 1 )
      {
LABEL_18:
        if ( v17 != 2
          || (v70 = (__int64 *)v11[2].m128i_i64[0], v71 = &v70[v11[2].m128i_i64[1]], v70 == v71)
          || (v72 = *(_QWORD *)(*v70 & 0xFFFFFFFFFFFFFFF0LL),
              v73 = *(_QWORD *)(v72 + 8),
              (v72 & 0xFFFFFFFFFFFFFFF0LL) != v73) )
        {
LABEL_19:
          v7 = 0;
          goto LABEL_20;
        }
        v74 = v70 + 1;
        v86 = v11;
        v91 = v7;
        v75 = 0;
        v76 = v71;
        v88 = v10;
        v77 = v74;
        while ( 1 )
        {
          if ( *(_BYTE *)(v72 + 16) == 38
            || *(_BYTE *)(*(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && sub_F3F310(v72, 0, v74, v71, v13) )
          {
            v75 = 1;
          }
          if ( v76 == v77 )
            break;
          v78 = *v77++;
          v72 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF0LL);
          v73 = *(_QWORD *)(v72 + 8);
          v13 = v72 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v72 & 0xFFFFFFFFFFFFFFF0LL) != v73 )
          {
            v11 = v86;
            v10 = v88;
            goto LABEL_19;
          }
        }
        v79 = v75;
        v11 = v86;
        v10 = v88;
        if ( !v79 || !v91 )
        {
          v7 = v79;
          goto LABEL_20;
        }
      }
    }
    else
    {
      v82 = 0;
    }
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL)
      || (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
      && (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
        & 6) != 0 )
    {
      v7 = 1;
      v25 = 0;
      if ( !a4 )
        goto LABEL_21;
    }
    else
    {
      v64 = v11->m128i_i8[2] & 2;
      if ( !a4 )
      {
        if ( !v64 )
        {
LABEL_90:
          v25 = 0;
          goto LABEL_29;
        }
        v7 = 1;
        v25 = 0;
        goto LABEL_21;
      }
      if ( v64
        || (v65 = *(_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)(v65 + 8) != (v65 & 0xFFFFFFFFFFFFFFF0LL))
        || *v10 & 7 | (*v10 >> 3) & 1 )
      {
LABEL_80:
        v7 = 1;
        v25 = 0;
      }
      else
      {
        v66 = 0;
        if ( (*(_BYTE *)(v65 + 17) & 8) != 0 )
          goto LABEL_87;
        do
        {
          do
          {
            v67 = *(unsigned __int8 *)(v65 + 16);
            if ( (unsigned int)(v67 - 25) > 1 && ((unsigned __int8)(v67 - 2) > 4u || (_BYTE)v67 == 3) )
            {
              if ( ++v66 == a4 )
                goto LABEL_90;
              v68 = v10[v66];
              v65 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL);
              if ( (v65 & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(v65 + 8) && (v68 & 0xF) == 0 )
                continue;
            }
            goto LABEL_80;
          }
          while ( (*(_BYTE *)(v65 + 17) & 8) == 0 );
LABEL_87:
          v69 = sub_F42050(v65);
        }
        while ( !v69 );
        v7 = v69;
        v25 = 0;
      }
    }
    goto LABEL_28;
  }
  if ( !a6 )
  {
    v17 = v11[1].m128i_i32[2];
    if ( (unsigned int)(v17 - 6) <= 2 )
    {
      v13 = *(unsigned __int8 *)(v12 - 13);
      v18 = (*(_BYTE *)(v12 - 13) >> 1) & 0xF;
      if ( (unsigned int)v18 - 6 > 2 )
      {
        v24 = 0;
      }
      else
      {
        v19 = 8LL * *(unsigned __int16 *)(v12 - 10) + 48;
        v20 = BYTE3(*(_QWORD *)(v12 - 16));
        v21 = (v20 & 0x40) != 0;
        v22 = (v14 + v19 + ((v20 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v13 & 0x40) != 0 )
          v21 += (*(_BYTE *)(((v14 + v19 + (((char)v13 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v23 = (__int64 *)(v22 + 8 * v21);
        if ( v18 == 2 )
        {
          v13 = ((char)v13 >> 5) & 4;
          v23 = (__int64 *)(v22 + 8 * ((*(_WORD *)((v14 + v19 + (char)v13 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) + v21));
        }
        else if ( v18 > 1u && ((v18 + 13) & 0xFu) > 8 )
        {
LABEL_115:
          ++v11[4].m128i_i32[2];
          BUG();
        }
        v24 = *v23;
      }
      if ( v11[3].m128i_i64[0] != v24 )
      {
        v25 = 1;
        v82 = *(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL];
        v85 = *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 1LL) & 0x40;
        if ( !v85 )
        {
LABEL_28:
          if ( (v82 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            goto LABEL_29;
LABEL_43:
          v107[0] = v108;
          v107[1] = (void *)0x1000000000LL;
          if ( a4 > 0x10 )
          {
            sub_22134E0(v107, v108, a4, 8);
          }
          else if ( !a4 )
          {
LABEL_50:
            v48 = _mm_loadu_si128(v11 + 4);
            v49 = _mm_loadu_si128(v11 + 5);
            v50 = _mm_loadu_si128(v11 + 6);
            v97 = _mm_loadu_si128(v11);
            v51 = _mm_loadu_si128(v11 + 1);
            v94 = v96;
            v98 = v51;
            v52 = _mm_loadu_si128(v11 + 2);
            v95 = 0x800000000LL;
            v53 = v11[7].m128i_i64[0];
            v99 = v52;
            v54 = _mm_loadu_si128(v11 + 3);
            v101 = v48;
            v100 = v54;
            v102 = v49;
            v103 = v50;
            v104 = v53;
            v97.m128i_i8[2] &= ~2u;
            if ( !v7 )
            {
              if ( !v85 )
              {
                v98.m128i_i32[2] = 0;
                v99 = 0u;
                v100 = 0;
                v101.m128i_i64[0] = 0;
                goto LABEL_69;
              }
              v55 = v11[1].m128i_u32[2];
              if ( v55 <= 0xB )
              {
                v56 = 1LL << v55;
                if ( ((1LL << v55) & 0xE89) != 0 )
                  goto LABEL_111;
                if ( (v56 & 0x132) != 0 )
                {
                  v98.m128i_i32[2] = 5;
                  goto LABEL_69;
                }
                if ( (v56 & 4) != 0 )
                {
                  v57 = v11[2].m128i_i64[0];
                  v84 = (__int64 *)(v57 + 8 * v11[2].m128i_i64[1]);
                  if ( (__int64 *)v57 != v84 )
                  {
                    v87 = v11;
                    v58 = (__int64 *)v11[2].m128i_i64[0];
                    do
                    {
                      v59 = *v58;
                      v60 = (_QWORD *)(*v58 & 0xFFFFFFFFFFFFFFF0LL);
                      v61 = *v60;
                      if ( *(_BYTE *)(*v60 + 16LL) == 38
                        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v61 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38
                        && (v92 = *v58 & 0xFFFFFFFFFFFFFFF0LL,
                            v90 = *v58,
                            v62 = sub_F3F310(v61, v60, v59, v57, v13),
                            LOBYTE(v59) = v90,
                            v60 = (_QWORD *)v92,
                            v62) )
                      {
                        v7 = 1;
                      }
                      ++v58;
                      sub_A46760(
                        (__int64)&v94,
                        v60[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v60[1] | (unsigned __int8)v59) & 7);
                    }
                    while ( v84 != v58 );
                    v11 = v87;
                    if ( v7 )
                    {
                      v98.m128i_i32[2] = 2;
                      v99.m128i_i64[0] = (__int64)v94;
                      v99.m128i_i64[1] = (unsigned int)v95;
                      goto LABEL_69;
                    }
                  }
LABEL_111:
                  v98.m128i_i32[2] = 0;
                }
              }
            }
LABEL_69:
            v63 = sub_A4D590(a1, a2);
            v82 = sub_A4F8D0(a1, v63, v107[0], LODWORD(v107[1]), &v97, 1);
            sub_21FF620(v81, ptr, &v93, &off_2B17240);
            if ( v94 != v96 )
              free(v94);
            if ( v107[0] != v108 )
              free(v107[0]);
LABEL_29:
            v26 = v11[1].m128i_i32[2];
            v27 = v11[2].m128i_i64[1];
            switch ( v26 )
            {
              case 0:
              case 1:
              case 3:
              case 4:
              case 5:
              case 11:
                v27 = 0;
                v28 = 0;
                v29 = 0;
                goto LABEL_31;
              case 2:
                v27 = (unsigned int)v27;
                v28 = 0;
                v29 = 0;
                goto LABEL_31;
              case 6:
              case 7:
              case 8:
                v27 = 0;
                v28 = 1;
                v29 = 0;
                goto LABEL_31;
              case 9:
                v27 = 0;
                v28 = 0;
                v29 = 1;
                goto LABEL_31;
              case 10:
                v27 = 0;
                v28 = 0;
                v29 = 2;
LABEL_31:
                v30 = 0;
                if ( v11[4].m128i_i64[1] )
                  v30 = a4;
                v31 = 8 * a4 + 4LL * (v11->m128i_i8[2] & 1);
                v32 = ((v31 - (unsigned __int64)(v31 != 0)) >> 3)
                    + (((v11->m128i_i16[1] & 0xFF8) != 0) | (unsigned __int8)(v26 == 2 || v11[6].m128i_i64[0] != 0))
                    + (unsigned __int64)((v11->m128i_i16[1] & 0xFF8) != 0)
                    + (v31 != 0)
                    + v29
                    + v28
                    + v27;
                v33 = v11[6].m128i_i64[0]
                    + 8
                    * (((v30 + 8 * v32 - (v30 + 8 * v32 != 0)) >> 3)
                     + (v30 + 8 * v32 != 0)
                     + (unsigned __int64)((v11->m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL) != 0));
                v34 = sub_A4C290(
                        (__int64 *)(a1 + 2352),
                        8 * (v11[7].m128i_i64[0] + (v33 != 0) + ((v33 - (v33 != 0)) >> 3)) + 48,
                        4u);
                v35 = _mm_loadu_si128(v11 + 1);
                v36 = v34;
                v37 = _mm_loadu_si128(v11 + 2);
                v38 = _mm_loadu_si128(v11 + 3);
                v39 = _mm_loadu_si128(v11 + 4);
                v40 = _mm_loadu_si128(v11 + 5);
                v41 = v34;
                v42 = _mm_loadu_si128(v11 + 6);
                v43 = v11[7].m128i_i64[0];
                *(__m128i *)v107 = _mm_loadu_si128(v11);
                v108[0] = v35;
                v108[1] = v37;
                v108[2] = v38;
                v108[3] = v39;
                v108[4] = v40;
                v108[5] = v42;
                v109 = v43;
                sub_F38C00(v41, a2, v10, a4, v82, v107);
                sub_A469E0(a1 + 8, v36);
                if ( !v25 )
                  sub_21FF4D0(v81, v36 + 32, v93, &off_2B17240);
                if ( v11[6].m128i_i64[0] )
                  *(_BYTE *)(a1 + 17441) = 1;
                v15 = v36 & 0xFFFFFFFFFFFFFFF0LL;
                goto LABEL_5;
              default:
                goto LABEL_115;
            }
          }
          v83 = v11;
          v44 = 0;
          v45 = 0;
          do
          {
            while ( 1 )
            {
              v46 = sub_A4F830((_QWORD *)a1, v10[v44]);
              v47 = LODWORD(v107[1]) + 1LL;
              if ( v47 > HIDWORD(v107[1]) )
                break;
              *((_QWORD *)v107[0] + LODWORD(v107[1])) = v46;
              ++LODWORD(v107[1]);
              v44 = (unsigned int)++v45;
              if ( v45 == a4 )
                goto LABEL_49;
            }
            v89 = v46;
            sub_22134E0(v107, v108, v47, 8);
            *((_QWORD *)v107[0] + LODWORD(v107[1])) = v89;
            ++LODWORD(v107[1]);
            v44 = (unsigned int)++v45;
          }
          while ( a4 != v45 );
LABEL_49:
          v11 = v83;
          goto LABEL_50;
        }
        v25 = 1;
        if ( (unsigned int)(v17 - 5) <= 1 )
        {
          v7 = 1;
LABEL_20:
          if ( !a4 )
          {
LABEL_21:
            if ( (v82 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
              goto LABEL_29;
            v107[0] = v108;
            v107[1] = (void *)0x1000000000LL;
            goto LABEL_50;
          }
          goto LABEL_28;
        }
        goto LABEL_18;
      }
    }
  }
  v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_5:
  if ( ptr[0] != v106 )
    free(ptr[0]);
  return v15;
}

