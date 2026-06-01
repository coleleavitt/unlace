unsigned __int64 __fastcall sub_5438A0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  size_t v7; // r15
  __int64 v8; // rbx
  size_t v9; // r15
  void *v10; // rax
  void *v11; // rsi
  unsigned __int64 v12; // r14
  _QWORD *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  size_t v17; // rbp
  size_t v18; // rbp
  void *v19; // rax
  void *v20; // rsi
  int v21; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-E0h]
  void *src; // [rsp+10h] [rbp-D8h]
  size_t n[2]; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+28h] [rbp-C0h]
  size_t v26[2]; // [rsp+30h] [rbp-B8h]
  __int64 v27; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-A0h]
  _DWORD v29[4]; // [rsp+50h] [rbp-98h] BYREF
  void *v30; // [rsp+60h] [rbp-88h]
  __int128 v31; // [rsp+68h] [rbp-80h]
  void *v32; // [rsp+78h] [rbp-70h]
  __int128 v33; // [rsp+80h] [rbp-68h]
  __int64 v34; // [rsp+90h] [rbp-58h] BYREF
  int v35; // [rsp+98h] [rbp-50h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v36 - __readfsqword(0x28u);
  v28 = 0;
  v21 = 0;
  v22 = 0;
  src = nullptr;
  ptr = nullptr;
  v27 = 0;
  *(_OWORD *)n = 0;
  *(_OWORD *)v26 = 0;
  if ( a2 < v2 )
  {
    v12 = a2;
    do
    {
      v13 = (_QWORD *)(*a1 + 80 * v12);
      clear_tinfo_t(v13 + 8);
      v14 = (void *)v13[5];
      if ( v14 )
      {
        v13[6] = 0;
        qfree(v14);
      }
      v15 = (void *)v13[2];
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
    if ( (unsigned __int64)&v21 >= *a1 && (unsigned __int64)&v21 < v5 + 80 * v6 )
    {
      v29[0] = 0;
      copy_argloc(v29, &v21);
      v17 = n[0];
      v30 = nullptr;
      v31 = 0;
      if ( n[0] )
      {
        v30 = (void *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v31 + 1) = v17;
        memcpy(v30, src, v17);
        *(_QWORD *)&v31 = v17;
      }
      v18 = v26[0];
      v32 = nullptr;
      v33 = 0;
      if ( v26[0] )
      {
        v32 = (void *)qalloc_or_throw(v26[0]);
        *((_QWORD *)&v33 + 1) = v18;
        memcpy(v32, ptr, v18);
        *(_QWORD *)&v33 = v18;
      }
      v34 = 0;
      copy_tinfo_t(&v34);
      v35 = v28;
      sub_542640(a1, a2, (__int64)v29);
      clear_tinfo_t(&v34);
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32);
      }
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v30);
      }
      cleanup_argloc(v29);
      goto LABEL_20;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve(a1, v5, a2, 80);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_DWORD *)(v8 + 72) = v28 )
    {
      v8 = *a1 + 80 * v2;
      *(_DWORD *)v8 = 0;
      copy_argloc(v8, &v21);
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
      v7 = v26[0];
      if ( v26[0] )
      {
        v19 = (void *)qalloc_or_throw(v26[0]);
        *(_QWORD *)(v8 + 40) = v19;
        v20 = ptr;
        *(_QWORD *)(v8 + 56) = v7;
        memcpy(v19, v20, v7);
        *(_QWORD *)(v8 + 48) = v7;
      }
      *(_QWORD *)(v8 + 64) = 0;
      copy_tinfo_t(v8 + 64);
      ++v2;
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t(&v27);
  if ( ptr )
  {
    v26[0] = 0;
    qfree(ptr);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  cleanup_argloc(&v21);
  return v36 - __readfsqword(0x28u);
}
