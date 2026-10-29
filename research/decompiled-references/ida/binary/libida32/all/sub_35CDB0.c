__int64 __fastcall sub_35CDB0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        const __m128i *a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        unsigned int a8)
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
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // r15d
  char *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char *v30; // rax
  unsigned int v31; // r15d
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 (__fastcall *v35)(_QWORD *, char); // rax
  char *v36; // rax
  unsigned __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r10
  __int64 custom_data_format; // rax
  __int64 v44; // r15
  int v45; // eax
  void (__fastcall *v46)(_QWORD, _QWORD, _QWORD); // rax
  char dtype_by_size; // al
  __int64 v48; // rax
  char v49; // al
  void *v50; // rdi
  char v51; // al
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // edx
  unsigned int v56; // eax
  __int64 v57; // rdx
  unsigned int *v58; // rax
  unsigned int v59; // r11d
  int offset_expr; // eax
  __int64 v61; // r14
  char *v62; // rax
  char v63; // al
  size_t v64; // r14
  unsigned __int64 v65; // rdx
  size_t v66; // r8
  size_t v67; // r14
  char *v68; // rsi
  unsigned int wide_byte; // eax
  __int64 v70; // rcx
  __int64 v71; // r9
  unsigned int wide_dword; // eax
  int v73; // eax
  __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // r14
  char *v77; // r15
  char *v78; // r14
  char v79; // al
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // r8
  __int64 name_expr; // rax
  char *v84; // rax
  __int64 v85; // [rsp-10h] [rbp-1B0h]
  __int64 v86; // [rsp-10h] [rbp-1B0h]
  char *v87; // [rsp-10h] [rbp-1B0h]
  __int64 v88; // [rsp-8h] [rbp-1A8h]
  char **p_s; // [rsp+0h] [rbp-1A0h]
  unsigned __int64 v90; // [rsp+8h] [rbp-198h]
  unsigned __int64 v91; // [rsp+8h] [rbp-198h]
  __int64 v92; // [rsp+10h] [rbp-190h]
  unsigned int v93; // [rsp+18h] [rbp-188h]
  unsigned __int64 v94; // [rsp+18h] [rbp-188h]
  unsigned int v95; // [rsp+18h] [rbp-188h]
  unsigned int v96; // [rsp+18h] [rbp-188h]
  unsigned int v97; // [rsp+18h] [rbp-188h]
  __int64 v98; // [rsp+20h] [rbp-180h]
  int v99; // [rsp+28h] [rbp-178h]
  unsigned int srca; // [rsp+38h] [rbp-168h]
  unsigned __int64 srcb; // [rsp+38h] [rbp-168h]
  unsigned int n; // [rsp+40h] [rbp-160h]
  int nd; // [rsp+40h] [rbp-160h]
  char *na; // [rsp+40h] [rbp-160h]
  size_t nb; // [rsp+40h] [rbp-160h]
  char *nc; // [rsp+40h] [rbp-160h]
  size_t ne; // [rsp+40h] [rbp-160h]
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
    v99 = v14;
    v40 = btoa_width(a5 * v14, a3, 0);
    v14 = v99;
    v15 = v40;
    if ( (a3 & 0x20000) != 0 || (*(_BYTE *)a7 & 2) != 0 )
      v15 = v40 + 1;
  }
  if ( (_BYTE)a6 )
  {
    v22 = *(_DWORD *)(a1 + 16);
    v23 = a8;
    *(_OWORD *)(a1 + 236) = 0;
    *(_DWORD *)(a1 + 220) = v22;
    v92 = a1 + 236;
    *(_QWORD *)(a1 + 252) = 0;
    *(_BYTE *)(a1 + 237) = 5;
    *(_BYTE *)(a1 + 240) = 8;
    v24 = *(_QWORD *)(a1 + 88);
    v93 = v14;
    *(__m128i *)(a1 + 244) = _mm_loadu_si128(a4);
    v25 = *a7;
    v98 = *(_QWORD *)(v24 + 88);
    sub_559580(v119, a8, a3, 0);
    v30 = (char *)(a3 & 0xF00000);
    if ( v30 == (_BYTE *)&loc_CFFFFE + 2 )
    {
      if ( !*(_BYTE *)(v98 + 293) )
        goto LABEL_58;
      v23 = (unsigned int)*(__int16 *)(v98 + 90);
      if ( !(unsigned __int8)is_attached_custom_data_format((unsigned int)*(__int16 *)(v98 + 88), v23) )
        goto LABEL_58;
      custom_data_format = get_custom_data_format((unsigned int)*(__int16 *)(v98 + 90));
      v44 = custom_data_format;
      if ( !custom_data_format )
        goto LABEL_58;
      v45 = *(_DWORD *)(custom_data_format + 48);
      if ( v45 )
      {
        if ( v45 != a5 )
          goto LABEL_58;
      }
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 88) + 12LL) )
      {
        v115 = nullptr;
        ptr = nullptr;
        v116 = 0;
        v118 = 0;
        if ( n > 0x10
          && (ptr = (void *)qvector_reserve(&ptr, 0, n, 1),
              memset((char *)ptr + v118, 0, n - (_QWORD)v118),
              v23 = n,
              *(_QWORD *)&v118 = n,
              a4 = (const __m128i *)ptr,
              n != get_bytes(ptr, n, a2, 0, 0))
          || (v23 = (__int64)&v115,
              v49 = (*(__int64 (__fastcall **)(_QWORD, void **, const __m128i *, _QWORD, _QWORD, _QWORD, _QWORD))(v44 + 56))(
                      *(_QWORD *)(v44 + 8),
                      &v115,
                      a4,
                      n,
                      a2,
                      0,
                      (unsigned int)*(__int16 *)(v98 + 88)),
              v28 = v86,
              v29 = v88,
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
          goto LABEL_58;
        }
        v23 = (__int64)haystack;
        if ( (_QWORD)v116 )
          v23 = (__int64)v115;
        ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64))sub_561CA0)(v119, v23, 31, v27, v86);
        if ( ptr )
        {
          *(_QWORD *)&v118 = 0;
          qfree(ptr);
        }
        v50 = v115;
        if ( !v115 )
          goto LABEL_22;
        goto LABEL_67;
      }
      v46 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v44 + 72);
      if ( !v46 )
        goto LABEL_43;
      v23 = a2;
      v46(*(_QWORD *)(v44 + 8), a2, 0);
