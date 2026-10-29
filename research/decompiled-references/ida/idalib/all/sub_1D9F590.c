__int64 __fastcall sub_1D9F590(__int64 a1, unsigned __int64 a2, void *a3, __int64 a4, __int64 a5)
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
  const __m128i *v25; // rdx
  __int64 v26; // r15
  __int64 v27; // r9
  __int64 v28; // rdx
  char v29; // al
  __int64 *v30; // r13
  unsigned int v31; // eax
  __int32 v32; // rax^4
  int v33; // ebp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbp
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r13
  __int64 v43; // rax
  unsigned int v44; // ecx
  __int64 *v45; // rsi
  __int64 v46; // r8
  unsigned __int64 v47; // rax
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  __int32 v50; // ecx
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // rdx
  char v53; // si
  __int64 v54; // r13
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int v57; // edi
  _QWORD *v58; // rsi
  unsigned __int64 v59; // r15
  __int64 v60; // rax
  _QWORD *v61; // rdx
  unsigned __int64 v62; // r14
  __int32 v63; // eax
  __int64 v64; // r13
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned int v67; // ecx
  __int64 *v68; // rsi
  __int64 v69; // r8
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // r14
  __int32 v73; // eax
  unsigned __int64 v74; // r15
  unsigned int v75; // eax
  unsigned __int64 v76; // rdx
  __int64 v77; // rdi
  __int64 *v78; // rax
  int v79; // esi
  int v80; // r8d
  __int64 v81; // r9
  int v82; // esi
  int v83; // r8d
  __int64 v84; // r9
  unsigned __int64 v85; // r14
  __int64 v86; // rsi
  __int64 v87; // rdx
  unsigned __int64 v88; // r13
  unsigned int v89; // eax
  unsigned __int64 v90; // rax
  __int64 *v91; // r12
  unsigned int v92; // eax
  __int64 *v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r12
  __int64 v100; // rax
  _QWORD *v101; // rax
  __m128i v102; // [rsp+0h] [rbp-1B8h] BYREF
  _QWORD *m128i_i64; // [rsp+10h] [rbp-1A8h] BYREF
  void *s2[2]; // [rsp+18h] [rbp-1A0h] BYREF
  void **p_ptr; // [rsp+28h] [rbp-190h]
  unsigned __int64 v106; // [rsp+30h] [rbp-188h]
  __m128 *v107; // [rsp+38h] [rbp-180h]
  __int64 v108; // [rsp+48h] [rbp-170h] BYREF
  __m128 v109; // [rsp+50h] [rbp-168h] BYREF
  __m128 v110; // [rsp+60h] [rbp-158h] BYREF
  __int128 v111; // [rsp+70h] [rbp-148h] BYREF
  void *s1[2]; // [rsp+80h] [rbp-138h]
  __int128 v113; // [rsp+90h] [rbp-128h]
  void *ptr; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v115; // [rsp+A8h] [rbp-110h]
  _BYTE v116[64]; // [rsp+B0h] [rbp-108h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-C8h] BYREF
  _QWORD *v118; // [rsp+100h] [rbp-B8h]
  unsigned __int8 *v119; // [rsp+110h] [rbp-A8h] BYREF
  char v120; // [rsp+168h] [rbp-50h]
  unsigned int v121; // [rsp+170h] [rbp-48h]
  char v122; // [rsp+174h] [rbp-44h]

  v106 = a2;
  p_ptr = &ptr;
  s2[0] = a3;
  m128i_i64 = (_QWORD *)a5;
  ptr = v116;
  v115 = 0x400000000LL;
  if ( !a2 )
  {
    v111 = 0;
    *(_OWORD *)s1 = 0;
    v113 = 0;
    goto LABEL_98;
  }
  v7 = a2;
  v8 = 4;
  v9 = 0;
  while ( 1 )
  {
    v102.m128i_i64[0] = v7;
    v10 = (__m128i)_mm_loadh_ps((const double *)s2);
    if ( v9 + 1 > v8 )
    {
      v102 = v10;
      sub_2237220(p_ptr, v116, v9 + 1, 16);
      v10 = _mm_load_si128(&v102);
      v11 = (__m128 *)((char *)ptr + 16 * (unsigned int)v115);
    }
    else
    {
      v11 = (__m128 *)((char *)ptr + 16 * v9);
    }
    *v11 = (__m128)v10;
    v9 = (unsigned int)(v115 + 1);
    LODWORD(v115) = v115 + 1;
    v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      break;
    v8 = HIDWORD(v115);
  }
  v12.m128_u64[0] = 0;
  v111 = 0;
  *(_OWORD *)s1 = 0;
  v113 = 0;
  if ( !(_DWORD)v9 )
    goto LABEL_32;
  v102.m128i_i64[0] = (__int64)&v111;
  v107 = &v110;
  while ( 2 )
  {
    v13 = (const __m128i *)((char *)ptr + 16 * (unsigned int)v9 - 16);
    v14 = v13->m128i_i64[0];
    v15 = (__m128)_mm_loadu_si128(v13);
    LODWORD(v115) = v9 - 1;
    v109 = v15;
    v16 = sub_E90000(v14);
    v20 = v16;
    switch ( v16 )
    {
      case 0LL:
        v74 = sub_E90530((__int64 *)&v109) >> 32;
        v75 = sub_E90530((__int64 *)&v109);
        v76 = 0;
        if ( (*(_BYTE *)(v14 + 8) & 6) == 0 )
          v76 = *(_QWORD *)(v14 + 16);
        si128.m128i_i64[1] = v76;
        v77 = *(_QWORD *)a1;
        si128.m128i_i64[0] = a4;
        v118 = (_QWORD *)__PAIR64__(v74, v75);
        if ( !(unsigned __int8)sub_16A7490(v77, 0, (__int64)&si128, 0, v102.m128i_i64[0], (__int64)m128i_i64, 0, 0, 0) )
          goto LABEL_30;
        goto LABEL_68;
      case 1LL:
        v54 = sub_E90060(v14);
        sub_E90530((__int64 *)&v109);
        v55 = *(unsigned int *)(a1 + 24);
        v56 = *(_QWORD *)(a1 + 8);
        if ( !(_DWORD)v55 )
          goto LABEL_81;
        v57 = (v55 - 1) & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
        v58 = (_QWORD *)(v56 + 16LL * v57);
        if ( v54 == *v58 )
          goto LABEL_55;
        if ( *v58 == -4096 )
          goto LABEL_81;
        do
        {
          v57 = (v55 - 1) & (v20 + v57);
          v58 = (_QWORD *)(v56 + 16LL * v57);
          if ( v54 == *v58 )
          {
LABEL_55:
            m128i_i64 = (_QWORD *)(a1 + 8);
            sub_AEAAD0((__m128 *)&si128, v58, (_QWORD *)(16 * v55 + v56), a1 + 8, 1);
            v59 = si128.m128i_i64[0];
            v60 = (__int64)m128i_i64;
            goto LABEL_56;
          }
          ++v20;
        }
        while ( *v58 != -4096 );
LABEL_81:
        m128i_i64 = (_QWORD *)(a1 + 8);
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v56 + 16LL * (unsigned int)v55),
          (_QWORD *)(v56 + 16LL * (unsigned int)v55),
          a1 + 8,
          1);
        v59 = si128.m128i_i64[0];
        v60 = (__int64)m128i_i64;
