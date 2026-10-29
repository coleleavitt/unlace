__int64 __fastcall sub_1C8F200(__int64 a1, unsigned __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  __m128i v10; // xmm0
  __m128 v11; // xmm0
  const __m128i *v12; // rax
  __int64 v13; // r14
  __m128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r15d
  int v20; // edx
  unsigned __int64 v21; // rax
  char v22; // cl
  __int64 v23; // rax
  const __m128i *v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rdx
  bool v27; // zf
  __int64 v28; // rdx
  char v29; // dl
  __int64 v30; // r13
  unsigned int v31; // eax
  __int32 v32; // rax^4
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbp
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rax
  unsigned int v43; // ecx
  __int64 *v44; // rsi
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  unsigned __int64 v48; // rax
  __int32 v49; // ecx
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rdx
  char v52; // si
  __int64 v53; // r13
  __int64 v54; // rcx
  __int64 v55; // rdx
  unsigned int v56; // edi
  _QWORD *v57; // rsi
  unsigned __int64 v58; // r15
  __int64 v59; // rax
  _QWORD *v60; // rdx
  unsigned __int64 v61; // r14
  __int32 v62; // eax
  __int64 v63; // r13
  __int64 v64; // rax
  __int64 v65; // rdx
  unsigned int v66; // ecx
  __int64 *v67; // rsi
  __int64 v68; // r8
  unsigned __int64 v69; // rax
  __int64 v70; // rsi
  unsigned __int64 v71; // r14
  __int32 v72; // eax
  unsigned __int64 v73; // r15
  int v74; // eax
  unsigned __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 *v77; // rax
  __int64 v78; // rcx
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
  __int64 v91; // r12
  unsigned int v92; // eax
  __int64 v93; // rax
  __m128i v94; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v95; // [rsp+10h] [rbp-1A8h] BYREF
  void *s2[2]; // [rsp+18h] [rbp-1A0h] BYREF
  void **p_ptr; // [rsp+28h] [rbp-190h]
  __m128 *v98; // [rsp+30h] [rbp-188h]
  unsigned __int64 v99; // [rsp+38h] [rbp-180h]
  __int64 v100; // [rsp+40h] [rbp-178h] BYREF
  __int64 v101; // [rsp+48h] [rbp-170h] BYREF
  __m128 v102; // [rsp+50h] [rbp-168h] BYREF
  __m128 v103; // [rsp+60h] [rbp-158h] BYREF
  __int128 v104; // [rsp+70h] [rbp-148h] BYREF
  void *s1[2]; // [rsp+80h] [rbp-138h]
  __int128 v106; // [rsp+90h] [rbp-128h]
  void *ptr; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-110h]
  _BYTE v109[64]; // [rsp+B0h] [rbp-108h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-C8h] BYREF
  int v111; // [rsp+100h] [rbp-B8h]
  int v112; // [rsp+104h] [rbp-B4h]

  v99 = a2;
  p_ptr = &ptr;
  s2[0] = a3;
  v95 = a5;
  ptr = v109;
  v108 = 0x400000000LL;
  if ( !a2 )
  {
    LODWORD(v9) = 0;
    v104 = 0;
    *(_OWORD *)s1 = 0;
    v106 = 0;
    goto LABEL_32;
  }
  v7 = a2;
  v8 = 4;
  v9 = 0;
  while ( 1 )
  {
    v94.m128i_i64[0] = v7;
    v10 = (__m128i)_mm_loadh_ps((const double *)s2);
    if ( v9 + 1 > v8 )
    {
      v94 = v10;
      sub_2237220(p_ptr, v109, v9 + 1, 16);
      *((__m128i *)ptr + (unsigned int)v108) = _mm_load_si128(&v94);
    }
    else
    {
      *((__m128i *)ptr + v9) = v10;
    }
    v9 = (unsigned int)(v108 + 1);
    LODWORD(v108) = v108 + 1;
    v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      break;
    v8 = HIDWORD(v108);
  }
  v11.m128_u64[0] = 0;
  v104 = 0;
  *(_OWORD *)s1 = 0;
  v106 = 0;
  if ( !(_DWORD)v9 )
  {
LABEL_32:
    if ( (unsigned int)sub_E904D0(v99) == (_DWORD)v9 && !memcmp(s1[0], s2[0], LODWORD(s1[1])) )
      v37 = *((_QWORD *)&v104 + 1);
    else
      v37 = sub_15AB9E0((__int64)&v104, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v33, v34, v35, v36);
    if ( HIDWORD(s1[1]) )
      goto LABEL_69;
    goto LABEL_36;
  }
  v94.m128i_i64[0] = (__int64)&v104;
  v98 = &v103;
  while ( 2 )
  {
    v12 = (const __m128i *)((char *)ptr + 16 * (unsigned int)v9 - 16);
    v13 = v12->m128i_i64[0];
    v14 = (__m128)_mm_loadu_si128(v12);
    LODWORD(v108) = v9 - 1;
    v102 = v14;
    v15 = sub_E90000(v13);
    v19 = v15;
    switch ( v15 )
    {
      case 0LL:
        v73 = sub_E90530((__int64 *)&v102) >> 32;
        v74 = sub_E90530((__int64 *)&v102);
        v75 = 0;
        if ( (*(_BYTE *)(v13 + 8) & 6) == 0 )
          v75 = *(_QWORD *)(v13 + 16);
        si128.m128i_i64[1] = v75;
        v76 = *(_QWORD *)a1;
        si128.m128i_i64[0] = a4;
        v111 = v74;
        v112 = v73;
        if ( !(unsigned __int8)sub_16A7490(v76, 0, (__int64)&si128, 0, v94.m128i_i64[0], v95, 0, 0, 0) )
          goto LABEL_30;
        goto LABEL_68;
      case 1LL:
        v53 = sub_E90060(v13);
        sub_E90530((__int64 *)&v102);
        v54 = *(unsigned int *)(a1 + 24);
        v55 = *(_QWORD *)(a1 + 8);
        if ( !(_DWORD)v54 )
          goto LABEL_81;
        v56 = (v54 - 1) & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
        v57 = (_QWORD *)(v55 + 16LL * v56);
        if ( v53 == *v57 )
          goto LABEL_55;
        if ( *v57 == -4096 )
          goto LABEL_81;
        do
        {
          v56 = (v54 - 1) & (v19 + v56);
          v57 = (_QWORD *)(v55 + 16LL * v56);
          if ( v53 == *v57 )
          {
LABEL_55:
            v95 = a1 + 8;
            sub_AEAAD0((__m128 *)&si128, v57, (_QWORD *)(16 * v54 + v55), a1 + 8, 1);
            v58 = si128.m128i_i64[0];
            v59 = v95;
            goto LABEL_56;
          }
          ++v19;
        }
        while ( *v57 != -4096 );
LABEL_81:
        v95 = a1 + 8;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v55 + 16LL * (unsigned int)v54),
          (_QWORD *)(v55 + 16LL * (unsigned int)v54),
          a1 + 8,
          1);
        v58 = si128.m128i_i64[0];
        v59 = v95;
