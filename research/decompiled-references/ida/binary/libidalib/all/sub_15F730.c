_QWORD *__fastcall sub_15F730(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 a5,
        signed __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  bool v8; // zf
  char v9; // dl
  char *v10; // rax
  int v11; // r13d
  const char *v12; // r12
  char *v13; // r14
  char *v14; // rbx
  __int64 v15; // rbp
  char v16; // dl
  int utf8_char; // eax
  int flags; // eax
  __int64 v19; // rbx
  char *v20; // rbx
  char *v21; // rax
  size_t v22; // rbp
  __int64 v23; // r13
  char valid; // dl
  char *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbx
  void *v29; // rdi
  __int64 strid; // rbx
  char *v31; // r12
  char *v32; // r15
  int v33; // eax
  size_t v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rbx
  char *v37; // r15
  int tinfo_udt_member; // ebx
  __m128i v39; // xmm0
  __int64 v40; // rdx
  __m128i v41; // xmm1
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rbx
  __m128i v45; // xmm0
  _QWORD *v46; // rax
  char *v47; // rdi
  _QWORD *v48; // rdx
  __m128i v50; // [rsp+10h] [rbp-198h] BYREF
  _QWORD *v51; // [rsp+20h] [rbp-188h]
  _QWORD *v52; // [rsp+28h] [rbp-180h]
  _DWORD *v53; // [rsp+30h] [rbp-178h]
  signed __int64 v54; // [rsp+38h] [rbp-170h]
  __int64 v55; // [rsp+48h] [rbp-160h]
  char *v56; // [rsp+50h] [rbp-158h]
  __int64 v57; // [rsp+58h] [rbp-150h]
  __int64 v58; // [rsp+60h] [rbp-148h]
  __m128i v59; // [rsp+68h] [rbp-140h] BYREF
  char *v60; // [rsp+80h] [rbp-128h] BYREF
  __int128 v61; // [rsp+88h] [rbp-120h]
  __int64 v62; // [rsp+98h] [rbp-110h]
  __int128 v63; // [rsp+A0h] [rbp-108h]
  __int64 v64; // [rsp+B0h] [rbp-F8h]
  __int64 v65; // [rsp+B8h] [rbp-F0h]
  int v66; // [rsp+C0h] [rbp-E8h]
  char v67; // [rsp+C4h] [rbp-E4h]
  _BYTE v68[24]; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v69; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-B0h]
  __int128 v71; // [rsp+100h] [rbp-A8h]
  __int128 v72; // [rsp+110h] [rbp-98h]
  __int64 v73; // [rsp+140h] [rbp-68h]
  int v74; // [rsp+148h] [rbp-60h]
  __int64 v75; // [rsp+150h] [rbp-58h]
  char v76; // [rsp+158h] [rbp-50h]
  unsigned __int64 v77; // [rsp+168h] [rbp-40h]

  v8 = *(_QWORD *)(a5 + 16) == 0;
  v51 = a2;
  v52 = a3;
  v53 = a4;
  v50.m128i_i64[0] = a5;
  v54 = a6;
  v77 = __readfsqword(0x28u);
  v55 = 0;
  if ( v8 )
  {
    v58 = 0;
    v56 = (char *)s1;
    memset(v68, 0, sizeof(v68));
    v59 = 0;
LABEL_3:
    tag_remove();
    if ( extract_name() > 0 )
      goto LABEL_26;
    *a1 = 0;
    goto LABEL_58;
  }
  v56 = *(char **)(a5 + 8);
  v9 = *v56;
  v10 = v56;
  if ( !*v56 )
  {
    v58 = 0;
    memset(v68, 0, sizeof(v68));
    v59 = 0;
    goto LABEL_3;
  }
  v11 = 0;
  v12 = nullptr;
  v13 = nullptr;
  v14 = nullptr;
  v15 = -1;
  while ( 2 )
  {
    if ( (unsigned __int8)(v9 - 1) > 1u )
      goto LABEL_11;
    do
    {
      do
      {
        if ( v9 != 1 )
        {
LABEL_9:
          v12 = nullptr;
          v14 = nullptr;
          v15 = -1;
          goto LABEL_10;
        }
        v16 = v10[1];
        if ( v16 == 40 )
        {
          v26 = v10 + 2;
          v14 = v10 + 18;
          while ( *v26 )
          {
            if ( ++v26 == v14 )
              goto LABEL_46;
          }
          v14 = v26;
LABEL_46:
          v15 = sub_120600(v10);
        }
        else
        {
          v12 = v10 + 2;
          if ( v16 != 7 )
            goto LABEL_9;
        }
LABEL_10:
        v10 = (char *)tag_skipcode();
        v56 = v10;
        v9 = *v10;
      }
      while ( (unsigned __int8)(*v10 - 1) <= 1u );
LABEL_11:
      ;
    }
    while ( v9 == 4 );
    if ( (int)a7 > v11 && v9 )
    {
      utf8_char = get_utf8_char();
      if ( utf8_char == -1 )
      {
        ++v56;
LABEL_39:
        if ( v13 )
        {
          valid = is_valid_cp();
          v10 = v56;
          if ( !valid )
            v13 = nullptr;
        }
        else
        {
          v10 = v56;
        }
        goto LABEL_22;
      }
      if ( !v11 || utf8_char != 46 )
        goto LABEL_39;
      v10 = v56;
      v13 = v56 - 1;
LABEL_22:
      v9 = *v10;
      ++v11;
      if ( !*v10 )
        break;
      continue;
    }
    break;
  }
  v58 = 0;
  v59 = 0;
  if ( v15 != -1 && v14 < v13 )
  {
    flags = get_flags_ex();
    if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 )
    {
      v56 = strchr(v14 + 1, 46);
      v50.m128i_i32[0] = 0;
      strid = get_strid();
      goto LABEL_70;
    }
    goto LABEL_26;
  }
  if ( !v12 )
  {
    if ( !v13 )
    {
      memset(v68, 0, sizeof(v68));
      goto LABEL_3;
    }
    v60 = nullptr;
    v62 = 0;
    v27 = *v51;
    v64 = 0;
    v67 = 0;
    v65 = -1;
    v66 = -1;
    v61 = 0;
    v63 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, char **, __int64, signed __int64, _QWORD, _QWORD))(v27 + 592))(
            v51,
            &v60,
            v50.m128i_i64[0],
            v54,
            a7,
            a8)
      || v65 == -1 )
    {
      *a1 = 0;
LABEL_54:
      if ( v62 )
      {
        *(_QWORD *)&v63 = 0;
        qfree();
      }
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
      }
