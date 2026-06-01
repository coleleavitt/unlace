unsigned __int64 __fastcall sub_3F2A40(__int64 *a1, const char *a2, char a3)
{
  unsigned int v4; // r13d
  _QWORD *std_dirtree; // rax
  const char *id; // rax
  const char *v8; // rbp
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r12
  __int64 v12; // r12
  size_t v13; // r15
  void *v14; // rbp
  char *v15; // r15
  int v16; // r12d
  char *v17; // r8
  char *v18; // r15
  __int128 v19; // kr00_16
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r9
  size_t v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rax
  __m128i si128; // xmm1
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v37; // r15
  size_t v38; // rax
  size_t v39; // r12
  char *v40; // rdi
  __int64 v41; // rdx
  void *v42; // rax
  const void *v43; // rsi
  __int64 v44; // [rsp+10h] [rbp-88h]
  char *v45; // [rsp+18h] [rbp-80h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v47; // [rsp+28h] [rbp-70h]
  char *s1; // [rsp+40h] [rbp-58h] BYREF
  __int128 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v4 = (unsigned int)a2;
  v50 = __readfsqword(0x28u);
  std_dirtree = (_QWORD *)get_std_dirtree((unsigned int)a2);
  id = (const char *)dirtree_get_id(*std_dirtree);
  src = nullptr;
  v47 = 0;
  if ( id )
  {
    v8 = id;
    v9 = strlen(id);
    v10 = v9 + 1;
    v11 = v9;
    a2 = v8;
    src = (void *)qvector_reserve(&src, 0, v9 + 1, 1);
    *(_QWORD *)&v47 = v10;
    memmove(src, v8, v11);
    *((_BYTE *)src + v11) = 0;
    v12 = v47;
    if ( (_QWORD)v47 )
    {
      v13 = v47 - 1;
      v14 = src;
      s1 = nullptr;
      v49 = 0;
      if ( (unsigned __int64)(v47 - 1) <= 9 )
      {
        if ( (_QWORD)v47 == 1 )
          goto LABEL_14;
      }
      else
      {
        v12 = 11;
        v13 = 10;
      }
      a2 = (const char *)src;
      s1 = (char *)qvector_reserve(&s1, 0, v12, 1);
      *(_QWORD *)&v49 = v12;
      memmove(s1, v14, v13);
      s1[v13] = 0;
      v15 = s1;
      if ( (_QWORD)v49 )
      {
        a2 = "$ dirtree/";
        v16 = strcmp(s1, "$ dirtree/");
        if ( v15 )
        {
          *(_QWORD *)&v49 = 0;
          qfree(v15);
        }
        if ( !v16 )
        {
          v17 = (char *)src;
          if ( !(_QWORD)v47 )
            goto LABEL_10;
          v37 = 10;
          s1 = nullptr;
          v49 = 0;
          if ( (unsigned __int64)(v47 - 1) <= 0xA )
            v37 = v47 - 1;
          v38 = v47 - 1 - v37;
          v39 = v38;
          if ( v38 )
          {
            v40 = nullptr;
            v41 = v47 - v37;
            if ( v38 != -1 )
            {
              v45 = (char *)src;
              v44 = v47 - v37;
              s1 = (char *)qvector_reserve(&s1, 0, v41, 1);
              v17 = v45;
              v40 = s1;
              v41 = v44;
            }
            a2 = &v17[v37];
            *(_QWORD *)&v49 = v41;
            memmove(v40, &v17[v37], v39);
            s1[v39] = 0;
            v18 = s1;
            v19 = v49;
            v17 = (char *)src;
          }
          else
          {
LABEL_10:
            v18 = nullptr;
            v19 = 0u;
          }
          s1 = nullptr;
          v49 = 0;
          if ( v17 )
          {
            *(_QWORD *)&v47 = 0;
            qfree(v17);
            src = v18;
            v47 = v19;
            if ( s1 )
            {
              *(_QWORD *)&v49 = 0;
              qfree(s1);
            }
          }
          else
          {
            src = v18;
            v47 = v19;
          }
        }
      }
      else if ( s1 )
      {
        qfree(s1);
      }
    }
  }
LABEL_14:
  v22 = operator new(0xB0u);
  v25 = a1[2];
  *(_QWORD *)(v22 + 16) = 0;
  *(_QWORD *)v22 = &off_2AFD020;
  v26 = *a1;
  *(_OWORD *)(v22 + 24) = 0;
  *(_QWORD *)(v22 + 8) = v26;
  if ( v25 )
  {
    v42 = (void *)qalloc_or_throw(v25, a2, v20, v21, v23, v24);
    *(_QWORD *)(v22 + 16) = v42;
    v43 = (const void *)a1[1];
    *(_QWORD *)(v22 + 32) = v25;
    memcpy(v42, v43, v25);
    *(_QWORD *)(v22 + 24) = v25;
  }
  v27 = a1[4];
  *(_QWORD *)(v22 + 120) = -1;
  *(_QWORD *)(v22 + 40) = v27;
  LODWORD(v27) = *((_DWORD *)a1 + 10);
  *(_QWORD *)(v22 + 128) = -1;
  *(_DWORD *)(v22 + 48) = v27;
  *(_QWORD *)(v22 + 136) = 0xFFFFFFFFLL;
  *(_DWORD *)(v22 + 144) = 0;
  *(_OWORD *)(v22 + 56) = 0;
  *(_OWORD *)(v22 + 72) = 0;
  *(_OWORD *)(v22 + 88) = 0;
  *(_OWORD *)(v22 + 104) = 0;
  merge_handler_ctr();
  *(_QWORD *)(v22 + 168) = 0;
  *(_QWORD *)v22 = &off_2AFDA08;
  v28 = *(_QWORD *)(v22 + 8);
  *(_QWORD *)(v22 + 72) = 0;
  *(_OWORD *)(v22 + 152) = 0;
  if ( *(int *)(v28 + 28) > 0 )
  {
    v29 = 0;
    do
    {
      switch_dbctx(*(int *)(v28 + 4LL * (int)v29 + 16));
      v30 = operator new(0x50u);
      v31 = *(_QWORD *)(v22 + 8);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v33 = *(_DWORD *)(v31 + 4LL * (int)v29 + 16);
      *(_QWORD *)(v30 + 32) = v31;
      *(_DWORD *)(v30 + 12) = -1;
      *(_DWORD *)(v30 + 8) = v33;
      *(_QWORD *)(v30 + 40) = 0;
      *(_QWORD *)v30 = &off_2AFD950;
      *(_DWORD *)(v30 + 72) = v4;
      *(_BYTE *)(v30 + 76) = a3;
      *(__m128i *)(v30 + 16) = si128;
      *(_OWORD *)(v30 + 48) = 0;
      v34 = get_std_dirtree(v4);
      v35 = sub_75A500(v34);
      *(_QWORD *)(v22 + 8 * v29 + 56) = v30;
      *(_QWORD *)(v22 + 8 * v29 + 152) = v30;
      *(_QWORD *)(v30 + 64) = v35;
      v28 = *(_QWORD *)(v22 + 8);
      *(_DWORD *)(v30 + 12) = v29++;
    }
    while ( *(_DWORD *)(v28 + 28) > (int)v29 );
  }
  if ( src )
  {
    *(_QWORD *)&v47 = 0;
    qfree(src);
  }
  return v50 - __readfsqword(0x28u);
}

