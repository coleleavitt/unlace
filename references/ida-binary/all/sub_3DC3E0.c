unsigned __int64 __fastcall sub_3DC3E0(const char **a1, __int64 a2)
{
  const char *v2; // r13
  size_t v4; // r14
  size_t v5; // r15
  const char *v6; // rsi
  const char *v7; // rdx
  const char *v8; // rax
  const char *v9; // r15
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rsi
  size_t v13; // rax
  char *v14; // r13
  size_t v15; // r14
  size_t v16; // r15
  __int64 v17; // rsi
  const char *v18; // rdx
  const char *v19; // rax
  const char *v20; // r15
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rsi
  char *v24; // r12
  const char *v25; // r15
  size_t v26; // rax
  size_t v27; // r13
  size_t v28; // r14
  __int64 v29; // rsi
  unsigned __int64 v30; // r15
  const char *v31; // rax
  unsigned __int64 v32; // r12
  const char *v33; // r14
  const char *v34; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  size_t v38; // r14
  __int64 v39; // r13
  size_t v40; // r15
  char *v41; // rsi
  __int64 v42; // rax
  const char *v43; // r15
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  const char *v47; // [rsp+8h] [rbp-78h]
  size_t v48; // [rsp+8h] [rbp-78h]
  const char *v49; // [rsp+8h] [rbp-78h]
  const char *v50; // [rsp+8h] [rbp-78h]
  char *s; // [rsp+10h] [rbp-70h] BYREF
  __int128 v52; // [rsp+18h] [rbp-68h]
  char *v53; // [rsp+30h] [rbp-50h] BYREF
  __int128 v54; // [rsp+38h] [rbp-48h]
  unsigned __int64 v55; // [rsp+48h] [rbp-38h]

  v2 = *(const char **)(a2 + 80);
  v55 = __readfsqword(0x28u);
  s = nullptr;
  v52 = 0;
  if ( v2 )
  {
    v47 = a1[1];
    v4 = strlen(v2);
    v5 = v4;
    if ( v47 )
    {
      --v47;
      v5 = (size_t)&v47[v4];
    }
    v6 = *a1;
    v7 = (const char *)(v5 + 1);
    if ( (unsigned __int64)a1[2] < v5 + 1 )
    {
      v46 = qvector_reserve(a1, v6, v7, 1);
      *a1 = (const char *)v46;
      v7 = (const char *)(v5 + 1);
      v6 = (const char *)v46;
    }
    a1[1] = v7;
    v6[v5] = 0;
    memmove((void *)&v47[(_QWORD)*a1], v2, v4);
  }
  v8 = a1[1];
  v9 = v8;
  if ( !v8 )
  {
    v12 = (__int64)*a1;
    v11 = 3;
    v10 = 2;
    if ( (unsigned __int64)a1[2] >= 3 )
      goto LABEL_9;
LABEL_36:
    v37 = qvector_reserve(a1, v12, v11, 1);
    *a1 = (const char *)v37;
    v12 = v37;
    goto LABEL_9;
  }
  v10 = (__int64)(v8 + 1);
  v11 = (__int64)(v8 + 2);
  v12 = (__int64)*a1;
  v9 = v8 - 1;
  if ( a1[2] < v8 + 2 )
    goto LABEL_36;
LABEL_9:
  a1[1] = (const char *)v11;
  *(_BYTE *)(v12 + v10) = 0;
  *(_WORD *)&(*a1)[(_QWORD)v9] = 8224;
  if ( *(_DWORD *)(a2 + 56) != 4 )
  {
    v13 = *(_QWORD *)(a2 + 128);
    v48 = v13;
    if ( v13 )
    {
      v38 = v13 - 1;
      if ( v13 != 1 )
      {
        v39 = v52;
        v40 = v13 - 1;
        if ( (_QWORD)v52 )
        {
          v39 = v52 - 1;
          v40 = v38 + v52 - 1;
          v48 = v38 + v52;
        }
        v41 = s;
        if ( *((_QWORD *)&v52 + 1) < v48 )
        {
          s = (char *)qvector_reserve(&s, s, v48, 1);
          v41 = s;
        }
        *(_QWORD *)&v52 = v48;
        v41[v40] = 0;
        memcpy(&s[v39], *(const void **)(a2 + 120), v38);
      }
    }
  }
  v14 = s;
  if ( s )
  {
    v49 = a1[1];
    v15 = strlen(s);
    v16 = v15;
    if ( v49 )
    {
      --v49;
      v16 = (size_t)&v49[v15];
    }
    v17 = (__int64)*a1;
    v18 = (const char *)(v16 + 1);
    if ( (unsigned __int64)a1[2] < v16 + 1 )
    {
      v45 = qvector_reserve(a1, v17, v18, 1);
      *a1 = (const char *)v45;
      v18 = (const char *)(v16 + 1);
      v17 = v45;
    }
    a1[1] = v18;
    *(_BYTE *)(v17 + v16) = 0;
    memmove((void *)&v49[(_QWORD)*a1], v14, v15);
  }
  v19 = a1[1];
  v20 = v19;
  if ( !v19 )
  {
    v23 = (__int64)*a1;
    v22 = 3;
    v21 = 2;
    if ( (unsigned __int64)a1[2] >= 3 )
      goto LABEL_19;
LABEL_34:
    v36 = qvector_reserve(a1, v23, v22, 1);
    *a1 = (const char *)v36;
    v23 = v36;
    goto LABEL_19;
  }
  v21 = (__int64)(v19 + 1);
  v22 = (__int64)(v19 + 2);
  v23 = (__int64)*a1;
  v20 = v19 - 1;
  if ( a1[2] < v19 + 2 )
    goto LABEL_34;
LABEL_19:
  a1[1] = (const char *)v22;
  *(_BYTE *)(v23 + v21) = 0;
  *(_WORD *)&(*a1)[(_QWORD)v20] = 8224;
  v53 = nullptr;
  v54 = 0;
  if ( (unsigned __int8)print_tinfo(&v53, 0, 0, 0, 0, a2 + 72, 0, 0) )
  {
    v24 = v53;
    if ( v53 )
    {
      v25 = a1[1];
      v50 = v25;
      v26 = strlen(v53);
      v27 = v26;
      v28 = v26;
      if ( v25 )
      {
        v43 = v25 - 1;
        v29 = (__int64)*a1;
        v28 = (size_t)&v43[v26];
        v50 = v43;
        v30 = (unsigned __int64)&v43[v26 + 1];
        if ( (unsigned __int64)a1[2] >= v30 )
          goto LABEL_23;
      }
      else
      {
        v29 = (__int64)*a1;
        v30 = v26 + 1;
        if ( (unsigned __int64)a1[2] >= v26 + 1 )
        {
LABEL_23:
          a1[1] = (const char *)v30;
          *(_BYTE *)(v29 + v28) = 0;
          memmove((void *)&v50[(_QWORD)*a1], v24, v27);
          goto LABEL_24;
        }
      }
      v44 = qvector_reserve(a1, v29, v30, 1);
      *a1 = (const char *)v44;
      v29 = v44;
      goto LABEL_23;
    }
  }
LABEL_24:
  v31 = a1[1];
  v32 = 2;
  v33 = v31;
  if ( v31 )
  {
    v32 = (unsigned __int64)(v31 + 1);
    v33 = v31 - 1;
  }
  v34 = *a1;
  if ( (unsigned __int64)a1[2] < v32 )
  {
    v42 = qvector_reserve(a1, v34, v32, 1);
    *a1 = (const char *)v42;
    v34 = (const char *)v42;
  }
  a1[1] = (const char *)v32;
  v33[(_QWORD)v34] = 10;
  v33[(_QWORD)*a1 + 1] = 0;
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53, v34);
  }
  if ( s )
  {
    *(_QWORD *)&v52 = 0;
    qfree(s, v34);
  }
  return v55 - __readfsqword(0x28u);
}
