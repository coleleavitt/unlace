unsigned __int64 __fastcall sub_2360C0(__m128i *a1, __int64 a2, __int64 *a3)
{
  bool v5; // zf
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  const char *v15; // rsi
  const char *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rsi
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  __m128i v25; // xmm0
  __int64 v26; // r15
  int v27; // r12d
  __int64 v28; // rsi
  char v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  char v33; // r15
  char v34; // dl
  __int64 v35; // rax
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  const char *v40; // rsi
  const char *v41; // rdi
  __int64 v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  _BYTE *v45; // rax
  int v46; // eax
  unsigned int v47; // edx
  unsigned int v48; // eax
  int v49; // eax
  const char *v50; // rsi
  const char *v51; // rdi
  _QWORD *v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rdx
  _QWORD *v59; // rsi
  unsigned __int64 v60; // rcx
  _QWORD *exception; // rdi
  __m128i v62; // [rsp+0h] [rbp-68h] BYREF
  __int64 v63; // [rsp+18h] [rbp-50h]
  __int64 v64; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v65; // [rsp+28h] [rbp-40h]

  v5 = a1->m128i_i64[1] == 0;
  v65 = __readfsqword(0x28u);
  if ( !v5 )
  {
    v7 = a1->m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v8 = *(_QWORD *)v7;
      v9 = *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v9 )
      {
        v17 = a1->m128i_i64[0];
        v7 = 0;
        goto LABEL_21;
      }
      if ( (*(_BYTE *)v9 & 2) == 0 )
      {
        do
        {
          v10 = *(_QWORD *)(a2 + 32);
          if ( *(_QWORD *)(v9 + 56) < v10 )
            goto LABEL_70;
          if ( *(_QWORD *)(v9 + 56) > v10 )
            goto LABEL_18;
          v11 = *(_DWORD *)(v9 + 76);
          if ( *(_DWORD *)(a2 + 52) < v11 )
            goto LABEL_70;
          if ( *(_DWORD *)(a2 + 52) > v11 )
            goto LABEL_18;
          v12 = *(_DWORD *)(a2 + 56);
          v13 = *(_DWORD *)(v9 + 80);
          if ( v12 < v13 )
            goto LABEL_70;
          if ( v13 < v12 )
            goto LABEL_18;
          v14 = lexcompare_tinfo();
          if ( !v14 )
          {
            v15 = s1;
            if ( *(_QWORD *)(v9 + 32) )
              v15 = *(const char **)(v9 + 24);
            v16 = s1;
            if ( *(_QWORD *)(a2 + 8) )
              v16 = *(const char **)a2;
            v14 = strcmp(v16, v15);
          }
          if ( v14 < 0 )
          {
LABEL_70:
            v9 = *(_QWORD *)(v9 + 16);
          }
          else
          {
LABEL_18:
            v7 = v9;
            v9 = *(_QWORD *)(v9 + 8);
          }
        }
        while ( (*(_BYTE *)v9 & 2) == 0 );
        v17 = a1->m128i_i64[0];
        if ( a1->m128i_i64[0] != v7 )
          goto LABEL_21;
        v8 = *(_QWORD *)v7;
      }
    }
    else
    {
      v8 = unk_0;
    }
    if ( (v8 & 2) != 0 )
    {
      v17 = v7;
      v7 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      v43 = *(_QWORD **)(v7 + 8);
      if ( (*(_BYTE *)v43 & 2) != 0 )
      {
        v44 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
        v58 = *v44;
        if ( (*v44 & 2) == 0 && v44[1] == v7 )
        {
          while ( 1 )
          {
            v59 = v44;
            v60 = v58 & 0xFFFFFFFFFFFFFFFCLL;
            v58 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v58 & 2) != 0 )
              break;
            v44 = (_QWORD *)v60;
            if ( *(_QWORD **)(v60 + 8) != v59 )
              goto LABEL_66;
          }
          v17 = v7;
          v7 = v60;
          goto LABEL_21;
        }
      }
      else
      {
        do
        {
          v44 = v43;
          v43 = (_QWORD *)v43[2];
        }
        while ( (*(_BYTE *)v43 & 2) == 0 );
      }
