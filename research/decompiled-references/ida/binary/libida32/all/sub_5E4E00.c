__int64 __fastcall sub_5E4E00(const char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 v8; // rax
  void *v9; // rdi
  const char *v10; // rsi
  char *v11; // rbx
  unsigned int j; // r13d
  unsigned int v13; // eax
  const char *v14; // rax
  char *v15; // rdx
  char *v16; // r12
  size_t v17; // rax
  size_t v18; // r14
  size_t v19; // rbx
  void *v20; // rax
  char *v21; // rcx
  size_t v22; // rbx
  char *v23; // r14
  char *v24; // r15
  const char *v25; // r12
  const char *v26; // rsi
  const char *v27; // rdi
  int v28; // r9d
  __int64 v29; // r12
  char *v30; // rax
  const char *v31; // rdx
  int k; // eax
  size_t v33; // r13
  void *v34; // rbp
  __int64 v35; // rdx
  char *v36; // rax
  char *v37; // rax
  char *v38; // rdx
  size_t v39; // rbp
  __int64 v40; // rbx
  char *v41; // rax
  void *v42; // rdi
  char *v43; // rdi
  const char **v44; // rbp
  const char **v45; // rbx
  size_t v46; // r12
  char *v47; // rdi
  size_t v48; // r14
  const char *v49; // r13
  const char *v50; // rax
  size_t v51; // r13
  size_t v52; // rax
  __int64 v53; // rax
  size_t v54; // r14
  void *v55; // r13
  __int64 v56; // rdx
  char *v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rbp
  char *v60; // rdx
  char *v61; // rax
  void *v62; // rdi
  __int64 v63; // rbx
  char *v65; // rdi
  signed __int64 v66; // r13
  size_t v67; // r14
  size_t v68; // rax
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  const char *v72; // rdx
  char *v73; // rdi
  __int64 v74; // rbp
  __int64 v75; // rbx
  char *v76; // rdx
  void *v77; // rax
  char v78; // [rsp+0h] [rbp-5138h]
  const char *v79; // [rsp+8h] [rbp-5130h]
  size_t v80; // [rsp+8h] [rbp-5130h]
  char *v81; // [rsp+10h] [rbp-5128h]
  __int64 v83; // [rsp+20h] [rbp-5118h]
  char *s1; // [rsp+30h] [rbp-5108h] BYREF
  __int128 v86; // [rsp+38h] [rbp-5100h]
  void *v87; // [rsp+50h] [rbp-50E8h] BYREF
  __int128 v88; // [rsp+58h] [rbp-50E0h]
  void *ptr; // [rsp+70h] [rbp-50C8h] BYREF
  size_t v90[3]; // [rsp+78h] [rbp-50C0h]
  void *src; // [rsp+90h] [rbp-50A8h] BYREF
  size_t n[3]; // [rsp+98h] [rbp-50A0h]
  _BYTE v93[4]; // [rsp+B0h] [rbp-5088h] BYREF
  char v94[8228]; // [rsp+B4h] [rbp-5084h] BYREF
  __int64 v95; // [rsp+20D8h] [rbp-3060h]
  int v96; // [rsp+20E4h] [rbp-3054h]
  _BYTE v97[4104]; // [rsp+40F0h] [rbp-1048h] BYREF
  unsigned __int64 v98; // [rsp+50F8h] [rbp-40h]

  v6 = a6[9];
  v98 = __readfsqword(0x28u);
  v83 = qword_2CA1698;
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v8 = a6[8] + 24 * i;
      v9 = *(void **)v8;
      if ( *(_QWORD *)v8 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        qfree(v9);
      }
    }
  }
  v10 = a1;
  v86 = 0;
  a6[9] = 0;
  s1 = nullptr;
  if ( !(unsigned __int8)sub_727C20(&s1, a1) )
  {
LABEL_128:
    v63 = 3;
    goto LABEL_94;
  }
  if ( (unsigned __int64)v86 <= 1 )
    goto LABEL_93;
  v11 = s1;
  v87 = nullptr;
  v88 = 0;
  if ( strcmp(s1, "all") )
  {
    v10 = v11;
    sub_5E1400((__int64 *)&v87, (__int64)v11, ",");
    goto LABEL_57;
  }
  for ( j = 1; j != 328; ++j )
  {
    v13 = sub_893220(j);
    v14 = (const char *)sub_893410(v13);
    v16 = (char *)v14;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v14 )
    {
      v17 = strlen(v14);
      v18 = v17 + 1;
      v19 = v17;
      v20 = (void *)qvector_reserve(&src, 0, v17 + 1, 1);
      n[0] = v18;
      src = v20;
      memmove(v20, v16, v19);
      *((_BYTE *)src + v19) = 0;
      v21 = (char *)v88;
      v10 = (const char *)v87;
      v22 = n[0];
      v23 = (char *)v87 + 24 * v88;
      if ( v87 == v23 )
        goto LABEL_43;
    }
    else
    {
      v21 = (char *)v88;
      v10 = (const char *)v87;
      v22 = 0;
      v23 = (char *)v87 + 24 * v88;
      if ( v87 == v23 )
        goto LABEL_40;
    }
    v79 = v10;
    v24 = (char *)src;
    v25 = v10;
    v81 = v21;
    while ( 1 )
    {
      if ( *((_QWORD *)v25 + 1) )
      {
        v26 = *(const char **)v25;
        v27 = haystack;
        if ( !v22 )
          goto LABEL_14;
      }
      else
      {
        if ( !v22 )
        {
          v10 = v79;
          v21 = v81;
          if ( v25 == v23 )
            goto LABEL_46;
          goto LABEL_21;
        }
        v26 = haystack;
      }
      v27 = v24;
LABEL_14:
      if ( !strcmp(v27, v26) )
        break;
      v25 += 24;
      if ( v25 == v23 )
      {
        v10 = v79;
        v21 = v81;
        goto LABEL_43;
      }
    }
    v10 = v79;
    v21 = v81;
    if ( v25 != v23 )
      goto LABEL_21;