LABEL_56:
        v60 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
        sub_AEAAD0((__m128 *)&si128, v60, v60, v59, 1);
        if ( v58 != si128.m128i_i64[0] )
          v53 = *(_QWORD *)(v58 + 8);
        v61 = sub_E90530((__int64 *)&v102) >> 32;
        v62 = sub_E90530((__int64 *)&v102);
        sub_15AB7E0((__int32 *)v94.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v53, v62, v61);
        goto LABEL_30;
      case 2LL:
        v63 = sub_E90090(v13);
        sub_E90530((__int64 *)&v102);
        v64 = *(unsigned int *)(a1 + 24);
        v65 = *(_QWORD *)(a1 + 8);
        if ( !(_DWORD)v64 )
          goto LABEL_77;
        v66 = (v64 - 1) & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
        v67 = (__int64 *)(v65 + 16LL * v66);
        v68 = *v67;
        if ( v63 == *v67 )
          goto LABEL_61;
        v79 = 1;
        if ( v68 == -4096 )
          goto LABEL_77;
        do
        {
          v80 = v79 + 1;
          v66 = (v64 - 1) & (v79 + v66);
          v67 = (__int64 *)(v65 + 16LL * v66);
          v81 = *v67;
          if ( v63 == *v67 )
          {
LABEL_61:
            sub_AEAAD0((__m128 *)&si128, v67, (_QWORD *)(16 * v64 + v65), a1 + 8, 1);
            v69 = si128.m128i_i64[0];
            goto LABEL_62;
          }
          v79 = v80;
        }
        while ( v81 != -4096 );
