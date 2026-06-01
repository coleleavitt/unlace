_QWORD *__fastcall sub_1EE710(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 a5,
        int **a6,
        int a7,
        unsigned int a8)
{
  bool v8; // zf
  const char *v9; // rsi
  __int64 idati; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  char *v13; // rbp
  const char *v14; // rbx
  char *v15; // rcx
  char v16; // dl
  char *v17; // rax
  int v18; // r13d
  char *v19; // r14
  __int64 v20; // r15
  char v21; // dl
  unsigned int utf8_char; // eax
  int flags; // eax
  __int64 strid; // r14
  char type_by_tid; // al
  char *v27; // r14
  const char *v28; // rsi
  char *v29; // rax
  size_t v30; // r13
  __int64 v31; // r14
  void *v32; // r15
  int *v33; // rax
  __int64 v34; // rcx
  int *v35; // rdi
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  __int64 v39; // rdx
  size_t v40; // r12
  const char *v41; // rbx
  const char *v42; // rbx
  _BYTE *v43; // rsi
  void *v44; // rdi
  char valid; // dl
  char *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  char *v49; // rbx
  char *v50; // r12
  unsigned int v51; // eax
  __int64 v52; // r15
  __int64 v53; // rdi
  __int64 v54; // r12
  char *v55; // r14
  int tinfo_udt_member; // r12d
  __m128i v57; // xmm0
  void *v58; // rdx
  __m128i v59; // xmm1
  __int64 v60; // rax
  __int64 v61; // rdi
  void *v62; // rbx
  __m128i v63; // xmm0
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  char *v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // r14
  void *v70; // rdi
  unsigned int v71; // eax
  __int64 tinfo_tid; // rax
  unsigned __int64 v73; // rdx
  __m128i v74; // [rsp+0h] [rbp-1A8h] BYREF
  _QWORD *v75; // [rsp+10h] [rbp-198h]
  _QWORD *v76; // [rsp+18h] [rbp-190h]
  _DWORD *v77; // [rsp+20h] [rbp-188h]
  __int64 v78; // [rsp+28h] [rbp-180h]
  int **v79; // [rsp+30h] [rbp-178h]
  int v80; // [rsp+3Ch] [rbp-16Ch]
  __int64 v81; // [rsp+48h] [rbp-160h] BYREF
  char *v82; // [rsp+50h] [rbp-158h] BYREF
  __int64 v83; // [rsp+58h] [rbp-150h] BYREF
  void *dest; // [rsp+60h] [rbp-148h] BYREF
  __m128i v85; // [rsp+68h] [rbp-140h] BYREF
  char *v86; // [rsp+80h] [rbp-128h] BYREF
  __int128 v87; // [rsp+88h] [rbp-120h]
  __int64 v88; // [rsp+98h] [rbp-110h]
  __int128 v89; // [rsp+A0h] [rbp-108h]
  __int64 v90; // [rsp+B0h] [rbp-F8h]
  __int64 v91; // [rsp+B8h] [rbp-F0h]
  int v92; // [rsp+C0h] [rbp-E8h]
  char v93; // [rsp+C4h] [rbp-E4h]
  _BYTE v94[24]; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v95; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-B0h]
  __int128 v97; // [rsp+100h] [rbp-A8h]
  _OWORD v98[3]; // [rsp+110h] [rbp-98h] BYREF
  __int64 v99; // [rsp+140h] [rbp-68h]
  int v100; // [rsp+148h] [rbp-60h]
  __int64 v101; // [rsp+150h] [rbp-58h]
  char v102; // [rsp+158h] [rbp-50h]
  unsigned __int64 v103; // [rsp+168h] [rbp-40h]

  v8 = *(_QWORD *)(a5 + 16) == 0;
  v75 = a1;
  v74.m128i_i64[0] = a2;
  v76 = a3;
  v77 = a4;
  v78 = a5;
  v79 = a6;
  v103 = __readfsqword(0x28u);
  v81 = 0;
  if ( v8 )
  {
    dest = nullptr;
    v82 = (char *)&s1;
    memset(v94, 0, sizeof(v94));
    v85 = 0;
LABEL_3:
    v9 = &s1;
LABEL_4:
    tag_remove(v94, v9, 0);
    idati = (__int64)&s1;
    if ( *(_QWORD *)&v94[8] )
      idati = *(_QWORD *)v94;
    v11 = extract_name(&dest, idati, (unsigned int)a7);
    v12 = *(_QWORD *)v94;
    if ( v11 > 0 )
    {
      if ( *(_QWORD *)v94 )
      {
        *(_QWORD *)&v94[8] = 0;
        qfree(*(_QWORD *)v94, (const char *)idati);
      }
      v80 = -1;
      v13 = nullptr;
      v14 = nullptr;
      goto LABEL_48;
    }
    *v75 = 0;
    if ( v12 )
    {
      *(_QWORD *)&v94[8] = 0;
      qfree(v12, (const char *)idati);
    }
    goto LABEL_37;
  }
  v15 = *(char **)(a5 + 8);
  v82 = v15;
  v16 = *v15;
  v17 = v15;
  if ( !*v15 )
  {
    dest = nullptr;
    memset(v94, 0, sizeof(v94));
    v85 = 0;
    goto LABEL_170;
  }
  v18 = 0;
  v14 = nullptr;
  v13 = nullptr;
  v19 = nullptr;
  v20 = -1;
  while ( 2 )
  {
    if ( (unsigned __int8)(v16 - 1) > 1u )
      goto LABEL_16;
    do
    {
      do
      {
        if ( v16 != 1 )
        {
LABEL_14:
          v14 = nullptr;
          v19 = nullptr;
          v20 = -1;
          goto LABEL_15;
        }
        v21 = v17[1];
        if ( v21 == 40 )
        {
          v46 = v17 + 2;
          v19 = v17 + 18;
          while ( *v46 )
          {
            if ( ++v46 == v19 )
              goto LABEL_76;
          }
          v19 = v46;
LABEL_76:
          v20 = sub_192240((__int64)v17);
        }
        else
        {
          v14 = v17 + 2;
          if ( v21 != 7 )
            goto LABEL_14;
        }
LABEL_15:
        v17 = (char *)tag_skipcode(v82);
        v82 = v17;
        v16 = *v17;
      }
      while ( (unsigned __int8)(*v17 - 1) <= 1u );
LABEL_16:
      ;
    }
    while ( v16 == 4 );
    if ( v18 < a7 && v16 )
    {
      utf8_char = get_utf8_char(&v82);
      if ( utf8_char == -1 )
      {
        ++v82;
LABEL_69:
        if ( v13 )
        {
          valid = is_valid_cp(utf8_char, 2, 0);
          v17 = v82;
          if ( !valid )
            v13 = nullptr;
        }
        else
        {
          v17 = v82;
        }
        goto LABEL_27;
      }
      if ( !v18 || utf8_char != 46 )
        goto LABEL_69;
      v17 = v82;
      v13 = v82 - 1;
LABEL_27:
      v16 = *v17;
      ++v18;
      if ( !*v17 )
        break;
      continue;
    }
    break;
  }
  dest = nullptr;
  v85 = 0;
  if ( v20 == -1 || v19 >= v13 )
  {
    if ( v14 )
    {
      v27 = (char *)(v14 + 1);
      v28 = (_BYTE *)(&qword_28 + 6);
      v29 = strchr(v14 + 1, 46);
      v82 = v29;
      if ( v29 )
      {
        v30 = v29 - v14;
      }
      else
      {
        v8 = v14[1] == 0;
        v74.m128i_i64[0] = (__int64)v94;
        if ( v8 )
        {
          v82 = (char *)(v14 + 1);
          v30 = 1;
          v69 = 2;
          memset(v94, 0, sizeof(v94));
          goto LABEL_148;
        }
        do
        {
          *(_QWORD *)v94 = v27;
          v71 = get_utf8_char(v74.m128i_i64[0]);
          if ( v71 == -1 )
            break;
          v28 = &byte_6;
          if ( !(unsigned __int8)is_valid_cp(v71, 6, 0) )
            break;
          v27 = *(char **)v94;
        }
        while ( **(_BYTE **)v94 );
        v82 = v27;
        v30 = v27 - v14;
      }
      v31 = 0;
      v32 = nullptr;
      memset(v94, 0, sizeof(v94));
      if ( !v30 )
        goto LABEL_44;
      v69 = v30 + 1;
      if ( v30 == -1 )
      {
        v30 = -1;
        v70 = nullptr;
LABEL_139:
        v28 = v14;
        *(_QWORD *)&v94[8] = v69;
        memmove(v70, v14, v30);
        *(_BYTE *)(*(_QWORD *)v94 + v30) = 0;
        v30 = *(_QWORD *)&v94[8];
        v32 = *(void **)v94;
        v31 = *(_QWORD *)&v94[16];
LABEL_44:
        v12 = (__int64)dest;
        memset(v94, 0, sizeof(v94));
        if ( dest )
        {
          v85.m128i_i64[0] = 0;
          qfree(dest, v28);
          v12 = *(_QWORD *)v94;
          dest = v32;
          v85.m128i_i64[0] = v30;
          v85.m128i_i64[1] = v31;
          if ( *(_QWORD *)v94 )
          {
            *(_QWORD *)&v94[8] = 0;
            qfree(*(_QWORD *)v94, v28);
          }
        }
        else
        {
          dest = v32;
          v85.m128i_i64[0] = v30;
          v85.m128i_i64[1] = v31;
        }
        goto LABEL_47;
      }
LABEL_148:
      *(_QWORD *)v94 = qvector_reserve(v94, 0, v69, 1);
      v70 = *(void **)v94;
      goto LABEL_139;
    }
    if ( v13 )
    {
      v86 = nullptr;
      v66 = *(_QWORD *)v74.m128i_i64[0];
      idati = (__int64)&v86;
      v88 = 0;
      v92 = -1;
      v90 = 0;
      v91 = -1;
      v93 = 0;
      v87 = 0;
      v89 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, char **, __int64, int **, _QWORD, _QWORD))(v66 + 896))(
             v74.m128i_i64[0],
             &v86,
             v78,
             v79,
             (unsigned int)a7,
             a8)
        && v91 != -1 )
      {
        v83 = 0;
        v96 = 0;
        v99 = 1;
        v100 = -1;
        v101 = 0;
        v102 = 0;
        v74.m128i_i64[0] = (__int64)v94;
        memset(v94, 0, sizeof(v94));
        v95 = 0;
        v97 = 0;
        v98[0] = 0;
        get_udm_by_tid(&v83, v94, v91);
        idati = 2;
        if ( (get_tinfo_property(*(_QWORD *)&v98[0], 2) & 0x2F) == 0xD )
        {
          tinfo_tid = get_tinfo_tid(v98, 0);
          v82 = v13;
          strid = tinfo_tid;
          clear_tinfo_t(v98);
          if ( v96 )
          {
            *(_QWORD *)&v97 = 0;
            qfree(v96, nullptr);
          }
          if ( *(_QWORD *)&v94[16] )
          {
            v95.m128i_i64[0] = 0;
            qfree(*(_QWORD *)&v94[16], nullptr);
          }
          clear_tinfo_t(&v83);
          if ( v88 )
          {
            *(_QWORD *)&v89 = 0;
            qfree(v88, nullptr);
          }
          v12 = (__int64)v86;
          if ( v86 )
          {
            *(_QWORD *)&v87 = 0;
            qfree(v86, nullptr);
          }
          v80 = 1;
LABEL_33:
          if ( strid == -1 )
            goto LABEL_48;
          idati = strid;
          type_by_tid = get_type_by_tid(&v81, strid);
LABEL_35:
          if ( !type_by_tid )
            goto LABEL_36;
LABEL_79:
          idati = 2;
          if ( (get_tinfo_property(v81, 2) & 0x2F) != 0xD )
          {
            idati = 288;
            if ( !get_tinfo_property(v81, 288) )
            {
              idati = 2;
              if ( (get_tinfo_property(v81, 2) & 0x3F) != 0x2D )
                goto LABEL_36;
            }
          }
          if ( v80 != -1 )
          {
            v49 = v82;
            if ( v82 )
            {
              if ( v13 >= v82 )
              {
                v74.m128i_i64[0] = (__int64)v94;
                while ( 1 )
                {
                  v50 = v49 + 1;
                  v96 = 0;
                  v99 = 1;
                  v100 = -1;
                  v101 = 0;
                  v102 = 0;
                  memset(v94, 0, sizeof(v94));
                  v95 = 0;
                  v97 = 0;
                  v98[0] = 0;
                  if ( v49[1] )
                  {
                    ++v49;
                    do
                    {
                      v86 = v49;
                      v51 = get_utf8_char(&v86);
                      if ( v51 == -1 )
                        break;
                      if ( v51 == 46 )
                        break;
                      idati = 2;
                      if ( !(unsigned __int8)is_valid_cp(v51, 2, 0) )
                        break;
                      v49 = v86;
                    }
                    while ( *v86 );
                    v86 = nullptr;
                    v87 = 0;
                    v52 = v49 - v50;
                    if ( v49 == v50 )
                    {
                      v53 = *(_QWORD *)&v94[16];
                      v54 = 0;
                      v55 = nullptr;
                    }
                    else
                    {
                      v67 = nullptr;
                      v68 = v52 + 1;
                      if ( v52 != -1 )
                      {
                        v78 = v52 + 1;
                        v86 = (char *)qvector_reserve(&v86, 0, v68, 1);
                        v68 = v52 + 1;
                        v67 = v86;
                      }
                      *(_QWORD *)&v87 = v68;
                      idati = (__int64)v50;
                      memmove(v67, v50, v49 - v50);
                      v86[v52] = 0;
                      v55 = v86;
                      v54 = *((_QWORD *)&v87 + 1);
                      v52 = v87;
                      v53 = *(_QWORD *)&v94[16];
                    }
                    v86 = nullptr;
                    v87 = 0;
                    if ( v53 )
                    {
                      v95.m128i_i64[0] = 0;
                      qfree(v53, (const char *)idati);
                      *(_QWORD *)&v94[16] = v55;
                      v95.m128i_i64[0] = v52;
                      v95.m128i_i64[1] = v54;
                      if ( v86 )
                      {
                        *(_QWORD *)&v87 = 0;
                        qfree(v86, (const char *)idati);
                      }
                    }
                    else
                    {
                      *(_QWORD *)&v94[16] = v55;
                      v95.m128i_i64[0] = v52;
                      v95.m128i_i64[1] = v54;
                    }
                  }
                  else
                  {
                    v95 = 0u;
                    ++v49;
                  }
                  idati = v81;
                  tinfo_udt_member = find_tinfo_udt_member(v74.m128i_i64[0], v81, 3);
                  if ( tinfo_udt_member == -1 )
                    break;
                  v57 = _mm_loadu_si128(&v85);
                  v58 = *(void **)&v94[16];
                  v59 = _mm_loadu_si128(&v95);
                  *(_QWORD *)&v94[16] = dest;
                  dest = v58;
                  v85 = v59;
                  v95 = v57;
                  if ( v13 < v49 )
                    break;
                  idati = 2;
                  v86 = nullptr;
                  if ( (get_tinfo_property(*(_QWORD *)&v98[0], 2) & 0x2F) != 0xD )
                  {
                    clear_tinfo_t(&v86);
                    break;
                  }
                  v60 = v81;
                  v81 = *(_QWORD *)&v98[0];
                  *(_QWORD *)&v98[0] = v60;
                  clear_tinfo_t(&v86);
                  clear_tinfo_t(v98);
                  if ( v96 )
                  {
                    *(_QWORD *)&v97 = 0;
                    qfree(v96, (_BYTE *)&dword_0 + 2);
                  }
                  if ( *(_QWORD *)&v94[16] )
                  {
                    v95.m128i_i64[0] = 0;
                    qfree(*(_QWORD *)&v94[16], (_BYTE *)&dword_0 + 2);
                  }
                }
                clear_tinfo_t(v98);
                if ( v96 )
                {
                  *(_QWORD *)&v97 = 0;
                  qfree(v96, (const char *)idati);
                }
                if ( *(_QWORD *)&v94[16] )
                {
                  v95.m128i_i64[0] = 0;
                  qfree(*(_QWORD *)&v94[16], (const char *)idati);
                }
                *v77 = tinfo_udt_member;
                if ( tinfo_udt_member == -1 )
                {
LABEL_125:
                  if ( v80 == 1 )
                    goto LABEL_36;
                }
LABEL_103:
                if ( v76 )
                {
                  v61 = *v76;
                  v62 = dest;
                  dest = nullptr;
                  v63 = _mm_loadu_si128(&v85);
                  v85 = 0;
                  if ( v61 )
                  {
                    v76[1] = 0;
                    v74 = v63;
                    qfree(v61, (const char *)idati);
                    v63 = _mm_load_si128(&v74);
                  }
                  v64 = v76;
                  *v76 = v62;
                  *(__m128i *)(v64 + 1) = v63;
                }
                v65 = v75;
                idati = (__int64)&v81;
                *v75 = 0;
                copy_tinfo_t(v65, &v81, v47);
                goto LABEL_37;
              }
            }
            else
            {
              if ( under_debugger )
                BUG();
              interr(40060, idati, v47, v48, 0.0);
            }
            *v77 = -1;
            goto LABEL_125;
          }
          *v77 = -1;
          goto LABEL_103;
        }
        *v75 = 0;
        clear_tinfo_t(v98);
        if ( v96 )
        {
          *(_QWORD *)&v97 = 0;
          qfree(v96, (_BYTE *)&dword_0 + 2);
        }
        if ( *(_QWORD *)&v94[16] )
        {
          v95.m128i_i64[0] = 0;
          qfree(*(_QWORD *)&v94[16], (_BYTE *)&dword_0 + 2);
        }
        clear_tinfo_t(&v83);
      }
      else
      {
        *v75 = 0;
      }
      if ( v88 )
      {
        *(_QWORD *)&v89 = 0;
        qfree(v88, (const char *)idati);
      }
      if ( v86 )
      {
        *(_QWORD *)&v87 = 0;
        qfree(v86, (const char *)idati);
      }
      goto LABEL_37;
    }
    memset(v94, 0, sizeof(v94));
    if ( !*(_QWORD *)(v78 + 16) )
      goto LABEL_3;
    v15 = *(char **)(v78 + 8);
