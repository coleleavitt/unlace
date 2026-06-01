__int64 *__fastcall sub_7F9D40(__int64 a1, int *a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // r13
  __int64 *v7; // rbp
  _QWORD *v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rbx
  size_t v11; // r12
  void *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rbx
  int v21; // esi
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 *v24; // rdx
  const char *v25; // rax
  __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rbx
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  _QWORD *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rbx
  __int64 v40; // rbx
  void *v41; // rsi
  unsigned __int64 v42; // rax
  _DWORD *v43; // rcx
  __int64 *v44; // rbp
  __int64 v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // r13
  __int64 v49; // rbx
  __int64 v50; // rax
  _QWORD *v51; // r12
  size_t v52; // r13
  unsigned int v53; // eax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  __int64 *v56; // rdx
  const char *v57; // rax
  _DWORD *v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  __int64 *v61; // rdx
  const char *v62; // rax
  void *v63; // rax
  __int64 v64; // rax
  char *v65; // rsi
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  __int64 *v68; // rdx
  const char *v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  __int64 *v72; // rdx
  const char *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rbx
  _BYTE *v78; // rsi
  __int64 v79; // rbx
  _BYTE *v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  char *s; // [rsp+8h] [rbp-90h]
  char *sa; // [rsp+8h] [rbp-90h]
  _QWORD *i; // [rsp+18h] [rbp-80h]
  __int64 *v88; // [rsp+20h] [rbp-78h]
  char v90[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v91; // [rsp+58h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  v4 = qalloc_or_throw(24);
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = 0;
  v88 = (__int64 *)v4;
  sub_7F9B40((__int64 *)v4, "type", (const char *)*(&off_2B3C200 + *a2));
  v5 = operator new(0x18u);
  v6 = *((_QWORD **)a2 + 1);
  *(_QWORD *)v5 = 0;
  v7 = (__int64 *)v5;
  *(_OWORD *)(v5 + 8) = 0;
  for ( i = &v6[*((_QWORD *)a2 + 2)]; i != v6; v8[1] = v10 )
  {
    LODWORD(v13) = 0;
    if ( *v6 < a3[1] )
      v13 = ((*(_QWORD *)(*a3 + 8LL * *v6) / 0xAuLL) << 32) | (int)(100000 * (*(_QWORD *)(*a3 + 8LL * *v6) % 0xAuLL));
    format_timestamp((__int64)v90, 25, v13, 0);
    v14 = v7[1];
    v15 = *v7;
    if ( v7[2] < (unsigned __int64)(v14 + 1) )
    {
      v16 = qvector_reserve(v7, v15, v14 + 1, 16);
      v14 = v7[1];
      *v7 = v16;
      v15 = v16;
    }
    v8 = (_QWORD *)(v15 + 16 * v14);
    *v8 = 0;
    v8[1] = 0;
    ++v7[1];
    v9 = operator new(0x18u);
    *(_QWORD *)v9 = 0;
    v10 = (_QWORD *)v9;
    *(_OWORD *)(v9 + 8) = 0;
    v11 = strlen(v90);
    v12 = (void *)qvector_reserve(v10, 0, v11 + 1, 1);
    *v10 = v12;
    v10[1] = v11 + 1;
    memmove(v12, v90, v11);
    *(_BYTE *)(*v10 + v11) = 0;
    if ( *(_DWORD *)v8 )
      jvalue_t_clear(v8);
    *(_DWORD *)v8 = 2;
    ++v6;
  }
  v17 = 0;
  v18 = *v88;
  v19 = v88[1];
  v20 = *v88;
  if ( v19 )
  {
    s = (char *)*v88;
    while ( !*(_QWORD *)(v20 + 8) || strcmp(*(const char **)v20, "timestamps") )
    {
      ++v17;
      v20 += 40;
      if ( v19 == v17 )
      {
        v18 = (__int64)s;
        goto LABEL_50;
      }
    }
    v21 = *(_DWORD *)(v20 + 24);
    v22 = v20 + 24;
    if ( v21 )
      goto LABEL_48;
  }
  else
  {
LABEL_50:
    if ( v88[2] < (unsigned __int64)(v19 + 1) )
    {
      v64 = qvector_reserve(v88, v18, v19 + 1, 40);
      v19 = v88[1];
      *v88 = v64;
      v18 = v64;
    }
    v40 = v18 + 40 * v19;
    *(_QWORD *)v40 = 0;
    *(_OWORD *)(v40 + 8) = 0;
    *(_DWORD *)(v40 + 24) = 0;
    *(_QWORD *)(v40 + 32) = 0;
    ++v88[1];
    v41 = *(void **)v40;
    if ( *(_QWORD *)(v40 + 16) <= 0xAu )
    {
      v74 = qvector_reserve(v40, v41, 11, 1);
      *(_QWORD *)v40 = v74;
      v41 = (void *)v74;
    }
    *(_QWORD *)(v40 + 8) = 11;
    v22 = v40 + 24;
    qmemcpy(v41, "timestamps", 10);
    *(_BYTE *)(*(_QWORD *)(v22 - 24) + 10LL) = 0;
    if ( *(_DWORD *)v22 )
LABEL_48:
      jvalue_t_clear(v22);
  }
  *(_DWORD *)v22 = 4;
  *(_QWORD *)(v22 + 8) = v7;
  v23 = (unsigned int)a2[1];
  if ( (_DWORD)v23 != -1 )
  {
    v24 = &qword_2CD4810;
    if ( v23 < a3[4] )
      v24 = (__int64 *)(a3[3] + 24 * v23);
    v25 = haystack;
    if ( v24[1] )
      v25 = (const char *)*v24;
    sub_7F9B40(v88, "widget", v25);
  }
  if ( (unsigned int)(*a2 - 1) <= 7 )
  {
    v42 = 0xFFFFFFFFLL;
    if ( *((_QWORD *)a2 + 5) )
    {
      v43 = *((_DWORD **)a2 + 4);
      if ( (*(_BYTE *)v43 & 0xF) == 2 )
        v42 = *v43 >> 4;
    }
    v44 = &qword_2CD4810;
    if ( v42 < a3[4] )
      v44 = (__int64 *)(a3[3] + 24 * v42);
    v45 = v88[1];
    v46 = *v88;
    if ( v45 )
    {
      sa = (char *)*v88;
      v47 = *v88;
      v48 = 0;
      while ( !*(_QWORD *)(v47 + 8) || strcmp(*(const char **)v47, "name") )
      {
        ++v48;
        v47 += 40;
        if ( v45 == v48 )
        {
          v46 = (__int64)sa;
          goto LABEL_94;
        }
      }
    }
    else
    {
LABEL_94:
      if ( v88[2] < (unsigned __int64)(v45 + 1) )
      {
        v75 = qvector_reserve(v88, v46, v45 + 1, 40);
        v45 = v88[1];
        *v88 = v75;
        v46 = v75;
      }
      v47 = v46 + 40 * v45;
      *(_QWORD *)v47 = 0;
      *(_OWORD *)(v47 + 8) = 0;
      *(_DWORD *)(v47 + 24) = 0;
      *(_QWORD *)(v47 + 32) = 0;
      ++v88[1];
      v65 = *(char **)v47;
      if ( *(_QWORD *)(v47 + 16) <= 4u )
      {
        v76 = qvector_reserve(v47, v65, 5, 1);
        *(_QWORD *)v47 = v76;
        v65 = (char *)v76;
      }
      *(_QWORD *)(v47 + 8) = 5;
      *(_DWORD *)v65 = 1701667182;
      *(_BYTE *)(*(_QWORD *)v47 + 4LL) = 0;
    }
    v49 = v47 + 24;
    v50 = operator new(0x18u);
    *(_QWORD *)v50 = 0;
    v51 = (_QWORD *)v50;
    *(_OWORD *)(v50 + 8) = 0;
    v52 = v44[1];
    if ( v52 )
    {
      v63 = (void *)qalloc_or_throw(v44[1]);
      *v51 = v63;
      v51[2] = v52;
      memcpy(v63, (const void *)*v44, v52);
      v51[1] = v52;
      if ( !*(_DWORD *)v49 )
        goto LABEL_68;
    }
    else if ( !*(_DWORD *)v49 )
    {
      goto LABEL_68;
    }
    jvalue_t_clear(v49);
LABEL_68:
    *(_DWORD *)v49 = 2;
    *(_QWORD *)(v49 + 8) = v51;
    v53 = *a2;
    if ( *a2 == 5 )
    {
      v70 = 0xFFFFFFFFLL;
      if ( *((_QWORD *)a2 + 5) > 1u )
      {
        v71 = *((_QWORD *)a2 + 4);
        if ( (*(_BYTE *)(v71 + 4) & 0xF) == 2 )
          v70 = *(_DWORD *)(v71 + 4) >> 4;
      }
      v72 = &qword_2CD4810;
      if ( v70 < a3[4] )
        v72 = (__int64 *)(a3[3] + 24 * v70);
      v73 = haystack;
      if ( v72[1] )
        v73 = (const char *)*v72;
      sub_7F9B40(v88, "toolbarpath", v73);
    }
    else if ( v53 > 5 )
    {
      if ( v53 - 7 <= 1 )
      {
        v59 = 0xFFFFFFFFLL;
        if ( *((_QWORD *)a2 + 5) > 1u )
        {
          v60 = *((_QWORD *)a2 + 4);
          if ( (*(_BYTE *)(v60 + 4) & 0xF) == 2 )
            v59 = *(_DWORD *)(v60 + 4) >> 4;
        }
        v61 = &qword_2CD4810;
        if ( v59 < a3[4] )
          v61 = (__int64 *)(a3[3] + 24 * v59);
        v62 = haystack;
        if ( v61[1] )
          v62 = (const char *)*v61;
        sub_7F9B40(v88, "reason", v62);
      }
    }
    else if ( v53 == 1 )
    {
      v66 = 0xFFFFFFFFLL;
      if ( *((_QWORD *)a2 + 5) > 1u )
      {
        v67 = *((_QWORD *)a2 + 4);
        if ( (*(_BYTE *)(v67 + 4) & 0xF) == 2 )
          v66 = *(_DWORD *)(v67 + 4) >> 4;
      }
      v68 = &qword_2CD4810;
      if ( v66 < a3[4] )
        v68 = (__int64 *)(a3[3] + 24 * v66);
      v69 = haystack;
      if ( v68[1] )
        v69 = (const char *)*v68;
      sub_7F9B40(v88, "shortcut", v69);
    }
    else if ( v53 - 2 <= 2 )
    {
      v54 = 0xFFFFFFFFLL;
      if ( *((_QWORD *)a2 + 5) > 1u )
      {
        v55 = *((_QWORD *)a2 + 4);
        v54 = 0xFFFFFFFFLL;
        if ( (*(_BYTE *)(v55 + 4) & 0xF) == 2 )
          v54 = *(_DWORD *)(v55 + 4) >> 4;
      }
      v56 = &qword_2CD4810;
      if ( v54 < a3[4] )
        v56 = (__int64 *)(a3[3] + 24 * v54);
      v57 = haystack;
      if ( v56[1] )
        v57 = (const char *)*v56;
      sub_7F9B40(v88, "menupath", v57);
    }
    return v88;
  }
  if ( (unsigned int)(*a2 - 9) <= 1 )
  {
    v27 = 0;
    if ( *((_QWORD *)a2 + 5) )
    {
      v58 = *((_DWORD **)a2 + 4);
      if ( (*(_BYTE *)v58 & 0xF) == 1 )
        v27 = *v58 >> 4;
    }
    v28 = v88[1];
    v29 = *v88;
    if ( v28 )
    {
      v30 = (_QWORD *)*v88;
      v31 = 0;
      while ( !v30[1] || *(_BYTE *)*v30 != 120 || *(_BYTE *)(*v30 + 1LL) )
      {
        ++v31;
        v30 += 5;
        if ( v28 == v31 )
          goto LABEL_115;
      }
      v32 = v30 + 3;
    }
    else
    {
LABEL_115:
      if ( v88[2] < (unsigned __int64)(v28 + 1) )
      {
        v82 = qvector_reserve(v88, *v88, v28 + 1, 40);
        v28 = v88[1];
        *v88 = v82;
        v29 = v82;
      }
      v77 = v29 + 40 * v28;
      *(_QWORD *)v77 = 0;
      *(_OWORD *)(v77 + 8) = 0;
      *(_DWORD *)(v77 + 24) = 0;
      *(_QWORD *)(v77 + 32) = 0;
      ++v88[1];
      v78 = *(_BYTE **)v77;
      if ( *(_QWORD *)(v77 + 16) <= 1u )
      {
        v81 = qvector_reserve(v77, v78, 2, 1);
        *(_QWORD *)v77 = v81;
        v78 = (_BYTE *)v81;
      }
      *(_QWORD *)(v77 + 8) = 2;
      v32 = (_QWORD *)(v77 + 24);
      *v78 = 120;
      *(_BYTE *)(*(v32 - 3) + 1LL) = 0;
    }
    if ( *(_DWORD *)v32 )
      jvalue_t_clear(v32);
    v32[1] = v27;
    v33 = 0;
    *(_DWORD *)v32 = 1;
    if ( *((_QWORD *)a2 + 5) > 1u )
    {
      v34 = *((_QWORD *)a2 + 4);
      if ( (*(_BYTE *)(v34 + 4) & 0xF) == 1 )
        v33 = *(_DWORD *)(v34 + 4) >> 4;
    }
    v35 = v88[1];
    v36 = *v88;
    if ( v35 )
    {
      v37 = (_QWORD *)*v88;
      v38 = 0;
      while ( !v37[1] || *(_BYTE *)*v37 != 121 || *(_BYTE *)(*v37 + 1LL) )
      {
        ++v38;
        v37 += 5;
        if ( v35 == v38 )
          goto LABEL_120;
      }
      v39 = v37 + 3;
    }
    else
    {
LABEL_120:
      if ( v88[2] < (unsigned __int64)(v35 + 1) )
      {
        v84 = qvector_reserve(v88, *v88, v35 + 1, 40);
        v35 = v88[1];
        *v88 = v84;
        v36 = v84;
      }
      v79 = v36 + 40 * v35;
      *(_QWORD *)v79 = 0;
      *(_OWORD *)(v79 + 8) = 0;
      *(_DWORD *)(v79 + 24) = 0;
      *(_QWORD *)(v79 + 32) = 0;
      ++v88[1];
      v80 = *(_BYTE **)v79;
      if ( *(_QWORD *)(v79 + 16) <= 1u )
      {
        v83 = qvector_reserve(v79, v80, 2, 1);
        *(_QWORD *)v79 = v83;
        v80 = (_BYTE *)v83;
      }
      *(_QWORD *)(v79 + 8) = 2;
      v39 = (_QWORD *)(v79 + 24);
      *v80 = 121;
      *(_BYTE *)(*(v39 - 3) + 1LL) = 0;
    }
    if ( *(_DWORD *)v39 )
      jvalue_t_clear(v39);
    *(_DWORD *)v39 = 1;
    v39[1] = v33;
  }
  return v88;
}
