__int64 __fastcall sub_184C00(__int64 a1, char *a2)
{
  __int64 v3; // rdx
  int v4; // r13d
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 *v8; // rbp
  char v9; // r12
  int v10; // eax
  int v11; // edx
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // r12d
  int v15; // eax
  int v17; // eax
  char v18; // al
  int v19; // r13d
  unsigned __int64 v20; // rax
  int v21; // esi
  unsigned int *i; // rdx
  char v23; // di
  int v24; // ecx
  __int64 v25; // rsi
  unsigned __int64 v26; // rsi
  unsigned __int8 *v27; // r8
  unsigned __int8 *v28; // rdx
  int v29; // eax
  unsigned __int8 v30; // al
  int v31; // ecx
  _BYTE *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  const char *v36; // r14
  __int64 v37; // r12
  size_t v38; // rax
  size_t v39; // r13
  size_t v40; // r15
  __int64 v41; // rsi
  size_t v42; // rdx
  __int64 v43; // rdi
  unsigned int v44; // r15d
  unsigned int v45; // r14d
  int v46; // eax
  int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // r10
  int v51; // eax
  int v52; // r12d
  unsigned int v53; // r13d
  int max_strlit_length; // eax
  __int64 v55; // rdx
  int v56; // ecx
  int v57; // edx
  int byte; // r14d
  __int64 v59; // r13
  int v60; // r12d
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdi
  unsigned int v63; // eax
  int v64; // r10d
  __int64 v65; // r14
  __int64 bytes; // rax
  __int16 flags; // ax
  __int64 v68; // rdx
  __int64 v69; // r10
  __int64 v70; // rdi
  unsigned int str_type; // eax
  __int64 v72; // rax
  int v73; // eax
  unsigned int v74; // edx
  __int64 v75; // r12
  unsigned int v76; // r14d
  void *v77; // rdi
  char *v78; // rax
  char v79; // al
  void *v80; // r13
  const char *v81; // rdi
  _BYTE *v82; // rax
  unsigned int utf8_char; // eax
  unsigned __int64 v84; // r12
  size_t v85; // r15
  __int64 v86; // r13
  size_t v87; // r8
  __int64 v88; // rsi
  unsigned __int64 v89; // r13
  size_t v90; // r15
  __int64 v91; // r14
  size_t v92; // r8
  __int64 v93; // rsi
  unsigned __int8 default_encoding_idx; // al
  __int64 encoding_name; // rax
  int v96; // eax
  __int64 not_tail; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // [rsp+0h] [rbp-90h]
  __int64 v102; // [rsp+0h] [rbp-90h]
  __int64 v103; // [rsp+0h] [rbp-90h]
  __int64 v104; // [rsp+0h] [rbp-90h]
  __int64 v105; // [rsp+0h] [rbp-90h]
  int v106; // [rsp+0h] [rbp-90h]
  size_t v107; // [rsp+0h] [rbp-90h]
  size_t v108; // [rsp+0h] [rbp-90h]
  void *j; // [rsp+10h] [rbp-80h] BYREF
  __int64 v110; // [rsp+18h] [rbp-78h] BYREF
  __int128 v111; // [rsp+20h] [rbp-70h]
  void *src; // [rsp+38h] [rbp-58h] BYREF
  __int128 v113; // [rsp+40h] [rbp-50h]
  unsigned __int64 v114; // [rsp+50h] [rbp-40h]

  v3 = *((_QWORD *)a2 + 9);
  v4 = *((_DWORD *)a2 + 34);
  v114 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *((_QWORD *)a2 + 8);
  v111 = 0;
  v110 = 0;
  if ( *((_QWORD *)a2 + 10) < (unsigned __int64)(v3 + 1) )
  {
    v35 = qvector_reserve(a2 + 64, v7, v3 + 1, 40);
    *((_QWORD *)a2 + 8) = v35;
    v3 = *((_QWORD *)a2 + 9);
    v7 = v35;
  }
  v8 = (__int64 *)(v7 + 40 * v3);
  *v8 = 0;
  v8[3] = 0;
  *((_DWORD *)v8 + 8) = -1;
  *(_OWORD *)(v8 + 1) = 0;
  v9 = a2[20];
  ++*((_QWORD *)a2 + 9);
  if ( v9 )
  {
    v10 = *((_DWORD *)a2 + 4);
    if ( (unsigned __int8)(v10 - 32) <= 0x5Fu || (unsigned __int8)(v10 - 9) <= 1u )
    {
      v11 = *((_DWORD *)a2 + 33);
      v12 = v110;
      if ( !v11 )
      {
LABEL_9:
        v14 = 0;
        v8[3] = *((int *)a2 + 1);
        v15 = *((_DWORD *)a2 + 4);
        *((_DWORD *)v8 + 8) = v15;
        *((_DWORD *)a2 + 33) = v15;
        *((_DWORD *)a2 + 30) += *((_DWORD *)a2 + 1);
        goto LABEL_10;
      }
    }
    else
    {
      v11 = *((_DWORD *)a2 + 33);
      *((_DWORD *)a2 + 34) |= 1u;
      v12 = v110;
      if ( !v11 )
        goto LABEL_9;
    }
    if ( v10 != v11 )
    {
      v13 = *((_DWORD *)a2 + 34);
      if ( (v13 & 1) != 0 )
        goto LABEL_41;
      *((_DWORD *)a2 + 34) = v13 | 2;
    }
    goto LABEL_9;
  }
  v17 = *((_DWORD *)a2 + 1);
  if ( v17 > 0 )
  {
    v33 = v111;
    v34 = v17;
    if ( (unsigned __int64)v111 < v17 )
    {
      v48 = v110;
      if ( *((_QWORD *)&v111 + 1) < (unsigned __int64)v17 )
      {
        v105 = v17;
        v110 = qvector_reserve(&v110, v110, v17, 1);
        v33 = v111;
        v48 = v110;
        v34 = v105;
      }
      v101 = v34;
      memset((void *)(v48 + v33), 0, v34 - v33);
      *(_QWORD *)&v111 = v101;
    }
    else if ( v17 != (_QWORD)v111 )
    {
      *(_QWORD *)&v111 = v17;
    }
  }
  v18 = *a2;
  v19 = v4 & 4;
  *((_DWORD *)a2 + 32) = -1;
  if ( v18 == 3 )
  {
    v36 = *((const char **)a2 + 1);
    *((_DWORD *)a2 + 34) &= ~0x10u;
    if ( v36 )
    {
      v37 = v8[1];
      v38 = strlen(v36);
      v39 = v38;
      v40 = v38;
      if ( v37 )
      {
        --v37;
        v40 = v38 + v37;
      }
      v41 = *v8;
      v42 = v40 + 1;
      if ( v8[2] < v40 + 1 )
      {
        v72 = qvector_reserve(v8, v41, v42, 1);
        *v8 = v72;
        v42 = v40 + 1;
        v41 = v72;
      }
      v8[1] = v42;
      *(_BYTE *)(v41 + v40) = 0;
      memmove((void *)(v37 + *v8), v36, v39);
    }
    if ( (unsigned __int64)v8[1] <= 1 )
    {
      if ( !under_debugger )
        sub_383060(52353);
      goto LABEL_205;
    }
    v43 = *((_QWORD *)a2 + 1);
    v44 = sub_331FE0(v43, 0);
    v45 = v44;
    if ( (a2[136] & 2) == 0 )
    {
      v78 = *((char **)a2 + 1);
      src = v78 + 1;
      v79 = *v78;
      if ( !v79 )
        sub_183360(v43);
      v106 = v79;
      if ( v79 == 92 )
        v106 = (char)back_char(&src);
      src = nullptr;
      v45 = v44;
      v113 = 0;
      sub_183D60((__int64)&src, v106, v44);
      v80 = src;
      v81 = (const char *)src;
      if ( !(_QWORD)v113 )
        v81 = s1;
      v14 = strcmp(v81, *((const char **)a2 + 1));
      if ( !v14 )
      {
        if ( *((_DWORD *)a2 + 33) != v106 )
          *((_DWORD *)a2 + 34) |= 2u;
        v8[3] = *((int *)a2 + 1);
        *((_DWORD *)v8 + 8) = v106;
        *((_DWORD *)a2 + 33) = v106;
        *((_DWORD *)a2 + 30) += v44;
        if ( v80 )
        {
          *(_QWORD *)&v113 = 0;
          qfree(v80);
        }
        goto LABEL_59;
      }
      *((_DWORD *)a2 + 34) |= 2u;
      if ( v80 )
      {
        *(_QWORD *)&v113 = 0;
        qfree(v80);
      }
    }
    v46 = *((_DWORD *)a2 + 31);
    if ( v46 <= 0 )
      v46 = 1;
    v47 = v45 * v46;
    v14 = v47 < *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 32) = v47;
    goto LABEL_59;
  }
  if ( v18 == 6 )
  {
    v49 = *((_QWORD *)a2 + 12);
    v50 = *((_QWORD *)a2 + 1);
    if ( v49 == -1 )
    {
      *((_QWORD *)a2 + 12) = v50;
      v49 = v50;
    }
    if ( v49 + *((int *)a2 + 30) != v50 )
      *((_DWORD *)a2 + 34) &= ~0x10u;
    v51 = *((_DWORD *)a2 + 1);
    if ( v51 && !v19 )
    {
      bytes = get_bytes(v110, v51, v50, 0, 0);
      i = (unsigned int *)*((int *)a2 + 1);
      v21 = *((_DWORD *)a2 + 1);
      if ( i != (unsigned int *)bytes )
        goto LABEL_104;
      goto LABEL_23;
    }
    v52 = *((_DWORD *)a2 + 31);
    src = nullptr;
    v113 = 0;
    if ( v52 > 0 )
    {
      if ( v52 != 1 )
      {
        v53 = (v52 != 2) + 1;
        if ( !(v51 % v52) )
          goto LABEL_73;
        v14 = -1;
LABEL_59:
        v12 = v110;
        goto LABEL_10;
      }
LABEL_111:
      v53 = 0;
      v52 = 1;
LABEL_73:
      v102 = v50;
      max_strlit_length = get_max_strlit_length(v50, v53, 7);
      v56 = max_strlit_length;
      if ( max_strlit_length >= 0 )
      {
        if ( max_strlit_length )
        {
          v57 = *((_DWORD *)a2 + 1);
          if ( v57 <= max_strlit_length )
            max_strlit_length = *((_DWORD *)a2 + 1);
          if ( v57 )
            v56 = max_strlit_length;
          byte = v56 % v52;
          if ( v56 % v52 )
            goto LABEL_82;
          j = (void *)*(int *)(*(_QWORD *)(a1 + 96) + 648LL);
          if ( (int)get_strlit_contents(&src, v102, v56, v53, &j, 5) <= 0 || !j )
            goto LABEL_82;
          if ( (unsigned __int64)v113 <= 1 )
          {
            *((_DWORD *)a2 + 32) = 0;
LABEL_116:
            v73 = *((_DWORD *)a2 + 1);
            *((_DWORD *)a2 + 30) += byte;
            *((_DWORD *)a2 + 34) |= 2u;
            v14 = v73 > byte || v73 == 0;
LABEL_83:
            if ( src )
            {
              *(_QWORD *)&v113 = 0;
              qfree(src);
            }
            goto LABEL_59;
          }
          byte = sub_331FE0(src, 0) * v52;
          if ( byte != -1 )
          {
LABEL_150:
            v84 = v113;
            *((_DWORD *)a2 + 32) = byte;
            if ( v84 )
            {
              v85 = v84 - 1;
              if ( v84 != 1 )
              {
                v86 = v8[1];
                v87 = v84 - 1;
                if ( v86 )
                {
                  --v86;
                  v87 = v85 + v86;
                  v84 += v86;
                }
                v88 = *v8;
                if ( v8[2] < v84 )
                {
                  v107 = v87;
                  v98 = qvector_reserve(v8, v88, v84, 1);
                  *v8 = v98;
                  v87 = v107;
                  v88 = v98;
                }
                v8[1] = v84;
                *(_BYTE *)(v88 + v87) = 0;
                memcpy((void *)(v86 + *v8), src, v85);
              }
            }
            goto LABEL_116;
          }
        }
        else
        {
          if ( v52 == 1 )
          {
            byte = (unsigned __int8)get_byte(v102, v53, v55, (unsigned int)max_strlit_length);
          }
          else if ( v52 == 2 )
          {
            byte = (unsigned __int16)get_word(v102, v53, v55, (unsigned int)max_strlit_length);
          }
          else
          {
            byte = get_dword(v102, v53, v55, (unsigned int)max_strlit_length);
          }
          if ( !byte )
            goto LABEL_150;
        }
      }
LABEL_82:
      v14 = -1;
      goto LABEL_83;
    }
    v103 = v50;
    flags = get_flags_ex(v50, 4);
    v69 = v103;
    v70 = v103;
    if ( (flags & 0x600) == 0x200 )
    {
      not_tail = prev_not_tail(v103, 4, v68);
      v69 = v103;
      v70 = not_tail;
    }
    v104 = v69;
    str_type = get_str_type(v70);
    v50 = v104;
    v53 = str_type;
    if ( str_type > 2 )
      goto LABEL_82;
    if ( str_type == 1 )
    {
      v52 = 2;
    }
    else
    {
      if ( str_type != 2 )
      {
        *((_DWORD *)a2 + 31) = 1;
        goto LABEL_111;
      }
      v52 = 4;
    }
    v96 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 31) = v52;
    if ( v96 % v52 )
      goto LABEL_82;
    goto LABEL_73;
  }
  *((_DWORD *)a2 + 34) &= ~0x10u;
  if ( v18 != 2 )
  {
    v12 = v110;
    v14 = -1;
    goto LABEL_10;
  }
  v20 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL), *((unsigned int *)a2 + 1), 0);
  if ( *((_QWORD *)a2 + 11) == -1 )
    *((_QWORD *)a2 + 11) = **((_QWORD **)a2 + 1);
  v21 = *((_DWORD *)a2 + 1);
  for ( i = nullptr; v21 > (int)i; v21 = *((_DWORD *)a2 + 1) )
  {
    v23 = v20;
    v24 = (int)i;
    if ( *(_BYTE *)(v6 + 145) )
      v24 = v21 - (_DWORD)i - 1;
    i = (unsigned int *)(unsigned int)((_DWORD)i + 1);
    v20 >>= 8;
    *(_BYTE *)(v110 + v24) = v23;
  }