LABEL_56:
        v61 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
        sub_AEAAD0((__m128 *)&si128, v61, v61, v60, 1);
        if ( v59 != si128.m128i_i64[0] )
          v54 = *(_QWORD *)(v59 + 8);
        v62 = sub_E90530((__int64 *)&v109) >> 32;
        v63 = sub_E90530((__int64 *)&v109);
        sub_15AB7E0((__int32 *)v102.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v54, v63, v62);
        goto LABEL_30;
      case 2LL:
        v64 = sub_E90090(v14);
        sub_E90530((__int64 *)&v109);
        v65 = *(unsigned int *)(a1 + 24);
        v66 = *(_QWORD *)(a1 + 8);
        if ( !(_DWORD)v65 )
          goto LABEL_77;
        v67 = (v65 - 1) & (((unsigned int)v64 >> 9) ^ ((unsigned int)v64 >> 4));
        v68 = (__int64 *)(v66 + 16LL * v67);
        v69 = *v68;
        if ( v64 == *v68 )
          goto LABEL_61;
        v79 = 1;
        if ( v69 == -4096 )
          goto LABEL_77;
        do
        {
          v80 = v79 + 1;
          v67 = (v65 - 1) & (v79 + v67);
          v68 = (__int64 *)(v66 + 16LL * v67);
          v81 = *v68;
          if ( v64 == *v68 )
          {
LABEL_61:
            sub_AEAAD0((__m128 *)&si128, v68, (_QWORD *)(16 * v65 + v66), a1 + 8, 1);
            v70 = si128.m128i_i64[0];
            goto LABEL_62;
          }
          v79 = v80;
        }
        while ( v81 != -4096 );