LABEL_22:
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 88) + 12LL) )
      {
LABEL_23:
        na = (char *)haystack;
        if ( v121 )
          na = s;
        v32 = tag_strlen(na);
        if ( v32 < v15 )
        {
          v33 = v15 - 1 - v32;
          if ( v33 >= 0 )
          {
            do
            {
              v35 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
              if ( v35 == sub_3598B0 )
              {
                v36 = *(char **)(a1 + 32);
                v37 = 2;
                v111 = v36;
                if ( v36 )
                {
                  v37 = (unsigned __int64)(v36 + 1);
                  v111 = v36 - 1;
                }
                v38 = *(_QWORD *)(a1 + 24);
                if ( *(_QWORD *)(a1 + 40) < v37 )
                {
                  v39 = qvector_reserve(a1 + 24, v38, v37, 1);
                  *(_QWORD *)(a1 + 24) = v39;
                  v38 = v39;
                }
                *(_QWORD *)(a1 + 32) = v37;
                v111[v38] = 32;
                v111[*(_QWORD *)(a1 + 24) + 1] = 0;
              }
              else
              {
                v35((_QWORD *)a1, 32);
              }
            }
            while ( v33-- != 0 );
          }
        }
        v23 = (__int64)na;
        (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, na, 0);
      }
      goto LABEL_43;
    }
    v28 = v93;
    v31 = ((v15 > 0) << 11) | (2 * (_BYTE)v25) & 4;
    if ( v30 == (char *)&loc_400000 )
    {
      if ( n == 2 )
      {
        v23 = a2;
        ptr = nullptr;
        v57 = a4->m128i_u16[0];
        v118 = 0;
        if ( sub_4F9D30(&ptr, a2, v57, v27, v93) >= 0 )
        {
          v23 = (__int64)haystack;
          if ( (_QWORD)v118 )
            v23 = (__int64)ptr;
          sub_561CA0(v119, v23, 0, v27, v28, v29);
          if ( ptr )
          {
            *(_QWORD *)&v118 = 0;
            qfree(ptr);
          }
          goto LABEL_22;
        }
        v73 = 1024;
        if ( a4->m128i_i16[0] )
          v73 = a3;
        LODWORD(a3) = v73;
        if ( ptr )
        {
          *(_QWORD *)&v118 = 0;
          qfree(ptr);
        }
        v26 = *(char **)(a1 + 88);
        if ( v26[12] )
          goto LABEL_43;
        if ( (a3 & 0xF00000) == 0xC00000 )
        {
          if ( a5 == 2 )
          {
            *(_BYTE *)(a1 + 241) = 18;
            goto LABEL_75;
          }
          goto LABEL_70;
        }
      }
      else
      {
LABEL_42:
        v26 = *(char **)(a1 + 88);
        if ( v26[12] )
          goto LABEL_43;
      }
LABEL_53:
      if ( (a3 & 0x600) != 0x400 )
      {
LABEL_54:
        v42 = a5;
        goto LABEL_55;
      }
      v27 = (unsigned int)a3 & 0xF0000000;
      if ( v27 == 0x80000000LL )
      {
LABEL_131:
        *(_BYTE *)(a1 + 241) = 3;
        goto LABEL_84;
      }
      if ( v27 != 2415919104LL )
        goto LABEL_54;
LABEL_141:
      *(_BYTE *)(a1 + 241) = 4;
      goto LABEL_84;
    }
    if ( v30 != (_BYTE *)&loc_4FFFFF + 1 )
    {
      v26 = *(char **)(a1 + 88);
      if ( v26[12] )
      {
        if ( v30 == (char *)&loc_A00000 )
        {
          LODWORD(v29) = 1;
          goto LABEL_21;
        }
        v29 = 6;
        if ( v30 == (_BYTE *)&loc_7FFFF8 + 8 )
        {
LABEL_21:
          nd = v29;
          *(_BYTE *)(a1 + 241) = get_dtype_by_size(a5, a8, v26, v27, v93);
          v23 = a1 + 212;
          sub_3DED70(**(_QWORD **)(a1 + 88), a1 + 212, v92, a8, a3, nd, v31);
          v29 = v85;
          goto LABEL_22;
        }
LABEL_43:
        sub_557A80(v119, v23, v26, v27, v28, v29);
        return a6;
      }
      if ( v30 != (_BYTE *)&loc_BFFFFE + 2 )
        goto LABEL_53;
      if ( a5 == 2 )
      {
        v51 = 18;
        goto LABEL_74;
      }
LABEL_70:
      if ( (a3 & 0x600) == 0x400 )
      {
        v27 = (unsigned int)a3 & 0xF0000000;
        if ( v27 == 0x80000000LL )
          goto LABEL_131;
        if ( a5 != 4 )
        {
          if ( v27 == 2415919104LL )
            goto LABEL_141;
          goto LABEL_72;
        }
      }
      else if ( a5 != 4 )
      {
LABEL_72:
        if ( a5 != 8 )
          goto LABEL_54;
        v51 = 4;
        goto LABEL_74;
      }
      v51 = 3;
LABEL_74:
      *(_BYTE *)(a1 + 241) = v51;
      if ( n > 0x10 )
        goto LABEL_134;
LABEL_75:
      v52 = *(unsigned __int8 *)(a1 + 241);
      goto LABEL_76;
    }
    v42 = a5;
    switch ( a5 )
    {
      case 1u:
        srcb = a5;
        wide_byte = get_wide_byte(a2);
        goto LABEL_129;
      case 2u:
        if ( v93 == 1 )
        {
          v59 = a4->m128i_u16[0];
        }
        else
        {
          srcb = a5;
          wide_byte = get_wide_word(a2);
LABEL_129:
          v42 = srcb;
          v59 = wide_byte;
        }
        goto LABEL_99;
      case 3u:
        v59 = *(_DWORD *)(a1 + 244);
        goto LABEL_99;
      case 4u:
        if ( v93 == 1 )
        {
          v59 = a4->m128i_i32[0];
        }
        else
        {
          wide_dword = get_wide_dword(a2);
          v42 = a5;
          v59 = wide_dword;
        }
        if ( !*(_BYTE *)(v98 + 293) )
          goto LABEL_100;
        if ( (*(_DWORD *)(v98 + 100) & 0x4F) != 2 )
          goto LABEL_108;
        v23 = 16;
        v90 = v42;
        v95 = v59;
        v79 = getinf_flag(3, 16);
        v59 = v95;
        v42 = v90;
        if ( v79 )
          goto LABEL_99;
        v80 = getseg(*(unsigned int *)(a1 + 16));
        v59 = v95;
        v42 = v90;
        if ( v80 )
        {
          if ( *(_BYTE *)(v80 + 23) )
            goto LABEL_99;
        }
        if ( *(_DWORD *)(**(_QWORD **)(a1 + 88) + 764LL) )
        {
          v82 = 0xFFFFFFFFLL;
        }
        else
        {
          v96 = (unsigned __int16)a4->m128i_i32[0];
          v81 = sel2para(HIWORD(a4->m128i_i32[0]));
          v82 = v96;
          v42 = v90;
          v59 = 16 * v81 + v96;
        }
        v23 = a2;
        v91 = v42;
        p_s = &s;
        v97 = v59;
        name_expr = get_name_expr(&s, a2, 0, v59, v82, 0);
        v42 = v91;
        if ( name_expr > 0 )
        {
          v15 = -v15;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 88) + 12LL) )
          {
            v61 = *(_QWORD *)(a1 + 480);
            if ( (*(_BYTE *)(v61 + 328) & 1) == 0 )
              goto LABEL_23;
            goto LABEL_113;
          }
          v23 = v97;
          insn_add_dref(a1 + 212, v97, 0, 1);
