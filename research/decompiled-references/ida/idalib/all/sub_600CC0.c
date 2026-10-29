__int64 __fastcall sub_600CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 v8; // rax
  void *v9; // rdi
  char *v10; // rbx
  unsigned int j; // r13d
  unsigned int v12; // eax
  const char *v13; // rax
  char *v14; // rdx
  char *v15; // r12
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // rbx
  void *v19; // rax
  char *v20; // rcx
  char *v21; // rsi
  size_t v22; // rbx
  char *v23; // r14
  char *v24; // r15
  char *v25; // r12
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
  char *v36; // rsi
  char *v37; // rax
  char *v38; // rax
  char *v39; // rdx
  size_t v40; // rbp
  __int64 v41; // rbx
  char *v42; // rax
  void *v43; // rdi
  char *v44; // rdi
  const void **v45; // rbp
  const void **v46; // rbx
  size_t v47; // r12
  char *v48; // rdi
  size_t v49; // r14
  char *v50; // r13
  _BYTE *v51; // rax
  size_t v52; // r13
  size_t v53; // rax
  char *v54; // rsi
  __int64 v55; // rax
  size_t v56; // r14
  void *v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rbp
  char *v63; // rdx
  char *v64; // rax
  void *v65; // rdi
  __int64 v66; // rbx
  char *v68; // rdi
  __int64 v69; // r13
  size_t v70; // r14
  _BYTE *v71; // rsi
  size_t v72; // rax
  int v73; // ecx
  int v74; // r8d
  int v75; // r9d
  const char *v76; // rdx
  char *v77; // rdi
  __int64 v78; // rbp
  __int64 v79; // rbx
  char *v80; // rdx
  void *v81; // rax
  __int64 v82; // [rsp+0h] [rbp-5138h]
  size_t v83; // [rsp+8h] [rbp-5130h]
  void **p_ptr; // [rsp+10h] [rbp-5128h]
  char *v85; // [rsp+10h] [rbp-5128h]
  __int64 v87; // [rsp+20h] [rbp-5118h]
  char *s1; // [rsp+30h] [rbp-5108h] BYREF
  __int128 v90; // [rsp+38h] [rbp-5100h]
  void *v91; // [rsp+50h] [rbp-50E8h] BYREF
  __int128 v92; // [rsp+58h] [rbp-50E0h]
  void *ptr; // [rsp+70h] [rbp-50C8h] BYREF
  size_t v94[3]; // [rsp+78h] [rbp-50C0h]
  void *src; // [rsp+90h] [rbp-50A8h] BYREF
  size_t n[3]; // [rsp+98h] [rbp-50A0h]
  _BYTE v97[4]; // [rsp+B0h] [rbp-5088h] BYREF
  char v98[8228]; // [rsp+B4h] [rbp-5084h] BYREF
  __int64 v99; // [rsp+20D8h] [rbp-3060h]
  int v100; // [rsp+20E4h] [rbp-3054h]
  _BYTE v101[4104]; // [rsp+40F0h] [rbp-1048h] BYREF
  unsigned __int64 v102; // [rsp+50F8h] [rbp-40h]

  v6 = a6[10];
  v102 = __readfsqword(0x28u);
  v87 = qword_2CCB598;
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v8 = a6[9] + 24 * i;
      v9 = *(void **)v8;
      if ( *(_QWORD *)v8 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        qfree(v9);
      }
    }
  }
  v90 = 0;
  a6[10] = 0;
  s1 = nullptr;
  if ( !(unsigned __int8)sub_748160(&s1, a1) )
  {
LABEL_128:
    v66 = 3;
    goto LABEL_94;
  }
  if ( (unsigned __int64)v90 <= 1 )
    goto LABEL_93;
  v10 = s1;
  v91 = nullptr;
  v92 = 0;
  if ( strcmp(s1, "all") )
  {
    sub_5FD2D0((__int64 *)&v91, (__int64)v10, ",");
    goto LABEL_57;
  }
  for ( j = 1; j != 328; ++j )
  {
    v12 = sub_8B6BB0(j);
    v13 = (const char *)sub_8B6DB0(v12);
    v15 = (char *)v13;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v13 )
    {
      v16 = strlen(v13);
      v17 = v16 + 1;
      v18 = v16;
      v19 = (void *)qvector_reserve(&src, 0, v16 + 1, 1);
      n[0] = v17;
      src = v19;
      memmove(v19, v15, v18);
      *((_BYTE *)src + v18) = 0;
      v20 = (char *)v92;
      v21 = (char *)v91;
      v22 = n[0];
      v23 = (char *)v91 + 24 * v92;
      if ( v91 == v23 )
        goto LABEL_43;
    }
    else
    {
      v20 = (char *)v92;
      v21 = (char *)v91;
      v22 = 0;
      v23 = (char *)v91 + 24 * v92;
      if ( v91 == v23 )
        goto LABEL_40;
    }
    v83 = (size_t)v21;
    v24 = (char *)src;
    v25 = v21;
    v85 = v20;
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
          v21 = (char *)v83;
          v20 = v85;
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
        v21 = (char *)v83;
        v20 = v85;
        goto LABEL_43;
      }
    }
    v21 = (char *)v83;
    v20 = v85;
    if ( v25 != v23 )
      goto LABEL_21;