LABEL_58:
      v19 = v58;
      goto LABEL_35;
    }
    v57 = 0;
    v70 = 0;
    v73 = 1;
    v74 = -1;
    v75 = 0;
    v76 = 0;
    memset(v68, 0, sizeof(v68));
    v69 = 0;
    v71 = 0;
    v72 = 0;
    get_udm_by_tid();
    if ( (get_tinfo_property() & 0x2F) != 0xD )
    {
      *a1 = 0;
      clear_tinfo_t();
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree();
      }
      if ( *(_QWORD *)&v68[16] )
      {
        v69.m128i_i64[0] = 0;
        qfree();
      }
      clear_tinfo_t();
      goto LABEL_54;
    }
    v56 = v13;
    strid = get_tinfo_tid();
    clear_tinfo_t();
    if ( v70 )
    {
      *(_QWORD *)&v71 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v68[16] )
    {
      v69.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree();
    }
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree();
    }
    v50.m128i_i32[0] = 1;
LABEL_70:
    if ( strid == -1 )
    {
LABEL_26:
      v19 = v58;
      goto LABEL_34;
    }
    if ( !(unsigned __int8)get_type_by_tid()
      || (get_tinfo_property() & 0x2F) != 0xD && !get_tinfo_property() && (get_tinfo_property() & 0x3F) != 0x2D )
    {
LABEL_72:
      *a1 = 0;
      v19 = v58;
      goto LABEL_35;
    }
    v31 = v56;
    if ( v56 )
    {
      if ( v13 >= v56 )
      {
        while ( 1 )
        {
          v32 = v31 + 1;
          v70 = 0;
          v73 = 1;
          v74 = -1;
          v75 = 0;
          v76 = 0;
          memset(v68, 0, sizeof(v68));
          v69 = 0;
          v71 = 0;
          v72 = 0;
          if ( v31[1] )
          {
            ++v31;
            do
            {
              v60 = v31;
              v33 = get_utf8_char();
              if ( v33 == -1 )
                break;
              if ( v33 == 46 )
                break;
              if ( !(unsigned __int8)is_valid_cp() )
                break;
              v31 = v60;
            }
            while ( *v60 );
            v60 = nullptr;
            v61 = 0;
            v34 = v31 - v32;
            if ( v31 == v32 )
            {
              v35 = *(_QWORD *)&v68[16];
              v36 = 0;
              v37 = nullptr;
            }
            else
            {
              v47 = nullptr;
              v48 = (_QWORD *)(v34 + 1);
              if ( v34 != -1 )
              {
                v54 = v31 - v32;
                v51 = (_QWORD *)(v34 + 1);
                v60 = (char *)qvector_reserve();
                v34 = v31 - v32;
                v47 = v60;
                v48 = v51;
              }
              *(_QWORD *)&v61 = v48;
              v51 = (_QWORD *)v34;
              memmove(v47, v32, v34);
              *((_BYTE *)v51 + (_QWORD)v60) = 0;
              v37 = v60;
              v36 = *((_QWORD *)&v61 + 1);
              v34 = v61;
              v35 = *(_QWORD *)&v68[16];
            }
            v60 = nullptr;
            v61 = 0;
            if ( v35 )
            {
              v51 = (_QWORD *)v34;
              v69.m128i_i64[0] = 0;
              qfree();
              *(_QWORD *)&v68[16] = v37;
              v69.m128i_i64[1] = v36;
              v69.m128i_i64[0] = (__int64)v51;
              if ( v60 )
              {
                *(_QWORD *)&v61 = 0;
                qfree();
              }
            }
            else
            {
              *(_QWORD *)&v68[16] = v37;
              v69.m128i_i64[0] = v34;
              v69.m128i_i64[1] = v36;
            }
          }
          else
          {
            v69 = 0u;
            ++v31;
          }
          tinfo_udt_member = find_tinfo_udt_member();
          if ( tinfo_udt_member == -1 )
            break;
          v39 = _mm_loadu_si128(&v59);
          v40 = *(_QWORD *)&v68[16];
          v41 = _mm_loadu_si128(&v69);
          *(_QWORD *)&v68[16] = v58;
          v58 = v40;
          v59 = v41;
          v69 = v39;
          if ( v13 < v31 )
            break;
          v60 = nullptr;
          if ( (get_tinfo_property() & 0x2F) != 0xD )
          {
            clear_tinfo_t();
            break;
          }
          v42 = v55;
          v55 = v72;
          *(_QWORD *)&v72 = v42;
          clear_tinfo_t();
          clear_tinfo_t();
          if ( v70 )
          {
            *(_QWORD *)&v71 = 0;
            qfree();
          }
          if ( *(_QWORD *)&v68[16] )
          {
            v69.m128i_i64[0] = 0;
            qfree();
          }
        }
        clear_tinfo_t();
        if ( v70 )
        {
          *(_QWORD *)&v71 = 0;
          qfree();
        }
        if ( *(_QWORD *)&v68[16] )
        {
          v69.m128i_i64[0] = 0;
          qfree();
        }
        *v53 = tinfo_udt_member;
        if ( tinfo_udt_member != -1 )
          goto LABEL_118;
        goto LABEL_133;
      }
    }
    else
    {
      if ( under_debugger )
        BUG();
      interr();
    }
    *v53 = -1;
