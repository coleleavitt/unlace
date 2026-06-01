unsigned __int64 __fastcall sub_EABB0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  size_t v7; // r13
  int *v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  size_t v12; // r13
  void *v13; // rax
  unsigned __int64 v14; // r13
  _QWORD *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  int *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  size_t v22; // r12
  size_t v23; // r12
  unsigned __int64 v24; // r15
  void *v25; // rax
  _DWORD *v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rcx
  void *v29; // rax
  void *v30; // rsi
  void *v31; // rax
  void *v32; // rsi
  void *v33; // rax
  size_t v34; // [rsp+18h] [rbp-F0h]
  size_t v35; // [rsp+18h] [rbp-F0h]
  int v36; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-E0h]
  void *src; // [rsp+30h] [rbp-D8h]
  size_t n[2]; // [rsp+38h] [rbp-D0h]
  void *v40; // [rsp+48h] [rbp-C0h]
  size_t v41[2]; // [rsp+50h] [rbp-B8h]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+68h] [rbp-A0h]
  _DWORD v44[4]; // [rsp+70h] [rbp-98h] BYREF
  void *v45; // [rsp+80h] [rbp-88h]
  __int128 v46; // [rsp+88h] [rbp-80h]
  void *v47; // [rsp+98h] [rbp-70h]
  __int128 v48; // [rsp+A0h] [rbp-68h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  int v50; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v51; // [rsp+C8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v51 - __readfsqword(0x28u);
  v43 = 0;
  v36 = 0;
  v37 = 0;
  src = nullptr;
  v40 = nullptr;
  v42 = 0;
  *(_OWORD *)n = 0;
  *(_OWORD *)v41 = 0;
  if ( a2 < v2 )
  {
    v14 = a2;
    do
    {
      v15 = (_QWORD *)(*a1 + 80 * v14);
      clear_tinfo_t();
      v16 = v15[5];
      if ( v16 )
      {
        v15[6] = 0;
        qfree(v16);
      }
      v17 = v15[2];
      if ( v17 )
      {
        v15[3] = 0;
        qfree(v17);
      }
      ++v14;
      cleanup_argloc();
    }
    while ( v2 != v14 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)&v36 >= *a1 && (unsigned __int64)&v36 < v5 + 80 * v6 )
    {
      v19 = &v36;
      v44[0] = 0;
      copy_argloc();
      v22 = n[0];
      v45 = nullptr;
      v46 = 0;
      if ( n[0] )
      {
        v33 = (void *)qalloc_or_throw(n[0], (__int64)&v36, v20, v21);
        v19 = (int *)src;
        v45 = v33;
        *((_QWORD *)&v46 + 1) = v22;
        memcpy(v33, src, v22);
        *(_QWORD *)&v46 = v22;
      }
      v23 = v41[0];
      v47 = nullptr;
      v48 = 0;
      if ( v41[0] )
      {
        v47 = (void *)qalloc_or_throw(v41[0], (__int64)v19, v20, v21);
        *((_QWORD *)&v48 + 1) = v23;
        memcpy(v47, v40, v23);
        *(_QWORD *)&v48 = v23;
      }
      v49 = 0;
      copy_tinfo_t();
      v50 = v43;
      if ( a1[2] < a2 )
        *a1 = qvector_reserve((__int64)a1, *a1, a2, 80);
      v24 = a1[1];
      if ( v24 < a2 )
      {
        do
        {
          v26 = v44;
          v27 = *a1 + 80 * v24;
          *(_DWORD *)v27 = 0;
          copy_argloc();
          *(_QWORD *)(v27 + 16) = 0;
          *(_OWORD *)(v27 + 24) = 0;
          if ( (_QWORD)v46 )
          {
            v34 = v46;
            v25 = (void *)qalloc_or_throw(v46, (__int64)v44, v46, v28);
            *(_QWORD *)(v27 + 16) = v25;
            v26 = v45;
            *(_QWORD *)(v27 + 32) = v34;
            memcpy(v25, v26, v34);
            *(_QWORD *)(v27 + 24) = v34;
          }
          *(_QWORD *)(v27 + 40) = 0;
          *(_OWORD *)(v27 + 48) = 0;
          if ( (_QWORD)v48 )
          {
            v35 = v48;
            v31 = (void *)qalloc_or_throw(v48, (__int64)v26, v48, v28);
            *(_QWORD *)(v27 + 40) = v31;
            v32 = v47;
            *(_QWORD *)(v27 + 56) = v35;
            memcpy(v31, v32, v35);
            *(_QWORD *)(v27 + 48) = v35;
          }
          *(_QWORD *)(v27 + 64) = 0;
          copy_tinfo_t();
          ++v24;
          *(_DWORD *)(v27 + 72) = v50;
        }
        while ( a2 != v24 );
      }
      a1[1] = a2;
      clear_tinfo_t();
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree((__int64)v47);
      }
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree((__int64)v45);
      }
      cleanup_argloc();
      goto LABEL_20;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve((__int64)a1, v5, a2, 80);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_DWORD *)(v9 + 72) = v43 )
    {
      v8 = &v36;
      v9 = *a1 + 80 * v2;
      *(_DWORD *)v9 = 0;
      copy_argloc();
      *(_QWORD *)(v9 + 16) = 0;
      *(_OWORD *)(v9 + 24) = 0;
      v12 = n[0];
      if ( n[0] )
      {
        v13 = (void *)qalloc_or_throw(n[0], (__int64)&v36, v10, v11);
        *(_QWORD *)(v9 + 16) = v13;
        v8 = (int *)src;
        *(_QWORD *)(v9 + 32) = v12;
        memcpy(v13, v8, v12);
        *(_QWORD *)(v9 + 24) = v12;
      }
      *(_QWORD *)(v9 + 40) = 0;
      *(_OWORD *)(v9 + 48) = 0;
      v7 = v41[0];
      if ( v41[0] )
      {
        v29 = (void *)qalloc_or_throw(v41[0], (__int64)v8, v10, v11);
        *(_QWORD *)(v9 + 40) = v29;
        v30 = v40;
        *(_QWORD *)(v9 + 56) = v7;
        memcpy(v29, v30, v7);
        *(_QWORD *)(v9 + 48) = v7;
      }
      *(_QWORD *)(v9 + 64) = 0;
      copy_tinfo_t();
      ++v2;
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t();
  if ( v40 )
  {
    v41[0] = 0;
    qfree((__int64)v40);
  }
  if ( src )
  {
    n[0] = 0;
    qfree((__int64)src);
  }
  cleanup_argloc();
  return v51 - __readfsqword(0x28u);
}
