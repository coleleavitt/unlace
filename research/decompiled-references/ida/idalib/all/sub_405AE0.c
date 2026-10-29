unsigned __int64 __fastcall sub_405AE0(__int64 *a1, unsigned int a2, char a3)
{
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
  __int64 v20; // rbp
  size_t v21; // r12
  void *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __m128i si128; // xmm1
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v34; // r15
  size_t v35; // rax
  size_t v36; // r12
  char *v37; // rdi
  __int64 v38; // rdx
  void *v39; // rax
  const void *v40; // rsi
  __int64 v41; // [rsp+10h] [rbp-88h]
  char *v42; // [rsp+18h] [rbp-80h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v44; // [rsp+28h] [rbp-70h]
  char *s1; // [rsp+40h] [rbp-58h] BYREF
  __int128 v46; // [rsp+48h] [rbp-50h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  std_dirtree = (_QWORD *)get_std_dirtree(a2);
  id = (const char *)dirtree_get_id(*std_dirtree);
  src = nullptr;
  v44 = 0;
  if ( id )
  {
    v8 = id;
    v9 = strlen(id);
    v10 = v9 + 1;
    v11 = v9;
    src = (void *)qvector_reserve(&src, 0, v9 + 1, 1);
    *(_QWORD *)&v44 = v10;
    memmove(src, v8, v11);
    *((_BYTE *)src + v11) = 0;
    v12 = v44;
    if ( (_QWORD)v44 )
    {
      v13 = v44 - 1;
      v14 = src;
      s1 = nullptr;
      v46 = 0;
      if ( (unsigned __int64)(v44 - 1) <= 9 )
      {
        if ( (_QWORD)v44 == 1 )
          goto LABEL_14;
      }
      else
      {
        v12 = 11;
        v13 = 10;
      }
      s1 = (char *)qvector_reserve(&s1, 0, v12, 1);
      *(_QWORD *)&v46 = v12;
      memmove(s1, v14, v13);
      s1[v13] = 0;
      v15 = s1;
      if ( (_QWORD)v46 )
      {
        v16 = strcmp(s1, "$ dirtree/");
        if ( v15 )
        {
          *(_QWORD *)&v46 = 0;
          qfree(v15);
        }
        if ( !v16 )
        {
          v17 = (char *)src;
          if ( !(_QWORD)v44 )
            goto LABEL_10;
          v34 = 10;
          s1 = nullptr;
          v46 = 0;
          if ( (unsigned __int64)(v44 - 1) <= 0xA )
            v34 = v44 - 1;
          v35 = v44 - 1 - v34;
          v36 = v35;
          if ( v35 )
          {
            v37 = nullptr;
            v38 = v44 - v34;
            if ( v35 != -1 )
            {
              v42 = (char *)src;
              v41 = v44 - v34;
              s1 = (char *)qvector_reserve(&s1, 0, v38, 1);
              v17 = v42;
              v37 = s1;
              v38 = v41;
            }
            *(_QWORD *)&v46 = v38;
            memmove(v37, &v17[v34], v36);
            s1[v36] = 0;
            v18 = s1;
            v19 = v46;
            v17 = (char *)src;
          }
          else
          {
LABEL_10:
            v18 = nullptr;
            v19 = 0u;
          }
          s1 = nullptr;
          v46 = 0;
          if ( v17 )
          {
            *(_QWORD *)&v44 = 0;
            qfree(v17);
            src = v18;
            v44 = v19;
            if ( s1 )
            {
              *(_QWORD *)&v46 = 0;
              qfree(s1);
            }
          }
          else
          {
            src = v18;
            v44 = v19;
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
  v20 = operator new(0xB0u);
  v21 = a1[2];
  v22 = src;
  *(_QWORD *)(v20 + 16) = 0;
  *(_QWORD *)v20 = &off_2B26160;
  v23 = *a1;
  *(_OWORD *)(v20 + 24) = 0;
  *(_QWORD *)(v20 + 8) = v23;
  if ( v21 )
  {
    v39 = (void *)qalloc_or_throw(v21);
    *(_QWORD *)(v20 + 16) = v39;
    v40 = (const void *)a1[1];
    *(_QWORD *)(v20 + 32) = v21;
    memcpy(v39, v40, v21);
    *(_QWORD *)(v20 + 24) = v21;
  }
  v24 = a1[4];
  *(_QWORD *)(v20 + 120) = -1;
  *(_QWORD *)(v20 + 40) = v24;
  LODWORD(v24) = *((_DWORD *)a1 + 10);
  *(_QWORD *)(v20 + 128) = -1;
  *(_DWORD *)(v20 + 48) = v24;
  *(_QWORD *)(v20 + 136) = -1;
  *(_QWORD *)(v20 + 144) = 0;
  *(_OWORD *)(v20 + 56) = 0;
  *(_OWORD *)(v20 + 72) = 0;
  *(_OWORD *)(v20 + 88) = 0;
  *(_OWORD *)(v20 + 104) = 0;
  merge_handler_ctr(v20, v22);
  *(_QWORD *)(v20 + 168) = 0;
  *(_QWORD *)v20 = &off_2B279D0;
  v25 = *(_QWORD *)(v20 + 8);
  *(_QWORD *)(v20 + 72) = 0;
  *(_OWORD *)(v20 + 152) = 0;
  if ( *(int *)(v25 + 28) > 0 )
  {
    v26 = 0;
    do
    {
      switch_dbctx(*(int *)(v25 + 4LL * (int)v26 + 16));
      v27 = operator new(0x50u);
      v28 = *(_QWORD *)(v20 + 8);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v30 = *(_DWORD *)(v28 + 4LL * (int)v26 + 16);
      *(_QWORD *)(v27 + 32) = v28;
      *(_DWORD *)(v27 + 12) = -1;
      *(_DWORD *)(v27 + 8) = v30;
      *(_QWORD *)(v27 + 40) = 0;
      *(_QWORD *)v27 = &off_2B27918;
      *(_DWORD *)(v27 + 72) = a2;
      *(_BYTE *)(v27 + 76) = a3;
      *(__m128i *)(v27 + 16) = si128;
      *(_OWORD *)(v27 + 48) = 0;
      v31 = get_std_dirtree(a2);
      v32 = sub_77A950(v31);
      *(_QWORD *)(v20 + 8 * v26 + 56) = v27;
      *(_QWORD *)(v20 + 8 * v26 + 152) = v27;
      *(_QWORD *)(v27 + 64) = v32;
      v25 = *(_QWORD *)(v20 + 8);
      *(_DWORD *)(v27 + 12) = v26++;
    }
    while ( *(_DWORD *)(v25 + 28) > (int)v26 );
  }
  if ( src )
  {
    *(_QWORD *)&v44 = 0;
    qfree(src);
  }
  return v47 - __readfsqword(0x28u);
}
