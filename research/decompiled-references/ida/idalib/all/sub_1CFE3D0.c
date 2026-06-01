__int64 __fastcall sub_1CFE3D0(__int64 a1, unsigned __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __m128i v10; // xmm0
  __m128 *v11; // rax
  __m128 v12; // xmm0
  const __m128i *v13; // rdx
  __int64 v14; // r14
  __m128 v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r15d
  int v21; // edx
  unsigned __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rax
  __m128i *v25; // rdx
  __int64 v26; // r15
  __int64 *v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rdx
  bool v30; // zf
  __int64 v31; // rdx
  char v32; // dl
  __int64 *v33; // r13
  unsigned int v34; // eax
  __int32 v35; // rax^4
  int v36; // ebp
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbp
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r13
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 *v48; // rsi
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  __int64 v51; // rsi
  unsigned __int64 v52; // rax
  __int32 v53; // ecx
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // rdx
  char v56; // si
  __int64 v57; // r13
  __int64 v58; // rcx
  __int64 v59; // rdx
  unsigned int v60; // edi
  _QWORD *v61; // rsi
  unsigned __int64 v62; // r15
  __int64 v63; // rax
  _QWORD *v64; // rdx
  unsigned __int64 v65; // r14
  __int32 v66; // eax
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // rdx
  unsigned int v70; // ecx
  __int64 *v71; // rsi
  __int64 v72; // r8
  unsigned __int64 v73; // rax
  __int64 v74; // rsi
  unsigned __int64 v75; // r14
  __int32 v76; // eax
  unsigned __int64 v77; // r15
  int v78; // eax
  unsigned __int64 v79; // rdx
  __int64 v80; // rdi
  int v81; // esi
  int v82; // r8d
  __int64 v83; // r9
  int v84; // esi
  int v85; // r8d
  __int64 v86; // r9
  unsigned __int64 v87; // r14
  __int64 v88; // rsi
  __int64 v89; // rdx
  unsigned __int64 v90; // r13
  unsigned int v91; // eax
  unsigned __int64 v92; // rax
  __int64 *v93; // r12
  unsigned int v94; // eax
  __int64 v95; // rax
  __m128i v96; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v97; // [rsp+10h] [rbp-1A8h] BYREF
  void *s2; // [rsp+18h] [rbp-1A0h] BYREF
  __m128i *v99; // [rsp+20h] [rbp-198h] BYREF
  void **p_ptr; // [rsp+28h] [rbp-190h]
  unsigned __int64 v101; // [rsp+30h] [rbp-188h]
  __m128 *v102; // [rsp+38h] [rbp-180h]
  __int64 v103; // [rsp+40h] [rbp-178h] BYREF
  __int64 v104; // [rsp+48h] [rbp-170h] BYREF
  __m128 v105; // [rsp+50h] [rbp-168h] BYREF
  __m128 v106; // [rsp+60h] [rbp-158h] BYREF
  __int128 v107; // [rsp+70h] [rbp-148h] BYREF
  void *s1[2]; // [rsp+80h] [rbp-138h]
  __int128 v109; // [rsp+90h] [rbp-128h]
  void *ptr; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-110h]
  _BYTE v112[64]; // [rsp+B0h] [rbp-108h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-C8h] BYREF
  int v114; // [rsp+100h] [rbp-B8h]
  int v115; // [rsp+104h] [rbp-B4h]

  v101 = a2;
  p_ptr = &ptr;
  s2 = a3;
  v97 = a5;
  ptr = v112;
  v111 = 0x400000000LL;
  if ( !a2 )
  {
    v107 = 0;
    *(_OWORD *)s1 = 0;
    v109 = 0;
    goto LABEL_99;
  }
  v7 = a2;
  v8 = 4;
  v9 = 0;
  while ( 1 )
  {
    v96.m128i_i64[0] = v7;
    v10 = (__m128i)_mm_loadh_ps((const double *)&s2);
    if ( v9 + 1 > v8 )
    {
      v96 = v10;
      sub_2237220(p_ptr, v112, v9 + 1, 16);
      v10 = _mm_load_si128(&v96);
      v11 = (__m128 *)((char *)ptr + 16 * (unsigned int)v111);
    }
    else
    {
      v11 = (__m128 *)((char *)ptr + 16 * v9);
    }
    *v11 = (__m128)v10;
    v9 = (unsigned int)(v111 + 1);
    LODWORD(v111) = v111 + 1;
    v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      break;
    v8 = HIDWORD(v111);
  }
  v12.m128_u64[0] = 0;
  v107 = 0;
  *(_OWORD *)s1 = 0;
  v109 = 0;
  if ( !(_DWORD)v9 )
    goto LABEL_34;
  v96.m128i_i64[0] = (__int64)&v107;
  v102 = &v106;
  while ( 2 )
  {
    v13 = (const __m128i *)((char *)ptr + 16 * (unsigned int)v9 - 16);
    v14 = v13->m128i_i64[0];
    v15 = (__m128)_mm_loadu_si128(v13);
    LODWORD(v111) = v9 - 1;
    v105 = v15;
    v16 = sub_E90000(v14);
    v20 = v16;
    switch ( v16 )
    {
      case 0LL:
        v77 = sub_E90530((__int64 *)&v105) >> 32;
        v78 = sub_E90530((__int64 *)&v105);
        v79 = 0;
        if ( (*(_BYTE *)(v14 + 8) & 6) == 0 )
          v79 = *(_QWORD *)(v14 + 16);
        si128.m128i_i64[1] = v79;
        v80 = *(_QWORD *)a1;
        si128.m128i_i64[0] = a4;
        v114 = v78;
        v115 = v77;
        if ( !(unsigned __int8)sub_16A7490(v80, 0, (__int64)&si128, 0, v96.m128i_i64[0], v97, 0, 0, 0) )
          goto LABEL_32;
        goto LABEL_70;
      case 1LL:
        v57 = sub_E90060(v14);
        sub_E90530((__int64 *)&v105);
        v58 = *(unsigned int *)(a1 + 24);
        v59 = *(_QWORD *)(a1 + 8);
        if ( !(_DWORD)v58 )
          goto LABEL_82;
        v60 = (v58 - 1) & (((unsigned int)v57 >> 9) ^ ((unsigned int)v57 >> 4));
        v61 = (_QWORD *)(v59 + 16LL * v60);
        if ( v57 == *v61 )
          goto LABEL_57;
        if ( *v61 == -4096 )
          goto LABEL_82;
        do
        {
          v60 = (v58 - 1) & (v20 + v60);
          v61 = (_QWORD *)(v59 + 16LL * v60);
          if ( v57 == *v61 )
          {
LABEL_57:
            v97 = a1 + 8;
            sub_AEAAD0((__m128 *)&si128, v61, (_QWORD *)(16 * v58 + v59), a1 + 8, 1);
            v62 = si128.m128i_i64[0];
            v63 = v97;
            goto LABEL_58;
          }
          ++v20;
        }
        while ( *v61 != -4096 );
LABEL_82:
        v97 = a1 + 8;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v59 + 16LL * (unsigned int)v58),
          (_QWORD *)(v59 + 16LL * (unsigned int)v58),
          a1 + 8,
          1);
        v62 = si128.m128i_i64[0];
        v63 = v97;