LABEL_66:
      v17 = v7;
      v7 = (unsigned __int64)v44;
    }
    while ( 1 )
    {
LABEL_21:
      v18 = 0;
      if ( v17 )
      {
        v18 = v17;
        if ( a1->m128i_i64[1] )
          v18 = *(_QWORD *)(v17 + 8);
      }
      if ( v7 == v18 || *(_QWORD *)(v7 + 56) <= *(_QWORD *)(a2 + 32) )
        break;
      if ( (*(_QWORD *)v7 & 2) != 0 )
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
      else
      {
        v19 = *(_QWORD *)(v7 + 8);
        if ( (*(_BYTE *)v19 & 2) != 0 )
        {
          v52 = (_QWORD *)(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL);
          v53 = *v52;
          if ( (*v52 & 2) != 0 || v52[1] != v7 )
          {
LABEL_85:
            v7 = (unsigned __int64)v52;
          }
          else
          {
            while ( 1 )
            {
              v7 = v53 & 0xFFFFFFFFFFFFFFFCLL;
              v53 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v53 & 2) != 0 )
                break;
              v54 = v52;
              v52 = (_QWORD *)v7;
              if ( *(_QWORD **)(v7 + 8) != v54 )
                goto LABEL_85;
            }
          }
        }
        else
        {
          do
          {
            v7 = v19;
            v19 = *(_QWORD *)(v19 + 16);
          }
          while ( (*(_BYTE *)v19 & 2) == 0 );
        }
      }
    }
    if ( (*(_BYTE *)(a2 + 56) & 0x10) != 0
      && (*(_BYTE *)(v7 + 80) & 0x10) != 0
      && *(_QWORD *)(a2 + 32) == *(_QWORD *)(v7 + 56)
      && *(_DWORD *)(a2 + 52) == *(_DWORD *)(v7 + 76) )
    {
      return v65 - __readfsqword(0x28u);
    }
  }
  v20 = (_QWORD *)a1->m128i_i64[0];
  v64 = a2;
  if ( !v20 )
  {
    v62.m128i_i64[0] = 0;
    v56 = qalloc();
    v57 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v56, (__m128i)(unsigned __int64)v56);
    if ( !v56 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    memset((void *)v56, 0, 0x70u);
    *(__m128i *)(v56 + 8) = v57;
    *(_QWORD *)v56 = v56 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v56;
    *(_QWORD *)v56 = v56 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v56 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v20 = (_QWORD *)a1->m128i_i64[0];
    goto LABEL_35;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_35:
    v21 = sub_235EA0(a1, (__int64)v20, 1, &v64);
    v22 = v21 + 24;
    goto LABEL_36;
  }
  v33 = 1;
  v21 = *v20 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v21 & 2) != 0 )
  {
    v34 = 1;
    goto LABEL_43;
  }
  while ( 1 )
  {
    v35 = *(_QWORD *)(v21 + 56);
    v22 = v21 + 24;
    if ( *(_QWORD *)(a2 + 32) < v35 )
    {
LABEL_67:
      v45 = *(_BYTE **)(v21 + 8);
      v33 = 1;
      goto LABEL_68;
    }
    if ( *(_QWORD *)(a2 + 32) <= v35 )
    {
      v36 = *(_DWORD *)(a2 + 52);
      if ( *(_DWORD *)(v21 + 76) < v36 )
        goto LABEL_67;
      if ( *(_DWORD *)(v21 + 76) <= v36 )
      {
        v37 = *(_DWORD *)(v21 + 80);
        v38 = *(_DWORD *)(a2 + 56);
        if ( v37 < v38 )
          goto LABEL_67;
        if ( v38 >= v37 )
        {
          v39 = lexcompare_tinfo();
          if ( !v39 )
          {
            v40 = s1;
            if ( *(_QWORD *)(a2 + 8) )
              v40 = *(const char **)a2;
            v41 = s1;
            if ( *(_QWORD *)(v21 + 32) )
              v41 = *(const char **)v22;
            v39 = strcmp(v41, v40);
          }
          if ( v39 < 0 )
            goto LABEL_67;
          v42 = *(_QWORD *)(a2 + 32);
          if ( *(_QWORD *)(v21 + 56) >= v42 )
          {
            if ( *(_QWORD *)(v21 + 56) > v42 )
              break;
            v46 = *(_DWORD *)(a2 + 52);
            if ( *(_DWORD *)(v21 + 76) <= v46 )
            {
              if ( *(_DWORD *)(v21 + 76) < v46 )
                break;
              v47 = *(_DWORD *)(a2 + 56);
              v48 = *(_DWORD *)(v21 + 80);
              if ( v47 >= v48 )
              {
                if ( v48 < v47 )
                  break;
                v49 = lexcompare_tinfo();
                if ( !v49 )
                {
                  v50 = s1;
                  if ( *(_QWORD *)(v21 + 32) )
                    v50 = *(const char **)v22;
                  v51 = s1;
                  if ( *(_QWORD *)(a2 + 8) )
                    v51 = *(const char **)a2;
                  v49 = strcmp(v51, v50);
                }
                if ( v49 >= 0 )
                  break;
              }
            }
          }
        }
      }
    }
    v45 = *(_BYTE **)(v21 + 16);
    v33 = 0;
LABEL_68:
    if ( (*v45 & 2) != 0 )
      goto LABEL_69;
    v21 = (unsigned __int64)v45;
  }
  if ( v21 )
    goto LABEL_36;
LABEL_69:
  v34 = v33;
  v20 = (_QWORD *)v21;
LABEL_43:
  v21 = sub_235EA0(a1, (__int64)v20, v34, &v64);
  v22 = v21 + 24;
LABEL_36:
  if ( a3 )
  {
    v23 = *(_QWORD *)(v22 + 72);
    v24 = *a3;
    v25 = _mm_loadu_si128((const __m128i *)(a3 + 1));
    v26 = a3[3];
    v27 = *((_DWORD *)a3 + 8);
    v28 = *(_QWORD *)(v22 + 64);
    v29 = *((_BYTE *)a3 + 36);
    if ( *(_QWORD *)(v22 + 80) < (unsigned __int64)(v23 + 1) )
    {
      v62 = v25;
      v63 = v24;
      v55 = qvector_reserve(v21 + 88, v28, v23 + 1, 40);
      v23 = *(_QWORD *)(v22 + 72);
      v24 = v63;
      *(_QWORD *)(v22 + 64) = v55;
      v25 = _mm_load_si128(&v62);
      v28 = v55;
    }
    v30 = v28 + 40 * v23;
    *(_QWORD *)v30 = v24;
    *(_QWORD *)(v30 + 24) = v26;
    *(_DWORD *)(v30 + 32) = v27;
    *(_BYTE *)(v30 + 36) = v29;
    *(__m128i *)(v30 + 8) = v25;
    ++*(_QWORD *)(v22 + 72);
    v31 = a1[1].m128i_i64[0] + 1;
    a1[1].m128i_i64[0] = v31;
    *(_QWORD *)(*(_QWORD *)(v22 + 64) + 40LL * *(_QWORD *)(v22 + 72) - 40) = v31;
  }
  return v65 - __readfsqword(0x28u);
}