LABEL_112:
          v61 = *(_QWORD *)(a1 + 480);
          if ( (*(_BYTE *)(v61 + 328) & 1) == 0 )
            goto LABEL_22;
LABEL_113:
          if ( v121 )
          {
            if ( (nb = (size_t)(v121 - 1), v112 = s, (v62 = strchr(s, 43)) != nullptr) && v62 - v112 != -1
              || (v23 = 45, (v84 = strchr(v112, 45)) != nullptr) && (v26 = v112, v84 - v112 != -1) )
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
                v112 = (char *)qvector_reserve(p_s, v112, v65, 1);
                v65 = nb + v64 + 1;
                s = v112;
              }
              v121 = (char *)v65;
              v112[nb + v64] = 0;
              if ( nb )
                memmove(&s[v64], s, nb);
              memmove(s, v123, v64);
              v124 = *(_BYTE *)(*(_QWORD *)(a1 + 480) + 257LL);
              v66 = strlen(v123);
              v67 = v66;
              v113 = v121;
              if ( v121 )
              {
                v113 = v121 - 1;
                v67 = (size_t)&v121[v66 - 1];
              }
              v68 = s;
              if ( v122 < v67 + 1 )
              {
                ne = v66;
                s = (char *)qvector_reserve(p_s, s, v67 + 1, 1);
                v66 = ne;
                v68 = s;
              }
              v121 = (char *)(v67 + 1);
              v68[v67] = 0;
              v23 = (__int64)v123;
              memmove(&v113[(_QWORD)s], v123, v66);
            }
          }
          goto LABEL_22;
        }
        v58 = (unsigned int *)a4;
