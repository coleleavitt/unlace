__int64 __fastcall sub_6D7240(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  const char *v5; // rbx
  size_t v6; // rbp
  const char *v7; // r15
  char *v8; // rax
  char *v9; // r15
  const char *v10; // r14
  unsigned int v11; // edi
  char v12; // r12
  signed __int64 v13; // r12
  char *v14; // r12
  int v15; // r13d
  char *v16; // rax
  unsigned int v17; // ebx
  char *v19; // rbp
  char *v20; // r15
  __int64 v21; // r13
  __int64 v22; // r12
  unsigned __int64 v23; // rdx
  size_t v24; // r9
  _BYTE *v25; // rsi
  void *v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // r12
  char *v31; // rdx
  char *v32; // rax
  char *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __m128i *v36; // rdi
  char *v37; // rdx
  __int64 v38; // rsi
  __m128i v39; // xmm0
  char *v41; // rbp
  unsigned int v42; // edi
  char v43; // r12
  char *v44; // r15
  int v45; // r13d
  int v46; // eax
  __int64 v47; // rax
  _QWORD *v48; // rsi
  char *v49; // rbp
  const char *v50; // r12
  unsigned int v51; // edi
  char v52; // r13
  const char *v53; // rsi
  const char *v54; // r9
  unsigned int v55; // edi
  char v56; // r13
  char *v57; // rax
  int v58; // eax
  unsigned __int64 v60; // [rsp+8h] [rbp-D8h]
  char *v61; // [rsp+8h] [rbp-D8h]
  size_t v63; // [rsp+18h] [rbp-C8h]
  unsigned __int64 v64; // [rsp+18h] [rbp-C8h]
  const char *v65; // [rsp+18h] [rbp-C8h]
  __int64 v66; // [rsp+20h] [rbp-C0h]
  void *v67; // [rsp+28h] [rbp-B8h] BYREF
  __int128 v68; // [rsp+30h] [rbp-B0h]
  void *ptr; // [rsp+48h] [rbp-98h] BYREF
  __int128 v70; // [rsp+50h] [rbp-90h]
  void *v71; // [rsp+68h] [rbp-78h] BYREF
  __int128 v72; // [rsp+70h] [rbp-70h]
  char *s1; // [rsp+88h] [rbp-58h] BYREF
  __int128 v74; // [rsp+90h] [rbp-50h]
  unsigned __int64 v75; // [rsp+A0h] [rbp-40h]

  v5 = nullptr;
  v6 = *(_QWORD *)(a2 + 8);
  v75 = __readfsqword(0x28u);
  v68 = 0;
  v67 = nullptr;
  if ( v6 )
  {
    *((_QWORD *)&v68 + 1) = v6;
    v67 = (void *)qalloc_or_throw(v6, (const char *)a2);
    memcpy(v67, *(const void **)a2, v6);
    *(_QWORD *)&v68 = v6;
    v5 = (const char *)v67;
  }
  ptr = nullptr;
  v7 = v5;
  v70 = 0;
  while ( 1 )
  {
    v8 = strchr(v7, 60);
    v9 = v8;
    if ( !v8 )
      break;
    if ( v5 == v8 )
    {
      v10 = v5;
      s1 = nullptr;
      v74 = 0;
LABEL_9:
      v14 = nullptr;
LABEL_10:
      v15 = 1;
      do
      {
        v16 = strpbrk(v9 + 1, "<>");
        v9 = v16;
        if ( !v16 )
        {
          if ( v14 )
          {
            *(_QWORD *)&v74 = 0;
            qfree(v14);
          }
          if ( v5 )
          {
            v17 = -1;
            goto LABEL_17;
          }
          goto LABEL_28;
        }
        v15 = v15 + 2 * (*v16 == 60) - 1;
      }
      while ( v15 );
      v7 = v16 + 1;
      v27 = v10 - v5;
      v28 = v16 + 1 - v5;
      if ( v14 )
      {
        *(_QWORD *)&v74 = 0;
        qfree(v14);
        v28 = v7 - v5;
        if ( v5 == v7 )
          break;
      }
      else if ( v5 == v7 )
      {
        break;
      }
      if ( v27 < v28 )
      {
        v30 = *((_QWORD *)&v70 + 1);
        v29 = v70;
        if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v70 + 1) )
        {
          v60 = v28;
          v34 = qvector_reserve(&ptr, 0, v70 + 1, 24);
          v35 = *((_QWORD *)&v70 + 1);
          *((_QWORD *)&v70 + 1) = v30;
          v36 = (__m128i *)ptr;
          v37 = (char *)v34;
          v38 = v70 - 1;
          if ( (__int64)v70 - 1 >= 0 )
          {
            do
            {
              v39 = _mm_loadu_si128(v36);
              v34 += 24;
              v36 = (__m128i *)((char *)v36 + 24);
              *(__m128i *)(v34 - 24) = v39;
              *(_QWORD *)(v34 - 8) = v36[-1].m128i_i64[1];
            }
            while ( v38-- != 0 );
            v36 = (__m128i *)ptr;
          }
          v66 = v35;
          v64 = v60;
          v61 = v37;
          qfree(v36);
          v31 = v61;
          v29 = v70;
          v28 = v64;
          ptr = v61;
          *((_QWORD *)&v70 + 1) = v66;
        }
        else
        {
          v31 = (char *)ptr;
        }
        a5 = 0;
        v32 = &v31[24 * v29];
        *(_OWORD *)v32 = 0;
        *((_DWORD *)v32 + 4) = 0;
        *(_QWORD *)&v70 = v70 + 1;
        *(_QWORD *)v32 = v27;
        *((_QWORD *)v32 + 1) = v28;
      }
    }
    else
    {
      v10 = v8;
      do
      {
        v11 = *(v10 - 1);
        v12 = *(v10 - 1);
        if ( v11 > 0x7F || !isalnum(v11) && v12 != 95 && v12 != 36 )
          break;
        --v10;
      }
      while ( v5 != v10 );
      a4 = 0.0;
      s1 = nullptr;
      v74 = 0;
      v13 = v9 - v10;
      if ( v9 == v10 )
        goto LABEL_9;
      v33 = nullptr;
      if ( v13 != -1 )
      {
        s1 = (char *)qvector_reserve(&s1, 0, v13 + 1, 1);
        v33 = s1;
      }
      *(_QWORD *)&v74 = v13 + 1;
      memmove(v33, v10, v9 - v10);
      s1[v13] = 0;
      v14 = s1;
      if ( !(_QWORD)v74 || strcmp(s1, "operator") )
        goto LABEL_10;
      v7 = v9 + 1;
      if ( v14 )
      {
        *(_QWORD *)&v74 = 0;
        qfree(v14);
      }
      if ( v5 == v7 )
        break;
    }
  }