LABEL_77:
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v66 + 16LL * (unsigned int)v65),
          (_QWORD *)(v66 + 16LL * (unsigned int)v65),
          a1 + 8,
          1);
        v70 = si128.m128i_i64[0];
LABEL_62:
        v71 = *(unsigned int *)(a1 + 24);
        m128i_i64 = (_QWORD *)v70;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v71),
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v71),
          a1 + 8,
          1);
        if ( m128i_i64 != (_QWORD *)si128.m128i_i64[0] )
          v64 = m128i_i64[1];
        v72 = sub_E90530((__int64 *)&v109) >> 32;
        v73 = sub_E90530((__int64 *)&v109);
        sub_15AB810((__int32 *)v102.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v64, v73, v72);
        goto LABEL_30;
      case 3LL:
        v24 = sub_E90670(&v109);
        v26 = v24;
        v27 = v24;
        if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v78 = sub_1D9F110(
                  (__int64 **)a1,
                  v24,
                  v25,
                  a4,
                  (__int64)m128i_i64,
                  (__m128i *)v102.m128i_i64[0],
                  *(double *)v12.m128_u64,
                  v15);
          if ( !v78 )
            goto LABEL_68;
          v27 = *v78;
          m128i_i64 = v78 + 1;
          v26 = v27;
        }
        else
        {
          m128i_i64 = v25->m128i_i64;
        }
        s2[1] = (void *)v26;
        v12 = _mm_loadh_ps((const double *)&m128i_i64);
        v110 = v12;
        if ( !v26 )
          goto LABEL_68;
        v28 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
        v29 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (*(_BYTE *)(v28 + 17) & 4) == 0 )
        {
          if ( v29 == 48 )
            goto LABEL_27;
          v30 = *(__int64 **)a1;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) == 0 || v29 != 47 )
          {
            m128i_i64 = (_QWORD *)v27;
            v90 = sub_B8F2F0((__int64 *)&v110);
            if ( !v90 || *(char *)(*(_QWORD *)(v90 + 32) + 28LL) >= 0 )
            {
              v91 = *(__int64 **)a1;
              v92 = sub_F6CCB0((__int64 *)&v110, v12);
              v93 = v91 + 1;
              sub_168B9F0((__int64)&si128, v91 + 1, v92, 0x10A1u, 0);
              if ( v120 )
              {
                sub_AE9DF0(&v119, (__int64)m128i_i64, 8u);
              }
              else if ( v122 )
              {
                v94 = sub_168B9E0(&si128);
                v98 = (__int64)m128i_i64;
                v99 = v94;
                v100 = (__int64)v118;
                if ( v118 )
                {
                  v100 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, _QWORD *))(*v118 + 32LL))(
                           v118,
                           v93,
                           *v118,
                           v96,
                           v97,
                           m128i_i64);
                  v98 = (__int64)m128i_i64;
                }
                m128i_i64 = (_QWORD *)v98;
                v108 = v100;
                v101 = sub_1587BC0(v99, &v108, v95, v96, v97, v98);
                sub_AE9DF0((unsigned __int8 **)(*v101 + 32LL * v121 + 8), (__int64)m128i_i64, 8u);
              }
              v108 = v111;
              sub_1587DB0((__int64)&si128, &v108);
              sub_15F7200(&si128);
            }
LABEL_68:
            v38 = 0;
            if ( !HIDWORD(s1[1]) )
              goto LABEL_36;
LABEL_69:
            free(s1[0]);
            goto LABEL_36;
          }
          goto LABEL_26;
        }
        if ( v29 == 47 )
        {
          v30 = *(__int64 **)a1;
LABEL_26:
          v31 = sub_F6CCB0((__int64 *)v107, v12);
          sub_168B9F0((__int64)&si128, v30 + 1, v31, 0x1A6Eu, 0);
          sub_15F7200(&si128);
          v26 = v110.m128_u64[0];
          v27 = v110.m128_u64[0];
        }