LABEL_170:
    v9 = v15;
    goto LABEL_4;
  }
  v12 = v20;
  flags = get_flags_ex(v20, 4);
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 )
  {
    v12 = v20;
    v82 = strchr(v19 + 1, 46);
    v80 = 0;
    strid = get_strid(v20);
    goto LABEL_33;
  }
LABEL_47:
  v80 = 0;
LABEL_48:
  idati = get_idati(v12);
  if ( (unsigned __int8)sub_3BAA30(&v81, idati, &dest) )
    goto LABEL_79;
  if ( !v14 )
    goto LABEL_36;
  idati = (__int64)v79;
  v33 = *v79;
  v34 = (__int64)&(*v79)[5 * (_QWORD)v79[1]];
  if ( *v79 == (int *)v34 )
    goto LABEL_36;
  v35 = nullptr;
  do
  {
    v36 = *v33;
    if ( a7 >= *v33 )
    {
      idati = (unsigned int)(v36 + v33[1]);
      if ( a7 < (int)idati && *((_BYTE *)v33 + 16) == 7 )
      {
        if ( v35 )
        {
          if ( v36 > *v35 )
            v35 = v33;
        }
        else
        {
          v35 = v33;
        }
      }
    }
    v33 += 5;
  }
  while ( (int *)v34 != v33 );
  v85.m128i_i64[0] = 0;
  if ( !v35 )
    goto LABEL_36;
  idati = (unsigned int)v35[1];
  if ( (int)idati < 0 )
    goto LABEL_36;
  if ( !*((_BYTE *)v35 + 16) )
    goto LABEL_36;
  v37 = v35[2];
  if ( v37 < 0 )
    goto LABEL_36;
  v38 = v35[3];
  if ( v37 > v38 )
    goto LABEL_36;
  idati = v37;
  v39 = *(_QWORD *)(v78 + 16);
  if ( v39 )
  {
    v73 = v39 - 1;
    if ( v73 < v37 || v73 < v38 )
      goto LABEL_36;
    v40 = v38 - v37;
    v41 = *(const char **)(v78 + 8);
LABEL_65:
    v42 = &v41[v37];
    v43 = dest;
    if ( v85.m128i_i64[1] < v40 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v40 + 1, 1);
      v43 = dest;
    }
    v85.m128i_i64[0] = v40 + 1;
    v43[v40] = 0;
    v44 = dest;
    memmove(dest, v42, v40);
    idati = get_idati(v44);
    type_by_tid = sub_3BAA30(&v81, idati, &dest);
    goto LABEL_35;
  }
  if ( !v37 && !v38 )
  {
    v40 = 0;
    v41 = &s1;
    goto LABEL_65;
  }
LABEL_36:
  *v75 = 0;
LABEL_37:
  if ( dest )
  {
    v85.m128i_i64[0] = 0;
    qfree(dest, (const char *)idati);
  }
  clear_tinfo_t(&v81);
  return v75;
}