LABEL_77:
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v65 + 16LL * (unsigned int)v64),
          (_QWORD *)(v65 + 16LL * (unsigned int)v64),
          a1 + 8,
          1);
        v69 = si128.m128i_i64[0];
LABEL_62:
        v70 = *(unsigned int *)(a1 + 24);
        v95 = v69;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v70),
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v70),
          a1 + 8,
          1);
        if ( v95 != si128.m128i_i64[0] )
          v63 = *(_QWORD *)(v95 + 8);
        v71 = sub_E90530((__int64 *)&v102) >> 32;
        v72 = sub_E90530((__int64 *)&v102);
        sub_15AB810((__int32 *)v94.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v63, v72, v71);
        goto LABEL_30;
      case 3LL:
        v23 = sub_E90670(&v102);
        v25 = v23;
        if ( (v23 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v77 = sub_1C8ED80((__int64 *)a1, v23, v24, a4, v95, v94.m128i_i64[0], *(double *)v11.m128_u64, v14);
          if ( !v77 )
            goto LABEL_68;
          v78 = (__int64)(v77 + 1);
          v23 = *v77;
          v95 = v78;
          v25 = v23;
        }
        else
        {
          v95 = (__int64)v24;
        }
        s2[1] = (void *)v25;
        v11 = _mm_loadh_ps((const double *)&v95);
        v103 = v11;
        if ( !v25 )
          goto LABEL_68;
        v100 = v23;
        v26 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v27 = (*(_BYTE *)(v26 + 17) & 4) == 0;
        v28 = *(_QWORD *)(v26 + 8);
        if ( !v27 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47 )
            goto LABEL_27;
          v30 = *(_QWORD *)a1;
          goto LABEL_26;
        }
        v29 = *(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( v29 == 48 )
        {
LABEL_27:
          if ( (v25 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 )
          {
            v85 = v103.m128_u64[1];
            if ( v25 )
            {
              v86 = *(_QWORD *)(v25 + 32);
              if ( (unsigned __int8)(*(_WORD *)(v25 + 18) >> 3) != 6 || (v87 = 0, v86) )
                v87 = *(_QWORD *)(v103.m128_u64[1] + 8);
              v88 = v103.m128_u64[1];
              sub_15AB8B0(v94.m128i_i64[0], v86, v87);
              if ( (unsigned __int8)(*(_WORD *)(v25 + 18) >> 3) != 6 || *(_QWORD *)(v25 + 32) )
                v88 = v85 + 16;
              v89 = sub_F6C520(*(_QWORD *)(v25 + 40));
              v103.m128_u64[0] = *(_QWORD *)(v25 + 40);
              v103.m128_u64[1] = v89 * ((v88 != 0) + (v88 - (v88 != 0)) / v89);
            }
          }
          v32 = sub_E90530((__int64 *)&v102) >> 32;
          sub_15AB760(
            (__m128i **)v94.m128i_i64[0],
            *(_QWORD **)(*(_QWORD *)a1 + 248LL),
            v103.m128_i64[0],
            v103.m128_i64[1],
            v32,
            v11);
LABEL_30:
          LODWORD(v9) = v108;
          a4 = 0;
          v95 = 0;
          if ( !(_DWORD)v108 )
          {
            LODWORD(v9) = s1[1];
            goto LABEL_32;
          }
          continue;
        }
        v30 = *(_QWORD *)a1;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) != 0 && v29 == 47 )
        {
LABEL_26:
          v31 = sub_F6CCB0((__int64 *)v98, v11);
          sub_168B9F0((__int64)&si128, (__int64 *)(v30 + 8), v31, 0x1A6Eu, 0);
          sub_15F7200(&si128);
          v25 = v103.m128_u64[0];
          v23 = v103.m128_u64[0];
          goto LABEL_27;
        }
        v90 = sub_B8F2F0((__int64 *)&v103);
        if ( !v90 || *(char *)(*(_QWORD *)(v90 + 32) + 28LL) >= 0 )
        {
          v91 = *(_QWORD *)a1;
          v92 = sub_F6CCB0((__int64 *)&v103, v11);
          sub_168B9F0((__int64)&si128, (__int64 *)(v91 + 8), v92, 0x10A1u, 0);
          v93 = sub_1605D30((__int64)&si128, &v100);
          v101 = v104;
          sub_1587DB0(v93, &v101);
          sub_15F7200(&si128);
        }
