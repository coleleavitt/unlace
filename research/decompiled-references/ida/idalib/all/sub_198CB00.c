__int64 __fastcall sub_198CB00(__int64 a1, unsigned __int64 a2, void *a3, __int64 a4, __int64 a5)
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
  __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rdx
  char v30; // dl
  __int64 v31; // r13
  unsigned int v32; // eax
  __int32 v33; // rax^4
  int v34; // ebp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbp
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // ecx
  __int64 *v44; // rsi
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  unsigned __int64 v48; // r14
  __int32 v49; // eax
  unsigned __int64 v50; // r15
  int v51; // eax
  unsigned __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r13
  __int64 v57; // rax
  unsigned int v58; // ecx
  __int64 *v59; // rsi
  __int64 v60; // r8
  unsigned __int64 v61; // rax
  __int64 v62; // rsi
  unsigned __int64 v63; // rax
  __int32 v64; // ecx
  unsigned __int64 v65; // r15
  unsigned __int64 v66; // rdx
  char v67; // si
  __int64 v68; // r13
  __int64 v69; // rcx
  __int64 v70; // rdx
  unsigned int v71; // edi
  _QWORD *v72; // rsi
  unsigned __int64 v73; // r15
  __int64 v74; // rax
  _QWORD *v75; // rdx
  unsigned __int64 v76; // r14
  __int32 v77; // eax
  __int64 *v78; // rax
  __int64 v79; // rdi
  int v80; // esi
  int v81; // r8d
  __int64 v82; // r9
  int v83; // esi
  int v84; // r8d
  __int64 v85; // r9
  unsigned __int64 v86; // r14
  __int64 v87; // rsi
  __int64 v88; // rdx
  unsigned __int64 v89; // r13
  unsigned int v90; // eax
  unsigned __int64 v92; // rax
  __int64 v93; // r12
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
    goto LABEL_94;
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
  if ( (_DWORD)v9 )
  {
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
          v50 = sub_E90530((__int64 *)&v104) >> 32;
          v51 = sub_E90530((__int64 *)&v104);
          v52 = 0;
          if ( (*(_BYTE *)(v14 + 8) & 6) == 0 )
            v52 = *(_QWORD *)(v14 + 16);
          si128.m128i_i64[1] = v52;
          v53 = *(_QWORD *)a1;
          si128.m128i_i64[0] = a4;
          v113 = v51;
          v114 = v50;
          if ( !(unsigned __int8)sub_16A7490(v53, 0, (__int64)&si128, 0, v96.m128i_i64[0], v97, 0, 0, 0) )
            goto LABEL_30;
          goto LABEL_45;
        case 1LL:
          v68 = sub_E90060(v14);
          sub_E90530((__int64 *)&v104);
          v69 = *(unsigned int *)(a1 + 24);
          v70 = *(_QWORD *)(a1 + 8);
          if ( !(_DWORD)v69 )
            goto LABEL_77;
          v71 = (v69 - 1) & (((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4));
          v72 = (_QWORD *)(v70 + 16LL * v71);
          if ( v68 == *v72 )
            goto LABEL_62;
          if ( *v72 == -4096 )
            goto LABEL_77;
          do
          {
            v71 = (v69 - 1) & (v20 + v71);
            v72 = (_QWORD *)(v70 + 16LL * v71);
            if ( v68 == *v72 )
            {
LABEL_62:
              v97 = a1 + 8;
              sub_AEAAD0((__m128 *)&si128, v72, (_QWORD *)(16 * v69 + v70), a1 + 8, 1);
              v73 = si128.m128i_i64[0];
              v74 = v97;
              goto LABEL_63;
            }
            ++v20;
          }
          while ( *v72 != -4096 );
LABEL_77:
          v97 = a1 + 8;
          sub_AEAAD0(
            (__m128 *)&si128,
            (_QWORD *)(v70 + 16LL * (unsigned int)v69),
            (_QWORD *)(v70 + 16LL * (unsigned int)v69),
            a1 + 8,
            1);
          v73 = si128.m128i_i64[0];
          v74 = v97;
LABEL_63:
          v75 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
          sub_AEAAD0((__m128 *)&si128, v75, v75, v74, 1);
          if ( v73 != si128.m128i_i64[0] )
            v68 = *(_QWORD *)(v73 + 8);
          v76 = sub_E90530((__int64 *)&v104) >> 32;
          v77 = sub_E90530((__int64 *)&v104);
          sub_15AB7E0((__int32 *)v96.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v68, v77, v76);
          goto LABEL_30;
        case 2LL:
          v40 = sub_E90090(v14);
          sub_E90530((__int64 *)&v104);
          v41 = *(unsigned int *)(a1 + 24);
          v42 = *(_QWORD *)(a1 + 8);
          if ( !(_DWORD)v41 )
            goto LABEL_73;
          v43 = (v41 - 1) & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
          v44 = (__int64 *)(v42 + 16LL * v43);
          v45 = *v44;
          if ( v40 == *v44 )
            goto LABEL_38;
          v80 = 1;
          if ( v45 == -4096 )
            goto LABEL_73;
          do
          {
            v81 = v80 + 1;
            v43 = (v41 - 1) & (v80 + v43);
            v44 = (__int64 *)(v42 + 16LL * v43);
            v82 = *v44;
            if ( v40 == *v44 )
            {
LABEL_38:
              sub_AEAAD0((__m128 *)&si128, v44, (_QWORD *)(16 * v41 + v42), a1 + 8, 1);
              v46 = si128.m128i_i64[0];
              goto LABEL_39;
            }
            v80 = v81;
          }
          while ( v82 != -4096 );
LABEL_73:
          sub_AEAAD0(
            (__m128 *)&si128,
            (_QWORD *)(v42 + 16LL * (unsigned int)v41),
            (_QWORD *)(v42 + 16LL * (unsigned int)v41),
            a1 + 8,
            1);
          v46 = si128.m128i_i64[0];
LABEL_39:
          v47 = *(unsigned int *)(a1 + 24);
          v97 = v46;
          sub_AEAAD0(
            (__m128 *)&si128,
            (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v47),
            (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v47),
            a1 + 8,
            1);
          if ( v97 != si128.m128i_i64[0] )
            v40 = *(_QWORD *)(v97 + 8);
          v48 = sub_E90530((__int64 *)&v104) >> 32;
          v49 = sub_E90530((__int64 *)&v104);
          sub_15AB810((__int32 *)v96.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v40, v49, v48);
          goto LABEL_30;
        case 3LL:
          v24 = sub_E90670(&v104);
          v26 = v24;
          if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v78 = sub_198C690((__int64 *)a1, v24, v25, a4, v97, v96.m128i_i64[0], *(double *)v12.m128_u64, v15);
            if ( !v78 )
              goto LABEL_45;
            v79 = (__int64)(v78 + 1);
            v24 = *v78;
            v97 = v79;
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
            goto LABEL_45;
          v102 = v24;
          v27 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
          v28 = (*(_BYTE *)(v27 + 17) & 4) == 0;
          v29 = *(_QWORD *)(v27 + 8);
          if ( v28 )
          {
            v30 = *(_BYTE *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
            if ( v30 == 48 )
              goto LABEL_27;
            v31 = *(_QWORD *)a1;
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) == 0 || v30 != 47 )
            {
              v92 = sub_B8F2F0((__int64 *)&v105);
              if ( !v92 || *(char *)(*(_QWORD *)(v92 + 32) + 28LL) >= 0 )
              {
                v93 = *(_QWORD *)a1;
                v94 = sub_F6CCB0((__int64 *)&v105, v12);
                sub_168B9F0((__int64)&si128, (__int64 *)(v93 + 8), v94, 0x10A1u, 0);
                v95 = sub_1605D30((__int64)&si128, &v102);
                v103 = v106;
                sub_1587DB0(v95, &v103);
                sub_15F7200(&si128);
              }
LABEL_45:
              v39 = 0;
              goto LABEL_95;
            }
            goto LABEL_26;
          }
          if ( *(_BYTE *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
          {
            v31 = *(_QWORD *)a1;
LABEL_26:
            v32 = sub_F6CCB0((__int64 *)v101, v12);
            sub_168B9F0((__int64)&si128, (__int64 *)(v31 + 8), v32, 0x1A6Eu, 0);
            sub_15F7200(&si128);
            v26 = v105.m128_u64[0];
            v24 = v105.m128_u64[0];
          }
LABEL_27:
          if ( (v26 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 )
          {
            v86 = v105.m128_u64[1];
            if ( v26 )
            {
              v87 = *(_QWORD *)(v26 + 32);
              if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || (v88 = 0, v87) )
                v88 = *(_QWORD *)(v105.m128_u64[1] + 8);
              v89 = v105.m128_u64[1];
              sub_15AB8B0(v96.m128i_i64[0], v87, v88);
              if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || *(_QWORD *)(v26 + 32) )
                v89 = v86 + 16;
              v90 = sub_F6C520(*(_QWORD *)(v26 + 40));
              v105.m128_u64[0] = *(_QWORD *)(v26 + 40);
              v105.m128_u64[1] = v90 * ((v89 != 0) + (v89 - (v89 != 0)) / v90);
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
LABEL_94:
          v39 = v100;
LABEL_95:
          if ( !HIDWORD(s1[1]) )
            goto LABEL_96;
          goto LABEL_35;
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
          v54 = sub_E900C0(v14);
          v55 = *(_QWORD *)(a1 + 8);
          v56 = v54;
          v57 = *(unsigned int *)(a1 + 24);
          if ( !(_DWORD)v57 )
            goto LABEL_81;
          v58 = (v57 - 1) & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4));
          v59 = (__int64 *)(v55 + 16LL * v58);
          v60 = *v59;
          if ( v56 == *v59 )
            goto LABEL_48;
          v83 = 1;
          if ( v60 == -4096 )
            goto LABEL_81;
          do
          {
            v84 = v83 + 1;
            v58 = (v57 - 1) & (v83 + v58);
            v59 = (__int64 *)(v55 + 16LL * v58);
            v85 = *v59;
            if ( v56 == *v59 )
            {
LABEL_48:
              sub_AEAAD0((__m128 *)&si128, v59, (_QWORD *)(16 * v57 + v55), a1 + 8, 1);
              v61 = si128.m128i_i64[0];
              goto LABEL_49;
            }
            v83 = v84;
          }
          while ( v85 != -4096 );
LABEL_81:
          sub_AEAAD0(
            (__m128 *)&si128,
            (_QWORD *)(v55 + 16LL * (unsigned int)v57),
            (_QWORD *)(v55 + 16LL * (unsigned int)v57),
            a1 + 8,
            1);
          v61 = si128.m128i_i64[0];
LABEL_49:
          v62 = *(unsigned int *)(a1 + 24);
          v97 = v61;
          sub_AEAAD0(
            (__m128 *)&si128,
            (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v62),
            (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v62),
            a1 + 8,
            1);
          if ( si128.m128i_i64[0] != v97 )
            v56 = *(_QWORD *)(v97 + 8);
          v63 = sub_E90530((__int64 *)&v104);
          v64 = 0;
          v65 = HIDWORD(v63);
          if ( v104.m128_u64[0] )
          {
            si128 = _mm_load_si128((const __m128i *)&v104);
            v66 = *(_QWORD *)(v104.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v66 )
            {
              v67 = 0;
              v97 = si128.m128i_i64[1];
              v12 = _mm_loadh_ps((const double *)&v97);
              si128 = (__m128i)v12;
              while ( (*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v67 = 1;
                v66 = *(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              }
              if ( v67 )
                si128.m128i_i64[0] = v66;
            }
            v64 = sub_E90530(si128.m128i_i64);
          }
          sub_15AB860((__int32 *)v96.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v56, v64, v65);
          goto LABEL_30;
        default:
          goto LABEL_30;
      }
    }
  }
LABEL_32:
  v34 = (int)s1[1];
  if ( (unsigned int)sub_E904D0(v100) != v34 || memcmp(s1[0], s2[0], LODWORD(s1[1])) )
  {
    v39 = sub_15AB9E0((__int64)&v106, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v35, v36, v37, v38);
    goto LABEL_95;
  }
  v39 = *((_QWORD *)&v106 + 1);
  if ( HIDWORD(s1[1]) )
LABEL_35:
    free(s1[0]);
LABEL_96:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v39;
}
