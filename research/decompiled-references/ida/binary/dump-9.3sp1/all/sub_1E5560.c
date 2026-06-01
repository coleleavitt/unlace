__int64 __fastcall sub_1E5560(unsigned __int64 **a1, unsigned __int64 *a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // xmm3_8^8
  unsigned __int64 v8; // r15
  __int8 v9; // r14
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  char v15; // al
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 **v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ebx
  unsigned __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rcx
  __m128i v40; // xmm1
  __m128i v41; // xmm0
  __m128i v42; // xmm2
  __m128i v43; // xmm0
  __m128i v44; // xmm2
  __m128i v45; // xmm2
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  _QWORD *v53; // rsi
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // rdx
  __m128i v58; // xmm1
  __m128i v59; // xmm0
  __m128i v60; // xmm2
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  __m128i *v64; // r12
  __int64 v65; // rax
  unsigned __int64 v66; // r12
  char v67; // al
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // r12
  unsigned __int64 v70; // rax
  __m128i *v71; // r14
  char v72; // al
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 *v78; // rax
  unsigned __int64 v79; // r12
  unsigned __int64 i; // rax
  char v81; // al
  __m128i v82; // xmm1
  __m128i v83; // xmm0
  __m128i v84; // xmm2
  _QWORD *v85; // rax
  __int64 v86; // rdx
  _QWORD *v87; // r15
  unsigned __int64 v88; // rcx
  char v89; // al
  __m128i v90; // xmm1
  __m128i v91; // xmm0
  __m128i v92; // xmm2
  __m128i v93; // xmm1
  __m128i v94; // xmm0
  __m128i v95; // xmm2
  unsigned __int64 v96; // r14
  unsigned __int64 v97; // rdx
  __int64 v98; // rax
  unsigned __int64 v99; // rcx
  unsigned __int64 v100; // rdx
  __int64 v101; // rax
  unsigned __int64 v102; // rcx
  unsigned __int64 j; // rdx
  __int64 v104; // rax
  unsigned __int64 v105; // rcx
  unsigned __int64 v106; // rdx
  __int64 v107; // rax
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rdx
  __int64 v110; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v111; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v112; // [rsp+8h] [rbp-E0h]
  __int64 v113; // [rsp+8h] [rbp-E0h]
  __int64 v114; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v115; // [rsp+8h] [rbp-E0h]
  char v116; // [rsp+10h] [rbp-D8h]
  unsigned __int64 **v117; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v118; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v119; // [rsp+18h] [rbp-D0h]
  __int32 v120; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v121; // [rsp+18h] [rbp-D0h]
  __int64 v122; // [rsp+28h] [rbp-C0h]
  __m128i si128; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v124; // [rsp+50h] [rbp-98h] BYREF
  __m256i v125; // [rsp+60h] [rbp-88h] BYREF
  __m128i v126; // [rsp+80h] [rbp-68h]
  __m128i v127; // [rsp+90h] [rbp-58h]
  unsigned __int64 v128; // [rsp+A8h] [rbp-40h]

  v6 = a3->m128i_i64[0];
  v7 = _mm_loadu_si128(a3).m128i_i64[1];
  v128 = __readfsqword(0x28u);
  v8 = *a2;
  v9 = a3->m128i_i8[8];
  v110 = v6;
  sub_312C40((__int64)&si128, a4, (__int64)a3, a4);
  v116 = 0;
  v10 = si128.m128i_i32[1];
  v11 = v110 + si128.m128i_i32[1];
  if ( v9 == 5 )
    v116 = *(_BYTE *)(*(_QWORD *)((*a1)[188] + 96) + 145LL);
  if ( (unsigned __int64 *)v8 == a1[1] )
    goto LABEL_28;
  while ( 1 )
  {
    v12 = v8 + 24;
    if ( *(_BYTE *)(v8 + 32) != v9 || *(_QWORD *)(v8 + 24) >= v11 )
      goto LABEL_28;
    v13 = *(_QWORD *)(v8 + 24);
    v122 = *(int *)(v8 + 44);
    v14 = v13 + v122;
    if ( v13 < v110 )
      break;
    if ( v13 > v110 )
    {
      if ( v11 == v14 )
      {
        v125.m256i_i64[0] = 0x800000000LL;
        memset(&v125.m256i_u64[1], 0, 24);
        if ( v116 )
        {
          v89 = sub_314D00(&si128, (__m128i *)&v125, (unsigned int)(si128.m128i_i32[1] + v110 - v13), v12);
          v68 = v8 + 24;
          if ( !v89 )
            goto LABEL_30;
          v90 = _mm_load_si128(&si128);
          v91 = _mm_load_si128(&v124);
          si128 = _mm_load_si128((const __m128i *)&v125);
          v92 = _mm_load_si128((const __m128i *)&v125.m256i_u64[2]);
          v126 = v90;
          v127 = v91;
          v124 = v92;
          *(__m128i *)v125.m256i_i8 = v90;
          *(__m128i *)&v125.m256i_u64[2] = v91;
        }
        else
        {
          v67 = sub_314D00(&si128, (__m128i *)&v125, (unsigned int)(v13 - v110), v12);
          v68 = v8 + 24;
          if ( !v67 )
            goto LABEL_30;
        }
        if ( v125.m256i_i32[0] == 1 )
        {
          v69 = v8;
          if ( (*(_QWORD *)v8 & 2) == 0 )
          {
            v70 = *(_QWORD *)(v8 + 16);
            if ( (*(_BYTE *)v70 & 2) != 0 )
            {
              v104 = *(_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL);
              v69 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (v104 & 2) == 0 )
              {
                v105 = v8;
                do
                {
                  if ( *(_QWORD *)(v69 + 16) != v105 )
                    break;
                  v105 = v69;
                  v106 = v104 & 0xFFFFFFFFFFFFFFFCLL;
                  v104 = *(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFFCLL);
                  v69 = v106;
                }
                while ( (v104 & 2) == 0 );
              }
            }
            else
            {
              do
              {
                v69 = v70;
                v70 = *(_QWORD *)(v70 + 8);
              }
              while ( (*(_BYTE *)v70 & 2) == 0 );
            }
          }
          sub_1E3D90(a1 + 1, (__int64 *)v8);
          v8 = v69;
          sub_312B80((__int64)&v125);
          goto LABEL_28;
        }
        v58 = _mm_load_si128(&si128);
        v113 = v68;
        v59 = _mm_load_si128(&v124);
        si128 = _mm_load_si128((const __m128i *)&v125);
        v60 = _mm_load_si128((const __m128i *)&v125.m256i_u64[2]);
        v126 = v58;
        v127 = v59;
        v124 = v60;
        *(__m128i *)v125.m256i_i8 = v58;
        *(__m128i *)&v125.m256i_u64[2] = v59;
        sub_312B80((__int64)&v125);
        v12 = v113;
LABEL_95:
        v114 = v12;
        sub_314C00((int *)(v8 + 40), si128.m128i_i32);
        v61 = *(_QWORD *)v8;
        v62 = *(_QWORD *)v8 & 2LL;
        if ( *(_DWORD *)(v114 + 16) == 1 )
        {
          v79 = v8;
          if ( !v62 )
          {
            v79 = *(_QWORD *)(v8 + 16);
            if ( (*(_BYTE *)v79 & 2) != 0 )
            {
              v79 = v61 & 0xFFFFFFFFFFFFFFFCLL;
              v98 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v98 & 2) == 0 )
              {
                v99 = v8;
                do
                {
                  if ( *(_QWORD *)(v79 + 16) != v99 )
                    break;
                  v99 = v79;
                  v100 = v98 & 0xFFFFFFFFFFFFFFFCLL;
                  v98 = *(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFFCLL);
                  v79 = v100;
                }
                while ( (v98 & 2) == 0 );
              }
            }
            else
            {
              for ( i = *(_QWORD *)(v79 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
                v79 = i;
            }
          }
          sub_1E3D90(a1 + 1, (__int64 *)v8);
          v8 = v79;
        }
        else if ( !v62 )
        {
          v63 = *(_QWORD *)(v8 + 16);
          if ( (*(_BYTE *)v63 & 2) != 0 )
          {
            v85 = (_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
            v86 = *v85;
            if ( (*v85 & 2) != 0 || v85[2] != v8 )
            {
LABEL_139:
              v8 = (unsigned __int64)v85;
            }
            else
            {
              while ( 1 )
              {
                v87 = v85;
                v88 = v86 & 0xFFFFFFFFFFFFFFFCLL;
                v86 = *(_QWORD *)(v86 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v86 & 2) != 0 )
                  break;
                v85 = (_QWORD *)v88;
                if ( *(_QWORD **)(v88 + 16) != v87 )
                  goto LABEL_139;
              }
              v8 = v88;
            }
          }
          else
          {
            do
            {
              v8 = v63;
              v63 = *(_QWORD *)(v63 + 8);
            }
            while ( (*(_BYTE *)v63 & 2) == 0 );
          }
        }
        goto LABEL_28;
      }
LABEL_31:
      v27 = 0;
      goto LABEL_32;
    }
    if ( (int)v122 > v10 )
    {
      if ( *(_DWORD *)(v8 + 40) != 8 )
      {
        memset(&v125.m256i_u64[1], 0, 24);
        v71 = (__m128i *)(v8 + 40);
        v125.m256i_i64[0] = 0x800000000LL;
        if ( v116 )
        {
          v81 = sub_314D00((__m128i *)(v8 + 40), (__m128i *)&v125, (unsigned int)(*(_DWORD *)(v8 + 44) - v10), v12);
          v73 = v8 + 24;
          if ( !v81 )
            goto LABEL_30;
          v82 = _mm_loadu_si128(v71);
          v83 = _mm_loadu_si128((const __m128i *)(v8 + 56));
          *v71 = _mm_load_si128((const __m128i *)&v125);
          v84 = _mm_load_si128((const __m128i *)&v125.m256i_u64[2]);
          v126 = v82;
          *(__m128i *)(v8 + 56) = v84;
          v127 = v83;
          *(__m128i *)v125.m256i_i8 = v82;
          *(__m128i *)&v125.m256i_u64[2] = v83;
        }
        else
        {
          v72 = sub_314D00((__m128i *)(v8 + 40), (__m128i *)&v125, (unsigned int)v10, v12);
          v73 = v8 + 24;
          if ( !v72 )
            goto LABEL_30;
        }
        v115 = v73;
        sub_314C00((int *)(v73 + 16), si128.m128i_i32);
        v74 = *(_QWORD *)v8;
        v75 = *(_QWORD *)v8 & 2LL;
        if ( *(_DWORD *)(v115 + 16) == 1 )
        {
          v96 = v8;
          if ( !v75 )
          {
            v97 = *(_QWORD *)(v8 + 16);
            if ( (*(_BYTE *)v97 & 2) != 0 )
            {
              v96 = v74 & 0xFFFFFFFFFFFFFFFCLL;
              v107 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v107 & 2) == 0 )
              {
                v108 = v8;
                do
                {
                  if ( *(_QWORD *)(v96 + 16) != v108 )
                    break;
                  v108 = v96;
                  v109 = v107 & 0xFFFFFFFFFFFFFFFCLL;
                  v107 = *(_QWORD *)(v107 & 0xFFFFFFFFFFFFFFFCLL);
                  v96 = v109;
                }
                while ( (v107 & 2) == 0 );
              }
            }
            else
            {
              do
              {
                v96 = v97;
                v97 = *(_QWORD *)(v97 + 8);
              }
              while ( (*(_BYTE *)v97 & 2) == 0 );
            }
          }
          sub_1E3D90(a1 + 1, (__int64 *)v8);
          v8 = v96;
        }
        else if ( !v75 )
        {
          v76 = *(_QWORD *)(v8 + 16);
          if ( (*(_BYTE *)v76 & 2) != 0 )
          {
            while ( 1 )
            {
              v78 = (__int64 *)(v74 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (*v78 & 2) != 0 )
                break;
              v77 = v8;
              v8 = (unsigned __int64)v78;
              if ( v77 != v78[2] )
                goto LABEL_127;
              v74 = *v78;
            }
            v8 = (unsigned __int64)v78;
          }
          else
          {
            while ( (**(_BYTE **)(v76 + 8) & 2) == 0 )
              v76 = *(_QWORD *)(v76 + 8);
            v8 = v76;
          }
        }
LABEL_127:
        if ( v125.m256i_i32[0] != 1 )
          v8 = sub_1E45A0((__m128i *)(a1 + 1), v8, v11, v7, (__int64)&v125);
        goto LABEL_27;
      }
      goto LABEL_28;
    }
    if ( (int)v122 >= v10 )
      goto LABEL_95;
    v125.m256i_i64[0] = 0x800000000LL;
    memset(&v125.m256i_u64[1], 0, 24);
    if ( v116 )
    {
      if ( !(unsigned __int8)sub_314D00(&si128, (__m128i *)&v125, (unsigned int)(si128.m128i_i32[1] - v122), v12) )
        goto LABEL_30;
      v40 = _mm_load_si128(&si128);
      v41 = _mm_load_si128(&v124);
      v16 = v8 + 24;
      si128 = _mm_load_si128((const __m128i *)&v125);
      v42 = _mm_load_si128((const __m128i *)&v125.m256i_u64[2]);
      v126 = v40;
      v127 = v41;
      v124 = v42;
      *(__m128i *)v125.m256i_i8 = v40;
      *(__m128i *)&v125.m256i_u64[2] = v41;
    }
    else
    {
      v15 = sub_314D00(&si128, (__m128i *)&v125, v122, v12);
      v16 = v8 + 24;
      if ( !v15 )
        goto LABEL_30;
    }
    v118 = v16;
    sub_314C00((int *)(v16 + 16), si128.m128i_i32);
    v17 = *(_QWORD *)v8;
    v18 = *(_QWORD *)v8 & 2LL;
    if ( *(_DWORD *)(v118 + 16) == 1 )
    {
      v19 = a1 + 1;
      v20 = v8;
      if ( *a2 == v8 )
      {
        if ( !v18 )
        {
          v49 = *(_QWORD *)(v8 + 16);
          if ( (*(_BYTE *)v49 & 2) != 0 )
          {
            v50 = v8;
            v20 = v17 & 0xFFFFFFFFFFFFFFFCLL;
            v51 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v51 & 2) == 0 )
            {
              while ( *(_QWORD *)(v20 + 16) == v50 )
              {
                v52 = v51 & 0xFFFFFFFFFFFFFFFCLL;
                v51 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v51 & 2) != 0 )
                {
                  v20 = v52;
                  break;
                }
                v50 = v20;
                v20 = v52;
              }
            }
          }
          else
          {
            do
            {
              v20 = v49;
              v49 = *(_QWORD *)(v49 + 8);
            }
            while ( (*(_BYTE *)v49 & 2) == 0 );
          }
        }
        v121 = v20;
        sub_1E3D90(v19, (__int64 *)v8);
        *a2 = v121;
        v8 = v121;
      }
      else
      {
        if ( !v18 )
        {
          v46 = *(_QWORD *)(v8 + 16);
          if ( (*(_BYTE *)v46 & 2) != 0 )
          {
            v20 = v17 & 0xFFFFFFFFFFFFFFFCLL;
            v55 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v55 & 2) == 0 )
            {
              v56 = v8;
              do
              {
                if ( *(_QWORD *)(v20 + 16) != v56 )
                  break;
                v56 = v20;
                v57 = v55 & 0xFFFFFFFFFFFFFFFCLL;
                v55 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
                v20 = v57;
              }
              while ( (v55 & 2) == 0 );
            }
          }
          else
          {
            do
            {
              v20 = v46;
              v46 = *(_QWORD *)(v46 + 8);
            }
            while ( (*(_BYTE *)v46 & 2) == 0 );
          }
        }
        v119 = v20;
        sub_1E3D90(v19, (__int64 *)v8);
        v8 = v119;
      }
    }
    else if ( !v18 )
    {
      v29 = *(_QWORD *)(v8 + 16);
      if ( (*(_BYTE *)v29 & 2) != 0 )
      {
        v30 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
        v31 = *v30;
        if ( (*v30 & 2) == 0 )
        {
          while ( v30[2] == v8 )
          {
            v8 = (unsigned __int64)v30;
            v54 = v31 & 0xFFFFFFFFFFFFFFFCLL;
            v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v31 & 2) != 0 )
            {
              v8 = v54;
              goto LABEL_16;
            }
            v30 = (__int64 *)v54;
          }
        }
        v8 = (unsigned __int64)v30;
      }
      else
      {
        do
        {
          v8 = v29;
          v29 = *(_QWORD *)(v29 + 8);
        }
        while ( (*(_BYTE *)v29 & 2) == 0 );
      }
    }
