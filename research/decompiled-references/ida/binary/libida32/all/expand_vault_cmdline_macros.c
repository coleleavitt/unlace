unsigned __int64 __fastcall expand_vault_cmdline_macros(
        __int64 a1,
        char *a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        const char *a6)
{
  char v8; // bp
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  _BYTE *v11; // rsi
  char *v12; // rbx
  void *v13; // rdi
  __int64 v14; // rax
  void *v15; // rdx
  __m128 v16; // xmm0
  const char *v18; // r15
  unsigned __int64 v19; // rbp
  size_t v20; // r14
  __int64 v21; // r15
  size_t v22; // r10
  _BYTE *v23; // rsi
  void *v24; // rdi
  const char *v25; // r15
  size_t v26; // r14
  unsigned __int64 v27; // rbp
  size_t v28; // r14
  __int64 v29; // r15
  size_t v30; // r10
  _BYTE *v31; // rsi
  size_t v32; // rax
  size_t v33; // r15
  size_t v34; // r14
  unsigned __int64 v35; // rbp
  size_t v36; // r14
  __int64 v37; // r15
  size_t v38; // r10
  _BYTE *v39; // rsi
  size_t v40; // rax
  size_t v41; // r15
  size_t v42; // r14
  unsigned __int64 v43; // rbp
  size_t v44; // r14
  __int64 v45; // r15
  size_t v46; // r10
  _BYTE *v47; // rsi
  const char *v48; // r15
  size_t v49; // r14
  __int64 v50; // rdx
  unsigned __int64 v51; // rbp
  size_t v52; // r14
  __int64 v53; // r15
  size_t v54; // r10
  _BYTE *v55; // rsi
  const char *v56; // r15
  size_t v57; // r14
  __int64 v58; // rdx
  unsigned __int64 v59; // rbp
  size_t v60; // r14
  __int64 v61; // r15
  size_t v62; // r10
  _BYTE *v63; // rsi
  unsigned __int64 v64; // rbp
  size_t v65; // r14
  __int64 v66; // r15
  size_t v67; // r10
  _BYTE *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // r14
  char *v71; // r15
  void *v72; // rax
  unsigned int v73; // edx
  __int64 v74; // rcx
  unsigned __int64 v75; // rbp
  size_t v76; // r14
  __int64 v77; // r15
  size_t v78; // r10
  _BYTE *v79; // rsi
  bool v80; // zf
  __int64 v81; // rdx
  __int64 v82; // r14
  char *v83; // r15
  void *v84; // rax
  unsigned int v85; // edx
  __int64 v86; // rcx
  unsigned __int64 v87; // rbp
  size_t v88; // r14
  __int64 v89; // r15
  size_t v90; // r10
  _BYTE *v91; // rsi
  __int64 v92; // rdx
  size_t v93; // r14
  __int64 v98; // [rsp+20h] [rbp-80h]
  __int64 v99; // [rsp+20h] [rbp-80h]
  __int64 v100; // [rsp+20h] [rbp-80h]
  __int64 v101; // [rsp+20h] [rbp-80h]
  __int64 v102; // [rsp+20h] [rbp-80h]
  size_t v103; // [rsp+20h] [rbp-80h]
  size_t v104; // [rsp+20h] [rbp-80h]
  size_t v105; // [rsp+20h] [rbp-80h]
  size_t v106; // [rsp+20h] [rbp-80h]
  size_t v107; // [rsp+20h] [rbp-80h]
  size_t v108; // [rsp+20h] [rbp-80h]
  size_t v109; // [rsp+20h] [rbp-80h]
  size_t v110; // [rsp+20h] [rbp-80h]
  size_t v111; // [rsp+20h] [rbp-80h]
  void *ptr; // [rsp+28h] [rbp-78h] BYREF
  __int128 v113; // [rsp+30h] [rbp-70h] BYREF
  void *src; // [rsp+48h] [rbp-58h] BYREF
  __int128 v115; // [rsp+50h] [rbp-50h]
  unsigned __int64 v116; // [rsp+60h] [rbp-40h]

  v116 = __readfsqword(0x28u);
  v113 = 0;
  ptr = nullptr;
  while ( 1 )
  {
    v8 = *a2;
    if ( *a2 != 37 )
      break;
LABEL_9:
    v8 = a2[1];
    v12 = a2 + 2;
    switch ( v8 )
    {
      case '<':
        v80 = *(_BYTE *)(a4 + 16) == 0;
        v115 = 0;
        src = nullptr;
        if ( v80 )
        {
          v81 = 4;
          v82 = 3;
          v83 = (char *)"off";
        }
        else
        {
          v81 = 3;
          v82 = 2;
          v83 = "on";
        }
        v101 = v81;
        v84 = (void *)qvector_reserve(&src, 0, v81, 1);
        src = v84;
        *(_QWORD *)&v115 = v101;
        v85 = 0;
        do
        {
          v86 = v85++;
          *((_BYTE *)v84 + v86) = v83[v86];
        }
        while ( v85 < (unsigned int)v82 );
        *((_BYTE *)src + v82) = 0;
        quote_cmdline_arg(&src);
        v87 = v115;
        if ( (_QWORD)v115 )
        {
          v88 = v115 - 1;
          if ( (_QWORD)v115 != 1 )
          {
            v89 = v113;
            v90 = v115 - 1;
            if ( (_QWORD)v113 )
            {
              v89 = v113 - 1;
              v90 = v88 + v113 - 1;
              v87 = v115 + v113 - 1;
            }
            v91 = ptr;
            if ( *((_QWORD *)&v113 + 1) < v87 )
            {
              v105 = v90;
              ptr = (void *)qvector_reserve(&ptr, ptr, v87, 1);
              v90 = v105;
              v91 = ptr;
            }
            *(_QWORD *)&v113 = v87;
            v91[v90] = 0;
            memcpy((char *)ptr + v89, src, v88);
          }
        }
        v24 = src;
        if ( !src )
          goto LABEL_25;
        goto LABEL_24;
      case '>':
        if ( a5 && *(_BYTE *)(a5 + 16) )
        {
          v69 = 3;
          src = nullptr;
          v70 = 2;
          v115 = 0;
          v71 = "on";
        }
        else
        {
          v69 = 4;
          src = nullptr;
          v70 = 3;
          v115 = 0;
          v71 = (char *)"off";
        }
        v100 = v69;
        v72 = (void *)qvector_reserve(&src, 0, v69, 1);
        src = v72;
        *(_QWORD *)&v115 = v100;
        v73 = 0;
        do
        {
          v74 = v73++;
          *((_BYTE *)v72 + v74) = v71[v74];
        }
        while ( v73 < (unsigned int)v70 );
        *((_BYTE *)src + v70) = 0;
        quote_cmdline_arg(&src);
        v75 = v115;
        if ( (_QWORD)v115 )
        {
          v76 = v115 - 1;
          if ( (_QWORD)v115 != 1 )
          {
            v77 = v113;
            v78 = v115 - 1;
            if ( (_QWORD)v113 )
            {
              v77 = v113 - 1;
              v78 = v76 + v113 - 1;
              v75 = v115 + v113 - 1;
            }
            v79 = ptr;
            if ( *((_QWORD *)&v113 + 1) < v75 )
            {
              v104 = v78;
              ptr = (void *)qvector_reserve(&ptr, ptr, v75, 1);
              v78 = v104;
              v79 = ptr;
            }
            *(_QWORD *)&v113 = v75;
            v79[v78] = 0;
            memcpy((char *)ptr + v77, src, v76);
          }
        }
        v24 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case 'I':
        src = nullptr;
        v115 = 0;
        get_install_root(&src);
        v64 = v115;
        if ( (_QWORD)v115 )
        {
          v65 = v115 - 1;
          if ( (_QWORD)v115 != 1 )
          {
            v66 = v113;
            v67 = v115 - 1;
            if ( (_QWORD)v113 )
            {
              v66 = v113 - 1;
              v67 = v65 + v113 - 1;
              v64 = v115 + v113 - 1;
            }
            v68 = ptr;
            if ( *((_QWORD *)&v113 + 1) < v64 )
            {
              v103 = v67;
              ptr = (void *)qvector_reserve(&ptr, ptr, v64, 1);
              v67 = v103;
              v68 = ptr;
            }
            *(_QWORD *)&v113 = v64;
            v68[v67] = 0;
            memcpy((char *)ptr + v66, src, v65);
          }
        }
        v24 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case '[':
        v56 = *(const char **)(a4 + 8);
        v115 = 0;
        src = nullptr;
        if ( v56 )
        {
          v57 = strlen(v56);
          v58 = v57 + 1;
        }
        else
        {
          v58 = 1;
          v57 = 0;
          v56 = &byte_22CD811;
        }
        v99 = v58;
        src = (void *)qvector_reserve(&src, 0, v58, 1);
        *(_QWORD *)&v115 = v99;
        memmove(src, v56, v57);
        *((_BYTE *)src + v57) = 0;
        quote_cmdline_arg(&src);
        v59 = v115;
        if ( (_QWORD)v115 )
        {
          v60 = v115 - 1;
          if ( (_QWORD)v115 != 1 )
          {
            v61 = v113;
            v62 = v115 - 1;
            if ( (_QWORD)v113 )
            {
              v61 = v113 - 1;
              v62 = v60 + v113 - 1;
              v59 = v115 + v113 - 1;
            }
            v63 = ptr;
            if ( *((_QWORD *)&v113 + 1) < v59 )
            {
              v111 = v62;
              ptr = (void *)qvector_reserve(&ptr, ptr, v59, 1);
              v62 = v111;
              v63 = ptr;
            }
            *(_QWORD *)&v113 = v59;
            v63[v62] = 0;
            memcpy((char *)ptr + v61, src, v60);
          }
        }
        v24 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case ']':
        if ( a5 && (v48 = *(const char **)(a5 + 8)) != nullptr )
        {
          src = nullptr;
          v115 = 0;
          v49 = strlen(v48);
          v50 = v49 + 1;
        }
        else
        {
          v50 = 1;
          v49 = 0;
          src = nullptr;
          v115 = 0;
          v48 = &byte_22CD811;
        }
        v98 = v50;
        src = (void *)qvector_reserve(&src, 0, v50, 1);
        *(_QWORD *)&v115 = v98;
        memmove(src, v48, v49);
        *((_BYTE *)src + v49) = 0;
        quote_cmdline_arg(&src);
        v51 = v115;
        if ( (_QWORD)v115 )
        {
          v52 = v115 - 1;
          if ( (_QWORD)v115 != 1 )
          {
            v53 = v113;
            v54 = v115 - 1;
            if ( (_QWORD)v113 )
            {
              v53 = v113 - 1;
              v54 = v52 + v113 - 1;
              v51 = v115 + v113 - 1;
            }
            v55 = ptr;
            if ( *((_QWORD *)&v113 + 1) < v51 )
            {
              v110 = v54;
              ptr = (void *)qvector_reserve(&ptr, ptr, v51, 1);
              v54 = v110;
              v55 = ptr;
            }
            *(_QWORD *)&v113 = v51;
            v55[v54] = 0;
            memcpy((char *)ptr + v53, src, v52);
          }
        }
        v24 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case 'b':
        src = nullptr;
        v115 = 0;
        if ( a6 )
        {
          v40 = strlen(a6);
          v41 = v40 + 1;
          v42 = v40;
          src = (void *)qvector_reserve(&src, 0, v40 + 1, 1);
          *(_QWORD *)&v115 = v41;
          memmove(src, a6, v42);
          *((_BYTE *)src + v42) = 0;
        }
        quote_cmdline_arg(&src);
        v43 = v115;
        if ( (_QWORD)v115 )
        {
          v44 = v115 - 1;
          if ( (_QWORD)v115 != 1 )
          {
            v45 = v113;
            v46 = v115 - 1;
            if ( (_QWORD)v113 )
            {
              v45 = v113 - 1;
              v46 = v44 + v113 - 1;
              v43 = v115 + v113 - 1;
            }
            v47 = ptr;
            if ( *((_QWORD *)&v113 + 1) < v43 )
            {
              v109 = v46;
              ptr = (void *)qvector_reserve(&ptr, ptr, v43, 1);
              v46 = v109;
              v47 = ptr;
            }
            *(_QWORD *)&v113 = v43;
            v47[v46] = 0;
            memcpy((char *)ptr + v45, src, v44);
          }
        }
        v24 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case 'i':
        src = nullptr;
        v115 = 0;
        if ( a3 )
        {
          v32 = strlen(a3);
          v33 = v32 + 1;
          v34 = v32;
          src = (void *)qvector_reserve(&src, 0, v32 + 1, 1);
          *(_QWORD *)&v115 = v33;
          memmove(src, a3, v34);
          *((_BYTE *)src + v34) = 0;
        }
        quote_cmdline_arg(&src);
        v35 = v115;
        if ( (_QWORD)v115 )
        {
          v36 = v115 - 1;
          if ( (_QWORD)v115 != 1 )
          {
            v37 = v113;
            v38 = v115 - 1;
            if ( (_QWORD)v113 )
            {
              v37 = v113 - 1;
              v38 = v36 + v113 - 1;
              v35 = v115 + v113 - 1;
            }
            v39 = ptr;
            if ( *((_QWORD *)&v113 + 1) < v35 )
            {
              v108 = v38;
              ptr = (void *)qvector_reserve(&ptr, ptr, v35, 1);
              v38 = v108;
              v39 = ptr;
            }
            *(_QWORD *)&v113 = v35;
            v39[v38] = 0;
            memcpy((char *)ptr + v37, src, v36);
          }
        }
        v24 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case 'l':
        src = nullptr;
        v115 = 0;
        v25 = *(const char **)a4;
        if ( *(_QWORD *)a4 )
        {
          v26 = strlen(*(const char **)a4);
          src = (void *)qvector_reserve(&src, 0, v26 + 1, 1);
          *(_QWORD *)&v115 = v26 + 1;
          memmove(src, v25, v26);
          *((_BYTE *)src + v26) = 0;
        }
        quote_cmdline_arg(&src);
        v27 = v115;
        if ( (_QWORD)v115 )
        {
          v28 = v115 - 1;
          if ( (_QWORD)v115 != 1 )
          {
            v29 = v113;
            v30 = v115 - 1;
            if ( (_QWORD)v113 )
            {
              v29 = v113 - 1;
              v30 = v28 + v113 - 1;
              v27 = v115 + v113 - 1;
            }
            v31 = ptr;
            if ( *((_QWORD *)&v113 + 1) < v27 )
            {
              v107 = v30;
              ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
              v30 = v107;
              v31 = ptr;
            }
            *(_QWORD *)&v113 = v27;
            v31[v30] = 0;
            memcpy((char *)ptr + v29, src, v28);
          }
        }
        v24 = src;
        if ( src )
          goto LABEL_24;
        goto LABEL_25;
      case 'r':
        if ( a5 )
        {
          src = nullptr;
          v115 = 0;
          v18 = *(const char **)a5;
          if ( !*(_QWORD *)a5 )
            goto LABEL_16;
          v93 = strlen(*(const char **)a5);
          v92 = v93 + 1;
        }
        else
        {
          src = nullptr;
          v92 = 1;
          v93 = 0;
          v115 = 0;
          v18 = &byte_22CD811;
        }
        v102 = v92;
        src = (void *)qvector_reserve(&src, 0, v92, 1);
        *(_QWORD *)&v115 = v102;
        memmove(src, v18, v93);
        *((_BYTE *)src + v93) = 0;
LABEL_16:
        quote_cmdline_arg(&src);
        v19 = v115;
        if ( (_QWORD)v115 )
        {
          v20 = v115 - 1;
          if ( (_QWORD)v115 != 1 )
          {
            v21 = v113;
            v22 = v115 - 1;
            if ( (_QWORD)v113 )
            {
              v21 = v113 - 1;
              v22 = v20 + v113 - 1;
              v19 = v115 + v113 - 1;
            }
            v23 = ptr;
            if ( *((_QWORD *)&v113 + 1) < v19 )
            {
              v106 = v22;
              ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
              v22 = v106;
              v23 = ptr;
            }
            *(_QWORD *)&v113 = v19;
            v23[v22] = 0;
            memcpy((char *)ptr + v21, src, v20);
          }
        }
        v24 = src;
        if ( src )
        {
LABEL_24:
          *(_QWORD *)&v115 = 0;
          qfree(v24);
        }
LABEL_25:
        a2 = v12;
        break;
      default:
        a2 += 2;
        v9 = v113;
        if ( v8 )
          goto LABEL_4;
        goto LABEL_11;
    }
  }
  while ( 1 )
  {
    v9 = v113;
    ++a2;
    if ( !v8 )
      break;
LABEL_4:
    v10 = 2;
    if ( v9 )
      v10 = v9-- + 1;
    v11 = ptr;
    if ( *((_QWORD *)&v113 + 1) < v10 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v11 = ptr;
    }
    *(_QWORD *)&v113 = v10;
    v11[v9] = v8;
    *((_BYTE *)ptr + v9 + 1) = 0;
    v8 = *a2;
    if ( *a2 == 37 )
      goto LABEL_9;
  }
LABEL_11:
  v14 = *(_QWORD *)(a1 + 16);
  v15 = ptr;
  v16 = _mm_loadh_ps((const double *)&v113 + 1);
  ptr = *(void **)a1;
  v13 = ptr;
  *(_QWORD *)a1 = v15;
  *((_QWORD *)&v113 + 1) = v14;
  *(__m128 *)(a1 + 8) = v16;
  if ( v13 )
  {
    *(_QWORD *)&v113 = 0;
    qfree(v13);
  }
  return v116 - __readfsqword(0x28u);
}

