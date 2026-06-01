__int64 __fastcall hexview_t__::vfunc_5(__m128i *this, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  int v7; // eax
  __int64 *v9; // r14
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rbx
  char v21; // al
  __int64 v22; // r12
  __int64 v23; // rbx
  __int64 v24; // r15
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r12
  __int64 v33; // r12
  __int64 v34; // r15
  __int64 v35; // r14
  __int64 v36; // r12
  __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // r15
  __int64 v40; // r12
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r12
  __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // r12
  unsigned int *v49; // r12
  __int64 v50; // r12
  __int64 v51; // rbx
  __int64 v52; // r15
  int v53; // eax
  __int64 v54; // rbx
  __int64 v55; // r8
  __int64 v56; // r15
  int v57; // eax
  int v58; // eax
  __int64 v59; // r12
  void *v60; // rsi
  char *v61; // rsi
  __int64 v62; // r12
  __int64 v63; // rsi
  __int64 v64; // r12
  __int64 v65; // rsi
  __int64 v66; // r12
  void *v67; // rsi
  __int64 v68; // r12
  void *v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // [rsp+8h] [rbp-50h]
  __int64 v83; // [rsp+8h] [rbp-50h]
  int v84; // [rsp+8h] [rbp-50h]
  __int64 v85; // [rsp+8h] [rbp-50h]
  int v86; // [rsp+8h] [rbp-50h]
  char v87; // [rsp+8h] [rbp-50h]
  int v88; // [rsp+8h] [rbp-50h]
  int v89; // [rsp+8h] [rbp-50h]
  __int64 v90; // [rsp+8h] [rbp-50h]
  __int64 v91; // [rsp+10h] [rbp-48h]
  __int64 v92; // [rsp+10h] [rbp-48h]
  __int64 v93; // [rsp+10h] [rbp-48h]
  __int64 v94; // [rsp+10h] [rbp-48h]
  __int64 v95; // [rsp+10h] [rbp-48h]
  __int64 v96; // [rsp+10h] [rbp-48h]
  __int64 v97; // [rsp+10h] [rbp-48h]
  int v98; // [rsp+1Ch] [rbp-3Ch]

  v7 = *(unsigned __int16 *)(a2 + 8);
  if ( v7 != 2004 )
  {
    if ( v7 != 2005 )
      return watchview_t__::vfunc_5(this, a2, a3, a4, a5, a6);
    v9 = *(__int64 **)(a2 + 16);
    v91 = *((_QWORD *)this + 91);
    v10 = v9[1];
    if ( !*((_BYTE *)this + 1032) )
    {
      v98 = *(_DWORD *)(*((_QWORD *)this + 91) + 24LL);
      if ( v10 )
      {
        v11 = *v9;
        v55 = 0;
        v56 = *v9;
        while ( 1 )
        {
          if ( *(_QWORD *)(v56 + 8) )
          {
            v90 = v55;
            v57 = strcmp(*(const char **)v56, "bytes_per_token");
            v55 = v90;
            if ( !v57 )
              break;
          }
          ++v55;
          v56 += 40;
          if ( v55 == v10 )
          {
            v58 = 1;
            if ( v98 != 1 )
              goto LABEL_105;
            goto LABEL_7;
          }
        }
        v58 = 1;
        if ( *(_DWORD *)(v56 + 24) == 1 )
          v58 = *(_DWORD *)(v56 + 32);
        if ( v58 == v98 )
          goto LABEL_7;
      }
      else
      {
        v58 = 1;
        if ( v98 == 1 )
          goto LABEL_108;
      }
LABEL_105:
      *(_DWORD *)(v91 + 24) = v58;
      v10 = v9[1];
    }
    if ( v10 )
    {
      v11 = *v9;
LABEL_7:
      v12 = 0;
      while ( !*(_QWORD *)(v11 + 8) || strcmp(*(const char **)v11, "tokens_per_line") )
      {
        ++v12;
        v11 += 40;
        if ( v10 == v12 )
          goto LABEL_108;
      }
      if ( *(_DWORD *)(v11 + 24) == 1 )
      {
        v13 = *(_DWORD *)(v11 + 32);
LABEL_13:
        *(_DWORD *)(v91 + 28) = v13;
        v14 = v9[1];
        if ( !v14 )
          goto LABEL_106;
        v15 = *v9;
        a4 = 0;
        v16 = *v9;
        while ( 1 )
        {
          if ( *(_QWORD *)(v16 + 8) )
          {
            v82 = a4;
            v17 = strcmp(*(const char **)v16, "text_encoding");
            a4 = v82;
            if ( !v17 )
              break;
          }
          ++a4;
          v16 += 40;
          if ( v14 == a4 )
            goto LABEL_22;
        }
        if ( *(_DWORD *)(v16 + 24) == 1 )
        {
          v18 = *(_QWORD *)(v16 + 32);
          if ( (int)v18 >= 0 )
          {
            *(_DWORD *)(*((_QWORD *)this + 91) + 48LL) = v18;
            v14 = v9[1];
            if ( !v14 )
              goto LABEL_106;
            v15 = *v9;
          }
        }
LABEL_22:
        v19 = v15;
        v20 = 0;
        while ( !*(_QWORD *)(v19 + 8) || strcmp(*(const char **)v19, "show_text") )
        {
          ++v20;
          v19 += 40;
          if ( v14 == v20 )
            goto LABEL_106;
        }
        if ( *(_DWORD *)(v19 + 24) == 5 )
          v21 = *(_BYTE *)(v19 + 32);
        else
LABEL_106:
          v21 = 1;
        *(_BYTE *)(v91 + 44) = v21;
        v22 = v9[1];
        if ( v22 )
        {
          v23 = *v9;
          a4 = 0;
          v24 = *v9;
          while ( 1 )
          {
            if ( *(_QWORD *)(v24 + 8) )
            {
              v83 = a4;
              v25 = strcmp(*(const char **)v24, "data_kind");
              a4 = v83;
              if ( !v25 )
                break;
            }
            ++a4;
            v24 += 40;
            if ( v22 == a4 )
            {
              LODWORD(v26) = 1;
              if ( *(_DWORD *)(v91 + 36) != 1 )
                goto LABEL_37;
              goto LABEL_39;
            }
          }
          LODWORD(v26) = 1;
          if ( *(_DWORD *)(v24 + 24) == 1 )
          {
            v26 = *(_QWORD *)(v24 + 32);
            if ( (unsigned int)v26 >= 5 )
              LODWORD(v26) = 1;
          }
          if ( (_DWORD)v26 == *(_DWORD *)(v91 + 36) )
            goto LABEL_39;
        }
        else
        {
          LODWORD(v26) = 1;
          if ( *(_DWORD *)(v91 + 36) == 1 )
          {
LABEL_45:
            v28 = 0;
LABEL_46:
            a3 = v91;
            *(_DWORD *)(v91 + 40) = v28;
            return watchview_t__::vfunc_5(this, a2, a3, a4, a5, a6);
          }
        }
LABEL_37:
        *(_DWORD *)(v91 + 36) = v26;
        v22 = v9[1];
        if ( v22 )
        {
          v23 = *v9;
LABEL_39:
          v27 = 0;
          while ( !*(_QWORD *)(v23 + 8) || strcmp(*(const char **)v23, "int_format") )
          {
            ++v27;
            v23 += 40;
            if ( v22 == v27 )
              goto LABEL_45;
          }
          if ( *(_DWORD *)(v23 + 24) == 1 )
          {
            v28 = *(_QWORD *)(v23 + 32);
            if ( v28 <= 2 )
              goto LABEL_46;
          }
        }
        goto LABEL_45;
      }
    }
LABEL_108:
    v13 = 16;
    goto LABEL_13;
  }
  v29 = *((_QWORD *)this + 91);
  v30 = *(_QWORD *)(a2 + 24);
  v84 = *(_DWORD *)(v29 + 24);
  v92 = *(_QWORD *)(a2 + 16);
  if ( v30 )
  {
    v31 = *(_QWORD *)(a2 + 16);
    v32 = 0;
    while ( !*(_QWORD *)(v31 + 8) || strcmp(*(const char **)v31, "bytes_per_token") )
    {
      ++v32;
      v31 += 40;
      if ( v30 == v32 )
        goto LABEL_113;
    }
    v33 = v31 + 24;
  }
  else
  {
LABEL_113:
    if ( *(_QWORD *)(a2 + 32) < (unsigned __int64)(v30 + 1) )
    {
      v75 = qvector_reserve(a2 + 16, v92, v30 + 1, 40);
      v30 = *(_QWORD *)(a2 + 24);
      v92 = v75;
      *(_QWORD *)(a2 + 16) = v75;
    }
    a5 = 0.0;
    v59 = v92 + 40 * v30;
    *(_QWORD *)v59 = 0;
    *(_OWORD *)(v59 + 8) = 0;
    *(_DWORD *)(v59 + 24) = 0;
    *(_QWORD *)(v59 + 32) = 0;
    ++*(_QWORD *)(a2 + 24);
    v60 = *(void **)v59;
    if ( *(_QWORD *)(v59 + 16) <= 0xFu )
    {
      v74 = qvector_reserve(v59, v60, 16, 1);
      *(_QWORD *)v59 = v74;
      v60 = (void *)v74;
    }
    v33 = v59 + 24;
    *(_QWORD *)(v33 - 16) = 16;
    qmemcpy(v60, "bytes_per_token", 15);
    *(_BYTE *)(*(_QWORD *)(v33 - 24) + 15LL) = 0;
  }
  if ( *(_DWORD *)v33 )
    jvalue_t_clear(v33);
  *(_DWORD *)v33 = 1;
  *(_QWORD *)(v33 + 8) = v84;
  v85 = 0;
  if ( !*(_BYTE *)(v29 + 32) )
    v85 = *(int *)(v29 + 28);
  v34 = *(_QWORD *)(a2 + 24);
  v93 = *(_QWORD *)(a2 + 16);
  if ( v34 )
  {
    v35 = *(_QWORD *)(a2 + 16);
    v36 = 0;
    while ( !*(_QWORD *)(v35 + 8) || strcmp(*(const char **)v35, "tokens_per_line") )
    {
      ++v36;
      v35 += 40;
      if ( v34 == v36 )
        goto LABEL_138;
    }
    v37 = v35 + 24;
  }
  else
  {
LABEL_138:
    if ( *(_QWORD *)(a2 + 32) < (unsigned __int64)(v34 + 1) )
    {
      v81 = qvector_reserve(a2 + 16, v93, v34 + 1, 40);
      v34 = *(_QWORD *)(a2 + 24);
      v93 = v81;
      *(_QWORD *)(a2 + 16) = v81;
    }
    a5 = 0.0;
    v68 = v93 + 40 * v34;
    *(_QWORD *)v68 = 0;
    *(_OWORD *)(v68 + 8) = 0;
    *(_DWORD *)(v68 + 24) = 0;
    *(_QWORD *)(v68 + 32) = 0;
    ++*(_QWORD *)(a2 + 24);
    v69 = *(void **)v68;
    if ( *(_QWORD *)(v68 + 16) <= 0xFu )
    {
      v80 = qvector_reserve(v68, v69, 16, 1);
      *(_QWORD *)v68 = v80;
      v69 = (void *)v80;
    }
    v37 = v68 + 24;
    *(_QWORD *)(v37 - 16) = 16;
    qmemcpy(v69, "tokens_per_line", 15);
    *(_BYTE *)(*(_QWORD *)(v37 - 24) + 15LL) = 0;
  }
  if ( *(_DWORD *)v37 )
    jvalue_t_clear(v37);
  *(_DWORD *)v37 = 1;
  *(_QWORD *)(v37 + 8) = v85;
  v38 = *(_QWORD *)(a2 + 24);
  v86 = *(_DWORD *)(*((_QWORD *)this + 91) + 48LL);
  v94 = *(_QWORD *)(a2 + 16);
  if ( v38 )
  {
    v39 = *(_QWORD *)(a2 + 16);
    v40 = 0;
    while ( !*(_QWORD *)(v39 + 8) || strcmp(*(const char **)v39, "text_encoding") )
    {
      ++v40;
      v39 += 40;
      if ( v38 == v40 )
        goto LABEL_133;
    }
    v41 = v39 + 24;
  }
  else
  {
LABEL_133:
    if ( *(_QWORD *)(a2 + 32) < (unsigned __int64)(v38 + 1) )
    {
      v71 = qvector_reserve(a2 + 16, v94, v38 + 1, 40);
      v38 = *(_QWORD *)(a2 + 24);
      v94 = v71;
      *(_QWORD *)(a2 + 16) = v71;
    }
    a5 = 0.0;
    v66 = v94 + 40 * v38;
    *(_QWORD *)v66 = 0;
    *(_OWORD *)(v66 + 8) = 0;
    *(_DWORD *)(v66 + 24) = 0;
    *(_QWORD *)(v66 + 32) = 0;
    ++*(_QWORD *)(a2 + 24);
    v67 = *(void **)v66;
    if ( *(_QWORD *)(v66 + 16) <= 0xDu )
    {
      v70 = qvector_reserve(v66, v67, 14, 1);
      *(_QWORD *)v66 = v70;
      v67 = (void *)v70;
    }
    v41 = v66 + 24;
    *(_QWORD *)(v41 - 16) = 14;
    qmemcpy(v67, "text_encoding", 13);
    *(_BYTE *)(*(_QWORD *)(v41 - 24) + 13LL) = 0;
  }
  if ( *(_DWORD *)v41 )
    jvalue_t_clear(v41);
  *(_DWORD *)v41 = 1;
  *(_QWORD *)(v41 + 8) = v86;
  v42 = *(_QWORD *)(a2 + 24);
  v87 = *(_BYTE *)(v29 + 44);
  v95 = *(_QWORD *)(a2 + 16);
  if ( v42 )
  {
    v43 = *(_QWORD *)(a2 + 16);
    v44 = 0;
    while ( !*(_QWORD *)(v43 + 8) || strcmp(*(const char **)v43, "show_text") )
    {
      ++v44;
      v43 += 40;
      if ( v42 == v44 )
        goto LABEL_128;
    }
    v45 = v43 + 24;
  }
  else
  {
LABEL_128:
    if ( *(_QWORD *)(a2 + 32) < (unsigned __int64)(v42 + 1) )
    {
      v79 = qvector_reserve(a2 + 16, v95, v42 + 1, 40);
      v42 = *(_QWORD *)(a2 + 24);
      v95 = v79;
      *(_QWORD *)(a2 + 16) = v79;
    }
    a5 = 0.0;
    v64 = v95 + 40 * v42;
    *(_QWORD *)v64 = 0;
    *(_OWORD *)(v64 + 8) = 0;
    *(_DWORD *)(v64 + 24) = 0;
    *(_QWORD *)(v64 + 32) = 0;
    ++*(_QWORD *)(a2 + 24);
    v65 = *(_QWORD *)v64;
    if ( *(_QWORD *)(v64 + 16) <= 9u )
    {
      v78 = qvector_reserve(v64, v65, 10, 1);
      *(_QWORD *)v64 = v78;
      v65 = v78;
    }
    v45 = v64 + 24;
    *(_QWORD *)(v45 - 16) = 10;
    *(_QWORD *)v65 = 0x7865745F776F6873LL;
    *(_BYTE *)(v65 + 8) = 116;
    *(_BYTE *)(*(_QWORD *)(v45 - 24) + 9LL) = 0;
  }
  if ( *(_DWORD *)v45 )
    jvalue_t_clear(v45);
  *(_DWORD *)v45 = 5;
  *(_BYTE *)(v45 + 8) = v87;
  v46 = *(_QWORD *)(a2 + 24);
  v88 = *(_DWORD *)(v29 + 36);
  v96 = *(_QWORD *)(a2 + 16);
  if ( v46 )
  {
    v47 = *(_QWORD *)(a2 + 16);
    v48 = 0;
    while ( !*(_QWORD *)(v47 + 8) || strcmp(*(const char **)v47, "data_kind") )
    {
      ++v48;
      v47 += 40;
      if ( v46 == v48 )
        goto LABEL_123;
    }
    v49 = (unsigned int *)(v47 + 24);
  }
  else
  {
LABEL_123:
    if ( *(_QWORD *)(a2 + 32) < (unsigned __int64)(v46 + 1) )
    {
      v73 = qvector_reserve(a2 + 16, v96, v46 + 1, 40);
      v46 = *(_QWORD *)(a2 + 24);
      v96 = v73;
      *(_QWORD *)(a2 + 16) = v73;
    }
    a5 = 0.0;
    v62 = v96 + 40 * v46;
    *(_QWORD *)v62 = 0;
    *(_OWORD *)(v62 + 8) = 0;
    *(_DWORD *)(v62 + 24) = 0;
    *(_QWORD *)(v62 + 32) = 0;
    ++*(_QWORD *)(a2 + 24);
    v63 = *(_QWORD *)v62;
    if ( *(_QWORD *)(v62 + 16) <= 9u )
    {
      v72 = qvector_reserve(v62, v63, 10, 1);
      *(_QWORD *)v62 = v72;
      v63 = v72;
    }
    v49 = (unsigned int *)(v62 + 24);
    *((_QWORD *)v49 - 2) = 10;
    *(_QWORD *)v63 = 0x6E696B5F61746164LL;
    *(_BYTE *)(v63 + 8) = 100;
    *(_BYTE *)(*((_QWORD *)v49 - 3) + 9LL) = 0;
  }
  a4 = *v49;
  if ( (_DWORD)a4 )
    jvalue_t_clear(v49);
  *v49 = 1;
  *((_QWORD *)v49 + 1) = v88;
  v50 = *(_QWORD *)(a2 + 24);
  v89 = *(_DWORD *)(v29 + 40);
  v97 = *(_QWORD *)(a2 + 16);
  if ( v50 )
  {
    v51 = *(_QWORD *)(a2 + 16);
    v52 = 0;
    while ( !*(_QWORD *)(v51 + 8) || strcmp(*(const char **)v51, "int_format") )
    {
      ++v52;
      v51 += 40;
      if ( v50 == v52 )
        goto LABEL_118;
    }
  }
  else
  {
LABEL_118:
    if ( *(_QWORD *)(a2 + 32) < (unsigned __int64)(v50 + 1) )
    {
      v77 = qvector_reserve(a2 + 16, v97, v50 + 1, 40);
      v50 = *(_QWORD *)(a2 + 24);
      v97 = v77;
      *(_QWORD *)(a2 + 16) = v77;
    }
    a5 = 0.0;
    v51 = v97 + 40 * v50;
    *(_QWORD *)v51 = 0;
    *(_OWORD *)(v51 + 8) = 0;
    *(_DWORD *)(v51 + 24) = 0;
    *(_QWORD *)(v51 + 32) = 0;
    ++*(_QWORD *)(a2 + 24);
    v61 = *(char **)v51;
    if ( *(_QWORD *)(v51 + 16) <= 0xAu )
    {
      v76 = qvector_reserve(v51, v61, 11, 1);
      *(_QWORD *)v51 = v76;
      v61 = (char *)v76;
    }
    a3 = 29793;
    *(_QWORD *)(v51 + 8) = 11;
    qmemcpy(v61, "int_format", 10);
    *(_BYTE *)(*(_QWORD *)v51 + 10LL) = 0;
  }
  v53 = *(_DWORD *)(v51 + 24);
  v54 = v51 + 24;
  if ( v53 )
    jvalue_t_clear(v54);
  *(_DWORD *)v54 = 1;
  *(_QWORD *)(v54 + 8) = v89;
  return watchview_t__::vfunc_5(this, a2, a3, a4, a5, a6);
}