LABEL_28:
  v19 = (char *)ptr;
  v20 = (char *)ptr + 24 * v70;
  if ( ptr != v20 )
  {
    do
    {
      v21 = *((_QWORD *)v19 + 1);
      v22 = *(_QWORD *)v19;
      v23 = v21 + 1;
      v24 = v21 - *(_QWORD *)v19;
      if ( (unsigned __int64)v68 < v21 + 1 )
      {
        v25 = v67;
        if ( *((_QWORD *)&v68 + 1) < v23 )
        {
          v63 = v21 - *(_QWORD *)v19;
          v26 = (void *)qvector_reserve(&v67, v67, v23, 1);
          v24 = v63;
          v23 = v21 + 1;
          v67 = v26;
          v25 = v26;
        }
        *(_QWORD *)&v68 = v23;
        v25[v21] = 0;
      }
      v19 += 24;
      memset((char *)v67 + v22, 95, v24);
    }
    while ( v20 != v19 );
  }
  v71 = nullptr;
  v72 = 0;
  v41 = strchr(v5, 58);
  while ( v41 )
  {
    if ( v41[1] == 58 )
    {
      while ( v5 != v41 )
      {
        v42 = *(v41 - 1);
        v43 = *(v41 - 1);
        if ( v42 > 0x7F || !isalnum(v42) && v43 != 95 && v43 != 36 )
          break;
        --v41;
      }
      v44 = sub_6D64E0(v41);
      if ( *v44 == 126 )
      {
        v44 = sub_6D64E0(v44 + 1);
        if ( v44 == v41 )
          goto LABEL_105;
        v46 = 5;
LABEL_74:
        s1 = (char *)(v41 - v5);
        *(_QWORD *)&v74 = v44 - v5;
        DWORD2(v74) = v46;
        sub_6D6620(a1, (__m128i **)&ptr, (const __m128i *)&s1);
        v47 = v72;
        v48 = v71;
        v49 = s1;
        if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
        {
          v71 = (void *)qvector_reserve(&v71, v71, v72 + 1, 8);
          v48 = v71;
          v47 = v72;
        }
        v48[v47] = v49;
        *(_QWORD *)&v72 = v72 + 1;
      }
      else
      {
        if ( *v44 == 40 )
        {
          if ( v44 == v41 )
            goto LABEL_105;
          v50 = v44;
          while ( 1 )
          {
            v51 = *(v50 - 1);
            v52 = *(v50 - 1);
            if ( v51 > 0x7F || !isalnum(v51) && v52 != 95 && v52 != 36 )
              break;
            if ( --v50 == v41 )
            {
              v45 = 1;
              goto LABEL_66;
            }
          }
          v45 = 1;
          if ( v44 != v50 && v41 != v50 && *(v50 - 1) == 58 && v41 != v50 - 1 && *(v50 - 2) == 58 )
          {
            v53 = v50 - 2;
            if ( v50 - 2 != v41 )
            {
              v54 = v50 - 2;
              while ( 1 )
              {
                v55 = *(v54 - 1);
                v56 = *(v54 - 1);
                if ( v55 > 0x7F )
                  break;
                v65 = v54;
                v58 = isalnum(v55);
                v54 = v65;
                if ( !v58 && v56 != 95 && v56 != 36 )
                  break;
                v54 = v65 - 1;
                if ( v65 - 1 == v41 )
                  goto LABEL_92;
              }
              v45 = 1;
              if ( v53 == v54 )
                goto LABEL_66;
LABEL_92:
              v45 = 1;
              if ( v53 - v54 == v44 - v50 && !strncmp(v54, v50, v53 - v54) )
              {
                v46 = 3;
                goto LABEL_74;
              }
            }
          }
        }
        else
        {
          v45 = 0;
          if ( (unsigned __int64)(v44 - v41) > 7 && !strncmp(v44 - 8, "operator", 8u) )
          {
            v57 = strchr(v44, 40);
            if ( v57 )
            {
              v44 = v57;
              v45 = 1;
            }
            else
            {
              v45 = 1;
              v44 += strlen(v44);
            }
          }
          if ( v44 == v41 )
          {
LABEL_105:
            if ( !under_debugger )
              interr(3407);
            BUG();
          }
        }
LABEL_66:
        s1 = (char *)(v41 - v5);
        *(_QWORD *)&v74 = v44 - v5;
        DWORD2(v74) = v45;
        sub_6D6620(a1, (__m128i **)&ptr, (const __m128i *)&s1);
      }
      v41 = strchr(v44, 58);
    }
    else
    {
      v41 = strchr(v41 + 1, 58);
    }
  }
  sub_6D68A0(a1, (__int64 *)a2, (__int64 **)&ptr, (__int64)&v71, 0.0, a4, a5);
  v17 = v70;
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
LABEL_17:
  if ( ptr )
  {
    *(_QWORD *)&v70 = 0;
    qfree(ptr);
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  return v17;
}

