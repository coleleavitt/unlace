__int64 __fastcall sub_360180(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        unsigned int a6,
        int *a7,
        __int64 a8)
{
  int v11; // eax
  int v12; // r8d
  int v13; // eax
  int v14; // r8d
  __int64 v15; // r13
  __int64 (__fastcall *v16)(_QWORD *, char); // rax
  __int64 v17; // rbx
  __int64 v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // r15d
  char *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char *v30; // rax
  char *v31; // r11
  unsigned int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 (__fastcall *v36)(_QWORD *, char); // rax
  char *v37; // rax
  unsigned __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 custom_data_format; // rax
  __int64 v44; // r15
  __int64 v45; // rax
  void (__fastcall *v46)(_QWORD, __int64, _QWORD); // rax
  char dtype_by_size; // al
  __int64 v48; // rax
  char v49; // al
  void *v50; // rdi
  char v51; // al
  unsigned __int64 v52; // rax
  Elf64_Rela *v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // edx
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // r10
  int offset_expr; // eax
  __int64 v61; // r14
  char *v62; // rax
  char v63; // al
  size_t v64; // r14
  unsigned __int64 v65; // rdx
  size_t v66; // r8
  size_t v67; // r14
  char *v68; // rsi
  char v69; // al
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r8
  __int64 name_expr; // rax
  __int64 wide_byte; // rax
  __int64 bytes; // rax
  __int64 v76; // rcx
  int v77; // r9d
  __int64 wide_dword; // rax
  int v79; // eax
  __int64 v80; // r15
  __int64 v81; // rax
  __int64 v82; // r14
  char *v83; // r15
  char *v84; // r14
  char *v85; // rax
  __int64 v86; // [rsp-10h] [rbp-1B0h]
  char *v87; // [rsp-10h] [rbp-1B0h]
  __int64 v88; // [rsp-8h] [rbp-1A8h]
  unsigned int v89; // [rsp+10h] [rbp-190h]
  char *v90; // [rsp+10h] [rbp-190h]
  char *v91; // [rsp+10h] [rbp-190h]
  char *v92; // [rsp+18h] [rbp-188h]
  __int64 v93; // [rsp+18h] [rbp-188h]
  __int64 v94; // [rsp+18h] [rbp-188h]
  __int64 v95; // [rsp+18h] [rbp-188h]
  __int64 v96; // [rsp+20h] [rbp-180h]
  int v97; // [rsp+28h] [rbp-178h]
  void *srca; // [rsp+38h] [rbp-168h]
  char *srcb; // [rsp+38h] [rbp-168h]
  size_t n; // [rsp+40h] [rbp-160h]
  int nd; // [rsp+40h] [rbp-160h]
  char *na; // [rsp+40h] [rbp-160h]
  size_t nb; // [rsp+40h] [rbp-160h]
  char *nc; // [rsp+40h] [rbp-160h]
  size_t ne; // [rsp+40h] [rbp-160h]
  char *v109; // [rsp+48h] [rbp-158h]
  char *v110; // [rsp+48h] [rbp-158h]
  char *v111; // [rsp+48h] [rbp-158h]
  char *v112; // [rsp+48h] [rbp-158h]
  char *v113; // [rsp+48h] [rbp-158h]
  int v114; // [rsp+48h] [rbp-158h]
  void *v115; // [rsp+50h] [rbp-150h] BYREF
  __int128 v116; // [rsp+58h] [rbp-148h]
  void *ptr; // [rsp+70h] [rbp-130h] BYREF
  __int128 v118; // [rsp+78h] [rbp-128h]
  _BYTE v119[24]; // [rsp+90h] [rbp-110h] BYREF
  char *s; // [rsp+A8h] [rbp-F8h] BYREF
  char *v121; // [rsp+B0h] [rbp-F0h]
  unsigned __int64 v122; // [rsp+B8h] [rbp-E8h]
  char v123[2]; // [rsp+162h] [rbp-3Eh] BYREF
  char v124; // [rsp+164h] [rbp-3Ch]
  char v125; // [rsp+165h] [rbp-3Bh]
  __int16 v126; // [rsp+166h] [rbp-3Ah]
  unsigned __int64 v127; // [rsp+168h] [rbp-38h]

  v127 = __readfsqword(0x28u);
  v11 = nbits(a2);
  v12 = v11 + 14;
  v13 = v11 + 7;
  if ( v13 >= 0 )
    v12 = v13;
  v14 = v12 >> 3;
  v15 = a7[2];
  n = a5 * v14;
  if ( !a7[2] )
  {
    v97 = v14;
    v41 = btoa_width((unsigned int)n, a3, 0);
    v14 = v97;
    v15 = v41;
    if ( (a3 & 0x20000) != 0 || (*(_BYTE *)a7 & 2) != 0 )
      v15 = v41 + 1;
  }
  if ( (_BYTE)a6 )
  {
    v22 = *(_QWORD *)(a1 + 16);
    v23 = a8;
    *(_OWORD *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 240) = v22;
    *(_OWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
    *(_BYTE *)(a1 + 265) = 5;
    *(_BYTE *)(a1 + 268) = 8;
    v24 = *(_QWORD *)(a1 + 88);
    v89 = v14;
    *(__m128i *)(a1 + 272) = _mm_loadu_si128(a4);
    v25 = *a7;
    v96 = *(_QWORD *)(v24 + 96);
    sub_573090(v119, a8, a3, 0);
    v30 = (char *)(a3 & 0xF00000);
    if ( v30 == (_BYTE *)&loc_CFFFFB + 5 )
    {
      if ( !*(_BYTE *)(v96 + 437) )
        goto LABEL_57;
      v23 = (unsigned int)*(__int16 *)(v96 + 90);
      if ( !(unsigned __int8)is_attached_custom_data_format((unsigned int)*(__int16 *)(v96 + 88), v23) )
        goto LABEL_57;
      custom_data_format = get_custom_data_format((unsigned int)*(__int16 *)(v96 + 90));
      v44 = custom_data_format;
      if ( !custom_data_format )
        goto LABEL_57;
      v45 = *(_QWORD *)(custom_data_format + 48);
      if ( v45 )
      {
        if ( v45 != a5 )
          goto LABEL_57;
      }
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL) )
      {
        v115 = nullptr;
        ptr = nullptr;
        v116 = 0;
        v118 = 0;
        if ( n > 0x10
          && (ptr = (void *)qvector_reserve(&ptr, 0, n, 1),
              memset((char *)ptr + v118, 0, n - v118),
              v23 = n,
              *(_QWORD *)&v118 = n,
              a4 = (const __m128i *)ptr,
              get_bytes(ptr, n, a2, 0, 0) != n)
          || (v23 = (__int64)&v115,
              v49 = (*(__int64 (__fastcall **)(_QWORD, void **, const __m128i *, size_t, __int64, _QWORD, _QWORD))(v44 + 64))(
                      *(_QWORD *)(v44 + 8),
                      &v115,
                      a4,
                      n,
                      a2,
                      0,
                      (unsigned int)*(__int16 *)(v96 + 88)),
              v28 = v88,
              !v49) )
        {
          if ( ptr )
          {
            *(_QWORD *)&v118 = 0;
            qfree(ptr);
          }
          if ( v115 )
          {
            *(_QWORD *)&v116 = 0;
            a6 = 0;
            qfree(v115);
            goto LABEL_43;
          }
          goto LABEL_57;
        }
        v23 = (__int64)haystack;
        if ( (_QWORD)v116 )
          v23 = (__int64)v115;
        ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64))sub_57B5E0)(v119, v23, 31, v27);
        if ( ptr )
        {
          *(_QWORD *)&v118 = 0;
          qfree(ptr);
        }
        v50 = v115;
        if ( !v115 )
          goto LABEL_22;
        goto LABEL_66;
      }
      v46 = *(void (__fastcall **)(_QWORD, __int64, _QWORD))(v44 + 80);
      if ( !v46 )
        goto LABEL_43;
      v23 = a2;
      v46(*(_QWORD *)(v44 + 8), a2, 0);
