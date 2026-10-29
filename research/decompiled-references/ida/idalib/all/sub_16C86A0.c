void __fastcall sub_16C86A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rcx
  __m128i v12; // xmm1
  __m128 v13; // xmm2
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128 v16; // xmm1
  __int64 v17; // rdi
  int v18; // esi
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i si128; // xmm0
  __m128i v25; // xmm2
  __m128i v26; // xmm1
  __m128i v27; // xmm3
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // r14d
  void *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // edx
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  __m128 v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 *v48; // rax
  bool v49; // al
  unsigned int v50; // eax
  __m128 v51; // [rsp+10h] [rbp-278h] BYREF
  __m128i v52; // [rsp+20h] [rbp-268h] BYREF
  __m128i v53; // [rsp+30h] [rbp-258h] BYREF
  __m128i v54; // [rsp+40h] [rbp-248h] BYREF
  _DWORD *v55; // [rsp+50h] [rbp-238h] BYREF
  __int64 v56; // [rsp+58h] [rbp-230h] BYREF
  char v57; // [rsp+62h] [rbp-226h]
  char v58; // [rsp+63h] [rbp-225h] BYREF
  unsigned int v59; // [rsp+64h] [rbp-224h] BYREF
  unsigned int v60; // [rsp+68h] [rbp-220h] BYREF
  int v61; // [rsp+6Ch] [rbp-21Ch]
  __int64 v62; // [rsp+70h] [rbp-218h] BYREF
  __int64 v63; // [rsp+78h] [rbp-210h] BYREF
  char *v64; // [rsp+80h] [rbp-208h] BYREF
  size_t v65; // [rsp+88h] [rbp-200h]
  void *v66; // [rsp+90h] [rbp-1F8h] BYREF
  unsigned int v67; // [rsp+98h] [rbp-1F0h]
  char v68; // [rsp+9Ch] [rbp-1ECh]
  __m128i v69; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-1D8h]
  void *v71[2]; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v72; // [rsp+D0h] [rbp-1B8h]
  __int128 v73; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v74; // [rsp+F0h] [rbp-198h]
  _QWORD v75[4]; // [rsp+100h] [rbp-188h] BYREF
  __int64 v76[2]; // [rsp+120h] [rbp-168h] BYREF
  char v77; // [rsp+130h] [rbp-158h]
  unsigned __int8 *v78; // [rsp+140h] [rbp-148h] BYREF
  size_t v79; // [rsp+148h] [rbp-140h]
  _OWORD v80[2]; // [rsp+160h] [rbp-128h] BYREF
  __m128i v81; // [rsp+180h] [rbp-108h] BYREF
  __int64 v82; // [rsp+190h] [rbp-F8h]
  unsigned int *v83; // [rsp+198h] [rbp-F0h]
  void *v84[2]; // [rsp+1A0h] [rbp-E8h] BYREF
  __m128i v85; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 *v86; // [rsp+1D0h] [rbp-B8h]
  __int64 v87; // [rsp+1D8h] [rbp-B0h]
  unsigned int *v88; // [rsp+1E0h] [rbp-A8h]
  __m256i v89; // [rsp+1F0h] [rbp-98h] BYREF
  __int64 v90; // [rsp+210h] [rbp-78h]
  void *ptr; // [rsp+220h] [rbp-68h] BYREF
  __int128 v92; // [rsp+228h] [rbp-60h]
  _QWORD v93[10]; // [rsp+238h] [rbp-50h] BYREF

  v56 = a2;
  v55 = a3;
  if ( ((*a3 >> 14) & 0xC) != 0
    || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640) - 4) <= 1
    || *(_BYTE *)(a1 + 2440) )
  {
    return;
  }
  v57 = 0;
  v7 = a2;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_10;
  v8 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v9 = (_QWORD *)*v8;
  v10 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( (unsigned __int64)v9 >= v10 )
  {
    if ( v9 == (_QWORD *)v10 )
    {
LABEL_10:
      v62 = 0;
      goto LABEL_11;
    }
    while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 201 )
    {
      v10 += 8LL;
      if ( v9 == (_QWORD *)v10 )
        goto LABEL_10;
    }
  }
  else
  {
    v11 = v9;
    while ( *(_WORD *)(*v11 + 36LL) != 201 )
    {
      if ( (_QWORD *)v10 == ++v11 )
        goto LABEL_10;
    }
    if ( (_QWORD *)v10 == v11 )
      goto LABEL_10;
  }
  v47 = *v9;
  if ( *(_WORD *)(*v9 + 36LL) != 201 )
  {
    v48 = v9 + 1;
    do
      v47 = *v48++;
    while ( *(_WORD *)(v47 + 36) != 201 );
  }
  v62 = v47;
  v7 = *(_QWORD *)(v47 + 40);
  v57 = 1;
