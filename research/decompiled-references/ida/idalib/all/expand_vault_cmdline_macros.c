unsigned __int64 __fastcall expand_vault_cmdline_macros(
        __int64 a1,
        unsigned __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        const char *a6)
{
  char *v6; // r14
  char v8; // bp
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  char *v11; // rbx
  void *v12; // rdi
  __int64 v13; // rax
  void *v14; // rdx
  __m128 v15; // xmm0
  const char *v17; // r15
  unsigned __int64 v18; // rbp
  size_t v19; // r14
  __int64 v20; // r15
  size_t v21; // r10
  _BYTE *v22; // rsi
  void *v23; // rdi
  const char *v24; // r15
  size_t v25; // r14
  unsigned __int64 v26; // rbp
  size_t v27; // r14
  __int64 v28; // r15
  size_t v29; // r10
  _BYTE *v30; // rsi
  size_t v31; // rax
  size_t v32; // r15
  size_t v33; // r14
  unsigned __int64 v34; // rbp
  size_t v35; // r14
  __int64 v36; // r15
  size_t v37; // r10
  _BYTE *v38; // rsi
  size_t v39; // rax
  size_t v40; // r15
  size_t v41; // r14
  unsigned __int64 v42; // rbp
  size_t v43; // r14
  __int64 v44; // r15
  size_t v45; // r10
  _BYTE *v46; // rsi
  const char *v47; // r15
  size_t v48; // r14
  __int64 v49; // rdx
  unsigned __int64 v50; // rbp
  size_t v51; // r14
  __int64 v52; // r15
  size_t v53; // r10
  _BYTE *v54; // rsi
  const char *v55; // r15
  size_t v56; // r14
  __int64 v57; // rdx
  unsigned __int64 v58; // rbp
  size_t v59; // r14
  __int64 v60; // r15
  size_t v61; // r10
  _BYTE *v62; // rsi
  unsigned __int64 v63; // rbp
  size_t v64; // r14
  __int64 v65; // r15
  size_t v66; // r10
  _BYTE *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // r14
  char *v70; // r15
  void *v71; // rax
  unsigned int v72; // edx
  __int64 v73; // rcx
  unsigned __int64 v74; // rbp
  size_t v75; // r14
  __int64 v76; // r15
  size_t v77; // r10
  _BYTE *v78; // rsi
  bool v79; // zf
  __int64 v80; // rdx
  __int64 v81; // r14
  char *v82; // r15
  void *v83; // rax
  unsigned int v84; // edx
  __int64 v85; // rcx
  unsigned __int64 v86; // rbp
  size_t v87; // r14
  __int64 v88; // r15
  size_t v89; // r10
  _BYTE *v90; // rsi
  __int64 v91; // rdx
  size_t v92; // r14
  __int64 v97; // [rsp+20h] [rbp-80h]
  __int64 v98; // [rsp+20h] [rbp-80h]
  __int64 v99; // [rsp+20h] [rbp-80h]
  __int64 v100; // [rsp+20h] [rbp-80h]
  __int64 v101; // [rsp+20h] [rbp-80h]
  size_t v102; // [rsp+20h] [rbp-80h]
  size_t v103; // [rsp+20h] [rbp-80h]
  size_t v104; // [rsp+20h] [rbp-80h]
  size_t v105; // [rsp+20h] [rbp-80h]
  size_t v106; // [rsp+20h] [rbp-80h]
  size_t v107; // [rsp+20h] [rbp-80h]
  size_t v108; // [rsp+20h] [rbp-80h]
  size_t v109; // [rsp+20h] [rbp-80h]
  size_t v110; // [rsp+20h] [rbp-80h]
  void *ptr; // [rsp+28h] [rbp-78h] BYREF
  __int128 v112; // [rsp+30h] [rbp-70h] BYREF
  void *src; // [rsp+48h] [rbp-58h] BYREF
  __int128 v114; // [rsp+50h] [rbp-50h]
  unsigned __int64 v115; // [rsp+60h] [rbp-40h]

  v6 = (char *)a2;
  v115 = __readfsqword(0x28u);
  v112 = 0;
  ptr = nullptr;
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 != 37 )
      break;
