__int64 __fastcall sub_5E8190(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  void *v7; // rdi
  size_t v9; // rbp
  __int16 v10; // ax
  char v11; // dl
  __int64 v12; // rbx
  int v14; // r8d
  int v15; // r9d
  char *v16; // r9
  const char *p_ptr; // rsi
  char *v18; // rbx
  __int64 v19; // rcx
  char *v20; // r14
  char *v21; // r15
  char *v22; // r12
  __int64 v23; // rdx
  const char *v24; // rsi
  const char *v25; // rdi
  int v26; // eax
  __int64 v27; // rdx
  int v28; // esi
  __int64 v29; // rax
  const char *v30; // rsi
  __int64 v31; // rbx
  char *v32; // rax
  _QWORD *v33; // r12
  size_t v34; // r15
  char *v35; // r14
  char *v36; // rcx
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  const char *v39; // rsi
  const char *v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // r14
  __int64 v46; // r12
  _QWORD *v47; // rax
  __int64 v48; // rdx
  char *v49; // r12
  __int64 v50; // r8
  char *v51; // r15
  char *v52; // rcx
  char *v53; // r14
  __int64 v54; // rdx
  const char *v55; // rsi
  const char *v56; // rdi
  int v57; // eax
  __int64 v58; // rdx
  int v59; // esi
  __int64 v60; // rax
  const char *v61; // rsi
  __int64 v62; // rbx
  _QWORD *i; // rax
  char *v64; // rax
  void *v65; // rdi
  void *v66; // rax
  char *v67; // rsi
  void *v68; // r15
  void *v69; // rax
  void *v70; // r15
  void *v71; // rax
  const char *v72; // rsi
  const char *v73; // rdi
  void *v74; // rax
  const void *v75; // rsi
  __int64 v76; // [rsp+0h] [rbp-148h]
  _QWORD *v77; // [rsp+18h] [rbp-130h]
  __int64 v79; // [rsp+38h] [rbp-110h]
  char *v80; // [rsp+38h] [rbp-110h]
  char *v81; // [rsp+38h] [rbp-110h]
  __int64 v82; // [rsp+40h] [rbp-108h]
  char *v83; // [rsp+48h] [rbp-100h]
  bool v84; // [rsp+56h] [rbp-F2h]
  char v85; // [rsp+57h] [rbp-F1h]
  char **v86; // [rsp+60h] [rbp-E8h] BYREF
  char **p_s2; // [rsp+68h] [rbp-E0h] BYREF
  char *s1; // [rsp+70h] [rbp-D8h] BYREF
  size_t n[3]; // [rsp+78h] [rbp-D0h]
  char *s2; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v91; // [rsp+98h] [rbp-B0h]
  void *src; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v93; // [rsp+B8h] [rbp-90h]
  void *ptr; // [rsp+D0h] [rbp-78h] BYREF
  __int128 v95; // [rsp+D8h] [rbp-70h]
  __int16 v96; // [rsp+E8h] [rbp-60h]
  int v97; // [rsp+ECh] [rbp-5Ch]
  char v98; // [rsp+F0h] [rbp-58h]
  __m128i v99; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v100; // [rsp+108h] [rbp-40h]

  v7 = (void *)a6[33];
  v100 = __readfsqword(0x28u);
  sub_5E0830(v7);
  ptr = nullptr;
  v95 = 0;
  a6[33] = 0;
  a6[34] = a6 + 32;
  a6[35] = a6 + 32;
  a6[36] = 0;
  v9 = *(_QWORD *)(a3 + 8);
  v77 = a6 + 32;
  if ( v9 )
  {
    v74 = (void *)qalloc_or_throw(v9, a2);
    v75 = *(const void **)a3;
    *((_QWORD *)&v95 + 1) = v9;
    ptr = v74;
    memcpy(v74, v75, v9);
    *(_QWORD *)&v95 = v9;
  }
  v10 = *(_WORD *)(a3 + 24);
  v97 = *(_DWORD *)(a3 + 28);
  v11 = *(_BYTE *)(a3 + 32);
  v96 = v10;
  v98 = v11;
  v99 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  if ( v10 != 123 )
  {
    sub_727810(a1, 1362);
LABEL_5:
    v12 = 3;
    goto LABEL_6;
  }
  v85 = sub_727B60(a1, &ptr);
  if ( !v85 )
    goto LABEL_5;
LABEL_10:
  if ( v96 == 125 )
    goto LABEL_88;
  do
  {
    *(_OWORD *)n = 0;
    s1 = nullptr;
    if ( (unsigned int)sub_7281E0(a1, (unsigned int)&ptr, (unsigned int)"%s{", (unsigned int)&s1, v14, v15, v76) != 1 )
    {
      if ( !under_debugger )
        interr(1088);
LABEL_129:
      BUG();
    }
    v84 = v85;
    if ( n[0] > 1 )
      v84 = strcasecmp(s1, "default") == 0;
LABEL_14:
    if ( v96 == 125 )
      goto LABEL_85;
    do
    {
      p_ptr = (const char *)&ptr;
      s2 = nullptr;
      src = nullptr;
      v91 = 0;
      v93 = 0;
      if ( (unsigned int)sub_7281E0(
                           a1,
                           (unsigned int)&ptr,
                           (unsigned int)"%I=%S",
                           (unsigned int)&s2,
                           (unsigned int)&src,
                           (_DWORD)v16,
                           v76) != 2 )
      {
        if ( !under_debugger )
          interr(1089);
        goto LABEL_129;
      }
      if ( !v84 )
      {
        v33 = (_QWORD *)a6[33];
        if ( !v33 )
        {
          v37 = a6 + 32;
          goto LABEL_56;
        }
        v34 = n[0];
        v35 = s1;
        v36 = (char *)haystack;
        v37 = a6 + 32;
        if ( n[0] )
          v36 = s1;
        while ( 1 )
        {
          v38 = v33[5];
          if ( !v34 )
            break;
          v39 = v35;
          v40 = haystack;
          if ( v38 )
            goto LABEL_48;
LABEL_49:
          v80 = v36;
          v41 = strcmp(v40, v39);
          v42 = v33[3];
          v36 = v80;
          p_ptr = (const char *)v41;
          v43 = v33[2];
          if ( (int)p_ptr < 0 )
          {
            v33 = (_QWORD *)v33[3];
            if ( !v42 )
              goto LABEL_51;
          }
          else
          {
            v37 = v33;
            v33 = (_QWORD *)v33[2];
            if ( !v43 )
              goto LABEL_51;
          }
        }
        if ( v38 )
        {
LABEL_48:
          v40 = (const char *)v33[4];
          v39 = v36;
          goto LABEL_49;
        }
        for ( i = (_QWORD *)v33[2]; i; i = (_QWORD *)i[2] )
        {
          v37 = v33;
          v33 = i;
          if ( i[5] )
            goto LABEL_48;
        }
        v37 = v33;
LABEL_51:
        if ( v77 == v37 )
          goto LABEL_56;
        if ( v37[5] )
        {
          p_ptr = (const char *)v37[4];
          if ( !v34 )
            v35 = (char *)haystack;
LABEL_55:
          if ( strcmp(v35, p_ptr) < 0 )
          {
LABEL_56:
            v44 = operator new(0x68u);
            v45 = n[0];
            *(_QWORD *)(v44 + 32) = 0;
            v46 = v44;
            *(_OWORD *)(v44 + 40) = 0;
            if ( v45 )
            {
              v66 = (void *)qalloc_or_throw(v45, p_ptr);
              *(_QWORD *)(v46 + 32) = v66;
              v67 = s1;
              *(_QWORD *)(v46 + 48) = v45;
              memcpy(v66, v67, v45);
              *(_QWORD *)(v46 + 40) = v45;
            }
            *(_DWORD *)(v46 + 64) = 0;
            *(_QWORD *)(v46 + 72) = 0;
            *(_QWORD *)(v46 + 80) = v46 + 64;
            *(_QWORD *)(v46 + 88) = v46 + 64;
            *(_QWORD *)(v46 + 96) = 0;
            v47 = sub_5E7E60(a6 + 31, v37, v46 + 32);
            v37 = v47;
            if ( v48 )
            {
              if ( !v47 && v77 != (_QWORD *)v48 )
              {
                v72 = haystack;
                if ( *(_QWORD *)(v48 + 40) )
                  v72 = *(const char **)(v48 + 32);
                v73 = haystack;
                if ( *(_QWORD *)(v46 + 40) )
                  v73 = *(const char **)(v46 + 32);
                strcmp(v73, v72);
              }
              v37 = (_QWORD *)v46;
              std::_Rb_tree_insert_and_rebalance();
              ++a6[36];
            }
            else if ( v46 )
            {
              sub_5E07C0(nullptr);
              v65 = *(void **)(v46 + 32);
              if ( v65 )
              {
                *(_QWORD *)(v46 + 40) = 0;
                qfree(v65);
              }
              operator delete((void *)v46, 0x68u);
            }
          }
          v49 = (char *)v37[9];
          v16 = (char *)(v37 + 8);
          if ( v49 )
          {
LABEL_63:
            v50 = v91;
            v51 = s2;
            v52 = (char *)haystack;
            v53 = v16;
            if ( (_QWORD)v91 )
              v52 = s2;
            while ( 1 )
            {
              v54 = *((_QWORD *)v49 + 5);
              if ( !v50 )
                break;
              v55 = v51;
              v56 = haystack;
              if ( v54 )
                goto LABEL_69;
LABEL_70:
              v83 = v52;
              v82 = v50;
              v81 = v16;
              v57 = strcmp(v56, v55);
              v58 = *((_QWORD *)v49 + 3);
              v16 = v81;
              v59 = v57;
              v50 = v82;
              v60 = *((_QWORD *)v49 + 2);
              v52 = v83;
              if ( v59 < 0 )
              {
                v49 = *((char **)v49 + 3);
                if ( !v58 )
                  goto LABEL_72;
              }
              else
              {
                v53 = v49;
                v49 = *((char **)v49 + 2);
                if ( !v60 )
                  goto LABEL_72;
              }
            }
            if ( !v54 )
            {
              v64 = *((char **)v49 + 2);
              if ( !v64 )
              {
LABEL_98:
                v53 = v49;
LABEL_72:
                if ( v53 == v16 )
                  goto LABEL_77;
                if ( *((_QWORD *)v53 + 5) )
                {
                  v61 = *((const char **)v53 + 4);
                  if ( !v50 )
                    v51 = (char *)haystack;
LABEL_76:
                  if ( strcmp(v51, v61) < 0 )
                  {
LABEL_77:
                    p_s2 = &s2;
                    v53 = (char *)sub_5E8020(v37 + 7, v53, (__int64 *)&p_s2);
                  }
                }
                else
                {
                  v61 = haystack;
                  if ( v50 )
                    goto LABEL_76;
                }
                if ( v53 + 56 != (char *)&src )
                {
                  v62 = v93;
                  if ( (unsigned __int64)v93 > 1 )
                  {
                    v68 = src;
                    v69 = *((void **)v53 + 7);
                    if ( *((_QWORD *)v53 + 9) < (unsigned __int64)v93 )
                    {
                      v69 = (void *)qvector_reserve(v53 + 56, *((_QWORD *)v53 + 7), v93, 1);
                      *((_QWORD *)v53 + 7) = v69;
                    }
                    *((_QWORD *)v53 + 8) = v62;
                    memmove(v69, v68, v62 - 1);
                    *(_BYTE *)(*((_QWORD *)v53 + 7) + v62 - 1) = 0;
                  }
                  else
                  {
                    *((_QWORD *)v53 + 8) = 0;
                  }
                }
                goto LABEL_81;
              }
              while ( 1 )
              {
                v53 = v49;
                v49 = v64;
                if ( *((_QWORD *)v64 + 5) )
                  break;
                v64 = *((char **)v64 + 2);
                if ( !v64 )
                  goto LABEL_98;
              }
            }
LABEL_69:
            v56 = *((const char **)v49 + 4);
            v55 = v52;
            goto LABEL_70;
          }
        }
        else
        {
          p_ptr = haystack;
          if ( v34 )
            goto LABEL_55;
          v49 = (char *)v37[9];
          v16 = (char *)(v37 + 8);
          if ( v49 )
            goto LABEL_63;
        }
        v53 = v16;
        goto LABEL_77;
      }
      v18 = (char *)a6[27];
      if ( !v18 )
      {
        v22 = (char *)(a6 + 26);
        goto LABEL_32;
      }
      v19 = v91;
      v20 = s2;
      v21 = (char *)haystack;
      v22 = (char *)(a6 + 26);
      if ( (_QWORD)v91 )
        v21 = s2;
      while ( 1 )
      {
        v23 = *((_QWORD *)v18 + 5);
        if ( !v19 )
          break;
        v24 = v20;
        v25 = haystack;
        if ( v23 )
          goto LABEL_24;
LABEL_25:
        v79 = v19;
        v26 = strcmp(v25, v24);
        v27 = *((_QWORD *)v18 + 3);
        v19 = v79;
        v28 = v26;
        v29 = *((_QWORD *)v18 + 2);
        if ( v28 < 0 )
        {
          v18 = *((char **)v18 + 3);
          if ( !v27 )
            goto LABEL_27;
        }
        else
        {
          v22 = v18;
          v18 = *((char **)v18 + 2);
          if ( !v29 )
            goto LABEL_27;
        }
      }
      if ( v23 )
        goto LABEL_24;
      v32 = *((char **)v18 + 2);
      if ( v32 )
      {
        while ( 1 )
        {
          v22 = v18;
          v18 = v32;
          if ( *((_QWORD *)v32 + 5) )
            break;
          v32 = *((char **)v32 + 2);
          if ( !v32 )
            goto LABEL_40;
        }
LABEL_24:
        v25 = *((const char **)v18 + 4);
        v24 = v21;
        goto LABEL_25;
      }
LABEL_40:
      v22 = v18;
LABEL_27:
      if ( a6 + 26 == (_QWORD *)v22 )
        goto LABEL_32;
      if ( *((_QWORD *)v22 + 5) )
      {
        v30 = *((const char **)v22 + 4);
        if ( !v19 )
          v20 = (char *)haystack;
LABEL_31:
        if ( strcmp(v20, v30) < 0 )
        {
LABEL_32:
          v86 = &s2;
          v22 = (char *)sub_5E8020(a6 + 25, v22, (__int64 *)&v86);
        }
      }
      else
      {
        v30 = haystack;
        if ( v19 )
          goto LABEL_31;
      }
      if ( v22 + 56 != (char *)&src )
      {
        v31 = v93;
        if ( (unsigned __int64)v93 > 1 )
        {
          v70 = src;
          v71 = *((void **)v22 + 7);
          if ( *((_QWORD *)v22 + 9) < (unsigned __int64)v93 )
          {
            v71 = (void *)qvector_reserve(v22 + 56, *((_QWORD *)v22 + 7), v93, 1);
            *((_QWORD *)v22 + 7) = v71;
          }
          *((_QWORD *)v22 + 8) = v31;
          memmove(v71, v70, v31 - 1);
          *(_BYTE *)(*((_QWORD *)v22 + 7) + v31 - 1) = 0;
        }
        else
        {
          *((_QWORD *)v22 + 8) = 0;
        }
      }
LABEL_81:
      if ( src )
      {
        *(_QWORD *)&v93 = 0;
        qfree(src);
      }
      if ( !s2 )
        goto LABEL_14;
      *(_QWORD *)&v91 = 0;
      qfree(s2);
    }
    while ( v96 != 125 );
LABEL_85:
    if ( !(unsigned __int8)sub_727B60(a1, &ptr) )
    {
      if ( s1 )
      {
        n[0] = 0;
        qfree(s1);
      }
      goto LABEL_5;
    }
    if ( !s1 )
      goto LABEL_10;
    n[0] = 0;
    qfree(s1);
  }
  while ( v96 != 125 );
LABEL_88:
  sub_5E3EC0(qword_2CA1698, 0);
  v12 = 0;
LABEL_6:
  if ( ptr )
  {
    *(_QWORD *)&v95 = 0;
    qfree(ptr);
  }
  return v12;
}

