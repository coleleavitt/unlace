unsigned __int64 __fastcall sub_E5FF0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  size_t v7; // r13
  __int64 v8; // r12
  size_t v9; // r13
  void *v10; // rax
  void *v11; // rsi
  unsigned __int64 v12; // r13
  _QWORD *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  size_t v17; // r12
  size_t v18; // r12
  unsigned __int64 v19; // r15
  void *v20; // rax
  void *v21; // rsi
  __int64 v22; // r12
  void *v23; // rax
  void *v24; // rsi
  void *v25; // rax
  void *v26; // rsi
  size_t v27; // [rsp+18h] [rbp-F0h]
  size_t v28; // [rsp+18h] [rbp-F0h]
  int v29; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-E0h]
  void *src; // [rsp+30h] [rbp-D8h]
  size_t n[2]; // [rsp+38h] [rbp-D0h]
  void *v33; // [rsp+48h] [rbp-C0h]
  size_t v34[2]; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h]
  _DWORD v37[4]; // [rsp+70h] [rbp-98h] BYREF
  void *v38; // [rsp+80h] [rbp-88h]
  __int128 v39; // [rsp+88h] [rbp-80h]
  void *v40; // [rsp+98h] [rbp-70h]
  __int128 v41; // [rsp+A0h] [rbp-68h]
  __int64 v42; // [rsp+B0h] [rbp-58h] BYREF
  int v43; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+C8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v44 - __readfsqword(0x28u);
  v36 = 0;
  v29 = 0;
  v30 = 0;
  src = nullptr;
  v33 = nullptr;
  v35 = 0;
  *(_OWORD *)n = 0;
  *(_OWORD *)v34 = 0;
  if ( a2 < v2 )
  {
    v12 = a2;
    do
    {
      v13 = (_QWORD *)(*a1 + 80 * v12);
      clear_tinfo_t(v13 + 8);
      v14 = v13[5];
      if ( v14 )
      {
        v13[6] = 0;
        qfree(v14);
      }
      v15 = v13[2];
      if ( v15 )
      {
        v13[3] = 0;
        qfree(v15);
      }
      ++v12;
      cleanup_argloc(v13);
    }
    while ( v2 != v12 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)&v29 >= *a1 && (unsigned __int64)&v29 < v5 + 80 * v6 )
    {
      v37[0] = 0;
      copy_argloc(v37, &v29);
      v17 = n[0];
      v38 = nullptr;
      v39 = 0;
      if ( n[0] )
      {
        v38 = (void *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v39 + 1) = v17;
        memcpy(v38, src, v17);
        *(_QWORD *)&v39 = v17;
      }
      v18 = v34[0];
      v40 = nullptr;
      v41 = 0;
      if ( v34[0] )
      {
        v40 = (void *)qalloc_or_throw(v34[0]);
        *((_QWORD *)&v41 + 1) = v18;
        memcpy(v40, v33, v18);
        *(_QWORD *)&v41 = v18;
      }
      v42 = 0;
      copy_tinfo_t(&v42, &v35);
      v43 = v36;
      if ( a1[2] < a2 )
        *a1 = qvector_reserve(a1, *a1, a2, 80);
      v19 = a1[1];
      if ( v19 < a2 )
      {
        do
        {
          v22 = *a1 + 80 * v19;
          *(_DWORD *)v22 = 0;
          copy_argloc(v22, v37);
          *(_QWORD *)(v22 + 16) = 0;
          *(_OWORD *)(v22 + 24) = 0;
          if ( (_QWORD)v39 )
          {
            v27 = v39;
            v20 = (void *)qalloc_or_throw(v39);
            *(_QWORD *)(v22 + 16) = v20;
            v21 = v38;
            *(_QWORD *)(v22 + 32) = v27;
            memcpy(v20, v21, v27);
            *(_QWORD *)(v22 + 24) = v27;
          }
          *(_QWORD *)(v22 + 40) = 0;
          *(_OWORD *)(v22 + 48) = 0;
          if ( (_QWORD)v41 )
          {
            v28 = v41;
            v25 = (void *)qalloc_or_throw(v41);
            *(_QWORD *)(v22 + 40) = v25;
            v26 = v40;
            *(_QWORD *)(v22 + 56) = v28;
            memcpy(v25, v26, v28);
            *(_QWORD *)(v22 + 48) = v28;
          }
          *(_QWORD *)(v22 + 64) = 0;
          copy_tinfo_t(v22 + 64, &v42);
          ++v19;
          *(_DWORD *)(v22 + 72) = v43;
        }
        while ( a2 != v19 );
      }
      a1[1] = a2;
      clear_tinfo_t(&v42);
      if ( v40 )
      {
        *(_QWORD *)&v41 = 0;
        qfree(v40);
      }
      if ( v38 )
      {
        *(_QWORD *)&v39 = 0;
        qfree(v38);
      }
      cleanup_argloc(v37);
      goto LABEL_20;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve(a1, v5, a2, 80);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_DWORD *)(v8 + 72) = v36 )
    {
      v8 = *a1 + 80 * v2;
      *(_DWORD *)v8 = 0;
      copy_argloc(v8, &v29);
      *(_QWORD *)(v8 + 16) = 0;
      *(_OWORD *)(v8 + 24) = 0;
      v9 = n[0];
      if ( n[0] )
      {
        v10 = (void *)qalloc_or_throw(n[0]);
        *(_QWORD *)(v8 + 16) = v10;
        v11 = src;
        *(_QWORD *)(v8 + 32) = v9;
        memcpy(v10, v11, v9);
        *(_QWORD *)(v8 + 24) = v9;
      }
      *(_QWORD *)(v8 + 40) = 0;
      *(_OWORD *)(v8 + 48) = 0;
      v7 = v34[0];
      if ( v34[0] )
      {
        v23 = (void *)qalloc_or_throw(v34[0]);
        *(_QWORD *)(v8 + 40) = v23;
        v24 = v33;
        *(_QWORD *)(v8 + 56) = v7;
        memcpy(v23, v24, v7);
        *(_QWORD *)(v8 + 48) = v7;
      }
      *(_QWORD *)(v8 + 64) = 0;
      copy_tinfo_t(v8 + 64, &v35);
      ++v2;
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t(&v35);
  if ( v33 )
  {
    v34[0] = 0;
    qfree(v33);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  cleanup_argloc(&v29);
  return v44 - __readfsqword(0x28u);
}