LABEL_22:
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL) )
      {
LABEL_23:
        na = (char *)haystack;
        if ( v121 )
          na = s;
        v33 = tag_strlen(na);
        if ( v33 < v15 )
        {
          v34 = v15 - 1 - v33;
          if ( v34 >= 0 )
          {
            do
            {
              v36 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
              if ( v36 == sub_35CB90 )
              {
                v37 = *(char **)(a1 + 32);
                v38 = 2;
                v109 = v37;
                if ( v37 )
                {
                  v38 = (unsigned __int64)(v37 + 1);
                  v109 = v37 - 1;
                }
                v39 = *(_QWORD *)(a1 + 24);
                if ( *(_QWORD *)(a1 + 40) < v38 )
                {
                  v40 = qvector_reserve(a1 + 24, v39, v38, 1);
                  *(_QWORD *)(a1 + 24) = v40;
                  v39 = v40;
                }
                *(_QWORD *)(a1 + 32) = v38;
                v109[v39] = 32;
                v109[*(_QWORD *)(a1 + 24) + 1] = 0;
              }
              else
              {
                v36((_QWORD *)a1, 32);
              }
            }
            while ( v34-- != 0 );
          }
        }
        v23 = (__int64)na;
        (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, na, 0);
      }
      goto LABEL_43;
    }
    v31 = (char *)(a1 + 264);
    v28 = v89;
    v32 = ((v15 > 0) << 11) | (2 * (_BYTE)v25) & 4;
    if ( v30 == (_BYTE *)&loc_3FFFFF + 1 )
    {
      if ( n != 2 )
      {
LABEL_42:
        v26 = *(char **)(a1 + 88);
        if ( v26[16] )
          goto LABEL_43;
        goto LABEL_53;
      }
      v23 = a2;
      v57 = a4->m128i_u16[0];
      v118 = 0;
      ptr = nullptr;
      v58 = sub_5117F0(&ptr, a2, v57, v27, v89);
      v31 = (char *)(a1 + 264);
      if ( v58 >= 0 )
      {
        v23 = (__int64)haystack;
        if ( (_QWORD)v118 )
          v23 = (__int64)ptr;
        sub_57B5E0(v119, v23, 0, v27, v28);
        if ( ptr )
        {
          *(_QWORD *)&v118 = 0;
          qfree(ptr);
        }
        goto LABEL_22;
      }
      v79 = 1024;
      if ( a4->m128i_i16[0] )
        v79 = a3;
      LODWORD(a3) = v79;
      if ( ptr )
      {
        *(_QWORD *)&v118 = 0;
        qfree(ptr);
        v31 = (char *)(a1 + 264);
      }
      v26 = *(char **)(a1 + 88);
      if ( v26[16] )
        goto LABEL_43;
      if ( (a3 & 0xF00000) != 0xC00000 )
        goto LABEL_53;
      if ( a5 == 2 )
      {
        *(_BYTE *)(a1 + 269) = 18;
        goto LABEL_73;
      }
      goto LABEL_68;
    }
    if ( v30 != (_BYTE *)&loc_4FFFFB + 5 )
    {
      v26 = *(char **)(a1 + 88);
      if ( v26[16] )
      {
        if ( v30 == (_BYTE *)&loc_9FFFFB + 5 )
        {
          LODWORD(v29) = 1;
          goto LABEL_21;
        }
        v29 = 6;
        if ( v30 == (char *)&loc_800000 )
        {
LABEL_21:
          nd = v29;
          *(_BYTE *)(a1 + 269) = get_dtype_by_size(a5, a8, v26, v27, v89);
          v23 = a1 + 224;
          sub_3E4AA0(**(_QWORD **)(a1 + 88), a1 + 224, a1 + 264, a8, a3, nd, v32);
          v29 = v86;
          goto LABEL_22;
        }
LABEL_43:
        sub_571590(v119, v23, v26, v27, v28, v29);
        return a6;
      }
      if ( v30 != (_BYTE *)&loc_BFFFFE + 2 )
      {
LABEL_53:
        if ( (a3 & 0x600) != 0x400 )
          goto LABEL_54;
        v27 = (unsigned int)a3 & 0xF0000000;
        if ( v27 == 0x80000000LL )
        {
LABEL_134:
          *(_BYTE *)(a1 + 269) = 3;
          goto LABEL_83;
        }
        if ( v27 == 2415919104LL )
        {
LABEL_148:
          *(_BYTE *)(a1 + 269) = 4;
          goto LABEL_83;
        }
LABEL_54:
        if ( *(_QWORD *)(*(_QWORD *)v26 + 1048LL) == a5 )
        {
          *(_BYTE *)(a1 + 269) = 5;
        }
        else
        {
          v110 = v31;
          dtype_by_size = get_dtype_by_size(a5, v23, v26, v27, v28);
          *(_BYTE *)(a1 + 269) = dtype_by_size;
          v31 = v110;
          if ( !dtype_by_size && a5 != 1 )
          {
LABEL_57:
            a6 = 0;
            goto LABEL_43;
          }
        }
LABEL_83:
        if ( n <= 0x10 )
          goto LABEL_84;
LABEL_141:
        v113 = v31;
        v116 = 0;
        v115 = nullptr;
        v115 = (void *)qvector_reserve(&v115, 0, n, 1);
        memset((char *)v115 + v116, 0, n - v116);
        *(_QWORD *)&v116 = n;
        bytes = get_bytes(v115, n, a2, 0, 0);
        v31 = v113;
        if ( bytes != n )
        {
          if ( v115 )
          {
            *(_QWORD *)&v116 = 0;
            qfree(v115);
            v31 = v113;
          }
LABEL_84:
          v52 = *(unsigned __int8 *)(a1 + 269);
          if ( (unsigned __int8)v52 > 0x12u )
          {
LABEL_76:
            v54 = *(_QWORD *)(v96 + 376);
            if ( v54 )
            {
              v55 = v32;
              v56 = v32;
              BYTE1(v56) = BYTE1(v32) | 0x40;
              if ( (*(_BYTE *)(v54 + 73) & 8) != 0 )
              {
                BYTE1(v55) = BYTE1(v32) | 0x20;
                v56 = v55;
              }
              v54 = v96 + 88;
              BYTE1(v56) |= 0x10u;
              v32 = v56;
            }
            v23 = (__int64)v31;
            sub_57C280(v119, v31, v32, v54, v28);
            goto LABEL_22;
          }
LABEL_74:
          v53 = &stru_48038;
          if ( _bittest64((const __int64 *)&v53, v52) )
            v15 = -v15;
          goto LABEL_76;
        }
        v80 = v116;
        ptr = nullptr;
        v118 = 0;
        v81 = 2 * v116;
        if ( 2LL * (_QWORD)v116 )
        {
          v82 = v81 + 1;
          ptr = (void *)qvector_reserve(&ptr, 0, v81 + 1, 1);
          memset((char *)ptr + v118, 0, v82 - v118);
          *(_QWORD *)&v118 = v82;
          *((_BYTE *)ptr + 2 * v80) = 0;
          v83 = (char *)ptr;
          v84 = (char *)v115;
          v114 = (_DWORD)ptr + v118;
          nc = (char *)v115 + v116;
          if ( v115 == (char *)v115 + (_QWORD)v116 )
            goto LABEL_163;
        }
        else
        {
          v84 = (char *)v115;
          v114 = 0;
          v83 = nullptr;
          nc = (char *)v115 + v116;
          if ( (char *)v115 + (_QWORD)v116 == v115 )
            goto LABEL_170;
        }
        do
        {
          qsnprintf((_DWORD)v83, v114 - (_DWORD)v83, (unsigned int)"%02X", (unsigned __int8)*v84, v28, v77);
          v83 += 2;
          ++v84;
        }
        while ( nc != v84 );
LABEL_163:
        if ( (_QWORD)v118 )
        {
          v23 = (__int64)ptr;
          goto LABEL_165;
        }
LABEL_170:
        v23 = (__int64)haystack;
LABEL_165:
        sub_57B5E0(v119, v23, 31, v76, v28);
        if ( ptr )
        {
          *(_QWORD *)&v118 = 0;
          qfree(ptr);
        }
        v50 = v115;
        if ( v115 )
        {
LABEL_66:
          *(_QWORD *)&v116 = 0;
          qfree(v50);
          goto LABEL_22;
        }
        goto LABEL_22;
      }
      if ( a5 == 2 )
      {
        v51 = 18;
        goto LABEL_72;
      }
LABEL_68:
      if ( (a3 & 0x600) == 0x400 )
      {
        v27 = (unsigned int)a3 & 0xF0000000;
        if ( v27 == 0x80000000LL )
          goto LABEL_134;
        if ( a5 != 4 )
        {
          if ( v27 == 2415919104LL )
            goto LABEL_148;
          goto LABEL_70;
        }
      }
      else if ( a5 != 4 )
      {
LABEL_70:
        if ( a5 != 8 )
          goto LABEL_54;
        v51 = 4;
        goto LABEL_72;
      }
      v51 = 3;
LABEL_72:
      *(_BYTE *)(a1 + 269) = v51;
      if ( n > 0x10 )
        goto LABEL_141;
LABEL_73:
      v52 = *(unsigned __int8 *)(a1 + 269);
      goto LABEL_74;
    }
    switch ( a5 )
    {
      case 1LL:
        srcb = (char *)(a1 + 264);
        wide_byte = get_wide_byte(a2);
        goto LABEL_132;
      case 2LL:
        if ( v89 == 1 )
        {
          v59 = a4->m128i_u16[0];
        }
        else
        {
          srcb = (char *)(a1 + 264);
          wide_byte = get_wide_word(a2);
LABEL_132:
          v31 = srcb;
          v59 = wide_byte;
        }
        goto LABEL_97;
      case 3LL:
        v59 = *(_QWORD *)(a1 + 272);
        goto LABEL_97;
      case 4LL:
        if ( v89 == 1 )
        {
          v59 = a4->m128i_u32[0];
        }
        else
        {
          wide_dword = get_wide_dword(a2);
          v31 = (char *)(a1 + 264);
          v59 = wide_dword;
        }
        if ( !*(_BYTE *)(v96 + 437) )
          goto LABEL_137;
        if ( (*(_DWORD *)(v96 + 112) & 0x4F) != 2 )
          goto LABEL_98;
        v23 = 16;
        v90 = v31;
        v93 = v59;
        v69 = getinf_flag(3, 16);
        v59 = v93;
        v31 = v90;
        if ( v69 )
          goto LABEL_97;
        v70 = getseg(*(_QWORD *)(a1 + 16));
        v59 = v93;
        v31 = v90;
        if ( v70 )
        {
          if ( *(_BYTE *)(v70 + 43) )
            goto LABEL_97;
        }
        if ( *(_DWORD *)(**(_QWORD **)(a1 + 88) + 932LL) )
        {
          v72 = -1;
        }
        else
        {
          v94 = (unsigned __int16)a4->m128i_i32[0];
          v71 = sel2para(HIWORD(a4->m128i_i32[0]));
          v72 = v94;
          v31 = v90;
          v59 = 16 * v71 + v94;
        }
        v23 = a2;
        v91 = v31;
        v95 = v59;
        name_expr = get_name_expr(&s, a2, 0, v59, v72, 0);
        v31 = v91;
        if ( name_expr > 0 )
        {
          v15 = -v15;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL) )
          {
            v61 = *(_QWORD *)(a1 + 632);
            if ( (*(_BYTE *)(v61 + 328) & 1) == 0 )
              goto LABEL_23;
            goto LABEL_103;
          }
          v23 = v95;
          insn_add_dref(a1 + 224, v95, 0, 1);