LABEL_58:
        v64 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
        sub_AEAAD0((__m128 *)&si128, v64, v64, v63, 1);
        if ( v62 != si128.m128i_i64[0] )
          v57 = *(_QWORD *)(v62 + 8);
        v65 = sub_E90530((__int64 *)&v105) >> 32;
        v66 = sub_E90530((__int64 *)&v105);
        sub_15AB7E0((__int32 *)v96.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v57, v66, v65);
        goto LABEL_32;
      case 2LL:
        v67 = sub_E90090(v14);
        sub_E90530((__int64 *)&v105);
        v68 = *(unsigned int *)(a1 + 24);
        v69 = *(_QWORD *)(a1 + 8);
        if ( !(_DWORD)v68 )
          goto LABEL_78;
        v70 = (v68 - 1) & (((unsigned int)v67 >> 9) ^ ((unsigned int)v67 >> 4));
        v71 = (__int64 *)(v69 + 16LL * v70);
        v72 = *v71;
        if ( v67 == *v71 )
          goto LABEL_63;
        v81 = 1;
        if ( v72 == -4096 )
          goto LABEL_78;
        do
        {
          v82 = v81 + 1;
          v70 = (v68 - 1) & (v81 + v70);
          v71 = (__int64 *)(v69 + 16LL * v70);
          v83 = *v71;
          if ( v67 == *v71 )
          {
LABEL_63:
            sub_AEAAD0((__m128 *)&si128, v71, (_QWORD *)(16 * v68 + v69), a1 + 8, 1);
            v73 = si128.m128i_i64[0];
            goto LABEL_64;
          }
          v81 = v82;
        }
        while ( v83 != -4096 );