LABEL_27:
        if ( (v26 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 )
        {
          v85 = v110.m128_u64[1];
          if ( v26 )
          {
            v86 = *(_QWORD *)(v26 + 32);
            if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || (v87 = 0, v86) )
              v87 = *(_QWORD *)(v110.m128_u64[1] + 8);
            v88 = v110.m128_u64[1];
            sub_15AB8B0(v102.m128i_i64[0], v86, v87);
            if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || *(_QWORD *)(v26 + 32) )
              v88 = v85 + 16;
            v89 = sub_F6C520(*(_QWORD *)(v26 + 40));
            v110.m128_u64[0] = *(_QWORD *)(v26 + 40);
            v110.m128_u64[1] = v89 * ((v88 != 0) + (v88 - (v88 != 0)) / v89);
          }
        }
        v32 = sub_E90530((__int64 *)&v109) >> 32;
        sub_15AB760(
          (__m128i **)v102.m128i_i64[0],
          *(_QWORD **)(*(_QWORD *)a1 + 248LL),
          v110.m128_i64[0],
          v110.m128_i64[1],
          v32,
          v12);
LABEL_30:
        LODWORD(v9) = v115;
        a4 = 0;
        m128i_i64 = nullptr;
        if ( (_DWORD)v115 )
          continue;
        if ( v106 != *((_QWORD *)&v111 + 1) )
          goto LABEL_32;
LABEL_98:
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
        {
          v38 = v106;
          goto LABEL_35;
        }
LABEL_32:
        v33 = (int)s1[1];
        if ( (unsigned int)sub_E904D0(v106) == v33 && !memcmp(s1[0], s2[0], LODWORD(s1[1])) )
          v38 = *((_QWORD *)&v111 + 1);
        else
          v38 = sub_15AB9E0((__int64)&v111, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v34, v35, v36, v37);
LABEL_35:
        if ( HIDWORD(s1[1]) )
          goto LABEL_69;
LABEL_36:
        if ( ptr != p_ptr + 2 )
          free(ptr);
        return v38;
      case 4LL:
        v21 = 0;
        if ( v109.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v109);
          v22 = *(_QWORD *)(v109.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22 )
          {
            v23 = 0;
            m128i_i64 = (_QWORD *)si128.m128i_i64[1];
            v12 = _mm_loadh_ps((const double *)&m128i_i64);
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
        sub_15AB840((int *)v102.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v21, v17, v18, v19);
        goto LABEL_30;
      case 5LL:
        v40 = sub_E900C0(v14);
        v41 = *(_QWORD *)(a1 + 8);
        v42 = v40;
        v43 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v43 )
          goto LABEL_85;
        v44 = (v43 - 1) & (((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4));
        v45 = (__int64 *)(v41 + 16LL * v44);
        v46 = *v45;
        if ( v42 == *v45 )
          goto LABEL_41;
        v82 = 1;
        if ( v46 == -4096 )
          goto LABEL_85;
        do
        {
          v83 = v82 + 1;
          v44 = (v43 - 1) & (v82 + v44);
          v45 = (__int64 *)(v41 + 16LL * v44);
          v84 = *v45;
          if ( v42 == *v45 )
          {
LABEL_41:
            sub_AEAAD0((__m128 *)&si128, v45, (_QWORD *)(16 * v43 + v41), a1 + 8, 1);
            v47 = si128.m128i_i64[0];
            goto LABEL_42;
          }
          v82 = v83;
        }
        while ( v84 != -4096 );
LABEL_85:
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v41 + 16LL * (unsigned int)v43),
          (_QWORD *)(v41 + 16LL * (unsigned int)v43),
          a1 + 8,
          1);
        v47 = si128.m128i_i64[0];
LABEL_42:
        v48 = *(unsigned int *)(a1 + 24);
        m128i_i64 = (_QWORD *)v47;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v48),
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v48),
          a1 + 8,
          1);
        if ( (_QWORD *)si128.m128i_i64[0] != m128i_i64 )
          v42 = m128i_i64[1];
        v49 = sub_E90530((__int64 *)&v109);
        v50 = 0;
        v51 = HIDWORD(v49);
        if ( v109.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v109);
          v52 = *(_QWORD *)(v109.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v52 )
          {
            v53 = 0;
            m128i_i64 = (_QWORD *)si128.m128i_i64[1];
            v12 = _mm_loadh_ps((const double *)&m128i_i64);
            si128 = (__m128i)v12;
            while ( (*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v53 = 1;
              v52 = *(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v53 )
              si128.m128i_i64[0] = v52;
          }
          v50 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB860((__int32 *)v102.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v42, v50, v51);
        goto LABEL_30;
      default:
        goto LABEL_30;
    }
  }
}