LABEL_102:
          v61 = *(_QWORD *)(a1 + 632);
          if ( (*(_BYTE *)(v61 + 328) & 1) == 0 )
            goto LABEL_22;
LABEL_103:
          if ( v121 )
          {
            if ( (nb = (size_t)(v121 - 1), v111 = s, (v62 = strchr(s, 43)) != nullptr) && v62 - v111 != -1
              || (v23 = 45, (v85 = strchr(v111, 45)) != nullptr) && (v26 = v111, v85 - v111 != -1) )
            {
              v63 = *(_BYTE *)(v61 + 256);
              v125 = 2;
              v126 = 9;
              v124 = v63;
              *(_WORD *)v123 = 2305;
              v64 = strlen(v123);
              v65 = nb + v64 + 1;
              if ( v122 < v65 )
              {
                v111 = (char *)qvector_reserve(&s, v111, v65, 1);
                v65 = nb + v64 + 1;
                s = v111;
              }
              v121 = (char *)v65;
              v111[nb + v64] = 0;
              if ( nb )
                memmove(&s[v64], s, nb);
              memmove(s, v123, v64);
              v124 = *(_BYTE *)(*(_QWORD *)(a1 + 632) + 257LL);
              v66 = strlen(v123);
              v67 = v66;
              v112 = v121;
              if ( v121 )
              {
                v112 = v121 - 1;
                v67 = (size_t)&v121[v66 - 1];
              }
              v68 = s;
              if ( v122 < v67 + 1 )
              {
                ne = v66;
                s = (char *)qvector_reserve(&s, s, v67 + 1, 1);
                v66 = ne;
                v68 = s;
              }
              v121 = (char *)(v67 + 1);
              v68[v67] = 0;
              v23 = (__int64)v123;
              memmove(&v112[(_QWORD)s], v123, v66);
            }
          }
          goto LABEL_22;
        }
        v59 = a4->m128i_u32[0];