LABEL_43:
    if ( !v22 )
    {
LABEL_46:
      v15 = nullptr;
LABEL_40:
      v14 = v20 + 1;
      if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)(v20 + 1) )
        goto LABEL_45;
      goto LABEL_41;
    }
    v15 = (char *)qalloc_or_throw(v22);
    memcpy(v15, src, v22);
    v20 = (char *)v92;
    v21 = (char *)v91;
    v14 = (char *)(v92 + 1);
    if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)(v92 + 1) )
    {
LABEL_45:
      v91 = (void *)qvector_reserve(&v91, v21, v14, 24);
      v20 = (char *)v92;
      v21 = (char *)v91;
    }
LABEL_41:
    v38 = &v21[24 * (_QWORD)v20];
    *(_QWORD *)v38 = v15;
    *(__m128i *)(v38 + 8) = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
    v24 = (char *)src;
    *(_QWORD *)&v92 = v92 + 1;
LABEL_21:
    if ( v24 )
    {
      n[0] = 0;
      qfree(v24);
    }
  }
  ptr = nullptr;
  p_ptr = &ptr;
  *(_OWORD *)v94 = 0;
  if ( (unsigned __int8)sub_834FD0(&ptr, v21, v14, v20) )
  {
    v29 = 0;
    v83 = v94[0];
    if ( v94[0] )
    {
      do
      {
        v30 = (char *)ptr + 24 * v29;
        v31 = haystack;
        if ( *((_QWORD *)v30 + 1) )
          v31 = *(const char **)v30;
        qmakepath((unsigned int)v101, 4096, (_DWORD)v31, (unsigned int)"*.clt", 0, v28);
        v99 = 0;
        v100 = 0;
        for ( k = qfindfirst(v101, v97, 0); !k; k = qfindnext(v97) )
        {
          src = nullptr;
          *(_OWORD *)n = 0;
          if ( (unsigned __int8)sub_8B6EB0(&src, v98) )
          {
            v33 = n[0];
            v34 = nullptr;
            if ( n[0] )
            {
              v34 = (void *)qalloc_or_throw(n[0]);
              memcpy(v34, src, v33);
            }
            v35 = v92;
            v36 = (char *)v91;
            if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)(v92 + 1) )
            {
              v91 = (void *)qvector_reserve(&v91, v91, v92 + 1, 24);
              v35 = v92;
              v36 = (char *)v91;
            }
            v37 = &v36[24 * v35];
            *(_QWORD *)v37 = v34;
            *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
            *(_QWORD *)&v92 = v92 + 1;
          }
          if ( src )
          {
            n[0] = 0;
            qfree(src);
          }
        }
        ++v29;
        qfindclose(v97);
      }
      while ( v29 != v83 );
    }
  }
  v39 = (char *)ptr;
  if ( ptr )
  {
    v40 = v94[0];
    if ( v94[0] )
    {
      v41 = 0;
      do
      {
        v42 = &v39[24 * v41];
        v43 = *(void **)v42;
        if ( *(_QWORD *)v42 )
        {
          *((_QWORD *)v42 + 1) = 0;
          qfree(v43);
          v39 = (char *)ptr;
        }
        ++v41;
      }
      while ( v40 != v41 );
    }
    v94[0] = 0;
    qfree(v39);
  }