LABEL_23:
  *((_DWORD *)a2 + 30) += v21;
  v25 = *((unsigned int *)a2 + 31);
  if ( (int)v25 > 1 )
  {
    if ( (a2[136] & 0xC) == 0 )
      goto LABEL_104;
    if ( (((_DWORD)v25 - 2) & 0xFFFFFFFD) == 0 )
    {
      v59 = v110;
      v60 = v111;
      v61 = v110 + (int)v25;
      v62 = v110 + (int)v111;
      if ( v62 < v61 )
      {
LABEL_98:
        v65 = 0;
        if ( v60 )
        {
          default_encoding_idx = get_default_encoding_idx(2 * (unsigned int)((_DWORD)v25 != 2) + 2, v25, i);
          encoding_name = get_encoding_name(default_encoding_idx);
          v65 = v60;
          v113 = 0;
          src = nullptr;
          if ( v60 > (int)convert_encoding(&src, encoding_name, "UTF-8", v59, v60, 1) )
          {
            if ( src )
            {
              *(_QWORD *)&v113 = 0;
              qfree(src);
            }
            goto LABEL_104;
          }
          qstr2user(v8, src, (unsigned int)v113);
          sub_331FE0(*v8, &j);
          if ( (_BYTE)j )
            *((_DWORD *)a2 + 34) |= 1u;
          if ( src )
          {
            *(_QWORD *)&v113 = 0;
            qfree(src);
          }
        }
        if ( v65 != (_QWORD)v111 )
        {
          *((_DWORD *)a2 + 32) = v60;
          v12 = v110;
          v14 = 1;
          goto LABEL_10;
        }
        goto LABEL_127;
      }
      i = (unsigned int *)v110;
LABEL_89:
      if ( (_DWORD)v25 != 2 )
        goto LABEL_90;
      while ( 1 )
      {
        v63 = *(unsigned __int16 *)i;
        while ( 2 )
        {
          v64 = *((_DWORD *)a2 + 33);
          if ( v64 )
          {
            if ( v64 == v63 )
              goto LABEL_95;
            *((_DWORD *)a2 + 34) |= 2u;
          }
          *((_DWORD *)a2 + 33) = v63;
          if ( !v63 )
          {
            v60 = (_DWORD)i - v59;
            goto LABEL_98;
          }
LABEL_95:
          if ( !*(_BYTE *)(v6 + 145) )
          {
            v61 += (int)v25;
            i = (unsigned int *)((char *)i + (int)v25);
            if ( v62 < v61 )
              goto LABEL_98;
            goto LABEL_89;
          }
          if ( (_DWORD)v25 != 2 )
          {
            v61 += 4LL;
            *i++ = _byteswap_ulong(v63);
            if ( v62 < v61 )
              goto LABEL_98;
LABEL_90:
            v63 = *i;
            continue;
          }
          break;
        }
        v61 += 2LL;
        i = (unsigned int *)((char *)i + 2);
        *((_WORD *)i - 1) = __ROL2__(v63, 8);
        if ( v62 < v61 )
          goto LABEL_98;
      }
    }
    if ( !under_debugger )
      sub_383060(52482);
LABEL_205:
    BUG();
  }
  v12 = v110;
  v26 = v111;
  v27 = (unsigned __int8 *)(v110 + v111);
  if ( v110 == v110 + (_QWORD)v111 )
  {
    v76 = 0;
    src = nullptr;
    v113 = 0;
LABEL_123:
    if ( !(unsigned __int8)idb_utf8(&src, v12, v76, 1) )
      goto LABEL_124;
    v89 = v113;
    if ( (_QWORD)v113 )
    {
      v90 = v113 - 1;
      if ( (_QWORD)v113 != 1 )
      {
        v91 = v8[1];
        v92 = v113 - 1;
        if ( v91 )
        {
          --v91;
          v92 = v90 + v91;
          v89 = v113 + v91;
        }
        v93 = *v8;
        if ( v8[2] < v89 )
        {
          v108 = v92;
          v100 = qvector_reserve(v8, v93, v89, 1);
          *v8 = v100;
          v92 = v108;
          v93 = v100;
        }
        v8[1] = v89;
        *(_BYTE *)(v93 + v92) = 0;
        memcpy((void *)(v91 + *v8), src, v90);
      }
    }
    v77 = src;
    if ( v9 )
    {
      if ( src )
      {
        *(_QWORD *)&v113 = 0;
        qfree(src);
      }
      v12 = v110;
      v14 = 1;
      goto LABEL_10;
    }
    if ( src )
    {
LABEL_126:
      *(_QWORD *)&v113 = 0;
      qfree(v77);
    }
LABEL_127:
    if ( (a2[136] & 2) != 0 )
    {
LABEL_128:
      v12 = v110;
      v14 = 0;
      goto LABEL_10;
    }
LABEL_145:
    v8[3] += v111;
    *((_DWORD *)v8 + 8) = *((_DWORD *)a2 + 33);
    goto LABEL_128;
  }
  v28 = (unsigned __int8 *)v110;
  while ( 1 )
  {
    v30 = *v28;
    if ( !v19 && v30 == 0xFF )
      goto LABEL_41;
    v31 = *((_DWORD *)a2 + 33);
    if ( v31 )
    {
      if ( v31 == v30 )
        goto LABEL_26;
      *((_DWORD *)a2 + 34) |= 2u;
      v30 = *v28;
    }
    if ( !v30 )
      break;
LABEL_26:
    if ( (unsigned __int8)(v30 - 32) > 0x5Fu && (unsigned __int8)(v30 - 9) > 1u )
      *((_DWORD *)a2 + 34) |= 1u;
    v29 = *v28++;
    *((_DWORD *)a2 + 33) = v29;
    if ( v28 == v27 )
    {
      v76 = v26;
      goto LABEL_138;
    }
  }
  if ( (a2[136] & 1) != 0 )
  {
    v32 = v28 + 1;
    if ( v28 + 1 < v27 )
    {
      while ( !*v32 )
      {
        if ( ++v32 == v27 )
          goto LABEL_117;
      }
      goto LABEL_41;
    }
  }