LABEL_16:
    if ( v125.m256i_i32[0] == 1 )
    {
      v21 = a1[1];
      v117 = a1 + 1;
      if ( (unsigned __int64 *)v8 != v21 )
      {
        while ( *(_BYTE *)(v8 + 32) == v9 && *(_QWORD *)(v8 + 24) + *(int *)(v8 + 44) <= v11 )
        {
          v22 = *(_QWORD *)v8;
          v23 = *(_QWORD *)v8 & 2LL;
          if ( *(_DWORD *)(v8 + 40) == 8 )
          {
            if ( !v23 )
            {
              v32 = *(_QWORD *)(v8 + 16);
              if ( (*(_BYTE *)v32 & 2) != 0 )
              {
                v33 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
                v34 = *v33;
                if ( (*v33 & 2) != 0 || v8 != v33[2] )
                {
LABEL_42:
                  v8 = (unsigned __int64)v33;
                }
                else
                {
                  while ( 1 )
                  {
                    v8 = v34 & 0xFFFFFFFFFFFFFFFCLL;
                    v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v34 & 2) != 0 )
                      break;
                    v53 = v33;
                    v33 = (_QWORD *)v8;
                    if ( v53 != *(_QWORD **)(v8 + 16) )
                      goto LABEL_42;
                  }
                }
              }
              else
              {
                do
                {
                  v8 = v32;
                  v32 = *(_QWORD *)(v32 + 8);
                }
                while ( (*(_BYTE *)v32 & 2) == 0 );
              }
            }
          }
          else
          {
            v24 = v8;
            if ( v8 == *a2 )
            {
              if ( !v23 )
              {
                v36 = *(_QWORD *)(v8 + 16);
                if ( (*(_BYTE *)v36 & 2) != 0 )
                {
                  v24 = v22 & 0xFFFFFFFFFFFFFFFCLL;
                  v37 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v37 & 2) == 0 )
                  {
                    v38 = v8;
                    do
                    {
                      if ( *(_QWORD *)(v24 + 16) != v38 )
                        break;
                      v38 = v24;
                      v39 = v37 & 0xFFFFFFFFFFFFFFFCLL;
                      v37 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
                      v24 = v39;
                    }
                    while ( (v37 & 2) == 0 );
                  }
                }
                else
                {
                  do
                  {
                    v24 = v36;
                    v36 = *(_QWORD *)(v36 + 8);
                  }
                  while ( (*(_BYTE *)v36 & 2) == 0 );
                }
              }
              v112 = v24;
              sub_1E3D90(v117, (__int64 *)v8);
              *a2 = v112;
              v8 = v112;
              v21 = a1[1];
            }
            else
            {
              if ( !v23 )
              {
                v25 = *(_QWORD *)(v8 + 16);
                if ( (*(_BYTE *)v25 & 2) != 0 )
                {
                  v24 = v22 & 0xFFFFFFFFFFFFFFFCLL;
                  v26 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v26 & 2) == 0 )
                  {
                    v47 = v8;
                    do
                    {
                      if ( *(_QWORD *)(v24 + 16) != v47 )
                        break;
                      v47 = v24;
                      v48 = v26 & 0xFFFFFFFFFFFFFFFCLL;
                      v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                      v24 = v48;
                    }
                    while ( (v26 & 2) == 0 );
                  }
                }
                else
                {
                  do
                  {
                    v24 = v25;
                    v35 = *(_QWORD *)(v25 + 8);
                    if ( (*(_BYTE *)v35 & 2) != 0 )
                      break;
                    v24 = v35;
                    v25 = *(_QWORD *)(v35 + 8);
                  }
                  while ( (*(_BYTE *)v25 & 2) == 0 );
                }
              }
              v111 = v24;
              sub_1E3D90(v117, (__int64 *)v8);
              v8 = v111;
              v21 = a1[1];
            }
          }
          if ( v21 == (unsigned __int64 *)v8 )
            goto LABEL_27;
        }
        if ( v21 != (unsigned __int64 *)v8 && *(_BYTE *)(v8 + 32) == v9 && *(_QWORD *)(v8 + 24) < v11 )
        {
LABEL_30:
          sub_312B80((__int64)&v125);
          goto LABEL_31;
        }
      }