LABEL_11:
  v59 = sub_B75A50(v7, 1);
  if ( v59 )
  {
    v51.m128_u64[0] = (unsigned __int64)v80;
    v12 = _mm_loadl_epi64((const __m128i *)&v51);
    v51.m128_u64[0] = (unsigned __int64)&v55;
    v13 = _mm_loadh_ps((const double *)v51.m128_u64);
    v51.m128_u64[0] = (unsigned __int64)&v56;
    v14 = _mm_loadl_epi64((const __m128i *)&v51);
    v54 = (__m128i)v13;
    v51.m128_u64[0] = (unsigned __int64)&v62;
    v15 = *(_QWORD *)(a1 + 248);
    v53 = _mm_unpacklo_epi64(v14, v12);
    v16 = _mm_loadh_ps((const double *)v51.m128_u64);
    v17 = *(_QWORD *)(v15 + 17448);
    v51.m128_u64[0] = (unsigned __int64)&v55;
    v52 = (__m128i)v16;
    v18 = *(_DWORD *)(v17 + 136);
    v51 = _mm_loadh_ps((const double *)v51.m128_u64);
    v19 = sub_102DB30((unsigned __int8 *)v17, v18);
    si128 = _mm_load_si128((const __m128i *)&v51);
    v58 = 0;
    v25 = _mm_load_si128(&v54);
    v26 = _mm_load_si128(&v52);
    v60 = v19;
    v88 = &v60;
    v27 = _mm_load_si128(&v53);
    v83 = &v60;
    v75[1] = &v59;
    v75[2] = &v58;
    v80[1] = si128;
    v80[0] = v26;
    v69 = v25;
    v70 = a1;
    v85 = v27;
    v86 = (__int64 *)&v55;
    v87 = a1;
    v81 = v25;
    v82 = a1;
    *(_OWORD *)v71 = 0;
    v72 = 0;
    v73 = 0;
    v74 = 0;
    v61 = 0;
    v75[0] = a1;
    if ( v59 <= 0x4C8 )
    {
      if ( v59 < 0x4C7 )
      {
        if ( v59 > 0x3BD )
        {
          if ( v59 != 1144 )
          {
            if ( v59 <= 0x478 )
            {
              if ( v59 != 1139 )
              {
                if ( v59 < 0x473 || v59 - 1141 > 1 )
                  goto LABEL_86;
                v28 = 2;
                if ( v59 != 1141 )
                  v28 = 6;
                v29 = sub_BFBAE0(*(_QWORD *)&v55[2 * ((*((_BYTE *)v55 + 2) & 8) != 0) + 10 + v28]);
                v78 = nullptr;
                v79 = 0;
                if ( (*(_WORD *)v29 & 0x1FF) != 9
                  || ((*(_BYTE *)(v29 + 2) >> 3) & 5) != 0
                  || !(unsigned __int8)sub_16B6EA0(v29, (__int64 *)&v78, v76, *(_QWORD **)(a1 + 248)) )
                {
                  goto LABEL_86;
                }
                sub_16B7870((__int64)&v89, v78, v79);
                if ( !(unsigned __int8)sub_ECB4A0(
                                         v89.m256i_i64,
                                         (char *)v78,
                                         (char *)&v78[v76[0]],
                                         *(_QWORD *)(a1 + 232),
                                         *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL),
                                         0) )
                {
                  LODWORD(v84[1]) = 64;
                  BYTE4(v84[1]) = 1;
                  v61 = 6931 - (v89.m256i_i8[16] != 0);
                  v84[0] = (void *)v89.m256i_i64[1];
                  sub_2206D90(&ptr, v84, v60);
                  v33 = v92;
                  v34 = ptr;
                  if ( (_BYTE)v72 )
                  {
                    if ( LODWORD(v71[1]) > 0x40 && v71[0] )
                      operator delete[](v71[0]);
                    v71[0] = v34;
                    LODWORD(v71[1]) = v33;
                    BYTE4(v71[1]) = 1;
                  }
                  else
                  {
                    LODWORD(v71[1]) = v92;
                    v71[0] = ptr;
                    BYTE4(v71[1]) = 1;
                    LOBYTE(v72) = 1;
                  }
                  if ( LODWORD(v84[1]) > 0x40 && v84[0] )
                    operator delete[](v84[0]);
                  if ( v59 == 1142 )
                  {
                    sub_16B9480((__int64)&ptr, &v69, 2u, v30, v31, v32);
                    sub_16C53C0((__int64)&v73, (__int64)&ptr);
                    sub_98E4B0((__int64)&ptr);
                    v58 = 1;
                  }
                  else
                  {
                    sub_16B96B0((__int64)&ptr, (__int64)&v85, 0, v30);
                    sub_16C53C0((__int64)&v73, (__int64)&ptr);
                    sub_98E4B0((__int64)&ptr);
                  }
                  v89.m256i_i64[0] = (__int64)&off_2BC6678;
                  nullsub_479();
                  goto LABEL_59;
                }
                v89.m256i_i64[0] = (__int64)&off_2BC6678;
                nullsub_479();
LABEL_86:
                sub_98E4B0((__int64)&v73);
                sub_98E4B0((__int64)v71);
                return;
              }
              goto LABEL_101;
            }
            if ( v59 != 1162 )
            {
              if ( v59 < 0x48A || v59 - 1208 > 1 )
                goto LABEL_86;
LABEL_47:
              v61 = 6939;
              sub_16B9480((__int64)&ptr, &v69, 1u, v21, v22, v23);
              sub_16C53C0((__int64)v71, (__int64)&ptr);
              sub_98E4B0((__int64)&ptr);
              v39 = sub_BFBAE0(*(_QWORD *)&v55[2 * ((*((_BYTE *)v55 + 2) & 8) != 0) + 14]);
              v64 = nullptr;
              v65 = 0;
              if ( (_BYTE)v72
                && (*(_WORD *)v39 & 0x1FF) == 9
                && ((*(_BYTE *)(v39 + 2) >> 3) & 5) == 0
                && (unsigned __int8)sub_16B6EA0(v39, (__int64 *)&v64, &v63, *(_QWORD **)(a1 + 248)) )
              {
                sub_16B7870((__int64)v76, v64, v65);
                if ( !(unsigned __int8)sub_ECB4A0(
                                         v76,
                                         v64,
                                         &v64[v63],
                                         *(_QWORD *)(a1 + 232),
                                         *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL),
                                         0) )
                {
                  v89.m256i_i8[12] = 1;
                  v89.m256i_i64[0] = v76[1];
                  v89.m256i_i32[2] = 64;
                  sub_2206D90(&ptr, &v89, v60);
                  v68 = 1;
                  v67 = v92;
                  v66 = ptr;
                  if ( v89.m256i_i32[2] > 0x40u && v89.m256i_i64[0] )
                    operator delete[]((void *)v89.m256i_i64[0]);
                  if ( v68 )
                    v49 = (int)sub_2205DB0(&v66, v71) > 0;
                  else
                    v49 = (int)sub_2205E20(&v66, v71) > 0;
                  if ( v49 && (unsigned __int8)sub_142BC90((__int64)v71, nullptr) )
                  {
                    v89.m256i_i64[0] = (__int64)&v89.m256i_i64[3];
                    *(__m128i *)&v89.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
                    v92 = *(_OWORD *)&v89.m256i_u64[1];
                    v51.m128_i32[0] = 6935 - (v77 != 0);
                    v52.m128i_i32[0] = v51.m128_i32[0];
                    ptr = v93;
                    sub_220BA90((unsigned int)v71, (unsigned int)&v89, 10, BYTE4(v71[1]) ^ 1, 0, 1, 0);
                    sub_220BA90((unsigned int)&v66, (unsigned int)&ptr, 10, (unsigned __int8)v68 ^ 1, 0, 1, 0);
                    sub_168B9B0((__int64)&v78, a1 + 8, v51.m128_i32[0]);
                    v52.m128i_i64[0] = (__int64)v84;
                    sub_16BC760((__int64)v84, (__int64)v75);
                    sub_AEC220(&v78, (_BYTE *)v84[0], (signed __int64)v84[1]);
                    sub_AEC220(&v78, v89.m256i_i64[0], v89.m256i_i64[1]);
                    sub_AEC220(&v78, ptr, v92);
                    v51.m128_u64[0] = (unsigned __int64)v55;
                    v50 = sub_BF6D70((__int64)v55);
                    sub_18CAED0(a1, v50, v51.m128_u64[0], &v78);
                    if ( v84[0] != (void *)(v52.m128i_i64[0] + 16) )
                      operator delete(v84[0]);
                    if ( v78 && v79 )
                      sub_1580C40(v79, (unsigned __int64)v78);
                    if ( ptr != v93 )
                      free(ptr);
                    if ( (unsigned __int64 *)v89.m256i_i64[0] != &v89.m256i_u64[3] )
                      free((void *)v89.m256i_i64[0]);
                  }
                  if ( v67 > 0x40 && v66 )
                    operator delete[](v66);
                }
                v76[0] = (__int64)&off_2BC6678;
                nullsub_479();
              }
              goto LABEL_92;
            }
            LODWORD(v66) = 1;
            v42 = 0;
LABEL_79:
            v43 = sub_BFBAE0(*(_QWORD *)&v55[2 * ((*((_BYTE *)v55 + 2) & 8) != 0) + 10 + v42]);
            v78 = nullptr;
            v79 = 0;
            if ( (*(_WORD *)v43 & 0x1FF) == 9
              && ((*(_BYTE *)(v43 + 2) >> 3) & 5) == 0
              && (unsigned __int8)sub_16B6EA0(v43, (__int64 *)&v78, v76, *(_QWORD **)(a1 + 248)) )
            {
              v90 = a1;
              v51.m128_u64[0] = (unsigned __int64)&v66;
              v44 = *(_QWORD *)(a1 + 232);
              v52.m128i_i64[0] = (__int64)v75;
              *(__m128 *)v89.m256i_i8 = _mm_loadh_ps((const double *)v51.m128_u64);
              v52.m128i_i64[0] = (__int64)&v55;
              ptr = &off_2BC65E8;
              v45 = _mm_loadh_ps((const double *)v52.m128i_i64);
              v52.m128i_i64[0] = (__int64)&v85;
              *(_QWORD *)&v92 = sub_16B98C0;
              *((_QWORD *)&v92 + 1) = v84;
              *(__m128 *)&v89.m256i_u64[2] = v45;
              v93[0] = sub_16BED10;
              v93[1] = &v89;
              v46 = *(_QWORD *)(a1 + 248);
              *(__m128 *)v84 = _mm_loadh_ps((const double *)v51.m128_u64);
              sub_EE6B00((__int64)&ptr, (char *)v78, (char *)&v78[v76[0]], v44, *(_QWORD *)(v46 + 17448));
              ptr = &off_2BC65E8;
              nullsub_479();
            }
            goto LABEL_86;
          }
LABEL_78:
          LODWORD(v66) = 2;
          v42 = 2;
          goto LABEL_79;
        }
        if ( v59 < 0x3BC )
        {
          if ( v59 <= 0x3B6 )
          {
            if ( v59 < 0x3B1 && v59 != 223 )
            {
              if ( v59 != 560 )
                goto LABEL_86;
              goto LABEL_78;
            }
            goto LABEL_89;
          }
          if ( v59 < 0x3B8 )
            goto LABEL_86;
          if ( v59 > 0x3BA )
          {
LABEL_89:
            v61 = 6938;
            goto LABEL_90;
          }
        }
        goto LABEL_57;
      }