LABEL_117:
  v74 = (_DWORD)v28 - v12;
  v75 = (int)v74;
  *((_DWORD *)a2 + 32) = v74;
  v76 = v74;
  if ( v26 < (int)v74 )
  {
    if ( *((_QWORD *)&v111 + 1) < (unsigned __int64)(int)v74 )
    {
      v99 = qvector_reserve(&v110, v12, (int)v74, 1);
      v26 = v111;
      v110 = v99;
      v27 = (unsigned __int8 *)(v111 + v99);
    }
    memset(v27, 0, v75 - v26);
    *(_QWORD *)&v111 = v75;
    v12 = v110;
    v9 = 1;
LABEL_138:
    src = nullptr;
    v113 = 0;
    if ( !v19 )
      goto LABEL_139;
    goto LABEL_123;
  }
  if ( v74 == v26 )
  {
    v76 = v26;
    v9 = 1;
    goto LABEL_138;
  }
  *(_QWORD *)&v111 = (int)v74;
  src = nullptr;
  v113 = 0;
  if ( v19 )
  {
LABEL_122:
    v9 = 1;
    goto LABEL_123;
  }
  if ( !v74 )
  {
    v76 = 0;
    goto LABEL_122;
  }
  v9 = 1;
LABEL_139:
  if ( !(unsigned __int8)idb_utf8(&src, v12, v76, 0) )
  {
LABEL_124:
    v77 = src;
    if ( (a2[136] & 2) != 0 )
      goto LABEL_194;
    if ( !src )
      goto LABEL_145;
    goto LABEL_126;
  }
  v82 = src;
  for ( j = src; ; v82 = j )
  {
    if ( !*v82 )
    {
      *(_QWORD *)&v113 = 0;
      v76 = v111;
      v12 = v110;
      goto LABEL_123;
    }
    utf8_char = get_utf8_char(&j);
    if ( !(unsigned __int8)is_valid_cp(utf8_char, 1, 0) )
      break;
  }
  v77 = src;
LABEL_194:
  if ( v77 )
  {
    *(_QWORD *)&v113 = 0;
    qfree(v77);
  }
LABEL_104:
  v12 = v110;
LABEL_41:
  v14 = -1;
LABEL_10:
  if ( v12 )
  {
    *(_QWORD *)&v111 = 0;
    qfree(v12);
  }
  return v14;
}
