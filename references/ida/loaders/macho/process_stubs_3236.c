unsigned __int64 __fastcall sub_3A290(
        __int64 a1,
        __int64 qword,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int8 a6)
{
  __int64 v8; // r12
  __int64 v9; // r13
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int v17; // ebp
  unsigned int v18; // ebx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rdi
  __int64 v24; // rax
  char *v25; // rax
  char *v26; // rsi
  __int64 name_ea; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 _64bit; // rdi
  char v32; // al
  __int64 v33; // rdx
  __int64 range; // rax
  const char *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r8
  size_t v38; // r9
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r10
  __int64 v42; // rsi
  unsigned __int64 v43; // rdi
  unsigned int v44; // eax
  int v45; // edx
  void *v47; // rax
  __int64 v48; // rsi
  int v49; // ecx
  __int64 v50; // rsi
  int v51; // r8d
  int v52; // r9d
  char v53; // dl
  __int64 v54; // rsi
  char byte; // al
  __int64 v56; // rcx
  char *v57; // rdi
  const char *v58; // rsi
  const char *v59; // rax
  char *v60; // [rsp+8h] [rbp-590h]
  unsigned int v61; // [rsp+14h] [rbp-584h]
  unsigned __int64 v62; // [rsp+18h] [rbp-580h]
  int v63; // [rsp+20h] [rbp-578h]
  int v64; // [rsp+24h] [rbp-574h]
  const char *n; // [rsp+28h] [rbp-570h]
  size_t na; // [rsp+28h] [rbp-570h]
  size_t nb; // [rsp+28h] [rbp-570h]
  __int64 v68; // [rsp+38h] [rbp-560h]
  int v70; // [rsp+58h] [rbp-540h]
  char v71; // [rsp+5Dh] [rbp-53Bh]
  __int64 v73; // [rsp+60h] [rbp-538h]
  __int64 v74; // [rsp+60h] [rbp-538h]
  char v75; // [rsp+60h] [rbp-538h]
  const char *v76; // [rsp+60h] [rbp-538h]
  __int64 v77; // [rsp+68h] [rbp-530h]
  bool v78; // [rsp+68h] [rbp-530h]
  __int64 v79; // [rsp+68h] [rbp-530h]
  __int64 v80; // [rsp+68h] [rbp-530h]
  __int64 v81; // [rsp+70h] [rbp-528h]
  __int64 v82; // [rsp+70h] [rbp-528h]
  void *v84; // [rsp+80h] [rbp-518h] BYREF
  __int128 v85; // [rsp+88h] [rbp-510h]
  __int64 v86; // [rsp+A0h] [rbp-4F8h] BYREF
  __int128 v87; // [rsp+A8h] [rbp-4F0h]
  void *src; // [rsp+C0h] [rbp-4D8h] BYREF
  _BYTE v89[24]; // [rsp+C8h] [rbp-4D0h]
  __int64 v90; // [rsp+E0h] [rbp-4B8h]
  __int16 v91; // [rsp+E8h] [rbp-4B0h]
  __int128 v92; // [rsp+F0h] [rbp-4A8h]
  __int64 v93; // [rsp+100h] [rbp-498h]
  __int64 v94; // [rsp+108h] [rbp-490h]
  int v95; // [rsp+110h] [rbp-488h]
  __int64 v96; // [rsp+118h] [rbp-480h]
  int v97; // [rsp+120h] [rbp-478h]
  __int64 v98; // [rsp+128h] [rbp-470h]
  int v99; // [rsp+130h] [rbp-468h]
  __int64 v100; // [rsp+138h] [rbp-460h]
  int v101; // [rsp+140h] [rbp-458h]
  __int64 v102; // [rsp+148h] [rbp-450h]
  char v103; // [rsp+150h] [rbp-448h] BYREF
  int v104; // [rsp+151h] [rbp-447h]
  unsigned __int64 v105; // [rsp+558h] [rbp-40h]

  v8 = qword;
  v105 = __readfsqword(0x28u);
  v70 = 4;
  if ( *(_BYTE *)(a1 + 13692) )
    v70 = 8;
  v9 = *(_QWORD *)(qword + 256);
  v68 = v9 + 80LL * *(_QWORD *)(qword + 264);
  if ( v9 != v68 )
  {
    while ( 1 )
    {
      v71 = callui(27);
      if ( v71 )
        sub_1A260((unsigned int)"Cancelled by user", qword, v10, v11, v12, v13);
      v64 = *(unsigned __int8 *)(v9 + 64);
      if ( v64 == 8 )
      {
        v71 = 1;
        v61 = *(_DWORD *)(v9 + 72);
        if ( v61 )
          goto LABEL_10;
        qword = v9 + 16;
        v45 = v9;
        v9 += 80;
        sub_196C0(
          (unsigned int)"Can't use indirect symbols for (%.16s,%.16s) (size of stubs in reserved2 field is zero)",
          qword,
          v45,
          v11,
          v12,
          v13);
        if ( v68 == v9 )
          return v105 - __readfsqword(0x28u);
      }
      else
      {
        if ( (unsigned int)(v64 - 6) > 1 )
          goto LABEL_6;
        v61 = v70;
LABEL_10:
        v14 = *(_QWORD *)(v9 + 40);
        v62 = v14 / v61;
        v15 = *(unsigned int *)(v9 + 68);
        v63 = v15;
        if ( (_DWORD)v15 )
        {
          v16 = a3[1];
          if ( v15 >= v16 )
          {
            sub_112F0(
              (unsigned int)"entries start past the end of the indirect symbol table (reserved1 field greater than the table size)\n",
              qword,
              v16,
              v61,
              v12,
              v13);
          }
          else if ( v16 < v62 + v15 )
          {
            sub_112F0(
              (unsigned int)"entries extends past the end of the indirect symbol table\n",
              qword,
              v16,
              v62,
              v12,
              v13);
          }
        }
        if ( v14 >= v61 )
        {
          v17 = 0;
          v18 = 0;
          do
          {
            v19 = v63 + v18;
            if ( v19 >= a3[1] )
              break;
            v60 = (char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (*(_QWORD *)(v9 + 32) + v17));
            v20 = *(_QWORD *)(v8 + 240);
            if ( *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL) == v20
              || v20 == -1
              || *(_QWORD *)(v8 + 184)
              && (qword = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (*(_QWORD *)(v9 + 32) + v17),
                  range = rangeset_t_find_range(v8 + 176, v60),
                  v19 = v63 + v18,
                  range) )
            {
              v21 = *(_DWORD *)(*a3 + 4 * v19);
              if ( ((v21 - 0x40000000) & 0xBFFFFFFF) == 0 )
              {
                if ( v21 != 0x80000000 || v64 != 6 )
                  goto LABEL_39;
                if ( *(_BYTE *)(a1 + 13692) )
                {
                  qword = get_qword(v60);
                  if ( (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) == 0 )
                  {
LABEL_49:
                    v84 = 0;
                    v85 = 0;
                    if ( get_ea_name(&v84, qword, 0, 0) > 0 )
                    {
                      v35 = 0;
                      *(_OWORD *)v89 = 0;
                      src = 0;
                      src = (void *)qvector_reserve(&src, 0, 5, 1);
                      *(_QWORD *)v89 = 5;
                      strcpy((char *)src, "_ptr");
                      v86 = 0;
                      v87 = 0;
                      if ( (_QWORD)v85 )
                      {
                        na = v85;
                        v47 = (void *)qalloc_or_throw(v85, 0, v85);
                        v35 = (const char *)v84;
                        v86 = (__int64)v47;
                        *((_QWORD *)&v87 + 1) = na;
                        memcpy(v47, v84, na);
                        *(_QWORD *)&v87 = na;
                      }
                      v39 = *(_QWORD *)v89;
                      if ( *(_QWORD *)v89 )
                      {
                        v38 = *(_QWORD *)v89 - 1LL;
                        if ( *(_QWORD *)v89 != 1 )
                        {
                          v40 = v87;
                          v41 = *(_QWORD *)v89 - 1LL;
                          if ( (_QWORD)v87 )
                          {
                            v40 = v87 - 1;
                            v41 = v38 + v87 - 1;
                            v39 = *(_QWORD *)v89 + v87 - 1;
                          }
                          v42 = v86;
                          if ( *((_QWORD *)&v87 + 1) < v39 )
                          {
                            v82 = v41;
                            v79 = v40;
                            v74 = *(_QWORD *)v89 - 1LL;
                            nb = v39;
                            v86 = qvector_reserve(&v86, v86, v39, 1);
                            v41 = v82;
                            v42 = v86;
                            v40 = v79;
                            v38 = v74;
                            v39 = nb;
                          }
                          *(_QWORD *)&v87 = v39;
                          *(_BYTE *)(v42 + v41) = 0;
                          v35 = (const char *)src;
                          memcpy((void *)(v40 + v86), src, v38);
                        }
                      }
                      if ( src )
                      {
                        *(_QWORD *)v89 = 0;
                        qfree(src, v35, v39, v36, v37, v38);
                      }
                      set_name(v60, v86, 6144);
                      qword = (__int64)v84;
                      sub_12040(v60, v84, 1);
                      if ( v86 )
                      {
                        *(_QWORD *)&v87 = 0;
                        qfree(v86, (const char *)qword);
                      }
                    }
                    if ( v84 )
                    {
                      *(_QWORD *)&v85 = 0;
                      qfree(v84, (const char *)qword);
                    }
                    goto LABEL_39;
                  }
                }
                else
                {
                  qword = (unsigned int)get_dword(v60);
                  if ( (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) == 0 )
                    goto LABEL_49;
                }
                if ( (unsigned __int8)segtype(qword, qword, v33) == 2 )
                  qword &= ~1uLL;
                goto LABEL_49;
              }
              if ( v21 == -1073741824 )
                goto LABEL_39;
              v22 = v21;
              if ( (unsigned __int64)v21 < a4[1] )
              {
                v23 = (_QWORD *)a4[3];
                if ( v23 )
                {
                  v24 = v23[2];
                  if ( v24 )
                  {
                    v73 = v22;
                    v81 = 16 * v22;
                    if ( *(unsigned int *)(*a4 + 16 * v22) < (unsigned __int64)(v24 - 1) )
                    {
                      v25 = (char *)(*(__int64 (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
                      if ( v25 )
                      {
                        n = v25;
                        if ( !(unsigned __int8)sub_11500(v25) )
                        {
                          v26 = (char *)n;
                          name_ea = get_name_ea(-1, n);
                          v29 = name_ea;
                          if ( name_ea == -1 )
                            goto LABEL_37;
                          if ( v71 )
                          {
                            if ( !*(_DWORD *)(*(_QWORD *)a1 + 4LL) && (*(_BYTE *)(a1 + 13689) & 8) == 0 && v61 == 5 )
                            {
                              v26 = &v103;
                              v80 = name_ea;
                              v103 = -23;
                              v104 = name_ea - (_DWORD)v60 - 5;
                              put_bytes(v60, &v103, 5);
                              byte = get_byte(v80);
                              v29 = v80;
                              if ( byte == -12 )
                              {
                                v26 = (_BYTE *)(off_C0 + 3);
                                put_byte(v80, 195);
                                v29 = v80;
                              }
                            }
                            v77 = v29;
                            if ( (unsigned __int8)segtype(v29, v26, v28) == 2 )
                            {
                              qsnprintf(&v103, 1024, "j_%s", n);
                              n = &v103;
                            }
                            else
                            {
                              qsnprintf(&v103, 1024, "__imp_%s", n);
                              set_name(v77, &v103, 1281);
                            }
                            v90 = 0;
                            src = v60;
                            *(_QWORD *)v89 = &v60[v61];
                            v91 = 0;
                            v93 = 0xFFFFFFFFLL;
                            v94 = 0;
                            v95 = 0;
                            v96 = 0;
                            v97 = 0;
                            v98 = 0;
                            v99 = 0;
                            v100 = 0;
                            v101 = 0;
                            v102 = 0;
                            *(__m128i *)&v89[8] = _mm_load_si128((const __m128i *)&xmmword_574D0);
                            v92 = 0;
                            add_func_ex(&src);
LABEL_37:
                            v78 = v64 != 8;
                            set_name(v60, n, 7168);
LABEL_38:
                            qword = (__int64)n;
                            sub_12040(v60, n, v78);
LABEL_39:
                            if ( (a6 & (v61 == v70)) != 0 )
                            {
                              if ( *(_BYTE *)(a1 + 13692) )
                              {
                                src = byte_9 + 3;
                                *(_QWORD *)&v89[16] = 0;
                                v90 = 0;
                                *(__m128i *)v89 = _mm_load_si128((const __m128i *)&xmmword_57480);
                                _64bit = get_64bit(v60);
                              }
                              else
                              {
                                src = &byte_4;
                                *(_QWORD *)&v89[16] = 0;
                                v90 = 0;
                                *(__m128i *)v89 = _mm_load_si128((const __m128i *)&xmmword_57480);
                                _64bit = (unsigned int)get_dword(v60);
                              }
                              *(_QWORD *)&v89[16] = _64bit;
                              v32 = segtype(_64bit, qword, v30);
                              if ( v32 == 1 )
                              {
                                HIDWORD(src) |= 2u;
                              }
                              else if ( v32 == 2 )
                              {
                                v43 = *(_QWORD *)&v89[16];
                                if ( (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) != 0 )
                                {
                                  v43 = *(_QWORD *)&v89[16] & 0xFFFFFFFFFFFFFFFELL;
                                  v44 = v89[16] & 1;
                                  *(_QWORD *)&v89[16] &= ~1uLL;
                                  v90 = v44;
                                }
                                auto_mark_range(v43, v43 + 1, 20);
                                auto_mark_range(v43, v43 + 1, 30);
                              }
                              set_fixup(v60, &src);
                            }
                            goto LABEL_18;
                          }
                          if ( (*(_BYTE *)(v8 + 364) & 0x50) != 0 || (*(_BYTE *)(a1 + 13689) & 8) != 0 )
                          {
                            v78 = v64 != 8;
                          }
                          else
                          {
                            v48 = v73;
                            v75 = *(_BYTE *)(*a4 + v81 + 4);
                            v50 = netnode_altval(*a5, v48, 65);
                            if ( v50 )
                            {
                              v53 = *(_BYTE *)(a1 + 13692);
                              v78 = v64 != 8;
                              if ( a6 && v64 != 8 && (v56 = 4097, _bittest64(&v56, v75 & 0xE)) )
                              {
                                v57 = v60;
                                if ( v53 )
                                  goto LABEL_95;
LABEL_103:
                                put_dword(v57, v50);
                              }
                              else
                              {
                                v54 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v50 - *(_QWORD *)(*a4 + v81 + 8));
                                if ( v53 )
                                  add_qword(v60, v54);
                                else
                                  add_dword(v60, v54);
                              }
                            }
                            else
                            {
                              *(_OWORD *)v89 = 0;
                              src = 0;
                              sub_35470((unsigned int)&src, (unsigned int)"__imp_%s", (_DWORD)n, v49, v51, v52);
                              v58 = s1;
                              if ( *(_QWORD *)v89 )
                                v58 = (const char *)src;
                              v59 = (const char *)get_name_ea(-1, v58);
                              v50 = (__int64)v59;
                              if ( src )
                              {
                                v76 = v59;
                                *(_QWORD *)v89 = 0;
                                qfree(src, v59);
                                v50 = (__int64)v76;
                              }
                              v78 = v64 != 8;
                              if ( v50 != -1 && a6 )
                              {
                                v57 = v60;
                                if ( !*(_BYTE *)(a1 + 13692) )
                                  goto LABEL_103;
LABEL_95:
                                put_qword(v57, v50);
                              }
                            }
                          }
                          qsnprintf(&v103, 1024, "%s_ptr", n);
                          n = &v103;
                          set_name(v60, &v103, 7168);
                          goto LABEL_38;
                        }
                      }
                    }
                  }
                }
              }
            }
LABEL_18:
            ++v18;
            qword = v62;
            v17 += v61;
          }
          while ( v18 < v62 );
        }
LABEL_6:
        v9 += 80;
        if ( v68 == v9 )
          return v105 - __readfsqword(0x28u);
      }
    }
  }
  return v105 - __readfsqword(0x28u);
}
