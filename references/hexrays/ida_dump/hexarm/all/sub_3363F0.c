_QWORD *__fastcall sub_3363F0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rbp
  void *v8; // rax
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // r15
  size_t v13; // r8
  const void *v14; // r9
  void *v15; // rax
  char v16; // al
  int v17; // edx
  char v18; // al
  int v19; // eax
  void *v20; // r13
  __int64 v21; // rdi
  void *v22; // rbp
  void *v23; // r13
  __int64 *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // rbp
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rdi
  void *v34; // rax
  __int64 v35; // rbp
  void *v36; // r14
  size_t v37; // r15
  __int64 v38; // rbp
  __int64 v39; // rcx
  size_t v40; // r15
  void *v41; // rax
  void *v42; // rax
  size_t na; // [rsp+0h] [rbp-118h]
  size_t n; // [rsp+0h] [rbp-118h]
  const void *v45; // [rsp+10h] [rbp-108h]
  const void **v46; // [rsp+18h] [rbp-100h]
  __int64 v47; // [rsp+18h] [rbp-100h]
  __int64 v48; // [rsp+20h] [rbp-F8h] BYREF
  void *src[2]; // [rsp+28h] [rbp-F0h]
  __int128 v50; // [rsp+38h] [rbp-E0h]
  void *v51; // [rsp+48h] [rbp-D0h]
  __int128 v52; // [rsp+50h] [rbp-C8h]
  __int64 v53; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-B0h]
  __int64 v55; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v56; // [rsp+78h] [rbp-A0h]
  __int64 v57; // [rsp+88h] [rbp-90h]
  __int64 v58; // [rsp+90h] [rbp-88h] BYREF
  __int64 v59; // [rsp+98h] [rbp-80h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-78h]
  __int64 v61; // [rsp+B0h] [rbp-68h]
  __int128 v62; // [rsp+B8h] [rbp-60h]
  char v63; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v64; // [rsp+D8h] [rbp-40h]

  v3 = *(int *)(a2 + 8);
  v64 = __readfsqword(0x28u);
  v63 = 16;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v56 = 0;
  v60 = 0;
  v62 = 0;
  if ( v3 )
  {
    v54 = 0;
    LODWORD(v48) = 0;
    src[0] = nullptr;
    src[1] = nullptr;
    v51 = nullptr;
    v53 = 0;
    v50 = 0;
    v52 = 0;
    v4 = qvector_reserve(&v55, 0, v3, 80);
    v5 = v56;
    v55 = v4;
    v6 = v4;
    if ( (unsigned __int64)v56 < v3 )
    {
      while ( 1 )
      {
        v7 = 80 * v5 + v6;
        *(_DWORD *)v7 = 0;
        copy_argloc(v7, &v48);
        *(_QWORD *)(v7 + 16) = 0;
        *(_OWORD *)(v7 + 24) = 0;
        if ( (_QWORD)v50 )
        {
          na = v50;
          v8 = (void *)qalloc_or_throw(v50);
          *(_QWORD *)(v7 + 16) = v8;
          *(_QWORD *)(v7 + 32) = na;
          memcpy(v8, src[1], na);
          *(_QWORD *)(v7 + 24) = na;
        }
        *(_QWORD *)(v7 + 40) = 0;
        *(_OWORD *)(v7 + 48) = 0;
        if ( (_QWORD)v52 )
        {
          n = v52;
          v34 = (void *)qalloc_or_throw(v52);
          *(_QWORD *)(v7 + 40) = v34;
          *(_QWORD *)(v7 + 56) = n;
          memcpy(v34, v51, n);
          *(_QWORD *)(v7 + 48) = n;
        }
        *(_QWORD *)(v7 + 64) = 0;
        copy_tinfo_t(v7 + 64, &v53);
        ++v5;
        *(_DWORD *)(v7 + 72) = v54;
        if ( v3 == v5 )
          break;
        v6 = v55;
      }
    }
    *(_QWORD *)&v56 = v3;
    clear_tinfo_t(&v53);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
    if ( src[1] )
    {
      *(_QWORD *)&v50 = 0;
      qfree(src[1]);
    }
    cleanup_argloc(&v48);
    if ( *(int *)(a2 + 8) > 0 )
    {
      v9 = 0;
      do
      {
        v10 = 80 * v9 + *(_QWORD *)(a2 + 24);
        v11 = v55 + 80 * v9;
        copy_tinfo_t(v11 + 64, v10 + 24);
        copy_argloc(v11, v10 + 56);
        if ( v11 + 16 != v10 + 32 )
        {
          v12 = *(_QWORD *)(v10 + 40);
          if ( !v12 || (v13 = v12 - 1, v12 == 1) )
          {
            *(_QWORD *)(v11 + 24) = 0;
          }
          else
          {
            v14 = *(const void **)(v10 + 32);
            v15 = *(void **)(v11 + 16);
            if ( *(_QWORD *)(v11 + 32) < v12 )
            {
              v45 = *(const void **)(v10 + 32);
              v15 = (void *)qvector_reserve(v11 + 16, *(_QWORD *)(v11 + 16), *(_QWORD *)(v10 + 40), 1);
              v14 = v45;
              v13 = v12 - 1;
              *(_QWORD *)(v11 + 16) = v15;
            }
            *(_QWORD *)(v11 + 24) = v12;
            memmove(v15, v14, v13);
            *(_BYTE *)(*(_QWORD *)(v11 + 16) + v12 - 1) = 0;
          }
        }
        ++v9;
        *(_DWORD *)(v11 + 72) = *(_DWORD *)(v10 + 72);
      }
      while ( *(_DWORD *)(a2 + 8) > (int)v9 );
    }
    v16 = v63 & 0xF;
  }
  else
  {
    v16 = 0;
  }
  v17 = *(_DWORD *)(a2 + 20);
  if ( (v17 & 0xFFFFFF0F) != 0 || v17 == 192 )
  {
    v18 = v16 | 0xC0;
  }
  else
  {
    v18 = v17 | v16;
    v17 = 0;
  }
  v63 = v18;
  HIDWORD(v57) = v17;
  copy_tinfo_t(&v58, a2 + 72);
  copy_argloc(&v59, a2 + 80);
  v19 = *(_DWORD *)(a2 + 280);
  if ( (v19 & 0x10) != 0 )
    LODWORD(v57) = v57 | 4;
  if ( (v19 & 8) != 0 )
    LODWORD(v57) = v57 | 2;
  if ( (v19 & 0x400) != 0 )
    LODWORD(v57) = v57 | 0x200;
  *a1 = 0;
  create_tinfo(a1, 12, 12, &v55);
  v20 = *(void **)(a2 + 296);
  v48 = 0;
  *(_OWORD *)src = 0;
  if ( v20 )
  {
    v48 = qalloc_or_throw(48LL * (_QWORD)v20);
    v35 = v48;
    v36 = nullptr;
    src[1] = v20;
    while ( 1 )
    {
      v38 = 48LL * (_QWORD)v36 + v35;
      v39 = *(_QWORD *)(a2 + 288) + 48LL * (_QWORD)v36;
      *(_QWORD *)v38 = 0;
      *(_OWORD *)(v38 + 8) = 0;
      v40 = *(_QWORD *)(v39 + 8);
      if ( v40 )
      {
        v46 = (const void **)v39;
        v41 = (void *)qalloc_or_throw(*(_QWORD *)(v39 + 8));
        *(_QWORD *)v38 = v41;
        *(_QWORD *)(v38 + 16) = v40;
        memcpy(v41, *v46, v40);
        *(_QWORD *)(v38 + 8) = v40;
        v39 = (__int64)v46;
      }
      *(_QWORD *)(v38 + 24) = 0;
      *(_OWORD *)(v38 + 32) = 0;
      v37 = *(_QWORD *)(v39 + 32);
      if ( v37 )
      {
        v47 = v39;
        v42 = (void *)qalloc_or_throw(*(_QWORD *)(v39 + 32));
        *(_QWORD *)(v38 + 24) = v42;
        *(_QWORD *)(v38 + 40) = v37;
        v36 = (char *)v36 + 1;
        memcpy(v42, *(const void **)(v47 + 24), v37);
        *(_QWORD *)(v38 + 32) = v37;
        if ( v20 == v36 )
        {
LABEL_66:
          src[0] = v20;
          break;
        }
      }
      else
      {
        v36 = (char *)v36 + 1;
        if ( v20 == v36 )
          goto LABEL_66;
      }
      v35 = v48;
    }
  }
  set_tinfo_attrs(a1, &v48);
  if ( (unsigned int)verify_tinfo(*a1) )
  {
    if ( !under_debugger )
      sub_3835A0(50657);
    BUG();
  }
  v21 = v48;
  if ( v48 )
  {
    v22 = src[0];
    if ( src[0] )
    {
      v23 = nullptr;
      do
      {
        v24 = (__int64 *)(v21 + 48LL * (_QWORD)v23);
        v25 = v24[3];
        if ( v25 )
        {
          v24[4] = 0;
          qfree(v25);
        }
        v26 = *v24;
        if ( *v24 )
        {
          v24[1] = 0;
          qfree(v26);
        }
        v23 = (char *)v23 + 1;
        v21 = v48;
      }
      while ( v22 != v23 );
    }
    src[0] = nullptr;
    qfree(v21);
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61);
  }
  cleanup_argloc(&v59);
  clear_tinfo_t(&v58);
  v27 = v55;
  if ( v55 )
  {
    v28 = v56;
    if ( (_QWORD)v56 )
    {
      v29 = 0;
      do
      {
        v30 = (_QWORD *)(v27 + 80 * v29);
        clear_tinfo_t(v30 + 8);
        v31 = v30[5];
        if ( v31 )
        {
          v30[6] = 0;
          qfree(v31);
        }
        v32 = v30[2];
        if ( v32 )
        {
          v30[3] = 0;
          qfree(v32);
        }
        ++v29;
        cleanup_argloc(v30);
        v27 = v55;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v56 = 0;
    qfree(v27);
  }
  return a1;
}