LABEL_97:
        if ( *(_BYTE *)(v96 + 437) )
        {
LABEL_98:
          v92 = v31;
          v23 = a8;
          srca = (void *)v59;
          offset_expr = get_offset_expr((unsigned int)&s, a8, 0, (int)v96 + 88, a2, v59, 0);
          v26 = v87;
          v27 = v88;
          v59 = (__int64)srca;
          v31 = v92;
          if ( offset_expr )
          {
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL) )
            {
              v23 = a2;
              add_refinfo_dref(a1 + 224, a2, v96 + 88, srca, 1, (unsigned int)(a2 - *(_DWORD *)(a1 + 16)));
            }
            v15 = -v15;
            goto LABEL_102;
          }
        }
LABEL_137:
        if ( !*(_BYTE *)v96 && v59 )
          goto LABEL_42;
        v26 = *(char **)(a1 + 88);
        if ( v26[16] )
          goto LABEL_43;
        goto LABEL_54;
      case 8LL:
        v59 = a4->m128i_i64[0];
        goto LABEL_97;
      default:
        goto LABEL_42;
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 9);
  if ( v15 > 0 )
  {
    sub_35CD40(a1, (__int64)"%*s", v15, "?");
  }
  else
  {
    v16 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v16 == sub_35CB90 )
    {
      v17 = *(_QWORD *)(a1 + 32);
      if ( v17 )
      {
        v42 = v17 + 1;
        v18 = *(_QWORD *)(a1 + 32);
        --v17;
        v19 = v42;
      }
      else
      {
        v18 = 1;
        v19 = 2;
      }
      v20 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < v19 )
      {
        v48 = qvector_reserve(a1 + 24, v20, v19, 1);
        *(_QWORD *)(a1 + 24) = v48;
        v20 = v48;
      }
      *(_QWORD *)(a1 + 32) = v19;
      *(_BYTE *)(v20 + v17) = 63;
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v18) = 0;
    }
    else
    {
      v16((_QWORD *)a1, 63);
    }
  }
  a6 = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 9);
  return a6;
}