LABEL_27:
      sub_312B80((__int64)&v125);
      goto LABEL_28;
    }
    v110 += v122;
    v43 = _mm_load_si128(&v124);
    v44 = _mm_load_si128((const __m128i *)&v125);
    *(__m128i *)v125.m256i_i8 = _mm_load_si128(&si128);
    v126 = *(__m128i *)v125.m256i_i8;
    si128 = v44;
    v45 = _mm_load_si128((const __m128i *)&v125.m256i_u64[2]);
    *(__m128i *)&v125.m256i_u64[2] = v43;
    v120 = si128.m128i_i32[1];
    v127 = v43;
    v124 = v45;
    sub_312B80((__int64)&v125);
    v10 = v120;
    if ( (unsigned __int64 *)v8 == a1[1] )
      goto LABEL_28;
  }
  if ( v11 != v14 )
    goto LABEL_31;
  memset(&v125.m256i_u64[1], 0, 24);
  v64 = (__m128i *)(v8 + 40);
  v125.m256i_i64[0] = 0x800000000LL;
  if ( v116 )
  {
    if ( !(unsigned __int8)sub_314D00(
                             (__m128i *)(v8 + 40),
                             (__m128i *)&v125,
                             (unsigned int)(v13 + *(_DWORD *)(v8 + 44) - v110),
                             v12) )
      goto LABEL_30;
    v93 = _mm_loadu_si128(v64);
    v94 = _mm_loadu_si128((const __m128i *)(v8 + 56));
    *v64 = _mm_load_si128((const __m128i *)&v125);
    v95 = _mm_load_si128((const __m128i *)&v125.m256i_u64[2]);
    v126 = v93;
    *(__m128i *)(v8 + 56) = v95;
    v127 = v94;
    *(__m128i *)v125.m256i_i8 = v93;
    *(__m128i *)&v125.m256i_u64[2] = v94;
  }
  else if ( !(unsigned __int8)sub_314D00((__m128i *)(v8 + 40), (__m128i *)&v125, (unsigned int)(v110 - v13), v12) )
  {
    goto LABEL_30;
  }
  v65 = *(_QWORD *)v8;
  v66 = v8;
  if ( (*(_QWORD *)v8 & 2) == 0 )
  {
    v66 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)v66 & 2) != 0 )
    {
      v66 = v65 & 0xFFFFFFFFFFFFFFFCLL;
      v101 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v101 & 2) == 0 )
      {
        v102 = v8;
        for ( j = v66; *(_QWORD *)(v66 + 16) == v102; j = v66 )
        {
          v66 = v101 & 0xFFFFFFFFFFFFFFFCLL;
          v101 = *(_QWORD *)(v101 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v101 & 2) != 0 )
            break;
          v102 = j;
        }
      }
    }
    else
    {
      while ( (**(_BYTE **)(v66 + 8) & 2) == 0 )
        v66 = *(_QWORD *)(v66 + 8);
    }
  }
  sub_1E3D90(a1 + 1, (__int64 *)v8);
  if ( v125.m256i_i32[0] != 1 )
  {
    v8 = sub_1E45A0((__m128i *)(a1 + 1), v66, v110, v7, (__int64)&v125);
    sub_312B80((__int64)&v125);
    v12 = v8 + 24;
    goto LABEL_95;
  }
  v8 = v66;
  sub_312B80((__int64)&v125);
LABEL_28:
  *a2 = v8;
  v27 = 1;
LABEL_32:
  sub_312B80((__int64)&si128);
  return v27;
}
