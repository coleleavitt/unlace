__int64 __fastcall sub_1E237D0(__int64 a1, unsigned __int64 a2, void *a3, __int64 a4, __int64 a5)
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
  __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rdx
  char v30; // dl
  __int64 *v31; // r13
  unsigned int v32; // eax
  __int32 v33; // rax^4
  int v34; // ebp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbp
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r13
  __int64 v44; // rax
  unsigned int v45; // ecx
  __int64 *v46; // rsi
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rax
  __int32 v51; // ecx
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // rdx
  char v54; // si
  __int64 v55; // r13
  __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned int v58; // edi
  _QWORD *v59; // rsi
  unsigned __int64 v60; // r15
  __int64 v61; // rax
  _QWORD *v62; // rdx
  unsigned __int64 v63; // r14
  __int32 v64; // eax
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned int v68; // ecx
  __int64 *v69; // rsi
  __int64 v70; // r8
  unsigned __int64 v71; // rax
  __int64 v72; // rsi
  unsigned __int64 v73; // r14
  __int32 v74; // eax
  unsigned __int64 v75; // r15
  int v76; // eax
  unsigned __int64 v77; // rdx
  __int64 v78; // rdi
  __int64 *v79; // rax
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
  void *s2[2]; // [rsp+18h] [rbp-1A0h] BYREF
  void **p_ptr; // [rsp+28h] [rbp-190h]
  unsigned __int64 v100; // [rsp+30h] [rbp-188h]
  __m128 *v101; // [rsp+38h] [rbp-180h]
  __int64 v102; // [rsp+40h] [rbp-178h] BYREF
  __int64 v103; // [rsp+48h] [rbp-170h] BYREF
  __m128 v104; // [rsp+50h] [rbp-168h] BYREF
  __m128 v105; // [rsp+60h] [rbp-158h] BYREF
  __int128 v106; // [rsp+70h] [rbp-148h] BYREF
  void *s1[2]; // [rsp+80h] [rbp-138h]
  __int128 v108; // [rsp+90h] [rbp-128h]
  void *ptr; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v110; // [rsp+A8h] [rbp-110h]
  _BYTE v111[64]; // [rsp+B0h] [rbp-108h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-C8h] BYREF
  int v113; // [rsp+100h] [rbp-B8h]
  int v114; // [rsp+104h] [rbp-B4h]

  v100 = a2;
  p_ptr = &ptr;
  s2[0] = a3;
  v97 = a5;
  ptr = v111;
  v110 = 0x400000000LL;
  if ( !a2 )
  {
    v106 = 0;
    *(_OWORD *)s1 = 0;
    v108 = 0;
    goto LABEL_98;
  }
  v7 = a2;
  v8 = 4;
  v9 = 0;
  while ( 1 )
  {
    v96.m128i_i64[0] = v7;
    v10 = (__m128i)_mm_loadh_ps((const double *)s2);
    if ( v9 + 1 > v8 )
    {
      v96 = v10;
      sub_2237220(p_ptr, v111, v9 + 1, 16);
      v10 = _mm_load_si128(&v96);
      v11 = (__m128 *)((char *)ptr + 16 * (unsigned int)v110);
    }
    else
    {
      v11 = (__m128 *)((char *)ptr + 16 * v9);
    }
    *v11 = (__m128)v10;
    v9 = (unsigned int)(v110 + 1);
    LODWORD(v110) = v110 + 1;
    v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      break;
    v8 = HIDWORD(v110);
  }
  v12.m128_u64[0] = 0;
  v106 = 0;
  *(_OWORD *)s1 = 0;
  v108 = 0;
  if ( !(_DWORD)v9 )
    goto LABEL_32;
  v96.m128i_i64[0] = (__int64)&v106;
  v101 = &v105;
  while ( 2 )
  {
    v13 = (const __m128i *)((char *)ptr + 16 * (unsigned int)v9 - 16);
    v14 = v13->m128i_i64[0];
    v15 = (__m128)_mm_loadu_si128(v13);
    LODWORD(v110) = v9 - 1;
    v104 = v15;
    v16 = sub_E90000(v14);
    v20 = v16;
    switch ( v16 )
    {
      case 0LL:
        v75 = sub_E90530((__int64 *)&v104) >> 32;
        v76 = sub_E90530((__int64 *)&v104);
        v77 = 0;
        if ( (*(_BYTE *)(v14 + 8) & 6) == 0 )
          v77 = *(_QWORD *)(v14 + 16);
        si128.m128i_i64[1] = v77;
        v78 = *(_QWORD *)a1;
        si128.m128i_i64[0] = a4;
        v113 = v76;
        v114 = v75;
        if ( !(unsigned __int8)sub_16A7490(v78, 0, (__int64)&si128, 0, v96.m128i_i64[0], v97, 0, 0, 0) )
          goto LABEL_30;
        goto LABEL_68;
      case 1LL:
        v55 = sub_E90060(v14);
        sub_E90530((__int64 *)&v104);
        v56 = *(unsigned int *)(a1 + 24);
        v57 = *(_QWORD *)(a1 + 8);
        if ( !(_DWORD)v56 )
          goto LABEL_81;
        v58 = (v56 - 1) & (((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4));
        v59 = (_QWORD *)(v57 + 16LL * v58);
        if ( v55 == *v59 )
          goto LABEL_55;
        if ( *v59 == -4096 )
          goto LABEL_81;
        do
        {
          v58 = (v56 - 1) & (v20 + v58);
          v59 = (_QWORD *)(v57 + 16LL * v58);
          if ( v55 == *v59 )
          {
LABEL_55:
            v97 = a1 + 8;
            sub_AEAAD0((__m128 *)&si128, v59, (_QWORD *)(16 * v56 + v57), a1 + 8, 1);
            v60 = si128.m128i_i64[0];
            v61 = v97;
            goto LABEL_56;
          }
          ++v20;
        }
        while ( *v59 != -4096 );
LABEL_81:
        v97 = a1 + 8;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v57 + 16LL * (unsigned int)v56),
          (_QWORD *)(v57 + 16LL * (unsigned int)v56),
          a1 + 8,
          1);
        v60 = si128.m128i_i64[0];
        v61 = v97;
LABEL_56:
        v62 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
        sub_AEAAD0((__m128 *)&si128, v62, v62, v61, 1);
        if ( v60 != si128.m128i_i64[0] )
          v55 = *(_QWORD *)(v60 + 8);
        v63 = sub_E90530((__int64 *)&v104) >> 32;
        v64 = sub_E90530((__int64 *)&v104);
        sub_15AB7E0((__int32 *)v96.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v55, v64, v63);
        goto LABEL_30;
      case 2LL:
        v65 = sub_E90090(v14);
        sub_E90530((__int64 *)&v104);
        v66 = *(unsigned int *)(a1 + 24);
        v67 = *(_QWORD *)(a1 + 8);
        if ( !(_DWORD)v66 )
          goto LABEL_77;
        v68 = (v66 - 1) & (((unsigned int)v65 >> 9) ^ ((unsigned int)v65 >> 4));
        v69 = (__int64 *)(v67 + 16LL * v68);
        v70 = *v69;
        if ( v65 == *v69 )
          goto LABEL_61;
        v81 = 1;
        if ( v70 == -4096 )
          goto LABEL_77;
        do
        {
          v82 = v81 + 1;
          v68 = (v66 - 1) & (v81 + v68);
          v69 = (__int64 *)(v67 + 16LL * v68);
          v83 = *v69;
          if ( v65 == *v69 )
          {
LABEL_61:
            sub_AEAAD0((__m128 *)&si128, v69, (_QWORD *)(16 * v66 + v67), a1 + 8, 1);
            v71 = si128.m128i_i64[0];
            goto LABEL_62;
          }
          v81 = v82;
        }
        while ( v83 != -4096 );
LABEL_77:
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v67 + 16LL * (unsigned int)v66),
          (_QWORD *)(v67 + 16LL * (unsigned int)v66),
          a1 + 8,
          1);
        v71 = si128.m128i_i64[0];