LABEL_98:
        v59 = *v58;
LABEL_99:
        if ( *(_BYTE *)(v98 + 293) )
        {
LABEL_108:
          v94 = v42;
          p_s = &s;
          v23 = a8;
          srca = v59;
          offset_expr = get_offset_expr((int)&s, a8, 0, (int)v98 + 88, a2, v59, 0);
          v26 = v87;
          v27 = v88;
          v59 = srca;
          v42 = v94;
          if ( offset_expr )
          {
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 88) + 12LL) )
            {
              v23 = a2;
              add_refinfo_dref(a1 + 212, a2, v98 + 88, srca, 1, a2 - *(_DWORD *)(a1 + 16), &s);
            }
            v15 = -v15;
            goto LABEL_112;
          }
        }
LABEL_100:
        if ( !*(_BYTE *)v98 && v59 )
          goto LABEL_42;
        v26 = *(char **)(a1 + 88);
        if ( v26[12] )
          goto LABEL_43;
LABEL_55:
        if ( v42 == *(_QWORD *)(*(_QWORD *)v26 + 880LL) )
        {
          *(_BYTE *)(a1 + 241) = 5;
        }
        else
        {
          dtype_by_size = get_dtype_by_size(a5, v23, v26, v27, v28);
          *(_BYTE *)(a1 + 241) = dtype_by_size;
          if ( a5 != 1 && !dtype_by_size )
          {
LABEL_58:
            a6 = 0;
            goto LABEL_43;
          }
        }
