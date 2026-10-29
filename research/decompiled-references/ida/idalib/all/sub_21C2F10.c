_QWORD *__fastcall sub_21C2F10(_QWORD *a1, __int64 a2, unsigned __int64 **a3)
{
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // rcx
  __m128 v8; // xmm0
  __int64 v9; // rbx
  __m128i *v10; // rax
  __m128i v11; // xmm0
  const __m128i *v12; // r13
  __m128i *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 *v15; // rsi
  __m128i v16; // xmm1
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  unsigned __int64 v20; // rcx
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 *v24; // rax
  __int64 v25; // r15
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  int v28; // edi
  __int64 *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r13
  char *v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  char *v36; // rax
  __int64 v37; // rcx
  char *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r11
  char *v41; // rbx
  int v42; // r10d
  size_t v43; // rdx
  char *v44; // rax
  char *v45; // rax
  int i; // r9d
  __int64 v47; // rdx
  int v48; // ecx
  char *v49; // rsi
  __int64 v50; // rdi
  __int64 *v51; // r10
  int v52; // edx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  char *v59; // rax
  __int64 v60; // rcx
  char *v61; // r8
  __int64 v62; // rdx
  char *v63; // r10
  int v64; // r9d
  size_t v65; // rdx
  char *v66; // rax
  char *v67; // rax
  int v68; // r11d
  __int64 v69; // rdx
  int v70; // ecx
  char *v71; // rsi
  __int64 v72; // rdi
  int v73; // r8d
  int v74; // edi
  int v75; // ebx
  __int64 v76; // rdx
  size_t v77; // rdx
  char *v78; // rax
  __int64 v79; // rdx
  size_t v80; // rdx
  char *v81; // rax
  __int64 *v82; // r11
  int v83; // r10d
  __int64 *v84; // r9
  int v85; // r10d
  __m128i v86; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD *v87; // [rsp+18h] [rbp-D0h]
  __int64 v88; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v89; // [rsp+28h] [rbp-C0h]
  __int64 v90; // [rsp+30h] [rbp-B8h]
  char *v91; // [rsp+38h] [rbp-B0h]
  char *v92; // [rsp+40h] [rbp-A8h]
  char *v93; // [rsp+48h] [rbp-A0h]
  _QWORD v94[2]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v95; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v96[2]; // [rsp+70h] [rbp-78h] BYREF
  __m128 v97; // [rsp+80h] [rbp-68h]
  _QWORD v98[2]; // [rsp+90h] [rbp-58h] BYREF
  __m128 v99; // [rsp+A0h] [rbp-48h]

  v87 = a1;
  v86.m128i_i64[0] = (__int64)v94;
  v5 = *a3;
  v6 = **a3;
  v7 = v5 + 2;
  v5 += 3;
  *a3 = v7;
  v8 = _mm_loadh_ps((const double *)v86.m128i_i64);
  v94[0] = v6;
  v9 = *(v5 - 1);
  *a3 = v5;
  v86 = (__m128i)v8;
  v94[1] = 0;
  v97.m128_u64[0] = 0;
  v10 = (__m128i *)operator new(0x18u);
  v11 = _mm_load_si128(&v86);
  v12 = v10;
  v10[1].m128i_i64[0] = a2;
  *v10 = v11;
  v96[0] = v10;
  v86.m128i_i64[0] = (__int64)sub_21C0470;
  v99.m128_u64[0] = 0;
  v97 = _mm_loadh_ps((const double *)v86.m128i_i64);
  v13 = (__m128i *)operator new(0x18u);
  v14 = v12[1].m128i_i64[0];
  v15 = *a3;
  v16 = _mm_loadu_si128(v12);
  v98[0] = v13;
  v13[1].m128i_i64[0] = v14;
  *v13 = v16;
  v86.m128i_i64[0] = (__int64)v98;
  v99 = v97;
  sub_21C7350(&v95, v15, v9, v98);
  if ( v99.m128_u64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v99.m128_u64[0])(v98, v98, 3);
  v19 = v95;
  v20 = v97.m128_u64[0];
  if ( !v95 )
  {
    v22 = &(*a3)[(v9 != 0) + ((v9 - (unsigned __int64)(v9 != 0)) >> 3)];
    *a3 = v22;
    if ( v20 )
    {
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v20)(v96, v96, 3);
      v22 = *a3;
    }
    v23 = *v22;
    v24 = v22 + 1;
    *a3 = v24;
    v89 = v23;
    if ( !v23 )
    {
LABEL_29:
      sub_21C2B50(v87, a2, a3, v20, v17, v18);
      return v87;
    }
    v25 = 0;
    v88 = a2 + 208;
    while ( 1 )
    {
      v31 = *(unsigned int *)(a2 + 224);
      v32 = *v24;
      *a3 = v24 + 1;
      v33 = *(char **)(a2 + 208);
      if ( !(_DWORD)v31 )
        goto LABEL_17;
      v26 = ((0xBF58476D1CE4E5B9LL * v32) >> 31) ^ (0xBF58476D1CE4E5B9LL * v32);
      v27 = (unsigned int)(v31 - 1);
      v28 = v26 & (v31 - 1);
      v29 = (__int64 *)&v33[8 * v28];
      v30 = *v29;
      if ( v32 == *v29 )
      {
LABEL_13:
        sub_20124D0((__m128 *)v86.m128i_i64[0], v29, (__int64 *)&v33[8 * v31], v88, 1);
        goto LABEL_14;
      }
      v51 = nullptr;
      v18 = 1;
      if ( v30 != -1 )
      {
        while ( 1 )
        {
          if ( v30 == -2 && !v51 )
            v51 = v29;
          v28 = v27 & (v18 + v28);
          v29 = (__int64 *)&v33[8 * v28];
          v30 = *v29;
          if ( v32 == *v29 )
            goto LABEL_13;
          if ( v30 == -1 )
            break;
          v18 = (unsigned int)(v18 + 1);
        }
        if ( v51 )
          v29 = v51;
      }
      v52 = *(_DWORD *)(a2 + 216) + 1;
      v17 = (unsigned int)(4 * v52);
      if ( (unsigned int)v17 < 3 * (int)v31 )
      {
        v53 = (unsigned int)v31 >> 3;
        if ( (int)v31 - *(_DWORD *)(a2 + 220) - v52 > (unsigned int)v53 )
          goto LABEL_33;
        LODWORD(v90) = v31;
        v56 = (((v27 >> 1) | v27) >> 2) | (v27 >> 1) | v27;
        v57 = (((v56 >> 4) | v56) >> 8) | (v56 >> 4) | v56;
        v58 = ((v57 >> 16) | v57) + 1;
        if ( (unsigned int)v58 < 0x40 )
          LODWORD(v58) = 64;
        *(_DWORD *)(a2 + 224) = v58;
        v59 = (char *)sub_22300B0(8LL * (unsigned int)v58, 8, 64, v31, v53, v18);
        v60 = (unsigned int)v90;
        v61 = v59;
        *(_QWORD *)(a2 + 208) = v59;
        if ( v33 )
        {
          v62 = *(unsigned int *)(a2 + 224);
          *(_QWORD *)(a2 + 216) = 0;
          v90 = 8 * v60;
          v63 = &v33[8 * v60];
          v64 = v62;
          v65 = 8 * v62;
          if ( v59 != &v59[v65] )
          {
            LODWORD(v92) = v64;
            v91 = &v33[8 * v60];
            v66 = (char *)memset(v59, 255, v65);
            v63 = v91;
            v64 = (int)v92;
            v61 = v66;
          }
          v67 = v33;
          v68 = v64 - 1;
          do
          {
            v69 = *(_QWORD *)v67;
            if ( (unsigned __int64)(*(_QWORD *)v67 + 2LL) > 1 )
            {
              if ( !v64 )
              {
                *(_QWORD *)&dword_0 = 0;
                BUG();
              }
              v70 = v68 & (((0xBF58476D1CE4E5B9LL * v69) >> 31) ^ (484763065 * v69));
              v71 = &v61[8 * v70];
              v72 = *(_QWORD *)v71;
              if ( v69 != *(_QWORD *)v71 && v72 != -1 )
              {
                v91 = nullptr;
                LODWORD(v92) = 1;
                v93 = v67;
                while ( 1 )
                {
                  if ( !v91 )
                  {
                    if ( v72 != -2 )
                      v71 = v91;
                    v91 = v71;
                  }
                  v70 = v68 & ((_DWORD)v92 + v70);
                  v71 = &v61[8 * v70];
                  v72 = *(_QWORD *)v71;
                  if ( v69 == *(_QWORD *)v71 )
                  {
                    v67 = v93;
                    goto LABEL_49;
                  }
                  if ( v72 == -1 )
                    break;
                  LODWORD(v92) = (_DWORD)v92 + 1;
                }
                v67 = v93;
                if ( v91 )
                  v71 = v91;
              }
LABEL_49:
              *(_QWORD *)v71 = v69;
              ++*(_DWORD *)(a2 + 216);
            }
            v67 += 8;
          }
          while ( v63 != v67 );
          operator delete(v33, v90, 8);
          v33 = *(char **)(a2 + 208);
          v31 = *(unsigned int *)(a2 + 224);
          v52 = *(_DWORD *)(a2 + 216) + 1;
        }
        else
        {
          v79 = *(unsigned int *)(a2 + 224);
          *(_QWORD *)(a2 + 216) = 0;
          v31 = v79;
          v80 = 8 * v79;
          if ( v59 == &v59[v80] )
          {
            v33 = v59;
            v52 = 1;
          }
          else
          {
            LODWORD(v90) = v31;
            v81 = (char *)memset(v59, 255, v80);
            v52 = 1;
            v31 = (unsigned int)v90;
            v33 = v81;
          }
        }
        if ( !(_DWORD)v31 )
        {
LABEL_123:
          ++*(_DWORD *)(a2 + 216);
          BUG();
        }
        v75 = (v31 - 1) & v26;
        v29 = (__int64 *)&v33[8 * v75];
        v54 = *v29;
        if ( v32 == *v29 )
          goto LABEL_34;
        if ( v54 != -1 )
        {
          v84 = (__int64 *)&v33[8 * v75];
          v85 = 1;
          v29 = nullptr;
          while ( 1 )
          {
            if ( !v29 && v54 == -2 )
              v29 = v84;
            v75 = (v31 - 1) & (v85 + v75);
            v84 = (__int64 *)&v33[8 * v75];
            v54 = *v84;
            if ( v32 == *v84 )
            {
              v29 = (__int64 *)&v33[8 * v75];
              goto LABEL_34;
            }
            if ( v54 == -1 )
              break;
            ++v85;
          }
          if ( v29 )
          {
LABEL_33:
            v54 = *v29;
            goto LABEL_34;
          }
          v29 = (__int64 *)&v33[8 * v75];
        }
      }
      else
      {
LABEL_17:
        LODWORD(v90) = v31;
        v34 = (((((((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v31 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v31 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 8)
            | (((((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v31 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v31 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1);
        v35 = ((v34 >> 16) | v34) + 1;
        if ( (unsigned int)v35 < 0x40 )
          LODWORD(v35) = 64;
        *(_DWORD *)(a2 + 224) = v35;
        v36 = (char *)sub_22300B0(8LL * (unsigned int)v35, 8, 64, v31, v17, v18);
        v37 = (unsigned int)v90;
        v38 = v36;
        *(_QWORD *)(a2 + 208) = v36;
        if ( v33 )
        {
          v39 = *(unsigned int *)(a2 + 224);
          v40 = 8 * v37;
          *(_QWORD *)(a2 + 216) = 0;
          v41 = &v33[8 * v37];
          v42 = v39;
          v43 = 8 * v39;
          if ( v36 != &v36[v43] )
          {
            LODWORD(v91) = v42;
            v90 = 8 * v37;
            v44 = (char *)memset(v36, 255, v43);
            v40 = v90;
            v42 = (int)v91;
            v38 = v44;
          }
          v45 = v33;
          for ( i = v42 - 1; v41 != v45; v45 += 8 )
          {
            v47 = *(_QWORD *)v45;
            if ( (unsigned __int64)(*(_QWORD *)v45 + 2LL) > 1 )
            {
              if ( !v42 )
              {
                *(_QWORD *)&dword_0 = 0;
                BUG();
              }
              v48 = i & (((0xBF58476D1CE4E5B9LL * v47) >> 31) ^ (484763065 * v47));
              v49 = &v38[8 * v48];
              v50 = *(_QWORD *)v49;
              if ( *(_QWORD *)v49 != v47 && v50 != -1 )
              {
                v90 = 0;
                LODWORD(v91) = 1;
                v92 = v45;
                while ( 1 )
                {
                  if ( v50 == -2 )
                  {
                    if ( v90 )
                      v49 = (char *)v90;
                    v90 = (__int64)v49;
                  }
                  v48 = i & ((_DWORD)v91 + v48);
                  v49 = &v38[8 * v48];
                  v50 = *(_QWORD *)v49;
                  if ( v47 == *(_QWORD *)v49 )
                  {
                    v45 = v92;
                    goto LABEL_28;
                  }
                  if ( v50 == -1 )
                    break;
                  LODWORD(v91) = (_DWORD)v91 + 1;
                }
                v45 = v92;
                if ( v90 )
                  v49 = (char *)v90;
              }
LABEL_28:
              *(_QWORD *)v49 = v47;
              ++*(_DWORD *)(a2 + 216);
            }
          }
          operator delete(v33, v40, 8);
          v33 = *(char **)(a2 + 208);
          v31 = *(unsigned int *)(a2 + 224);
          v52 = *(_DWORD *)(a2 + 216) + 1;
        }
        else
        {
          v76 = *(unsigned int *)(a2 + 224);
          *(_QWORD *)(a2 + 216) = 0;
          v31 = v76;
          v77 = 8 * v76;
          if ( v36 == &v36[v77] )
          {
            v33 = v36;
            v52 = 1;
          }
          else
          {
            LODWORD(v90) = v31;
            v78 = (char *)memset(v36, 255, v77);
            v52 = 1;
            v31 = (unsigned int)v90;
            v33 = v78;
          }
        }
        if ( !(_DWORD)v31 )
          goto LABEL_123;
        v73 = v31 - 1;
        v74 = (v31 - 1) & (((0xBF58476D1CE4E5B9LL * v32) >> 31) ^ (484763065 * v32));
        v29 = (__int64 *)&v33[8 * v74];
        v54 = *v29;
        if ( *v29 == v32 )
        {
          v54 = v32;
LABEL_34:
          *(_DWORD *)(a2 + 216) = v52;
          if ( v54 != -1 )
            --*(_DWORD *)(a2 + 220);
          goto LABEL_36;
        }
        if ( v54 != -1 )
        {
          v82 = (__int64 *)&v33[8
                              * (v73 & ((unsigned int)((0xBF58476D1CE4E5B9LL * v32) >> 31) ^ (484763065 * (_DWORD)v32)))];
          v83 = 1;
          v29 = nullptr;
          while ( 1 )
          {
            if ( v54 == -2 && !v29 )
              v29 = v82;
            v74 = v73 & (v83 + v74);
            v82 = (__int64 *)&v33[8 * v74];
            v54 = *v82;
            if ( v32 == *v82 )
            {
              v29 = (__int64 *)&v33[8 * v74];
              goto LABEL_34;
            }
            if ( v54 == -1 )
              break;
            ++v83;
          }
          if ( v29 )
            goto LABEL_33;
          v29 = (__int64 *)&v33[8 * v74];
        }
      }
      *(_DWORD *)(a2 + 216) = v52;
LABEL_36:
      *v29 = v32;
      sub_20124D0((__m128 *)v86.m128i_i64[0], v29, (__int64 *)&v33[8 * v31], v88, 1);
      v55 = *(unsigned int *)(a2 + 240);
      v20 = *(unsigned int *)(a2 + 244);
      if ( v55 + 1 > v20 )
      {
        sub_2237220(a2 + 232, a2 + 248, v55 + 1, 8);
        v55 = *(unsigned int *)(a2 + 240);
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 232) + 8 * v55) = v32;
      ++*(_DWORD *)(a2 + 240);
LABEL_14:
      if ( ++v25 == v89 )
        goto LABEL_29;
      v24 = *a3;
    }
  }
  if ( v97.m128_u64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v97.m128_u64[0])(v96, v96, 3);
  *v87 = v19;
  return v87;
}