LABEL_62:
        v72 = *(unsigned int *)(a1 + 24);
        v97 = v71;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v72),
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v72),
          a1 + 8,
          1);
        if ( v97 != si128.m128i_i64[0] )
          v65 = *(_QWORD *)(v97 + 8);
        v73 = sub_E90530((__int64 *)&v104) >> 32;
        v74 = sub_E90530((__int64 *)&v104);
        sub_15AB810((__int32 *)v96.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v65, v74, v73);
        goto LABEL_30;
      case 3LL:
        v24 = sub_E90670(&v104);
        v26 = v24;
        if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v79 = sub_1E23350(
                  (__int64 **)a1,
                  v24,
                  v25,
                  a4,
                  v97,
                  (__m128i *)v96.m128i_i64[0],
                  *(double *)v12.m128_u64,
                  v15);
          if ( !v79 )
            goto LABEL_68;
          v80 = (__int64)(v79 + 1);
          v24 = *v79;
          v97 = v80;
          v26 = v24;
        }
        else
        {
          v97 = (__int64)v25;
        }
        s2[1] = (void *)v26;
        v12 = _mm_loadh_ps((const double *)&v97);
        v105 = v12;
        if ( !v26 )
          goto LABEL_68;
        v102 = v24;
        v27 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
        v28 = (*(_BYTE *)(v27 + 17) & 4) == 0;
        v29 = *(_QWORD *)(v27 + 8);
        if ( v28 )
        {
          v30 = *(_BYTE *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( v30 == 48 )
            goto LABEL_27;
          v31 = *(__int64 **)a1;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) == 0 || v30 != 47 )
          {
            v92 = sub_B8F2F0((__int64 *)&v105);
            if ( !v92 || *(char *)(*(_QWORD *)(v92 + 32) + 28LL) >= 0 )
            {
              v93 = *(__int64 **)a1;
              v94 = sub_F6CCB0((__int64 *)&v105, v12);
              sub_168B9F0((__int64)&si128, v93 + 1, v94, 0x10A1u, 0);
              v95 = sub_1605D30((__int64)&si128, &v102);
              v103 = v106;
              sub_1587DB0(v95, &v103);
              sub_15F7200(&si128);
            }
LABEL_68:
            v39 = 0;
            if ( !HIDWORD(s1[1]) )
              goto LABEL_36;
LABEL_69:
            free(s1[0]);
            goto LABEL_36;
          }
          goto LABEL_26;
        }
        if ( *(_BYTE *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
        {
          v31 = *(__int64 **)a1;
LABEL_26:
          v32 = sub_F6CCB0((__int64 *)v101, v12);
          sub_168B9F0((__int64)&si128, v31 + 1, v32, 0x1A6Eu, 0);
          sub_15F7200(&si128);
          v26 = v105.m128_u64[0];
          v24 = v105.m128_u64[0];
        }
LABEL_27:
        if ( (v26 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 )
        {
          v87 = v105.m128_u64[1];
          if ( v26 )
          {
            v88 = *(_QWORD *)(v26 + 32);
            if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || (v89 = 0, v88) )
              v89 = *(_QWORD *)(v105.m128_u64[1] + 8);
            v90 = v105.m128_u64[1];
            sub_15AB8B0(v96.m128i_i64[0], v88, v89);
            if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || *(_QWORD *)(v26 + 32) )
              v90 = v87 + 16;
            v91 = sub_F6C520(*(_QWORD *)(v26 + 40));
            v105.m128_u64[0] = *(_QWORD *)(v26 + 40);
            v105.m128_u64[1] = v91 * ((v90 != 0) + (v90 - (v90 != 0)) / v91);
          }
        }
        v33 = sub_E90530((__int64 *)&v104) >> 32;
        sub_15AB760(
          (__m128i **)v96.m128i_i64[0],
          *(_QWORD **)(*(_QWORD *)a1 + 248LL),
          v105.m128_i64[0],
          v105.m128_i64[1],
          v33,
          v12);
LABEL_30:
        LODWORD(v9) = v110;
        a4 = 0;
        v97 = 0;
        if ( (_DWORD)v110 )
          continue;
        if ( v100 != *((_QWORD *)&v106 + 1) )
          goto LABEL_32;
LABEL_98:
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
        {
          v39 = v100;
          goto LABEL_35;
        }
LABEL_32:
        v34 = (int)s1[1];
        if ( (unsigned int)sub_E904D0(v100) == v34 && !memcmp(s1[0], s2[0], LODWORD(s1[1])) )
          v39 = *((_QWORD *)&v106 + 1);
        else
          v39 = sub_15AB9E0((__int64)&v106, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v35, v36, v37, v38);
LABEL_35:
        if ( HIDWORD(s1[1]) )
          goto LABEL_69;
LABEL_36:
        if ( ptr != p_ptr + 2 )
          free(ptr);
        return v39;
      case 4LL:
        v21 = 0;
        if ( v104.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v104);
          v22 = *(_QWORD *)(v104.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
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
        goto LABEL_30;
      case 5LL:
        v41 = sub_E900C0(v14);
        v42 = *(_QWORD *)(a1 + 8);
        v43 = v41;
        v44 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v44 )
          goto LABEL_85;
        v45 = (v44 - 1) & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
        v46 = (__int64 *)(v42 + 16LL * v45);
        v47 = *v46;
        if ( v43 == *v46 )
          goto LABEL_41;
        v84 = 1;
        if ( v47 == -4096 )
          goto LABEL_85;
        do
        {
          v85 = v84 + 1;
          v45 = (v44 - 1) & (v84 + v45);
          v46 = (__int64 *)(v42 + 16LL * v45);
          v86 = *v46;
          if ( v43 == *v46 )
          {
LABEL_41:
            sub_AEAAD0((__m128 *)&si128, v46, (_QWORD *)(16 * v44 + v42), a1 + 8, 1);
            v48 = si128.m128i_i64[0];
            goto LABEL_42;
          }
          v84 = v85;
        }
        while ( v86 != -4096 );
LABEL_85:
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v42 + 16LL * (unsigned int)v44),
          (_QWORD *)(v42 + 16LL * (unsigned int)v44),
          a1 + 8,
          1);
        v48 = si128.m128i_i64[0];
LABEL_42:
        v49 = *(unsigned int *)(a1 + 24);
        v97 = v48;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v49),
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v49),
          a1 + 8,
          1);
        if ( si128.m128i_i64[0] != v97 )
          v43 = *(_QWORD *)(v97 + 8);
        v50 = sub_E90530((__int64 *)&v104);
        v51 = 0;
        v52 = HIDWORD(v50);
        if ( v104.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v104);
          v53 = *(_QWORD *)(v104.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v53 )
          {
            v54 = 0;
            v97 = si128.m128i_i64[1];
            v12 = _mm_loadh_ps((const double *)&v97);
            si128 = (__m128i)v12;
            while ( (*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v54 = 1;
              v53 = *(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v54 )
              si128.m128i_i64[0] = v53;
          }
          v51 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB860((__int32 *)v96.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v43, v51, v52);
        goto LABEL_30;
      default:
        goto LABEL_30;
    }
  }
}