LABEL_68:
        v37 = 0;
        if ( HIDWORD(s1[1]) )
LABEL_69:
          free(s1[0]);
LABEL_36:
        if ( ptr != p_ptr + 2 )
          free(ptr);
        return v37;
      case 4LL:
        v20 = 0;
        if ( v102.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v102);
          v21 = *(_QWORD *)(v102.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v21 )
          {
            v22 = 0;
            v95 = si128.m128i_i64[1];
            v11 = _mm_loadh_ps((const double *)&v95);
            si128 = (__m128i)v11;
            while ( (*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v22 = 1;
              v21 = *(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v22 )
              si128.m128i_i64[0] = v21;
          }
          v20 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB840((int *)v94.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v20, v16, v17, v18);
        goto LABEL_30;
      case 5LL:
        v39 = sub_E900C0(v13);
        v40 = *(_QWORD *)(a1 + 8);
        v41 = v39;
        v42 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v42 )
          goto LABEL_85;
        v43 = (v42 - 1) & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
        v44 = (__int64 *)(v40 + 16LL * v43);
        v45 = *v44;
        if ( v41 == *v44 )
          goto LABEL_41;
        v82 = 1;
        if ( v45 == -4096 )
          goto LABEL_85;
        do
        {
          v83 = v82 + 1;
          v43 = (v42 - 1) & (v82 + v43);
          v44 = (__int64 *)(v40 + 16LL * v43);
          v84 = *v44;
          if ( v41 == *v44 )
          {
LABEL_41:
            sub_AEAAD0((__m128 *)&si128, v44, (_QWORD *)(16 * v42 + v40), a1 + 8, 1);
            v46 = si128.m128i_i64[0];
            goto LABEL_42;
          }
          v82 = v83;
        }
        while ( v84 != -4096 );
LABEL_85:
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(v40 + 16LL * (unsigned int)v42),
          (_QWORD *)(v40 + 16LL * (unsigned int)v42),
          a1 + 8,
          1);
        v46 = si128.m128i_i64[0];
LABEL_42:
        v47 = *(unsigned int *)(a1 + 24);
        v95 = v46;
        sub_AEAAD0(
          (__m128 *)&si128,
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v47),
          (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v47),
          a1 + 8,
          1);
        if ( si128.m128i_i64[0] != v95 )
          v41 = *(_QWORD *)(v95 + 8);
        v48 = sub_E90530((__int64 *)&v102);
        v49 = 0;
        v50 = HIDWORD(v48);
        if ( v102.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v102);
          v51 = *(_QWORD *)(v102.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v51 )
          {
            v52 = 0;
            v95 = si128.m128i_i64[1];
            v11 = _mm_loadh_ps((const double *)&v95);
            si128 = (__m128i)v11;
            while ( (*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v52 = 1;
              v51 = *(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v52 )
              si128.m128i_i64[0] = v51;
          }
          v49 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB860((__int32 *)v94.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v41, v49, v50);
        goto LABEL_30;
      default:
        goto LABEL_30;
    }
  }
}
