__int64 __fastcall sub_604050(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  void *v7; // rdi
  size_t v9; // rbp
  __int16 v10; // ax
  char v11; // dl
  __int64 v12; // rbx
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // r9
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  char *v19; // r14
  char *v20; // r15
  _QWORD *v21; // r12
  __int64 v22; // rdx
  const char *v23; // rsi
  const char *v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  int v27; // esi
  __int64 v28; // rax
  const char *v29; // rsi
  __int64 v30; // rbx
  _QWORD *v31; // rax
  _QWORD *v32; // r12
  size_t v33; // r15
  char *v34; // r14
  char *v35; // rcx
  _QWORD *v36; // rbx
  __int64 v37; // rdx
  const char *v38; // rsi
  const char *v39; // rdi
  int v40; // eax
  __int64 v41; // rdx
  int v42; // esi
  __int64 v43; // rax
  const char *v44; // rsi
  __int64 v45; // rax
  size_t v46; // r14
  __int64 v47; // r12
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdi
  _QWORD *v51; // r12
  __int64 v52; // r8
  char *v53; // r15
  char *v54; // rcx
  _QWORD *v55; // r14
  __int64 v56; // rdx
  const char *v57; // rsi
  const char *v58; // rdi
  int v59; // eax
  __int64 v60; // rdx
  int v61; // esi
  __int64 v62; // rax
  const char *v63; // rsi
  __int64 v64; // rbx
  _QWORD *i; // rax
  _QWORD *v66; // rax
  void *v67; // rdi
  void *v68; // rax
  char *v69; // rsi
  void *v70; // r15
  void *v71; // rax
  void *v72; // r15
  void *v73; // rax
  const char *v74; // rsi
  const char *v75; // rdi
  unsigned int v76; // eax
  void *v77; // rax
  const void *v78; // rsi
  __int64 v79; // [rsp+0h] [rbp-158h]
  _QWORD *v80; // [rsp+18h] [rbp-140h]
  __int64 v82; // [rsp+38h] [rbp-120h]
  char *v83; // [rsp+38h] [rbp-120h]
  _QWORD *v84; // [rsp+38h] [rbp-120h]
  __int64 v85; // [rsp+38h] [rbp-120h]
  __int64 v86; // [rsp+40h] [rbp-118h]
  char *v87; // [rsp+48h] [rbp-110h]
  bool v88; // [rsp+56h] [rbp-102h]
  char v89; // [rsp+57h] [rbp-101h]
  char **v90; // [rsp+60h] [rbp-F8h] BYREF
  char **p_s2; // [rsp+68h] [rbp-F0h] BYREF
  char *s1; // [rsp+70h] [rbp-E8h] BYREF
  size_t n[3]; // [rsp+78h] [rbp-E0h]
  char *s2; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v95; // [rsp+98h] [rbp-C0h]
  void *src; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v97; // [rsp+B8h] [rbp-A0h]
  void *ptr; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v99; // [rsp+D8h] [rbp-80h]
  __int16 v100; // [rsp+E8h] [rbp-70h]
  __int64 v101; // [rsp+F0h] [rbp-68h]
  char v102; // [rsp+F8h] [rbp-60h]
  __m128i v103; // [rsp+100h] [rbp-58h]
  unsigned __int64 v104; // [rsp+118h] [rbp-40h]

  v7 = (void *)a6[34];
  v104 = __readfsqword(0x28u);
  sub_5FC700(v7);
  ptr = nullptr;
  v99 = 0;
  a6[34] = 0;
  a6[35] = a6 + 33;
  a6[36] = a6 + 33;
  a6[37] = 0;
  v9 = *(_QWORD *)(a3 + 8);
  v80 = a6 + 33;
  if ( v9 )
  {
    v77 = (void *)qalloc_or_throw(v9);
    v78 = *(const void **)a3;
    *((_QWORD *)&v99 + 1) = v9;
    ptr = v77;
    memcpy(v77, v78, v9);
    *(_QWORD *)&v99 = v9;
  }
  v10 = *(_WORD *)(a3 + 24);
  v101 = *(_QWORD *)(a3 + 32);
  v11 = *(_BYTE *)(a3 + 40);
  v100 = v10;
  v102 = v11;
  v103 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  if ( v10 != 123 )
  {
    sub_747D50(a1, 1362);
LABEL_5:
    v12 = 3;
    goto LABEL_6;
  }
  v89 = sub_7480A0(a1, &ptr);
  if ( !v89 )
    goto LABEL_5;
LABEL_10:
  if ( v100 == 125 )
    goto LABEL_89;
  do
  {
    *(_OWORD *)n = 0;
    s1 = nullptr;
    if ( (unsigned int)sub_7486A0(a1, (unsigned int)&ptr, (unsigned int)"%s{", (unsigned int)&s1, v14, v15, v79) != 1 )
    {
      if ( !under_debugger )
        interr(1088);
LABEL_130:
      BUG();
    }
    v88 = v89;
    if ( n[0] > 1 )
      v88 = strcasecmp(s1, "default") == 0;
LABEL_14:
    if ( v100 == 125 )
      goto LABEL_86;
    do
    {
      s2 = nullptr;
      src = nullptr;
      v95 = 0;
      v97 = 0;
      if ( (unsigned int)sub_7486A0(
                           a1,
                           (unsigned int)&ptr,
                           (unsigned int)"%I=%S",
                           (unsigned int)&s2,
                           (unsigned int)&src,
                           (_DWORD)v16,
                           v79) != 2 )
      {
        if ( !under_debugger )
          interr(1089);
        goto LABEL_130;
      }
      if ( !v88 )
      {
        v32 = (_QWORD *)a6[34];
        if ( !v32 )
        {
          v36 = a6 + 33;
          goto LABEL_56;
        }
        v33 = n[0];
        v34 = s1;
        v35 = (char *)haystack;
        v36 = a6 + 33;
        if ( n[0] )
          v35 = s1;
        while ( 1 )
        {
          v37 = v32[5];
          if ( !v33 )
            break;
          v38 = v34;
          v39 = haystack;
          if ( v37 )
            goto LABEL_48;
LABEL_49:
          v83 = v35;
          v40 = strcmp(v39, v38);
          v41 = v32[3];
          v35 = v83;
          v42 = v40;
          v43 = v32[2];
          if ( v42 < 0 )
          {
            v32 = (_QWORD *)v32[3];
            if ( !v41 )
              goto LABEL_51;
          }
          else
          {
            v36 = v32;
            v32 = (_QWORD *)v32[2];
            if ( !v43 )
              goto LABEL_51;
          }
        }
        if ( v37 )
        {
LABEL_48:
          v39 = (const char *)v32[4];
          v38 = v35;
          goto LABEL_49;
        }
        for ( i = (_QWORD *)v32[2]; i; i = (_QWORD *)i[2] )
        {
          v36 = v32;
          v32 = i;
          if ( i[5] )
            goto LABEL_48;
        }
        v36 = v32;
LABEL_51:
        if ( v80 == v36 )
          goto LABEL_56;
        if ( v36[5] )
        {
          v44 = (const char *)v36[4];
          if ( !v33 )
            v34 = (char *)haystack;
LABEL_55:
          if ( strcmp(v34, v44) < 0 )
          {
LABEL_56:
            v45 = operator new(0x68u);
            v46 = n[0];
            *(_QWORD *)(v45 + 32) = 0;
            v47 = v45;
            *(_OWORD *)(v45 + 40) = 0;
            if ( v46 )
            {
              v68 = (void *)qalloc_or_throw(v46);
              *(_QWORD *)(v47 + 32) = v68;
              v69 = s1;
              *(_QWORD *)(v47 + 48) = v46;
              memcpy(v68, v69, v46);
              *(_QWORD *)(v47 + 40) = v46;
            }
            *(_DWORD *)(v47 + 64) = 0;
            *(_QWORD *)(v47 + 72) = 0;
            *(_QWORD *)(v47 + 80) = v47 + 64;
            *(_QWORD *)(v47 + 88) = v47 + 64;
            *(_QWORD *)(v47 + 96) = 0;
            v48 = sub_603D20(a6 + 32, v36, v47 + 32);
            v36 = v48;
            if ( v49 )
            {
              if ( v48 || v80 == (_QWORD *)v49 )
              {
                v50 = 1;
              }
              else
              {
                v74 = haystack;
                if ( *(_QWORD *)(v49 + 40) )
                  v74 = *(const char **)(v49 + 32);
                v75 = haystack;
                if ( *(_QWORD *)(v47 + 40) )
                  v75 = *(const char **)(v47 + 32);
                v85 = v49;
                v76 = strcmp(v75, v74);
                v49 = v85;
                v50 = v76 >> 31;
              }
              v36 = (_QWORD *)v47;
              std::_Rb_tree_insert_and_rebalance(v50, v47, v49, v80);
              ++a6[37];
            }
            else if ( v47 )
            {
              sub_5FC690(nullptr);
              v67 = *(void **)(v47 + 32);
              if ( v67 )
              {
                *(_QWORD *)(v47 + 40) = 0;
                qfree(v67);
              }
              operator delete((void *)v47, 0x68u);
            }
          }
          v51 = (_QWORD *)v36[9];
          v16 = v36 + 8;
          if ( v51 )
          {
LABEL_64:
            v52 = v95;
            v53 = s2;
            v54 = (char *)haystack;
            v55 = v16;
            if ( (_QWORD)v95 )
              v54 = s2;
            while ( 1 )
            {
              v56 = v51[5];
              if ( !v52 )
                break;
              v57 = v53;
              v58 = haystack;
              if ( v56 )
                goto LABEL_70;
LABEL_71:
              v87 = v54;
              v86 = v52;
              v84 = v16;
              v59 = strcmp(v58, v57);
              v60 = v51[3];
              v16 = v84;
              v61 = v59;
              v52 = v86;
              v62 = v51[2];
              v54 = v87;
              if ( v61 < 0 )
              {
                v51 = (_QWORD *)v51[3];
                if ( !v60 )
                  goto LABEL_73;
              }
              else
              {
                v55 = v51;
                v51 = (_QWORD *)v51[2];
                if ( !v62 )
                  goto LABEL_73;
              }
            }
            if ( !v56 )
            {
              v66 = (_QWORD *)v51[2];
              if ( !v66 )
              {
LABEL_99:
                v55 = v51;
LABEL_73:
                if ( v55 == v16 )
                  goto LABEL_78;
                if ( v55[5] )
                {
                  v63 = (const char *)v55[4];
                  if ( !v52 )
                    v53 = (char *)haystack;
LABEL_77:
                  if ( strcmp(v53, v63) < 0 )
                  {
LABEL_78:
                    p_s2 = &s2;
                    v55 = sub_603EE0(v36 + 7, v55, (__int64 *)&p_s2);
                  }
                }
                else
                {
                  v63 = haystack;
                  if ( v52 )
                    goto LABEL_77;
                }
                if ( v55 + 7 != &src )
                {
                  v64 = v97;
                  if ( (unsigned __int64)v97 > 1 )
                  {
                    v70 = src;
                    v71 = (void *)v55[7];
                    if ( v55[9] < (unsigned __int64)v97 )
                    {
                      v71 = (void *)qvector_reserve(v55 + 7, v55[7], v97, 1);
                      v55[7] = v71;
                    }
                    v55[8] = v64;
                    memmove(v71, v70, v64 - 1);
                    *(_BYTE *)(v55[7] + v64 - 1) = 0;
                  }
                  else
                  {
                    v55[8] = 0;
                  }
                }
                goto LABEL_82;
              }
              while ( 1 )
              {
                v55 = v51;
                v51 = v66;
                if ( v66[5] )
                  break;
                v66 = (_QWORD *)v66[2];
                if ( !v66 )
                  goto LABEL_99;
              }
            }
LABEL_70:
            v58 = (const char *)v51[4];
            v57 = v54;
            goto LABEL_71;
          }
        }
        else
        {
          v44 = haystack;
          if ( v33 )
            goto LABEL_55;
          v51 = (_QWORD *)v36[9];
          v16 = v36 + 8;
          if ( v51 )
            goto LABEL_64;
        }
        v55 = v16;
        goto LABEL_78;
      }
      v17 = (_QWORD *)a6[28];
      if ( !v17 )
      {
        v21 = a6 + 27;
        goto LABEL_32;
      }
      v18 = v95;
      v19 = s2;
      v20 = (char *)haystack;
      v21 = a6 + 27;
      if ( (_QWORD)v95 )
        v20 = s2;
      while ( 1 )
      {
        v22 = v17[5];
        if ( !v18 )
          break;
        v23 = v19;
        v24 = haystack;
        if ( v22 )
          goto LABEL_24;
LABEL_25:
        v82 = v18;
        v25 = strcmp(v24, v23);
        v26 = v17[3];
        v18 = v82;
        v27 = v25;
        v28 = v17[2];
        if ( v27 < 0 )
        {
          v17 = (_QWORD *)v17[3];
          if ( !v26 )
            goto LABEL_27;
        }
        else
        {
          v21 = v17;
          v17 = (_QWORD *)v17[2];
          if ( !v28 )
            goto LABEL_27;
        }
      }
      if ( v22 )
        goto LABEL_24;
      v31 = (_QWORD *)v17[2];
      if ( v31 )
      {
        while ( 1 )
        {
          v21 = v17;
          v17 = v31;
          if ( v31[5] )
            break;
          v31 = (_QWORD *)v31[2];
          if ( !v31 )
            goto LABEL_40;
        }
LABEL_24:
        v24 = (const char *)v17[4];
        v23 = v20;
        goto LABEL_25;
      }
LABEL_40:
      v21 = v17;
LABEL_27:
      if ( a6 + 27 == v21 )
        goto LABEL_32;
      if ( v21[5] )
      {
        v29 = (const char *)v21[4];
        if ( !v18 )
          v19 = (char *)haystack;
LABEL_31:
        if ( strcmp(v19, v29) < 0 )
        {
LABEL_32:
          v90 = &s2;
          v21 = sub_603EE0(a6 + 26, v21, (__int64 *)&v90);
        }
      }
      else
      {
        v29 = haystack;
        if ( v18 )
          goto LABEL_31;
      }
      if ( v21 + 7 != &src )
      {
        v30 = v97;
        if ( (unsigned __int64)v97 > 1 )
        {
          v72 = src;
          v73 = (void *)v21[7];
          if ( v21[9] < (unsigned __int64)v97 )
          {
            v73 = (void *)qvector_reserve(v21 + 7, v21[7], v97, 1);
            v21[7] = v73;
          }
          v21[8] = v30;
          memmove(v73, v72, v30 - 1);
          *(_BYTE *)(v21[7] + v30 - 1) = 0;
        }
        else
        {
          v21[8] = 0;
        }
      }
LABEL_82:
      if ( src )
      {
        *(_QWORD *)&v97 = 0;
        qfree(src);
      }
      if ( !s2 )
        goto LABEL_14;
      *(_QWORD *)&v95 = 0;
      qfree(s2);
    }
    while ( v100 != 125 );
LABEL_86:
    if ( !(unsigned __int8)sub_7480A0(a1, &ptr) )
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
  while ( v100 != 125 );
LABEL_89:
  sub_5FFD80(qword_2CCB598, 0);
  v12 = 0;
LABEL_6:
  if ( ptr )
  {
    *(_QWORD *)&v99 = 0;
    qfree(ptr);
  }
  return v12;
}