LABEL_133:
    if ( v50.m128i_i32[0] == 1 )
      goto LABEL_72;
LABEL_118:
    if ( v52 )
    {
      v43 = *v52;
      v44 = v58;
      v58 = 0;
      v45 = _mm_loadu_si128(&v59);
      v59 = 0;
      if ( v43 )
      {
        v52[1] = 0;
        v50 = v45;
        qfree();
        v45 = _mm_load_si128(&v50);
      }
      v46 = v52;
      *v52 = v44;
      *(__m128i *)(v46 + 1) = v45;
    }
    *a1 = 0;
    copy_tinfo_t();
    v19 = v58;
    goto LABEL_35;
  }
  v20 = (char *)(v12 + 1);
  v21 = strchr(v12 + 1, 46);
  v56 = v21;
  if ( v21 )
  {
    v22 = v21 - v12;
    goto LABEL_30;
  }
  if ( !v12[1] )
  {
    v56 = (char *)(v12 + 1);
    v22 = 1;
    v28 = 2;
    memset(v68, 0, sizeof(v68));
LABEL_73:
    *(_QWORD *)v68 = qvector_reserve();
    v29 = *(void **)v68;
    goto LABEL_61;
  }
  do
  {
    *(_QWORD *)v68 = v20;
    if ( (unsigned int)get_utf8_char() == -1 )
      break;
    if ( !(unsigned __int8)is_valid_cp() )
      break;
    v20 = *(char **)v68;
  }
  while ( **(_BYTE **)v68 );
  v56 = v20;
  v22 = v20 - v12;
LABEL_30:
  v23 = 0;
  v19 = 0;
  memset(v68, 0, sizeof(v68));
  if ( v22 )
  {
    v28 = v22 + 1;
    if ( v22 != -1 )
      goto LABEL_73;
    v22 = -1;
    v29 = nullptr;
LABEL_61:
    *(_QWORD *)&v68[8] = v28;
    memmove(v29, v12, v22);
    *(_BYTE *)(*(_QWORD *)v68 + v22) = 0;
    v22 = *(_QWORD *)&v68[8];
    v19 = *(_QWORD *)v68;
    v23 = *(_QWORD *)&v68[16];
  }
  memset(v68, 0, sizeof(v68));
  if ( v58 )
  {
    qfree();
    v58 = v19;
    v59.m128i_i64[0] = v22;
  }
  else
  {
    v58 = v19;
  }
  v59.m128i_i64[1] = v23;
LABEL_34:
  *a1 = 0;
LABEL_35:
  if ( v19 )
  {
    v59.m128i_i64[0] = 0;
    qfree();
  }
  clear_tinfo_t();
  return a1;
}