LABEL_78:
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v69 + 16LL * (unsigned int)v68),
          (_QWORD *)(v69 + 16LL * (unsigned int)v68),
          a1 + 8,
          1);
        v73 = si128.m128i_i64[0];
LABEL_64:
        v74 = *(unsigned int *)(a1 + 24);
        v97 = v73;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v74),
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v74),
          a1 + 8,
          1);
        if ( v97 != si128.m128i_i64[0] )
          v67 = *(_QWORD *)(v97 + 8);
        v75 = sub_E90530((__int64 *)&v105) >> 32;
        v76 = sub_E90530((__int64 *)&v105);
        sub_15AB810((__int32 *)v96.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v67, v76, v75);
        goto LABEL_32;
      case 3LL:
        v24 = sub_E90670(&v105);
        v26 = v24;
        if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (*(_BYTE *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0 )
        {
          v27 = sub_1CFDF60(
                  (__int64 **)a1,
                  v24,
                  v25,
                  a4,
                  v97,
                  (__m128i *)v96.m128i_i64[0],
                  *(double *)v12.m128_u64,
                  v15);
          if ( !v27 )
            goto LABEL_70;
          v28 = v27 + 1;
          v24 = *v27;
          v99 = (__m128i *)v28;
          v26 = v24;
        }
        else
        {
          v99 = v25;
        }
        v97 = v26;
        v12 = _mm_loadh_ps((const double *)&v99);
        v106 = v12;
        if ( !v26 )
          goto LABEL_70;
        v103 = v24;
        v29 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
        v30 = (*(_BYTE *)(v29 + 17) & 4) == 0;
        v31 = *(_QWORD *)(v29 + 8);
        if ( v30 )
        {
          v32 = *(_BYTE *)(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( v32 == 48 )
            goto LABEL_29;
          v33 = *(__int64 **)a1;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) == 0 || v32 != 47 )
          {
            v92 = sub_B8F2F0((__int64 *)&v106);
            if ( !v92 || *(char *)(*(_QWORD *)(v92 + 32) + 28LL) >= 0 )
            {
              v93 = *(__int64 **)a1;
              v94 = sub_F6CCB0((__int64 *)&v106, v12);
              sub_168B9F0((__int64)&si128, v93 + 1, v94, 0x10A1u, 0);
              v95 = sub_1605D30((__int64)&si128, &v103);
              v104 = v107;
              sub_1587DB0(v95, &v104);
              sub_15F7200(&si128);
            }
LABEL_70:
            v41 = 0;
            if ( !HIDWORD(s1[1]) )
              goto LABEL_38;
LABEL_71:
            free(s1[0]);
            goto LABEL_38;
          }
          goto LABEL_28;
        }
        if ( *(_BYTE *)(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
        {
          v33 = *(__int64 **)a1;
LABEL_28:
          v34 = sub_F6CCB0((__int64 *)v102, v12);
          sub_168B9F0((__int64)&si128, v33 + 1, v34, 0x1A6Eu, 0);
          sub_15F7200(&si128);
          v26 = v106.m128_u64[0];
          v24 = v106.m128_u64[0];
        }
LABEL_29:
        if ( (v26 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 )
        {
          v87 = v106.m128_u64[1];
          if ( v26 )
          {
            v88 = *(_QWORD *)(v26 + 32);
            if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || (v89 = 0, v88) )
              v89 = *(_QWORD *)(v106.m128_u64[1] + 8);
            v90 = v106.m128_u64[1];
            sub_15AB8B0(v96.m128i_i64[0], v88, v89);
            if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || *(_QWORD *)(v26 + 32) )
              v90 = v87 + 16;
            v91 = sub_F6C520(*(_QWORD *)(v26 + 40));
            v106.m128_u64[0] = *(_QWORD *)(v26 + 40);
            v106.m128_u64[1] = v91 * ((v90 != 0) + (v90 - (v90 != 0)) / v91);
          }
        }
        v35 = sub_E90530((__int64 *)&v105) >> 32;
        sub_15AB760(
          (__m128i **)v96.m128i_i64[0],
          *(_QWORD **)(*(_QWORD *)a1 + 248LL),
          v106.m128_i64[0],
          v106.m128_i64[1],
          v35,
          v12);
LABEL_32:
        LODWORD(v9) = v111;
        a4 = 0;
        v97 = 0;
        if ( (_DWORD)v111 )
          continue;
        if ( v101 != *((_QWORD *)&v107 + 1) )
          goto LABEL_34;
LABEL_99:
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
        {
          v41 = v101;
          goto LABEL_37;
        }
LABEL_34:
        v36 = (int)s1[1];
        if ( (unsigned int)sub_E904D0(v101) == v36 && !memcmp(s1[0], s2, LODWORD(s1[1])) )
          v41 = *((_QWORD *)&v107 + 1);
        else
          v41 = sub_15AB9E0((__int64)&v107, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v37, v38, v39, v40);
LABEL_37:
        if ( HIDWORD(s1[1]) )
          goto LABEL_71;
LABEL_38:
        if ( ptr != p_ptr + 2 )
          free(ptr);
        return v41;
      case 4LL:
        v21 = 0;
        if ( v105.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v105);
          v22 = *(_QWORD *)(v105.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22 )
          {
            v23 = 0;
            v97 = si128.m128i_i64[1];
            v12 = _mm_loadh_ps((const double *)&v97);
            si128 = (__m128i)v12;
            while ( (*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v23 = 1;
              v22 = *(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v23 )
              si128.m128i_i64[0] = v22;
          }
          v21 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB840((int *)v96.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v21, v17, v18, v19);
        goto LABEL_32;
      case 5LL:
        v43 = sub_E900C0(v14);
        v44 = *(_QWORD *)(a1 + 8);
        v45 = v43;
        v46 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v46 )
          goto LABEL_86;
        v47 = (v46 - 1) & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
        v48 = (__int64 *)(v44 + 16LL * v47);
        v49 = *v48;
        if ( v45 == *v48 )
          goto LABEL_43;
        v84 = 1;
        if ( v49 == -4096 )
          goto LABEL_86;
        do
        {
          v85 = v84 + 1;
          v47 = (v46 - 1) & (v84 + v47);
          v48 = (__int64 *)(v44 + 16LL * v47);
          v86 = *v48;
          if ( v45 == *v48 )
          {
LABEL_43:
            sub_AEAAD0((__m128 *)&si128, v48, (_QWORD *)(16 * v46 + v44), a1 + 8, 1);
            v50 = si128.m128i_i64[0];
            goto LABEL_44;
          }
          v84 = v85;
        }
        while ( v86 != -4096 );
LABEL_86:
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v44 + 16LL * (unsigned int)v46),
          (_QWORD *)(v44 + 16LL * (unsigned int)v46),
          a1 + 8,
          1);
        v50 = si128.m128i_i64[0];
LABEL_44:
        v51 = *(unsigned int *)(a1 + 24);
        v97 = v50;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v51),
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v51),
          a1 + 8,
          1);
        if ( si128.m128i_i64[0] != v97 )
          v45 = *(_QWORD *)(v97 + 8);
        v52 = sub_E90530((__int64 *)&v105);
        v53 = 0;
        v54 = HIDWORD(v52);
        if ( v105.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v105);
          v55 = *(_QWORD *)(v105.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v55 )
          {
            v56 = 0;
            v97 = si128.m128i_i64[1];
            v12 = _mm_loadh_ps((const double *)&v97);
            si128 = (__m128i)v12;
            while ( (*(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v56 = 1;
              v55 = *(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v56 )
              si128.m128i_i64[0] = v55;
          }
          v53 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB860((__int32 *)v96.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v45, v53, v54);
        goto LABEL_32;
      default:
        goto LABEL_32;
    }
  }
}