LABEL_40:
      v61 = 6940;
      sub_16B90C0((__int64)&ptr, (__int64)&v81, v20, v21);
LABEL_91:
      sub_16C53C0((__int64)v71, (__int64)&ptr);
      sub_98E4B0((__int64)&ptr);
LABEL_92:
      sub_16B96B0((__int64)&ptr, (__int64)&v85, 0, v40);
      sub_16C53C0((__int64)&v73, (__int64)&ptr);
      sub_98E4B0((__int64)&ptr);
      goto LABEL_59;
    }
    if ( v59 > 0x4E1 )
    {
      if ( v59 > 0x4FA )
      {
        if ( v59 == 1456 )
        {
LABEL_101:
          v61 = 6632;
          sub_16B9480((__int64)&ptr, &v69, 1u, v21, v22, v23);
          sub_16C53C0((__int64)v71, (__int64)&ptr);
          sub_98E4B0((__int64)&ptr);
          v38 = 3;
          goto LABEL_58;
        }
        if ( v59 < 0x5B0 || v59 - 1472 > 1 )
          goto LABEL_86;
        goto LABEL_47;
      }
      if ( v59 < 0x4F9 )
      {
        if ( v59 == 1264 )
          goto LABEL_42;
        if ( v59 < 0x4F0 || v59 - 1267 > 1 )
          goto LABEL_86;
      }
    }
    else
    {
      if ( v59 >= 0x4E0 )
        goto LABEL_72;
      if ( v59 != 1228 )
      {
        if ( v59 > 0x4CC )
        {
          if ( v59 < 0x4D5 )
            goto LABEL_86;
          if ( v59 <= 0x4D6 )
            goto LABEL_40;
          if ( v59 - 1244 > 1 )
            goto LABEL_86;
LABEL_72:
          v61 = 6939;
LABEL_90:
          sub_16B9480((__int64)&ptr, &v69, v55[4] - 1, v21, v22, v23);
          goto LABEL_91;
        }
        if ( v59 != 1225 )
          goto LABEL_72;
LABEL_42:
        v61 = 6940;
        sub_16B90C0((__int64)&ptr, (__int64)&v81, v20, v21);
        sub_16C53C0((__int64)v71, (__int64)&ptr);
        sub_98E4B0((__int64)&ptr);
        v38 = 2;
LABEL_58:
        sub_16B9480((__int64)&ptr, &v69, v38, v35, v36, v37);
        sub_16C53C0((__int64)&v73, (__int64)&ptr);
        sub_98E4B0((__int64)&ptr);
        v58 = 1;
LABEL_59:
        if ( (_BYTE)v72 && (_BYTE)v74 && (int)sub_98E2D0((__int64 *)v71, (__int64 *)&v73) > 0 )
        {
          v51.m128_u64[0] = (unsigned __int64)v84;
          sub_16BC760((__int64)v84, (__int64)v75);
          v89.m256i_i64[0] = (__int64)&v89.m256i_i64[3];
          *(__m128i *)&v89.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
          ptr = v93;
          v92 = *(_OWORD *)&v89.m256i_u64[1];
          sub_220BA90((unsigned int)&v73, (unsigned int)&v89, 10, BYTE12(v73) ^ 1, 0, 1, 0);
          sub_220BA90((unsigned int)v71, (unsigned int)&ptr, 10, BYTE4(v71[1]) ^ 1, 0, 1, 0);
          sub_168B9B0((__int64)&v78, a1 + 8, v61);
          sub_AEC220(&v78, (_BYTE *)v84[0], (signed __int64)v84[1]);
          sub_AEC220(&v78, v89.m256i_i64[0], v89.m256i_i64[1]);
          sub_AEC220(&v78, ptr, v92);
          v52.m128i_i64[0] = (__int64)v55;
          v41 = sub_BF6D70((__int64)v55);
          sub_18CAED0(a1, v41, v52.m128i_i64[0], &v78);
          if ( v78 && v79 )
            sub_1580C40(v79, (unsigned __int64)v78);
          if ( ptr != v93 )
            free(ptr);
          if ( (unsigned __int64 *)v89.m256i_i64[0] != &v89.m256i_u64[3] )
            free((void *)v89.m256i_i64[0]);
          if ( v84[0] != (void *)(v51.m128_u64[0] + 16) )
            operator delete(v84[0]);
        }
        goto LABEL_86;
      }
    }
LABEL_57:
    v61 = 6632;
    sub_16B9480((__int64)&ptr, &v69, v55[4] - 2, v21, v22, v23);
    sub_16C53C0((__int64)v71, (__int64)&ptr);
    sub_98E4B0((__int64)&ptr);
    v38 = v55[4] - 1;
    goto LABEL_58;
  }
}