LABEL_84:
        if ( n <= 0x10 )
          goto LABEL_85;
LABEL_134:
        v116 = 0;
        v115 = nullptr;
        v115 = (void *)qvector_reserve(&v115, 0, n, 1);
        memset((char *)v115 + v116, 0, n - (_QWORD)v116);
        *(_QWORD *)&v116 = n;
        if ( n != get_bytes(v115, n, a2, 0, 0) )
        {
          if ( v115 )
          {
            *(_QWORD *)&v116 = 0;
            qfree(v115);
          }
LABEL_85:
          v52 = *(unsigned __int8 *)(a1 + 241);
          if ( (unsigned __int8)v52 > 0x12u )
          {
LABEL_78:
            v54 = *(_QWORD *)(v98 + 232);
            if ( v54 )
            {
              v55 = v31;
              v56 = v31;
              BYTE1(v56) = BYTE1(v31) | 0x40;
              if ( (*(_BYTE *)(v54 + 73) & 8) != 0 )
              {
                BYTE1(v55) = BYTE1(v31) | 0x20;
                v56 = v55;
              }
              v54 = v98 + 88;
              BYTE1(v56) |= 0x10u;
              v31 = v56;
            }
            v23 = a1 + 236;
            sub_562930(v119, v92, v31, v54, v28);
            goto LABEL_22;
          }
LABEL_76:
          v53 = 294968;
          if ( _bittest64(&v53, v52) )
            v15 = -v15;
          goto LABEL_78;
        }
        v74 = v116;
        ptr = nullptr;
        v118 = 0;
        v75 = 2 * v116;
        if ( 2LL * (_QWORD)v116 )
        {
          v76 = v75 + 1;
          ptr = (void *)qvector_reserve(&ptr, 0, v75 + 1, 1);
          memset((char *)ptr + v118, 0, v76 - v118);
          *(_QWORD *)&v118 = v76;
          *((_BYTE *)ptr + 2 * v74) = 0;
          v77 = (char *)ptr;
          v78 = (char *)v115;
          v114 = (_DWORD)ptr + v118;
          nc = (char *)v115 + v116;
          if ( v115 == (char *)v115 + (_QWORD)v116 )
            goto LABEL_156;
        }
        else
        {
          v78 = (char *)v115;
          v114 = 0;
          v77 = nullptr;
          nc = (char *)v115 + v116;
          if ( v115 == (char *)v115 + (_QWORD)v116 )
            goto LABEL_172;
        }
        do
        {
          qsnprintf((int)v77, v114 - (_DWORD)v77, (int)"%02X", (unsigned __int8)*v78, v28, v71, (char)p_s);
          v77 += 2;
          ++v78;
        }
        while ( nc != v78 );
LABEL_156:
        if ( (_QWORD)v118 )
        {
          v23 = (__int64)ptr;
          goto LABEL_158;
        }
LABEL_172:
        v23 = (__int64)haystack;
LABEL_158:
        sub_561CA0(v119, v23, 31, v70, v28, v71);
        if ( ptr )
        {
          *(_QWORD *)&v118 = 0;
          qfree(ptr);
        }
        v50 = v115;
        if ( v115 )
        {
LABEL_67:
          *(_QWORD *)&v116 = 0;
          qfree(v50);
          goto LABEL_22;
        }
        goto LABEL_22;
      case 8u:
        v58 = (unsigned int *)a4;
        if ( a4->m128i_i32[1] )
          goto LABEL_42;
        goto LABEL_98;
      default:
        goto LABEL_42;
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 9);
  if ( v15 > 0 )
  {
    sub_359A50(a1, (__int64)"%*s", v15, "?");
  }
  else
  {
    v16 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v16 == sub_3598B0 )
    {
      v17 = *(_QWORD *)(a1 + 32);
      if ( v17 )
      {
        v41 = v17 + 1;
        v18 = *(_QWORD *)(a1 + 32);
        --v17;
        v19 = v41;
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