LABEL_57:
  v44 = (char *)v91;
  v45 = (const void **)((char *)v91 + 24 * v92);
  if ( v45 != v91 )
  {
    v46 = (const void **)v91;
    while ( 2 )
    {
      while ( 1 )
      {
        ptr = nullptr;
        *(_OWORD *)v94 = 0;
        v47 = (size_t)v46[1];
        if ( v47 )
          break;
LABEL_59:
        v46 += 3;
        if ( v45 == v46 )
          goto LABEL_84;
      }
      ptr = (void *)qalloc_or_throw(v46[1]);
      v94[1] = v47;
      memcpy(ptr, *v46, v47);
      v94[0] = v47;
      v48 = (char *)ptr;
      if ( v47 != 1 )
      {
        v49 = v47 - 1;
        v50 = (char *)ptr + v47 - 1;
        v51 = v50;
        if ( ptr < v50 )
        {
          while ( *(v51 - 1) == 32 )
          {
            if ( --v51 == ptr )
              goto LABEL_103;
          }
          v49 = v51 - (_BYTE *)ptr;
          if ( v51 != ptr )
            goto LABEL_67;
LABEL_103:
          if ( !ptr )
            goto LABEL_72;
          v94[0] = 0;
          qfree(ptr);
          ptr = nullptr;
          v53 = v94[0];
          v94[1] = 0;
          if ( v94[0] <= 1 )
            goto LABEL_59;
          v48 = nullptr;
LABEL_71:
          v50 = &v48[v53 - 1];
          if ( v48 < v50 )
          {
LABEL_72:
            v54 = v48;
            while ( *v54 == 32 )
            {
              if ( ++v54 == v50 )
              {
                if ( v48 >= v54 )
                  goto LABEL_76;
                *v48 = *v54;
                v68 = (char *)ptr;
                goto LABEL_99;
              }
            }
            if ( v48 >= v54 )
              goto LABEL_76;
            v69 = v50 - v54;
            v70 = v69 + 1;
            memmove(v48, v54, v69 + 1);
            v71 = ptr;
            v68 = (char *)ptr;
            if ( v69 )
            {
              v72 = v94[0];
              if ( v94[0] < v70 )
              {
                if ( v94[1] < v70 )
                {
                  ptr = (void *)qvector_reserve(&ptr, ptr, v69 + 1, 1);
                  v68 = (char *)ptr;
                  v72 = v94[0];
                }
                memset(&v68[v72], 0, v70 - v72);
                v94[0] = v69 + 1;
                v71 = ptr;
              }
              else if ( v70 != v94[0] )
              {
                v94[0] = v69 + 1;
              }
              v71[v69] = 0;
              v48 = (char *)ptr;
              if ( v94[0] <= 1 )
                goto LABEL_82;
              goto LABEL_76;
            }
LABEL_99:
            if ( v68 )
            {
              v94[0] = 0;
              qfree(v68);
              ptr = nullptr;
              v94[1] = 0;
            }
            v48 = (char *)ptr;
            if ( v94[0] <= 1 )
              goto LABEL_59;
          }
LABEL_76:
          v55 = sub_8B7120(v87, v48, sub_7A9730);
          v56 = v94[0];
          if ( !v55 )
          {
            src = nullptr;
            *(_OWORD *)n = 0;
            sub_35A790((char **)&src);
            v76 = haystack;
            if ( n[0] )
              LODWORD(v76) = (_DWORD)src;
            sub_747B60(a1, (unsigned int)&unk_22D5D2E, (_DWORD)v76, v73, v74, v75, v82, v83, (_DWORD)p_ptr);
            if ( src )
            {
              n[0] = 0;
              qfree(src);
            }
            if ( ptr )
            {
              v94[0] = 0;
              qfree(ptr);
            }
            v77 = (char *)v91;
            if ( v91 )
            {
              v78 = v92;
              if ( (_QWORD)v92 )
              {
                v79 = 0;
                do
                {
                  v80 = &v77[24 * v79];
                  v81 = *(void **)v80;
                  if ( *(_QWORD *)v80 )
                  {
                    *((_QWORD *)v80 + 1) = 0;
                    qfree(v81);
                    v77 = (char *)v91;
                  }
                  ++v79;
                }
                while ( v78 != v79 );
              }
              *(_QWORD *)&v92 = 0;
              qfree(v77);
            }
            goto LABEL_128;
          }
          v57 = nullptr;
          if ( v94[0] )
          {
            v57 = (void *)qalloc_or_throw(v94[0]);
            memcpy(v57, ptr, v56);
          }
          v58 = a6[10];
          v59 = a6[9];
          if ( a6[11] < (unsigned __int64)(v58 + 1) )
          {
            v59 = qvector_reserve(a6 + 9, v59, v58 + 1, 24);
            a6[9] = v59;
            v58 = a6[10];
          }
          v60 = v59 + 24 * v58;
          *(_QWORD *)v60 = v57;
          *(__m128i *)(v60 + 8) = _mm_unpacklo_epi64((__m128i)v56, (__m128i)v56);
          v48 = (char *)ptr;
          ++a6[10];
        }
        else
        {
LABEL_67:
          v52 = v49 + 1;
          if ( v47 < v49 + 1 )
          {
            if ( v94[1] < v52 )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v49 + 1, 1);
              v47 = v94[0];
              v48 = (char *)ptr;
            }
            memset(&v48[v47], 0, v52 - v47);
            v94[0] = v49 + 1;
            v51 = (char *)ptr + v49;
          }
          else if ( v47 != v49 + 1 )
          {
            v94[0] = v49 + 1;
          }
          *v51 = 0;
          v53 = v94[0];
          v48 = (char *)ptr;
          if ( v94[0] > 1 )
            goto LABEL_71;
        }
      }
LABEL_82:
      if ( !v48 )
        goto LABEL_59;
      v94[0] = 0;
      v46 += 3;
      qfree(v48);
      if ( v45 == v46 )
      {
LABEL_84:
        v44 = (char *)v91;
        break;
      }
      continue;
    }
  }
  if ( v44 )
  {
    v61 = v92;
    if ( (_QWORD)v92 )
    {
      v62 = 0;
      v63 = v44;
      do
      {
        v64 = &v63[24 * v62];
        v65 = *(void **)v64;
        if ( *(_QWORD *)v64 )
        {
          *((_QWORD *)v64 + 1) = 0;
          qfree(v65);
          v63 = (char *)v91;
        }
        ++v62;
      }
      while ( v61 != v62 );
      v44 = v63;
    }
    *(_QWORD *)&v92 = 0;
    qfree(v44);
  }
LABEL_93:
  sub_5AAC40((_QWORD *)qword_2CCB598);
  v66 = 0;
LABEL_94:
  if ( s1 )
  {
    *(_QWORD *)&v90 = 0;
    qfree(s1);
  }
  return v66;
}
