unsigned __int64 __fastcall sub_3ACCA0(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // r15d
  int v13; // r12d
  const char *v14; // r13
  __int64 v15; // rax
  _BYTE *v16; // rax
  size_t v18; // r15
  __int64 v19; // rax
  const char *v20; // rsi
  int v21; // eax
  __int64 i; // rdx
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // r12d
  int v34; // r14d
  __int64 v35; // r15
  char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  _DWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r15
  _QWORD *v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rsi
  bool v48; // cf
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rsi
  _QWORD *v52; // rdi
  __int64 v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // [rsp+10h] [rbp-B0h]
  _QWORD *v57; // [rsp+20h] [rbp-A0h]
  __int64 v58; // [rsp+28h] [rbp-98h]
  __int64 v59; // [rsp+30h] [rbp-90h] BYREF
  __int128 v60; // [rsp+38h] [rbp-88h]
  void *v61; // [rsp+50h] [rbp-70h] BYREF
  __int128 v62; // [rsp+58h] [rbp-68h]
  __int64 v63; // [rsp+70h] [rbp-50h] BYREF
  __int64 v64; // [rsp+78h] [rbp-48h]
  unsigned __int64 v65; // [rsp+88h] [rbp-38h]

  v1 = a1[2];
  v2 = a1[4];
  v65 = __readfsqword(0x28u);
  v58 = *(_QWORD *)(v1 + 64);
  v57 = *(_QWORD **)(v58 + 8);
  v56 = v57[58];
  v4 = (int)v56 + 1;
  if ( v4 != v2 )
  {
    LODWORD(v64) = 0;
    v63 = 0xFFFFFFFFLL;
    if ( v4 >= v2 )
    {
      v25 = a1[3];
      v26 = a1[5];
      v27 = (__int64)(a1 + 3);
      if ( (unsigned __int64)&v63 < v25 || (unsigned __int64)&v63 >= v25 + 12 * v26 )
      {
        if ( v26 < v4 )
        {
          v40 = qvector_reserve(v27, 0, (int)v56 + 1, 12);
          v41 = a1[4];
          v42 = a1[5];
          a1[5] = v26;
          v43 = (_QWORD *)a1[3];
          v44 = v40;
          v45 = v41 - 1;
          if ( v45 >= 0 )
          {
            v46 = v40;
            do
            {
              v47 = *v43;
              v46 += 12;
              v43 = (_QWORD *)((char *)v43 + 12);
              *(_QWORD *)(v46 - 12) = v47;
              *(_DWORD *)(v46 - 4) = *((_DWORD *)v43 - 1);
              v48 = v45-- == 0;
            }
            while ( !v48 );
            v43 = (_QWORD *)a1[3];
          }
          qfree((__int64)v43);
          a1[3] = v44;
          v2 = a1[4];
          a1[5] = v42;
        }
        v31 = 12 * v2;
        if ( v2 < v4 )
        {
          do
          {
            v32 = a1[3];
            ++v2;
            *(_QWORD *)(v32 + v31) = v63;
            *(_DWORD *)(v32 + v31 + 8) = v64;
            v31 += 12;
          }
          while ( v4 != v2 );
        }
      }
      else
      {
        if ( v26 < v4 )
        {
          v49 = qvector_reserve(v27, 0, (int)v56 + 1, 12);
          v50 = a1[4];
          v51 = a1[5];
          a1[5] = v26;
          v52 = (_QWORD *)a1[3];
          v53 = v49;
          v54 = v50 - 1;
          if ( v54 >= 0 )
          {
            do
            {
              v55 = *v52;
              v49 += 12;
              v52 = (_QWORD *)((char *)v52 + 12);
              *(_QWORD *)(v49 - 12) = v55;
              *(_DWORD *)(v49 - 4) = *((_DWORD *)v52 - 1);
              v48 = v54-- == 0;
            }
            while ( !v48 );
            v52 = (_QWORD *)a1[3];
          }
          qfree((__int64)v52);
          a1[3] = v53;
          v2 = a1[4];
          a1[5] = v51;
        }
        v28 = 12 * v2;
        if ( v2 < v4 )
        {
          do
          {
            ++v2;
            v29 = v28 + a1[3];
            v28 += 12;
            *(_QWORD *)v29 = 0xFFFFFFFFLL;
            *(_DWORD *)(v29 + 8) = 0;
          }
          while ( v4 != v2 );
        }
      }
    }
    a1[4] = v4;
    v2 = (int)v56 + 1;
  }
  v5 = a1[7];
  if ( v5 != v2 )
  {
    v61 = nullptr;
    if ( v2 < v5 )
    {
      v8 = v2;
      do
      {
        ++v8;
        clear_tinfo_t();
      }
      while ( v8 < v5 );
      a1[7] = v2;
    }
    else
    {
      v6 = a1[6];
      v7 = a1[8];
      if ( (unsigned __int64)&v61 < v6 || (unsigned __int64)&v61 >= v6 + 8 * v7 )
      {
        if ( v7 < v2 )
        {
          a1[6] = qvector_reserve((__int64)(a1 + 6), v6, v2, 8);
          v5 = a1[7];
        }
        while ( v5 < v2 )
        {
          *(_QWORD *)(a1[6] + 8 * v5) = 0;
          copy_tinfo_t();
          ++v5;
        }
        a1[7] = v2;
      }
      else
      {
        v63 = 0;
        copy_tinfo_t();
        if ( a1[8] < v2 )
          a1[6] = qvector_reserve((__int64)(a1 + 6), a1[6], v2, 8);
        v30 = a1[7];
        if ( v30 < v2 )
        {
          do
          {
            *(_QWORD *)(a1[6] + 8 * v30) = 0;
            copy_tinfo_t();
            ++v30;
          }
          while ( v30 != v2 );
        }
        a1[7] = v2;
        clear_tinfo_t();
      }
    }
    clear_tinfo_t();
  }
  sub_36D720(&v63, (__int64)v57, 0);
  copy_tinfo_t();
  v9 = 0;
  clear_tinfo_t();
  if ( (int)v56 <= 0 )
  {
    if ( *(int *)(v58 + 152) > 0 )
      goto LABEL_19;
    if ( !(_DWORD)v56 )
    {
      v13 = 0;
LABEL_26:
      *(_DWORD *)a1[3] = v13;
      return v65 - __readfsqword(0x28u);
    }
LABEL_84:
    v61 = nullptr;
    v13 = 0;
    v60 = 0;
    v20 = s1;
    v59 = 0;
    v62 = 0;
    goto LABEL_34;
  }
  do
  {
    sub_13D280(v57, v9);
    copy_tinfo_t();
    v10 = v9++;
  }
  while ( v10 != (_DWORD)v56 - 1 );
  if ( *(int *)(v58 + 152) <= 0 )
    goto LABEL_84;
LABEL_19:
  v11 = 0;
  while ( 1 )
  {
    v12 = v11;
    v13 = v11;
    v14 = s1;
    v15 = *(_QWORD *)(v58 + 128) + 32 * v11;
    if ( *(_QWORD *)(v15 + 8) )
      v14 = *(const char **)v15;
    v16 = (_BYTE *)tag_skipcodes();
    if ( *v16 != 47 || v16[1] != 47 )
      break;
    if ( *(_DWORD *)(v58 + 152) <= (int)++v11 )
    {
      v13 = v12 + 1;
      break;
    }
  }
  if ( !(_DWORD)v56 )
    goto LABEL_26;
  v61 = nullptr;
  v59 = 0;
  v60 = 0;
  v62 = 0;
  if ( v14 )
  {
    v18 = strlen(v14);
    v61 = (void *)qvector_reserve((__int64)&v61, 0, v18 + 1, 1);
    *(_QWORD *)&v62 = v18 + 1;
    memmove(v61, v14, v18);
    *((_BYTE *)v61 + v18) = 0;
    v19 = v62;
    if ( (unsigned __int64)v62 > 1 )
    {
      tag_remove();
      v19 = v62;
    }
    v20 = s1;
    if ( v19 )
      v20 = (const char *)v61;
  }
  else
  {
    v20 = s1;
  }
LABEL_34:
  sub_38A240(&v59, v20);
  if ( (_QWORD)v60 )
  {
    v21 = 0;
    for ( i = 0; (unsigned __int64)v21 < a1[4]; i = v21 )
    {
      v23 = 12 * i;
      *(_DWORD *)(a1[3] + 12 * i) = v13;
      if ( v21 > 0 )
      {
        v24 = (unsigned int)(v21 - 1);
        if ( v24 < (unsigned __int64)v60 )
          *(_DWORD *)(a1[3] + v23 + 4) = *(_DWORD *)(v59 + 4 * v24);
      }
      ++v21;
    }
  }
  else
  {
    *(_DWORD *)a1[3] = v13;
    v33 = v13 + 1;
    if ( *(_DWORD *)(v58 + 152) > v33 && (int)v56 > 0 )
    {
      v34 = 0;
      v35 = 32LL * v33;
      do
      {
        LODWORD(v63) = 0;
        v36 = (char *)s1;
        v37 = v35 + *(_QWORD *)(v58 + 128);
        if ( *(_QWORD *)(v37 + 8) )
          v36 = *(char **)v37;
        sub_38A790(v58, v36, 0, 0, (__int64)&v63, 0, 0);
        if ( (_DWORD)v63 == 2 )
        {
          v38 = sub_13D280(v57, v34);
          if ( v64 == v38 )
          {
            v39 = (_DWORD *)(a1[3] + 12LL * ++v34);
            *v39 = v33;
            v39[1] = 8;
          }
        }
        ++v33;
        v35 += 32;
      }
      while ( *(_DWORD *)(v58 + 152) > v33 && v34 < (int)v56 );
    }
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree((__int64)v61);
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  return v65 - __readfsqword(0x28u);
}
