__int64 __fastcall sub_3B0CF0(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  unsigned int tinfo_details; // r13d
  const char *tinfo_property4; // rsi
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rbp
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 i; // r14
  _QWORD *v20; // r10
  _QWORD *v21; // r15
  __int64 tinfo_tid; // rax
  __int64 v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  char *v27; // rax
  char *v28; // r10
  signed __int64 v29; // rax
  unsigned __int64 v30; // rax
  char *v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  size_t v34; // r9
  double v35; // xmm0_8
  __int16 flags; // ax
  __int64 v37; // r8
  __int64 v38; // r8
  int v39; // eax
  size_t v40; // rax
  __int64 v41; // r8
  __int64 v42; // rsi
  size_t v43; // r9
  size_t v44; // r11
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdi
  char *v47; // r9
  unsigned __int64 v48; // rdx
  size_t v49; // r15
  __int64 v50; // r9
  size_t v51; // r11
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdi
  int v56; // eax
  int v57; // eax
  void *v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  const char *v63; // [rsp+8h] [rbp-170h]
  unsigned __int64 v64; // [rsp+8h] [rbp-170h]
  const char *v65; // [rsp+10h] [rbp-168h]
  __int64 v66; // [rsp+10h] [rbp-168h]
  size_t v67; // [rsp+10h] [rbp-168h]
  unsigned __int64 v68; // [rsp+10h] [rbp-168h]
  size_t v69; // [rsp+10h] [rbp-168h]
  __int64 v70; // [rsp+10h] [rbp-168h]
  unsigned __int64 tinfo_size; // [rsp+18h] [rbp-160h]
  __int64 v72; // [rsp+18h] [rbp-160h]
  __int64 v73; // [rsp+18h] [rbp-160h]
  unsigned __int64 v74; // [rsp+18h] [rbp-160h]
  const char *v75; // [rsp+20h] [rbp-158h]
  __int64 v76; // [rsp+20h] [rbp-158h]
  unsigned __int64 v77; // [rsp+38h] [rbp-140h]
  __int64 v78; // [rsp+38h] [rbp-140h]
  char *v79; // [rsp+40h] [rbp-138h]
  char *v80; // [rsp+40h] [rbp-138h]
  size_t v81; // [rsp+40h] [rbp-138h]
  __int64 v82; // [rsp+48h] [rbp-130h]
  size_t v83; // [rsp+48h] [rbp-130h]
  char *s1; // [rsp+50h] [rbp-128h]
  const char *s1a; // [rsp+50h] [rbp-128h]
  char *s1c; // [rsp+50h] [rbp-128h]
  char *s1b; // [rsp+50h] [rbp-128h]
  char *s1d; // [rsp+50h] [rbp-128h]
  __int64 v89; // [rsp+58h] [rbp-120h]
  __int64 v90; // [rsp+60h] [rbp-118h]
  __int64 v91; // [rsp+60h] [rbp-118h]
  __int64 v92; // [rsp+60h] [rbp-118h]
  __int64 v93; // [rsp+60h] [rbp-118h]
  __int64 v94; // [rsp+60h] [rbp-118h]
  __int64 v95; // [rsp+60h] [rbp-118h]
  __int64 v96; // [rsp+60h] [rbp-118h]
  __int64 v97; // [rsp+68h] [rbp-110h]
  __int64 v98; // [rsp+68h] [rbp-110h]
  size_t v99; // [rsp+70h] [rbp-108h]
  size_t v100; // [rsp+78h] [rbp-100h]
  __int64 v101; // [rsp+88h] [rbp-F0h] BYREF
  char *v102; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v103; // [rsp+98h] [rbp-E0h] BYREF
  char *s; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v105; // [rsp+A8h] [rbp-D0h]
  char v106[32]; // [rsp+C0h] [rbp-B8h] BYREF
  void *src; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v108; // [rsp+E8h] [rbp-90h]
  __int64 v109; // [rsp+100h] [rbp-78h] BYREF
  __int128 v110; // [rsp+108h] [rbp-70h]
  __int128 v111; // [rsp+118h] [rbp-60h]
  __int64 v112; // [rsp+128h] [rbp-50h]
  int v113; // [rsp+130h] [rbp-48h]
  unsigned __int64 v114; // [rsp+138h] [rbp-40h]

  v114 = __readfsqword(0x28u);
  v101 = 0;
  if ( !(unsigned __int8)get_type_by_tid(&v101, a2) || (get_tinfo_property(v101, 2) & 0x3F) != 0xD )
  {
    tinfo_details = 0;
    goto LABEL_3;
  }
  tinfo_property4 = byte_9 + 4;
  v109 = 0;
  v112 = 0;
  v113 = 1;
  v110 = 0;
  v111 = 0;
  tinfo_details = get_tinfo_details(v101, 13, &v109);
  if ( (_BYTE)tinfo_details )
  {
    v15 = a3[1];
    if ( v15 )
    {
      v16 = v15 + 1;
      v17 = v15 + 2;
      --v15;
    }
    else
    {
      v17 = 3;
      v16 = 2;
    }
    v18 = *a3;
    if ( a3[2] < v17 )
    {
      v64 = v17;
      v54 = qvector_reserve(a3, v18, v17, 1);
      *a3 = v54;
      v17 = v64;
      v18 = v54;
    }
    a3[1] = v17;
    *(_BYTE *)(v18 + v16) = 0;
    tinfo_property4 = (_BYTE *)(&stru_3A30 + 10);
    *(_WORD *)(*a3 + v15) = 14906;
    if ( !(_QWORD)v110 )
    {
      v9 = v109;
      if ( !v109 )
        goto LABEL_3;
      goto LABEL_14;
    }
    for ( i = 0; i < (unsigned __int64)v110; ++i )
    {
      v20 = (_QWORD *)(v109 + 144 * i);
      v21 = v20;
      v63 = (const char *)(a1 + (*v20 >> 3));
      if ( (get_tinfo_property(v20[8], 2) & 0x3F) == 0xD )
      {
        v65 = (const char *)((a3[1] == 0) + a3[1] - 1);
        tinfo_tid = get_tinfo_tid(v21 + 8, 0);
        v23 = tinfo_tid;
        src = nullptr;
        v108 = 0;
        v24 = v21[8];
        if ( (v24 & 0x100) != 0 )
        {
          v72 = tinfo_tid;
          get_tinfo_pdata(&src, v24, 0);
          v48 = v108;
          v23 = v72;
          if ( (_QWORD)v108 )
          {
            v49 = v108 - 1;
            if ( (_QWORD)v108 != 1 )
            {
              v50 = a3[1];
              v51 = v108 - 1;
              if ( v50 )
              {
                --v50;
                v51 = v49 + v50;
                v48 = v108 + v50;
              }
              v52 = *a3;
              if ( a3[2] < v48 )
              {
                v81 = v51;
                v78 = v50;
                v76 = v72;
                v74 = v48;
                v53 = qvector_reserve(a3, v52, v48, 1);
                v51 = v81;
                v50 = v78;
                *a3 = v53;
                v52 = v53;
                v23 = v76;
                v48 = v74;
              }
              a3[1] = v48;
              *(_BYTE *)(v52 + v51) = 0;
              v73 = v23;
              memcpy((void *)(v50 + *a3), src, v49);
              v23 = v73;
            }
          }
        }
        sub_3B0CF0(v63, v23, a3, a4);
        tinfo_property4 = v65;
        sub_3AF8C0(a3, (__int64)v65);
        if ( src )
        {
          *(_QWORD *)&v108 = 0;
          qfree(src, v65);
        }
      }
      else
      {
        tinfo_property4 = (_BYTE *)(&dword_0 + 2);
        if ( (get_tinfo_property(v21[8], 2) & 0xF) == 0xA )
        {
          tinfo_property4 = (const char *)get_tinfo_property4(v101, 297, i, 0, 0, 0);
          v75 = tinfo_property4;
          if ( (unsigned __int8)get_refinfo(v106, tinfo_property4, 0) )
          {
            tinfo_property4 = (const char *)v21[8];
            tinfo_size = get_tinfo_size(0, tinfo_property4, 0);
            if ( tinfo_size )
            {
              if ( *(int *)(get_eah(0, tinfo_property4, v25) + 24) >= tinfo_size )
              {
                v26 = v21[1];
                tinfo_property4 = v75;
                s = nullptr;
                v105 = 0;
                v77 = v26 >> 3;
                get_tid_name(&s, v75);
                v66 = v105;
                if ( (_QWORD)v105 )
                {
                  tinfo_property4 = (_BYTE *)(&qword_28 + 6);
                  v79 = s;
                  v27 = strchr(s, 46);
                  if ( v27 )
                  {
                    v28 = v79;
                    v29 = v27 - v79;
                    if ( v29 != -1 )
                    {
                      v30 = v29 + 1;
                      src = nullptr;
                      v108 = 0;
                      if ( v30 > v66 - 1 )
                        v30 = v66 - 1;
                      v31 = nullptr;
                      v32 = v30;
                      v33 = 0;
                      v34 = v66 - 1 - v32;
                      if ( v34 )
                      {
                        v58 = nullptr;
                        v59 = v66 - v32;
                        if ( v66 != v32 )
                        {
                          s1d = (char *)v32;
                          v83 = v66 - 1 - v32;
                          v70 = v66 - v32;
                          src = (void *)qvector_reserve(&src, 0, v59, 1);
                          v32 = (unsigned __int64)s1d;
                          v58 = src;
                          v34 = v83;
                          v28 = v79;
                          v59 = v70;
                        }
                        *(_QWORD *)&v108 = v59;
                        tinfo_property4 = &v28[v32];
                        v69 = v34;
                        memmove(v58, &v28[v32], v34);
                        *((_BYTE *)src + v69) = 0;
                        v31 = (char *)src;
                        v33 = *((_QWORD *)&v108 + 1);
                        v34 = v108;
                        v28 = s;
                      }
                      src = nullptr;
                      v108 = 0;
                      if ( v28 )
                      {
                        v82 = v33;
                        v80 = v31;
                        v67 = v34;
                        *(_QWORD *)&v105 = 0;
                        v35 = qfree(v28, tinfo_property4);
                        s = v80;
                        *(_QWORD *)&v105 = v67;
                        *((_QWORD *)&v105 + 1) = v82;
                        if ( src )
                        {
                          *(_QWORD *)&v108 = 0;
                          qfree(src, tinfo_property4, v35);
                        }
                      }
                      else
                      {
                        s = v31;
                        *(_QWORD *)&v105 = v34;
                        *((_QWORD *)&v105 + 1) = v33;
                      }
                    }
                  }
                }
                v68 = 0;
                if ( !v77 )
                {
LABEL_81:
                  if ( s )
                  {
                    *(_QWORD *)&v105 = 0;
                    qfree(s, tinfo_property4);
                  }
                  continue;
                }
                while ( 2 )
                {
                  tinfo_property4 = v63;
                  if ( (unsigned __int8)get_data_value(&v102, v63, tinfo_size) )
                  {
                    tinfo_property4 = v75;
                    s1 = v102;
                    if ( (unsigned __int8)get_refinfo(&src, v75, 0) )
                    {
                      tinfo_property4 = nullptr;
                      if ( (unsigned __int8)calc_reference_data(&v103, 0, &v63[v68], &src, s1) )
                      {
                        v89 = v103;
                        if ( v103 != -1 )
                        {
                          s1a = &::s1;
                          if ( (_QWORD)v105 )
                            s1a = s;
                          tinfo_property4 = &byte_4;
                          flags = get_flags_ex(v103, 4);
                          if ( (flags & 0x600) != 0x200 )
                          {
                            if ( (a4 & 1) != 0 || (flags & 0xC000) != 0x4000 )
                            {
                              v37 = a3[1];
                              if ( v37 )
                              {
                                v38 = v37 - 1;
                                if ( s1a )
                                {
                                  tinfo_property4 = "arg_";
                                  v93 = v38;
                                  v56 = strncmp(s1a, "arg_", 4u);
                                  v38 = v93;
                                  if ( v56 )
                                  {
                                    tinfo_property4 = "var_";
                                    v57 = strncmp(s1a, "var_", 4u);
                                    v38 = v93;
                                    if ( v57 )
                                      goto LABEL_57;
                                  }
                                }
                                goto LABEL_63;
                              }
                              if ( !s1a )
                                goto LABEL_83;
                              v90 = a3[1];
                              tinfo_property4 = "arg_";
                              if ( !strncmp(s1a, "arg_", 4u) )
                                goto LABEL_83;
                              tinfo_property4 = "var_";
                              if ( !strncmp(s1a, "var_", 4u) )
                                goto LABEL_83;
                              v38 = v90;
LABEL_57:
                              v91 = v38;
                              v39 = strncmp(s1a, "anonymous", 9u);
                              tinfo_property4 = (const char *)*a3;
                              v38 = v91;
                              v97 = *a3;
                              if ( v39 )
                              {
                                v40 = strlen(s1a);
                                v41 = v91;
                                v42 = v97;
                                v43 = v40;
                                v44 = v40 + v91;
                                v45 = v40 + v91 + 1;
                                if ( a3[2] < v45 )
                                {
                                  v100 = v40;
                                  v99 = v40 + v91;
                                  v98 = v91;
                                  v95 = v40 + v91 + 1;
                                  v60 = qvector_reserve(a3, v42, v45, 1);
                                  v43 = v100;
                                  v44 = v99;
                                  *a3 = v60;
                                  v42 = v60;
                                  v41 = v98;
                                  v45 = v95;
                                }
                                a3[1] = v45;
                                *(_BYTE *)(v42 + v44) = 0;
                                v92 = v41;
                                memmove((void *)(*a3 + v41), s1a, v43);
                                tinfo_property4 = &::s1;
                                if ( a3[1] )
                                  tinfo_property4 = (const char *)*a3;
                                set_name(v89, tinfo_property4, 0);
                                v38 = v92;
                              }
LABEL_63:
                              if ( !v38 )
                              {
LABEL_83:
                                v55 = *a3;
                                if ( *a3 )
                                {
                                  a3[1] = 0;
                                  qfree(v55, tinfo_property4);
                                  *a3 = 0;
                                  a3[2] = 0;
                                }
                              }
                              else
                              {
                                v46 = a3[1];
                                v47 = (char *)(v38 + 1);
                                if ( v46 < v38 + 1 )
                                {
                                  if ( a3[2] < (unsigned __int64)v47 )
                                  {
                                    v96 = v38;
                                    s1b = (char *)(v38 + 1);
                                    v61 = qvector_reserve(a3, *a3, v38 + 1, 1);
                                    v46 = a3[1];
                                    v38 = v96;
                                    *a3 = v61;
                                    v47 = s1b;
                                  }
                                  tinfo_property4 = nullptr;
                                  v94 = v38;
                                  s1c = v47;
                                  memset((void *)(*a3 + v46), 0, (size_t)&v47[-v46]);
                                  v38 = v94;
                                  a3[1] = (__int64)s1c;
                                }
                                else if ( v47 != (char *)v46 )
                                {
                                  a3[1] = (__int64)v47;
                                }
                                *(_BYTE *)(*a3 + v38) = 0;
                              }
                            }
                            if ( (a4 & 2) != 0 || (get_aflags(v89) & 0x2000000) == 0 )
                            {
                              src = nullptr;
                              tinfo_property4 = (const char *)&src;
                              src = (void *)get_tinfo_property(v21[8], 10);
                              apply_tinfo(v89, &src, 1);
                              clear_tinfo_t(&src);
                            }
                          }
                        }
                      }
                    }
                  }
                  v68 += tinfo_size;
                  if ( v68 >= v77 )
                    goto LABEL_81;
                  continue;
                }
              }
            }
          }
        }
      }
    }
  }
  v9 = v109;
  if ( v109 )
  {
    v10 = v110;
    if ( (_QWORD)v110 )
    {
      v11 = 0;
      do
      {
        v12 = (_QWORD *)(v9 + 144 * v11);
        clear_tinfo_t(v12 + 8);
        v13 = v12[5];
        if ( v13 )
        {
          v12[6] = 0;
          qfree(v13, tinfo_property4);
        }
        v14 = v12[2];
        if ( v14 )
        {
          v12[3] = 0;
          qfree(v14, tinfo_property4);
        }
        ++v11;
        v9 = v109;
      }
      while ( v10 != v11 );
    }
LABEL_14:
    *(_QWORD *)&v110 = 0;
    qfree(v9, tinfo_property4);
  }
LABEL_3:
  clear_tinfo_t(&v101);
  return tinfo_details;
}
