__int64 __fastcall sub_1DD3CF0(__int64 a1, unsigned __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __m128 *v12; // rax
  __m128 v13; // xmm0
  const __m128i *v14; // rdx
  __int64 v15; // r15
  __m128 v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  unsigned __int64 v21; // rax
  char v22; // cl
  __int64 v23; // rax
  const __m128i *v24; // rdx
  const __m128i *v25; // r11
  unsigned __int64 v26; // r10
  __int64 v27; // rdx
  int v28; // esi
  __int64 v29; // rdi
  __int64 v30; // rdx
  bool v31; // zf
  __int64 v32; // rdx
  char v33; // dl
  __int64 v34; // r13
  unsigned int v35; // eax
  __int32 v36; // rax^4
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rbp
  __int64 v44; // rax
  __int64 v45; // r13
  unsigned __int64 v46; // rax
  __int32 v47; // ecx
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // rdx
  char v50; // si
  __int64 v51; // r13
  unsigned int v52; // eax
  __int64 v53; // r14
  unsigned __int64 v54; // r13
  __int32 v55; // eax
  __int64 v56; // r13
  unsigned int v57; // eax
  __int64 v58; // r14
  unsigned __int64 v59; // r13
  __int32 v60; // eax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 *v64; // rax
  __int64 *v65; // rsi
  unsigned __int64 v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rdx
  unsigned __int64 v69; // r13
  unsigned int v70; // eax
  unsigned __int64 v71; // rax
  __int64 v72; // r12
  unsigned int v73; // eax
  __int64 v74; // rax
  unsigned int v75; // r13d
  unsigned int v76; // r12d
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r14
  __int64 v83; // rax
  __int64 v84; // rdx
  __m128i v85; // [rsp+0h] [rbp-1D8h] BYREF
  void *s2; // [rsp+18h] [rbp-1C0h] BYREF
  unsigned __int64 v87; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v88; // [rsp+28h] [rbp-1B0h]
  void **p_ptr; // [rsp+30h] [rbp-1A8h]
  unsigned __int64 v90; // [rsp+38h] [rbp-1A0h]
  __m128 *v91; // [rsp+40h] [rbp-198h]
  const __m128i *v92; // [rsp+48h] [rbp-190h]
  __int64 v93; // [rsp+50h] [rbp-188h] BYREF
  __int64 v94; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v95; // [rsp+64h] [rbp-174h] BYREF
  char v96; // [rsp+6Ch] [rbp-16Ch]
  __m128 v97; // [rsp+70h] [rbp-168h] BYREF
  __m128 v98; // [rsp+80h] [rbp-158h] BYREF
  __int128 v99; // [rsp+90h] [rbp-148h] BYREF
  void *s1[2]; // [rsp+A0h] [rbp-138h]
  __int128 v101; // [rsp+B0h] [rbp-128h]
  void *ptr; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v103; // [rsp+C8h] [rbp-110h]
  _BYTE v104[64]; // [rsp+D0h] [rbp-108h] BYREF
  __m128i si128; // [rsp+110h] [rbp-C8h] BYREF
  int v106; // [rsp+120h] [rbp-B8h]
  int v107; // [rsp+124h] [rbp-B4h]

  v90 = a2;
  p_ptr = &ptr;
  s2 = a3;
  ptr = v104;
  v103 = 0x400000000LL;
  if ( !a2 )
  {
    v99 = 0;
    *(_OWORD *)s1 = 0;
    v101 = 0;
    goto LABEL_73;
  }
  v8 = a2;
  v9 = 4;
  v10 = 0;
  while ( 1 )
  {
    v85.m128i_i64[0] = v8;
    v11 = (__m128i)_mm_loadh_ps((const double *)&s2);
    if ( v10 + 1 > v9 )
    {
      v85 = v11;
      sub_2237220(p_ptr, v104, v10 + 1, 16);
      v11 = _mm_load_si128(&v85);
      v12 = (__m128 *)((char *)ptr + 16 * (unsigned int)v103);
    }
    else
    {
      v12 = (__m128 *)((char *)ptr + 16 * v10);
    }
    *v12 = (__m128)v11;
    v10 = (unsigned int)(v103 + 1);
    LODWORD(v103) = v103 + 1;
    v8 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      break;
    v9 = HIDWORD(v103);
  }
  v13.m128_u64[0] = 0;
  v99 = 0;
  *(_OWORD *)s1 = 0;
  v101 = 0;
  if ( !(_DWORD)v10 )
    goto LABEL_34;
  v85.m128i_i64[0] = (__int64)&v99;
  v91 = &v98;
  while ( 2 )
  {
    v14 = (const __m128i *)((char *)ptr + 16 * (unsigned int)v10 - 16);
    v15 = v14->m128i_i64[0];
    v16 = (__m128)_mm_loadu_si128(v14);
    LODWORD(v103) = v10 - 1;
    v97 = v16;
    switch ( sub_E90000(v15) )
    {
      case 0LL:
        v87 = sub_E90530((__int64 *)&v97) >> 32;
        v61 = sub_E90530((__int64 *)&v97);
        v62 = 0;
        if ( (*(_BYTE *)(v15 + 8) & 6) == 0 )
          v62 = *(_QWORD *)(v15 + 16);
        v106 = v61;
        si128.m128i_i64[1] = v62;
        si128.m128i_i64[0] = a4;
        v63 = *(_QWORD *)a1;
        v107 = v87;
        if ( !(unsigned __int8)sub_16A7490(v63, 0, (__int64)&si128, 0, v85.m128i_i64[0], a5, 0, 0, 0) )
          goto LABEL_32;
        goto LABEL_55;
      case 1LL:
        v51 = sub_E90060(v15);
        v52 = sub_E90530((__int64 *)&v97);
        v53 = sub_1DD8310(a1, v52, v51);
        v54 = sub_E90530((__int64 *)&v97) >> 32;
        v55 = sub_E90530((__int64 *)&v97);
        sub_15AB7E0((__int32 *)v85.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v53, v55, v54);
        goto LABEL_32;
      case 2LL:
        v56 = sub_E90090(v15);
        v57 = sub_E90530((__int64 *)&v97);
        v58 = sub_1DD8310(a1, v57, v56);
        v59 = sub_E90530((__int64 *)&v97) >> 32;
        v60 = sub_E90530((__int64 *)&v97);
        sub_15AB810((__int32 *)v85.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v58, v60, v59);
        goto LABEL_32;
      case 3LL:
        v23 = sub_E90670(&v97);
        v25 = v24;
        v26 = v23;
        if ( (v23 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_22;
        v27 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v87 = v23;
        if ( (*(_BYTE *)(v27 + 17) & 0xB) != 0 )
        {
          v64 = sub_1DD3870((__int64 *)a1, v23, v25, a4, a5, (__m128i *)v85.m128i_i64[0], *(double *)v13.m128_u64, v16);
          if ( !v64 )
            goto LABEL_55;
          v65 = v64 + 1;
          v23 = *v64;
          v87 = (unsigned __int64)v65;
          v26 = v23;
        }
        else
        {
          v28 = *(_DWORD *)(a1 + 40);
          v29 = *(_QWORD *)a1;
          v92 = v25;
          v88 = v23;
          sub_18C4110(v29, v28, v23);
          v26 = v88;
          v25 = v92;
          v23 = v87;
LABEL_22:
          v87 = (unsigned __int64)v25;
        }
        v88 = v26;
        v13 = _mm_loadh_ps((const double *)&v87);
        v98 = v13;
        if ( !v26 )
          goto LABEL_55;
        v93 = v23;
        v30 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v31 = (*(_BYTE *)(v30 + 17) & 4) == 0;
        v32 = *(_QWORD *)(v30 + 8);
        if ( v31 )
        {
          v33 = *(_BYTE *)(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( v33 == 48 )
            goto LABEL_29;
          v34 = *(_QWORD *)a1;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) == 0 || v33 != 47 )
          {
            v71 = sub_B8F2F0((__int64 *)&v98);
            if ( !v71 || *(char *)(*(_QWORD *)(v71 + 32) + 28LL) >= 0 )
            {
              v72 = *(_QWORD *)a1;
              v73 = sub_F6CCB0((__int64 *)&v98, v13);
              sub_168B9F0((__int64)&si128, (__int64 *)(v72 + 8), v73, 0x10A1u, 0);
              v74 = sub_1605D30((__int64)&si128, &v93);
              v75 = v99;
              v76 = DWORD1(v99);
              v77 = v74;
              if ( *(_BYTE *)(v74 + 120) )
              {
                v95 = v99;
                v96 = 1;
                sub_AEC610((__int64 *)(v74 + 32), (__int64 *)&v95);
              }
              else if ( *(_BYTE *)(v74 + 132) )
              {
                v82 = sub_168B9E0((_QWORD *)v74);
                v83 = *(_QWORD *)(v77 + 16);
                if ( v83 )
                  v83 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v83 + 32LL))(*(_QWORD *)(v77 + 16));
                v94 = v83;
                v84 = *sub_1587BC0(v82, &v94, v78, v79, v80, v81) + 32LL * *(unsigned int *)(v77 + 128);
                v95 = __PAIR64__(v76, v75);
                v96 = 1;
                sub_AEC610((__int64 *)(v84 + 8), (__int64 *)&v95);
              }
              sub_15F7200(&si128);
            }
LABEL_55:
            v42 = 0;
            if ( !HIDWORD(s1[1]) )
              goto LABEL_38;
LABEL_56:
            free(s1[0]);
            goto LABEL_38;
          }
          goto LABEL_28;
        }
        if ( *(_BYTE *)(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
        {
          v34 = *(_QWORD *)a1;
LABEL_28:
          v35 = sub_F6CCB0((__int64 *)v91, v13);
          sub_168B9F0((__int64)&si128, (__int64 *)(v34 + 8), v35, 0x1A6Eu, 0);
          sub_15F7200(&si128);
          v26 = v98.m128_u64[0];
          v23 = v98.m128_u64[0];
        }
LABEL_29:
        if ( (v26 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 )
        {
          v66 = v98.m128_u64[1];
          if ( v26 )
          {
            v67 = *(_QWORD *)(v26 + 32);
            if ( (unsigned __int8)(*(_WORD *)(v26 + 18) >> 3) != 6 || (v68 = 0, v67) )
              v68 = *(_QWORD *)(v98.m128_u64[1] + 8);
            v87 = v26;
            v69 = v98.m128_u64[1];
            sub_15AB8B0(v85.m128i_i64[0], v67, v68);
            if ( (unsigned __int8)(*(_WORD *)(v87 + 18) >> 3) != 6 || *(_QWORD *)(v87 + 32) )
              v69 = v66 + 16;
            v70 = sub_F6C520(*(_QWORD *)(v87 + 40));
            v98.m128_u64[0] = *(_QWORD *)(v87 + 40);
            v98.m128_u64[1] = v70 * ((v69 != 0) + (v69 - (v69 != 0)) / v70);
          }
        }
        v36 = sub_E90530((__int64 *)&v97) >> 32;
        sub_15AB760(
          (__m128i **)v85.m128i_i64[0],
          *(_QWORD **)(*(_QWORD *)a1 + 248LL),
          v98.m128_i64[0],
          v98.m128_i64[1],
          v36,
          v13);
LABEL_32:
        LODWORD(v10) = v103;
        a4 = 0;
        a5 = 0;
        if ( (_DWORD)v103 )
          continue;
        if ( v90 != *((_QWORD *)&v99 + 1) )
          goto LABEL_34;
LABEL_73:
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
        {
          v42 = v90;
          goto LABEL_37;
        }
LABEL_34:
        v37 = (int)s1[1];
        if ( (unsigned int)sub_E904D0(v90) == v37 && !memcmp(s1[0], s2, LODWORD(s1[1])) )
          v42 = *((_QWORD *)&v99 + 1);
        else
          v42 = sub_15AB9E0((__int64)&v99, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v38, v39, v40, v41);
LABEL_37:
        if ( HIDWORD(s1[1]) )
          goto LABEL_56;
LABEL_38:
        if ( ptr != p_ptr + 2 )
          free(ptr);
        return v42;
      case 4LL:
        v20 = 0;
        if ( v97.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v97);
          v21 = *(_QWORD *)(v97.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v21 )
          {
            v22 = 0;
            v87 = si128.m128i_u64[1];
            v13 = _mm_loadh_ps((const double *)&v87);
            si128 = (__m128i)v13;
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
        sub_15AB840((int *)v85.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v20, v17, v18, v19);
        goto LABEL_32;
      case 5LL:
        v44 = sub_E900C0(v15);
        v45 = sub_1DD8310(a1, 0, v44);
        v46 = sub_E90530((__int64 *)&v97);
        v47 = 0;
        v48 = HIDWORD(v46);
        if ( v97.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v97);
          v49 = *(_QWORD *)(v97.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v49 )
          {
            v50 = 0;
            v87 = si128.m128i_u64[1];
            v13 = _mm_loadh_ps((const double *)&v87);
            si128 = (__m128i)v13;
            while ( (*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v50 = 1;
              v49 = *(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v50 )
              si128.m128i_i64[0] = v49;
          }
          v47 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB860((__int32 *)v85.m128i_i64[0], *(_QWORD **)(*(_QWORD *)a1 + 248LL), v45, v47, v48);
        goto LABEL_32;
      default:
        goto LABEL_32;
    }
  }
}