LABEL_9:
    v8 = v6[1];
    v11 = v6 + 2;
    switch ( v8 )
    {
      case '<':
        v79 = *(_BYTE *)(a4 + 16) == 0;
        v114 = 0;
        src = nullptr;
        if ( v79 )
        {
          v80 = 4;
          v81 = 3;
          v82 = (char *)"off";
        }
        else
        {
          v80 = 3;
          v81 = 2;
          v82 = "on";
        }
        v100 = v80;
        v83 = (void *)qvector_reserve(&src, 0, v80, 1);
        src = v83;
        *(_QWORD *)&v114 = v100;
        v84 = 0;
        do
        {
          v85 = v84++;
          a2 = (unsigned __int8)v82[v85];
          *((_BYTE *)v83 + v85) = a2;
        }
        while ( v84 < (unsigned int)v81 );
        *((_BYTE *)src + v81) = 0;
        quote_cmdline_arg(&src, (const char *)a2);
        v86 = v114;
        if ( (_QWORD)v114 )
        {
          v87 = v114 - 1;
          if ( (_QWORD)v114 != 1 )
          {
            v88 = v112;
            v89 = v114 - 1;
            if ( (_QWORD)v112 )
            {
              v88 = v112 - 1;
              v89 = v87 + v112 - 1;
              v86 = v114 + v112 - 1;
            }
            v90 = ptr;
            if ( *((_QWORD *)&v112 + 1) < v86 )
            {
              v104 = v89;
              ptr = (void *)qvector_reserve(&ptr, ptr, v86, 1);
              v89 = v104;
              v90 = ptr;
            }
            *(_QWORD *)&v112 = v86;
            v90[v89] = 0;
            a2 = (unsigned __int64)src;
            memcpy((char *)ptr + v88, src, v87);
          }
        }
        v23 = src;
        if ( !src )
          goto LABEL_25;
        goto LABEL_24;
      case '>':
        if ( a5 && *(_BYTE *)(a5 + 16) )
        {
          v68 = 3;
          src = nullptr;
          v69 = 2;
          v114 = 0;
          v70 = "on";
        }
        else
        {
          v68 = 4;
          src = nullptr;
          v69 = 3;
          v114 = 0;
          v70 = (char *)"off";
        }
        v99 = v68;
        v71 = (void *)qvector_reserve(&src, 0, v68, 1);
        src = v71;
        *(_QWORD *)&v114 = v99;
        v72 = 0;
        do
        {
          v73 = v72++;
          a2 = (unsigned __int8)v70[v73];
          *((_BYTE *)v71 + v73) = a2;
        }
        while ( v72 < (unsigned int)v69 );
        *((_BYTE *)src + v69) = 0;
        quote_cmdline_arg(&src, (const char *)a2);
        v74 = v114;
        if ( (_QWORD)v114 )
        {
          v75 = v114 - 1;
          if ( (_QWORD)v114 != 1 )
          {
            v76 = v112;
            v77 = v114 - 1;
            if ( (_QWORD)v112 )
            {
              v76 = v112 - 1;
              v77 = v75 + v112 - 1;
              v74 = v114 + v112 - 1;
            }
            v78 = ptr;
            if ( *((_QWORD *)&v112 + 1) < v74 )
            {
              v103 = v77;
              ptr = (void *)qvector_reserve(&ptr, ptr, v74, 1);
              v77 = v103;
              v78 = ptr;
            }
            *(_QWORD *)&v112 = v74;
            v78[v77] = 0;
            a2 = (unsigned __int64)src;
            memcpy((char *)ptr + v76, src, v75);
          }
        }
        v23 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case 'I':
        src = nullptr;
        v114 = 0;
        get_install_root((__int64)&src);
        v63 = v114;
        if ( (_QWORD)v114 )
        {
          v64 = v114 - 1;
          if ( (_QWORD)v114 != 1 )
          {
            v65 = v112;
            v66 = v114 - 1;
            if ( (_QWORD)v112 )
            {
              v65 = v112 - 1;
              v66 = v64 + v112 - 1;
              v63 = v114 + v112 - 1;
            }
            v67 = ptr;
            if ( *((_QWORD *)&v112 + 1) < v63 )
            {
              v102 = v66;
              ptr = (void *)qvector_reserve(&ptr, ptr, v63, 1);
              v66 = v102;
              v67 = ptr;
            }
            *(_QWORD *)&v112 = v63;
            v67[v66] = 0;
            a2 = (unsigned __int64)src;
            memcpy((char *)ptr + v65, src, v64);
          }
        }
        v23 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case '[':
        v55 = *(const char **)(a4 + 8);
        v114 = 0;
        src = nullptr;
        if ( v55 )
        {
          v56 = strlen(v55);
          v57 = v56 + 1;
        }
        else
        {
          v57 = 1;
          v56 = 0;
          v55 = &byte_22F0C30;
        }
        v98 = v57;
        a2 = (unsigned __int64)v55;
        src = (void *)qvector_reserve(&src, 0, v57, 1);
        *(_QWORD *)&v114 = v98;
        memmove(src, v55, v56);
        *((_BYTE *)src + v56) = 0;
        quote_cmdline_arg(&src, v55);
        v58 = v114;
        if ( (_QWORD)v114 )
        {
          v59 = v114 - 1;
          if ( (_QWORD)v114 != 1 )
          {
            v60 = v112;
            v61 = v114 - 1;
            if ( (_QWORD)v112 )
            {
              v60 = v112 - 1;
              v61 = v59 + v112 - 1;
              v58 = v114 + v112 - 1;
            }
            v62 = ptr;
            if ( *((_QWORD *)&v112 + 1) < v58 )
            {
              v110 = v61;
              ptr = (void *)qvector_reserve(&ptr, ptr, v58, 1);
              v61 = v110;
              v62 = ptr;
            }
            *(_QWORD *)&v112 = v58;
            v62[v61] = 0;
            a2 = (unsigned __int64)src;
            memcpy((char *)ptr + v60, src, v59);
          }
        }
        v23 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case ']':
        if ( a5 && (v47 = *(const char **)(a5 + 8)) != nullptr )
        {
          src = nullptr;
          v114 = 0;
          v48 = strlen(v47);
          v49 = v48 + 1;
        }
        else
        {
          v49 = 1;
          v48 = 0;
          src = nullptr;
          v114 = 0;
          v47 = &byte_22F0C30;
        }
        v97 = v49;
        a2 = (unsigned __int64)v47;
        src = (void *)qvector_reserve(&src, 0, v49, 1);
        *(_QWORD *)&v114 = v97;
        memmove(src, v47, v48);
        *((_BYTE *)src + v48) = 0;
        quote_cmdline_arg(&src, v47);
        v50 = v114;
        if ( (_QWORD)v114 )
        {
          v51 = v114 - 1;
          if ( (_QWORD)v114 != 1 )
          {
            v52 = v112;
            v53 = v114 - 1;
            if ( (_QWORD)v112 )
            {
              v52 = v112 - 1;
              v53 = v51 + v112 - 1;
              v50 = v114 + v112 - 1;
            }
            v54 = ptr;
            if ( *((_QWORD *)&v112 + 1) < v50 )
            {
              v109 = v53;
              ptr = (void *)qvector_reserve(&ptr, ptr, v50, 1);
              v53 = v109;
              v54 = ptr;
            }
            *(_QWORD *)&v112 = v50;
            v54[v53] = 0;
            a2 = (unsigned __int64)src;
            memcpy((char *)ptr + v52, src, v51);
          }
        }
        v23 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case 'b':
        src = nullptr;
        v114 = 0;
        if ( a6 )
        {
          v39 = strlen(a6);
          v40 = v39 + 1;
          v41 = v39;
          a2 = (unsigned __int64)a6;
          src = (void *)qvector_reserve(&src, 0, v39 + 1, 1);
          *(_QWORD *)&v114 = v40;
          memmove(src, a6, v41);
          *((_BYTE *)src + v41) = 0;
        }
        quote_cmdline_arg(&src, (const char *)a2);
        v42 = v114;
        if ( (_QWORD)v114 )
        {
          v43 = v114 - 1;
          if ( (_QWORD)v114 != 1 )
          {
            v44 = v112;
            v45 = v114 - 1;
            if ( (_QWORD)v112 )
            {
              v44 = v112 - 1;
              v45 = v43 + v112 - 1;
              v42 = v114 + v112 - 1;
            }
            v46 = ptr;
            if ( *((_QWORD *)&v112 + 1) < v42 )
            {
              v108 = v45;
              ptr = (void *)qvector_reserve(&ptr, ptr, v42, 1);
              v45 = v108;
              v46 = ptr;
            }
            *(_QWORD *)&v112 = v42;
            v46[v45] = 0;
            a2 = (unsigned __int64)src;
            memcpy((char *)ptr + v44, src, v43);
          }
        }
        v23 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case 'i':
        src = nullptr;
        v114 = 0;
        if ( a3 )
        {
          v31 = strlen(a3);
          v32 = v31 + 1;
          v33 = v31;
          a2 = (unsigned __int64)a3;
          src = (void *)qvector_reserve(&src, 0, v31 + 1, 1);
          *(_QWORD *)&v114 = v32;
          memmove(src, a3, v33);
          *((_BYTE *)src + v33) = 0;
        }
        quote_cmdline_arg(&src, (const char *)a2);
        v34 = v114;
        if ( (_QWORD)v114 )
        {
          v35 = v114 - 1;
          if ( (_QWORD)v114 != 1 )
          {
            v36 = v112;
            v37 = v114 - 1;
            if ( (_QWORD)v112 )
            {
              v36 = v112 - 1;
              v37 = v35 + v112 - 1;
              v34 = v114 + v112 - 1;
            }
            v38 = ptr;
            if ( *((_QWORD *)&v112 + 1) < v34 )
            {
              v107 = v37;
              ptr = (void *)qvector_reserve(&ptr, ptr, v34, 1);
              v37 = v107;
              v38 = ptr;
            }
            *(_QWORD *)&v112 = v34;
            v38[v37] = 0;
            a2 = (unsigned __int64)src;
            memcpy((char *)ptr + v36, src, v35);
          }
        }
        v23 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case 'l':
        src = nullptr;
        v114 = 0;
        v24 = *(const char **)a4;
        if ( *(_QWORD *)a4 )
        {
          v25 = strlen(*(const char **)a4);
          a2 = (unsigned __int64)v24;
          src = (void *)qvector_reserve(&src, 0, v25 + 1, 1);
          *(_QWORD *)&v114 = v25 + 1;
          memmove(src, v24, v25);
          *((_BYTE *)src + v25) = 0;
        }
        quote_cmdline_arg(&src, (const char *)a2);
        v26 = v114;
        if ( (_QWORD)v114 )
        {
          v27 = v114 - 1;
          if ( (_QWORD)v114 != 1 )
          {
            v28 = v112;
            v29 = v114 - 1;
            if ( (_QWORD)v112 )
            {
              v28 = v112 - 1;
              v29 = v27 + v112 - 1;
              v26 = v114 + v112 - 1;
            }
            v30 = ptr;
            if ( *((_QWORD *)&v112 + 1) < v26 )
            {
              v106 = v29;
              ptr = (void *)qvector_reserve(&ptr, ptr, v26, 1);
              v29 = v106;
              v30 = ptr;
            }
            *(_QWORD *)&v112 = v26;
            v30[v29] = 0;
            a2 = (unsigned __int64)src;
            memcpy((char *)ptr + v28, src, v27);
          }
        }
        v23 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case 'r':
        if ( a5 )
        {
          src = nullptr;
          v114 = 0;
          v17 = *(const char **)a5;
          if ( !*(_QWORD *)a5 )
            goto LABEL_16;
          v92 = strlen(*(const char **)a5);
          v91 = v92 + 1;
        }
        else
        {
          src = nullptr;
          v91 = 1;
          v92 = 0;
          v114 = 0;
          v17 = &byte_22F0C30;
        }
        v101 = v91;
        a2 = (unsigned __int64)v17;
        src = (void *)qvector_reserve(&src, 0, v91, 1);
        *(_QWORD *)&v114 = v101;
        memmove(src, v17, v92);
        *((_BYTE *)src + v92) = 0;
LABEL_16:
        quote_cmdline_arg(&src, (const char *)a2);
        v18 = v114;
        if ( (_QWORD)v114 )
        {
          v19 = v114 - 1;
          if ( (_QWORD)v114 != 1 )
          {
            v20 = v112;
            v21 = v114 - 1;
            if ( (_QWORD)v112 )
            {
              v20 = v112 - 1;
              v21 = v19 + v112 - 1;
              v18 = v114 + v112 - 1;
            }
            v22 = ptr;
            if ( *((_QWORD *)&v112 + 1) < v18 )
            {
              v105 = v21;
              ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
              v21 = v105;
              v22 = ptr;
            }
            *(_QWORD *)&v112 = v18;
            v22[v21] = 0;
            a2 = (unsigned __int64)src;
            memcpy((char *)ptr + v20, src, v19);
          }
        }
        v23 = src;
        if ( src )
        {
LABEL_24:
          *(_QWORD *)&v114 = 0;
          qfree(v23);
        }
LABEL_25:
        v6 = v11;
        break;
      default:
        v6 += 2;
        v9 = v112;
        if ( v8 )
          goto LABEL_4;
        goto LABEL_11;
    }
  }
  while ( 1 )
  {
    v9 = v112;
    ++v6;
    if ( !v8 )
      break;
LABEL_4:
    v10 = 2;
    if ( v9 )
      v10 = v9-- + 1;
    a2 = (unsigned __int64)ptr;
    if ( *((_QWORD *)&v112 + 1) < v10 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      a2 = (unsigned __int64)ptr;
    }
    *(_QWORD *)&v112 = v10;
    *(_BYTE *)(a2 + v9) = v8;
    *((_BYTE *)ptr + v9 + 1) = 0;
    v8 = *v6;
    if ( *v6 == 37 )
      goto LABEL_9;
  }
LABEL_11:
  v13 = *(_QWORD *)(a1 + 16);
  v14 = ptr;
  v15 = _mm_loadh_ps((const double *)&v112 + 1);
  ptr = *(void **)a1;
  v12 = ptr;
  *(_QWORD *)a1 = v14;
  *((_QWORD *)&v112 + 1) = v13;
  *(__m128 *)(a1 + 8) = v15;
  if ( v12 )
  {
    *(_QWORD *)&v112 = 0;
    qfree(v12);
  }
  return v115 - __readfsqword(0x28u);
}
