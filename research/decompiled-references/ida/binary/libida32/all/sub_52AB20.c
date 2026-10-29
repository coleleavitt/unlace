unsigned __int64 __fastcall sub_52AB20(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  size_t v7; // r15
  char *v8; // rsi
  __int64 v9; // rbx
  size_t v10; // r15
  void *v11; // rax
  unsigned __int64 v12; // r14
  _QWORD *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  const char *v17; // rsi
  size_t v18; // rbp
  size_t v19; // rbp
  void *v20; // rax
  void *v21; // rsi
  void *v22; // rax
  char v23[8]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+8h] [rbp-E0h]
  void *src; // [rsp+10h] [rbp-D8h]
  size_t n[2]; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+28h] [rbp-C0h]
  size_t v28[2]; // [rsp+30h] [rbp-B8h]
  __int64 v29; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-A0h]
  _DWORD v31[4]; // [rsp+50h] [rbp-98h] BYREF
  void *v32; // [rsp+60h] [rbp-88h]
  __int128 v33; // [rsp+68h] [rbp-80h]
  void *v34; // [rsp+78h] [rbp-70h]
  __int128 v35; // [rsp+80h] [rbp-68h]
  __int64 v36; // [rsp+90h] [rbp-58h] BYREF
  int v37; // [rsp+98h] [rbp-50h]
  unsigned __int64 v38; // [rsp+A8h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v38 - __readfsqword(0x28u);
  v30 = 0;
  *(_DWORD *)v23 = 0;
  v24 = 0;
  src = nullptr;
  ptr = nullptr;
  v29 = 0;
  *(_OWORD *)n = 0;
  *(_OWORD *)v28 = 0;
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
    if ( (unsigned __int64)v23 >= *a1 && (unsigned __int64)v23 < v5 + 80 * v6 )
    {
      v17 = v23;
      v31[0] = 0;
      copy_argloc(v31, v23);
      v18 = n[0];
      v32 = nullptr;
      v33 = 0;
      if ( n[0] )
      {
        v22 = (void *)qalloc_or_throw(n[0], v23);
        v17 = (const char *)src;
        v32 = v22;
        *((_QWORD *)&v33 + 1) = v18;
        memcpy(v22, src, v18);
        *(_QWORD *)&v33 = v18;
      }
      v19 = v28[0];
      v34 = nullptr;
      v35 = 0;
      if ( v28[0] )
      {
        v34 = (void *)qalloc_or_throw(v28[0], v17);
        *((_QWORD *)&v35 + 1) = v19;
        memcpy(v34, ptr, v19);
        *(_QWORD *)&v35 = v19;
      }
      v36 = 0;
      copy_tinfo_t(&v36);
      v37 = v30;
      sub_529940(a1, a2, (__int64)v31);
      clear_tinfo_t(&v36);
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v34);
      }
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32);
      }
      cleanup_argloc(v31);
      goto LABEL_20;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve(a1, v5, a2, 80);
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_DWORD *)(v9 + 72) = v30 )
    {
      v8 = v23;
      v9 = *a1 + 80 * v2;
      *(_DWORD *)v9 = 0;
      copy_argloc(v9, v23);
      *(_QWORD *)(v9 + 16) = 0;
      *(_OWORD *)(v9 + 24) = 0;
      v10 = n[0];
      if ( n[0] )
      {
        v11 = (void *)qalloc_or_throw(n[0], v23);
        *(_QWORD *)(v9 + 16) = v11;
        v8 = (char *)src;
        *(_QWORD *)(v9 + 32) = v10;
        memcpy(v11, v8, v10);
        *(_QWORD *)(v9 + 24) = v10;
      }
      *(_QWORD *)(v9 + 40) = 0;
      *(_OWORD *)(v9 + 48) = 0;
      v7 = v28[0];
      if ( v28[0] )
      {
        v20 = (void *)qalloc_or_throw(v28[0], v8);
        *(_QWORD *)(v9 + 40) = v20;
        v21 = ptr;
        *(_QWORD *)(v9 + 56) = v7;
        memcpy(v20, v21, v7);
        *(_QWORD *)(v9 + 48) = v7;
      }
      *(_QWORD *)(v9 + 64) = 0;
      copy_tinfo_t(v9 + 64);
      ++v2;
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t(&v29);
  if ( ptr )
  {
    v28[0] = 0;
    qfree(ptr);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  cleanup_argloc(v23);
  return v38 - __readfsqword(0x28u);
}