LABEL_43:
    if ( !v22 )
    {
LABEL_46:
      v16 = nullptr;
LABEL_40:
      v15 = v21 + 1;
      if ( *((_QWORD *)&v88 + 1) < (unsigned __int64)(v21 + 1) )
        goto LABEL_45;
      goto LABEL_41;
    }
    v16 = (char *)qalloc_or_throw(v22, v10);
    memcpy(v16, src, v22);
    v21 = (char *)v88;
    v10 = (const char *)v87;
    v15 = (char *)(v88 + 1);
    if ( *((_QWORD *)&v88 + 1) < (unsigned __int64)(v88 + 1) )
    {
LABEL_45:
      v87 = (void *)qvector_reserve(&v87, v10, v15, 24);
      v21 = (char *)v88;
      v10 = (const char *)v87;
    }
LABEL_41:
    v37 = (char *)&v10[24 * (_QWORD)v21];
    *(_QWORD *)v37 = v16;
    *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
    v24 = (char *)src;
    *(_QWORD *)&v88 = v88 + 1;
LABEL_21:
    if ( v24 )
    {
      n[0] = 0;
      qfree(v24);
    }
  }
  ptr = nullptr;
  *(_OWORD *)v90 = 0;
  if ( (unsigned __int8)sub_811C10(&ptr, v10, v15, v21) )
  {
    v29 = 0;
    v80 = v90[0];
    if ( v90[0] )
    {
      do
      {
        v30 = (char *)ptr + 24 * v29;
        v31 = haystack;
        if ( *((_QWORD *)v30 + 1) )
          v31 = *(const char **)v30;
        qmakepath((int)v97, 4096, (int)v31, (int)"*.clt", 0, v28, v78);
        v10 = v93;
        v95 = 0;
        v96 = 0;
        for ( k = qfindfirst(v97, v93, 0); !k; k = qfindnext(v93) )
        {
          v10 = v94;
          src = nullptr;
          *(_OWORD *)n = 0;
          if ( (unsigned __int8)sub_893510(&src, v94) )
          {
            v33 = n[0];
            v34 = nullptr;
            if ( n[0] )
            {
              v34 = (void *)qalloc_or_throw(n[0], v94);
              memcpy(v34, src, v33);
            }
            v35 = v88;
            v10 = (const char *)v87;
            if ( *((_QWORD *)&v88 + 1) < (unsigned __int64)(v88 + 1) )
            {
              v87 = (void *)qvector_reserve(&v87, v87, v88 + 1, 24);
              v35 = v88;
              v10 = (const char *)v87;
            }
            v36 = (char *)&v10[24 * v35];
            *(_QWORD *)v36 = v34;
            *(__m128i *)(v36 + 8) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
            *(_QWORD *)&v88 = v88 + 1;
          }
          if ( src )
          {
            n[0] = 0;
            qfree(src);
          }
        }
        ++v29;
        qfindclose(v93);
      }
      while ( v29 != v80 );
    }
  }
  v38 = (char *)ptr;
  if ( ptr )
  {
    v39 = v90[0];
    if ( v90[0] )
    {
      v40 = 0;
      do
      {
        v41 = &v38[24 * v40];
        v42 = *(void **)v41;
        if ( *(_QWORD *)v41 )
        {
          *((_QWORD *)v41 + 1) = 0;
          qfree(v42);
          v38 = (char *)ptr;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    v90[0] = 0;
    qfree(v38);
  }
LABEL_57:
  v43 = (char *)v87;
  v44 = (const char **)((char *)v87 + 24 * v88);
  if ( v44 != v87 )
  {
    v45 = (const char **)v87;
    while ( 2 )
    {
      while ( 1 )
      {
        ptr = nullptr;
        *(_OWORD *)v90 = 0;
        v46 = (size_t)v45[1];
        if ( v46 )
          break;
LABEL_59:
        v45 += 3;
        if ( v44 == v45 )
          goto LABEL_84;
      }
      ptr = (void *)qalloc_or_throw(v45[1], v10);
      v90[1] = v46;
      v10 = *v45;
      memcpy(ptr, *v45, v46);
      v90[0] = v46;
      v47 = (char *)ptr;
      if ( v46 != 1 )
      {
        v48 = v46 - 1;
        v49 = (char *)ptr + v46 - 1;
        v50 = v49;
        if ( ptr < v49 )
        {
          while ( *(v50 - 1) == 32 )
          {
            if ( --v50 == ptr )
              goto LABEL_103;
          }
          v48 = v50 - (_BYTE *)ptr;
          if ( v50 != ptr )
            goto LABEL_67;
LABEL_103:
          if ( !ptr )
            goto LABEL_72;
          v90[0] = 0;
          qfree(ptr);
          ptr = nullptr;
          v52 = v90[0];
          v90[1] = 0;
          if ( v90[0] <= 1 )
            goto LABEL_59;
          v47 = nullptr;
LABEL_71:
          v49 = &v47[v52 - 1];
          if ( v47 < v49 )
          {
LABEL_72:
            v10 = v47;
            while ( *v10 == 32 )
            {
              if ( ++v10 == v49 )
              {
                if ( v47 >= v10 )
                  goto LABEL_76;
                *v47 = *v10;
                v65 = (char *)ptr;
                goto LABEL_99;
              }
            }
            if ( v47 >= v10 )
              goto LABEL_76;
            v66 = v49 - v10;
            v67 = v66 + 1;
            memmove(v47, v10, v66 + 1);
            v10 = (const char *)ptr;
            v65 = (char *)ptr;
            if ( v66 )
            {
              v68 = v90[0];
              if ( v90[0] < v67 )
              {
                if ( v90[1] < v67 )
                {
                  ptr = (void *)qvector_reserve(&ptr, ptr, v66 + 1, 1);
                  v65 = (char *)ptr;
                  v68 = v90[0];
                }
                memset(&v65[v68], 0, v67 - v68);
                v90[0] = v66 + 1;
                v10 = (const char *)ptr;
              }
              else if ( v67 != v90[0] )
              {
                v90[0] = v66 + 1;
              }
              v10[v66] = 0;
              v47 = (char *)ptr;
              if ( v90[0] <= 1 )
                goto LABEL_82;
              goto LABEL_76;
            }
LABEL_99:
            if ( v65 )
            {
              v90[0] = 0;
              qfree(v65);
              ptr = nullptr;
              v90[1] = 0;
            }
            v47 = (char *)ptr;
            if ( v90[0] <= 1 )
              goto LABEL_59;
          }
LABEL_76:
          v53 = sub_893780(v83, v47, sub_789390);
          v54 = v90[0];
          if ( !v53 )
          {
            src = nullptr;
            *(_OWORD *)n = 0;
            sub_3573A0((char **)&src);
            v72 = haystack;
            if ( n[0] )
              LODWORD(v72) = (_DWORD)src;
            sub_727620((_DWORD)a1, (unsigned int)&unk_22B285A, (_DWORD)v72, v69, v70, v71);
            if ( src )
            {
              n[0] = 0;
              qfree(src);
            }
            if ( ptr )
            {
              v90[0] = 0;
              qfree(ptr);
            }
            v73 = (char *)v87;
            if ( v87 )
            {
              v74 = v88;
              if ( (_QWORD)v88 )
              {
                v75 = 0;
                do
                {
                  v76 = &v73[24 * v75];
                  v77 = *(void **)v76;
                  if ( *(_QWORD *)v76 )
                  {
                    *((_QWORD *)v76 + 1) = 0;
                    qfree(v77);
                    v73 = (char *)v87;
                  }
                  ++v75;
                }
                while ( v74 != v75 );
              }
              *(_QWORD *)&v88 = 0;
              qfree(v73);
            }
            goto LABEL_128;
          }
          v55 = nullptr;
          if ( v90[0] )
          {
            v55 = (void *)qalloc_or_throw(v90[0], v47);
            memcpy(v55, ptr, v54);
          }
          v56 = a6[9];
          v10 = (const char *)a6[8];
          if ( a6[10] < (unsigned __int64)(v56 + 1) )
          {
            v10 = (const char *)qvector_reserve(a6 + 8, v10, v56 + 1, 24);
            a6[8] = v10;
            v56 = a6[9];
          }
          v57 = (char *)&v10[24 * v56];
          *(_QWORD *)v57 = v55;
          *(__m128i *)(v57 + 8) = _mm_unpacklo_epi64((__m128i)v54, (__m128i)v54);
          v47 = (char *)ptr;
          ++a6[9];
        }
        else
        {
LABEL_67:
          v51 = v48 + 1;
          if ( v46 < v48 + 1 )
          {
            if ( v90[1] < v51 )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v48 + 1, 1);
              v46 = v90[0];
              v47 = (char *)ptr;
            }
            v10 = nullptr;
            memset(&v47[v46], 0, v51 - v46);
            v90[0] = v48 + 1;
            v50 = (char *)ptr + v48;
          }
          else if ( v46 != v48 + 1 )
          {
            v90[0] = v48 + 1;
          }
          *v50 = 0;
          v52 = v90[0];
          v47 = (char *)ptr;
          if ( v90[0] > 1 )
            goto LABEL_71;
        }
      }
LABEL_82:
      if ( !v47 )
        goto LABEL_59;
      v90[0] = 0;
      v45 += 3;
      qfree(v47);
      if ( v44 == v45 )
      {
LABEL_84:
        v43 = (char *)v87;
        break;
      }
      continue;
    }
  }
  if ( v43 )
  {
    v58 = v88;
    if ( (_QWORD)v88 )
    {
      v59 = 0;
      v60 = v43;
      do
      {
        v61 = &v60[24 * v59];
        v62 = *(void **)v61;
        if ( *(_QWORD *)v61 )
        {
          *((_QWORD *)v61 + 1) = 0;
          qfree(v62);
          v60 = (char *)v87;
        }
        ++v59;
      }
      while ( v58 != v59 );
      v43 = v60;
    }
    *(_QWORD *)&v88 = 0;
    qfree(v43);
  }
LABEL_93:
  sub_590A80((_QWORD *)qword_2CA1698, v10);
  v63 = 0;
LABEL_94:
  if ( s1 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(s1);
  }
  return v63;
}

