unsigned __int64 __fastcall sub_7CC5C0(__int64 a1, const char *a2)
{
  unsigned __int64 v4; // r12
  const char *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  int v8; // eax
  size_t v9; // r15
  char *v10; // rbx
  const void *v11; // rsi
  int v12; // eax
  size_t v13; // r15
  void *v14; // rax
  const char *v15; // r15
  __int64 v16; // r14
  __int64 v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v22; // rax
  void *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // [rsp+18h] [rbp-110h] BYREF
  __int128 v26; // [rsp+20h] [rbp-108h]
  void *v27; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v28; // [rsp+38h] [rbp-F0h]
  int v29; // [rsp+48h] [rbp-E0h]
  void *src; // [rsp+50h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-D0h]
  __int64 v32; // [rsp+68h] [rbp-C0h]
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  size_t v34[3]; // [rsp+78h] [rbp-B0h]
  __int64 v35; // [rsp+90h] [rbp-98h] BYREF
  __int128 v36; // [rsp+98h] [rbp-90h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( *(const char **)(a1 + 8) == a2 )
    return v37 - __readfsqword(0x28u);
  v25 = 0;
  v35 = 0;
  v27 = nullptr;
  v29 = 0;
  src = nullptr;
  v26 = 0;
  v36 = 0;
  v28 = 0;
  *(_OWORD *)n = 0;
  sub_7B9B70(&src, (__int64)&v35);
  v32 = 0;
  ptr = nullptr;
  *(_OWORD *)v34 = 0;
  sub_7B9B70(&ptr, (__int64)&v25);
  v4 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)a2 < v4 )
  {
    v15 = a2;
    v16 = 88LL * (_QWORD)a2;
    do
    {
      v17 = v16 + *(_QWORD *)a1;
      v18 = *(void **)(v17 + 64);
      if ( v18 )
      {
        *(_QWORD *)(v17 + 72) = 0;
        qfree(v18);
      }
      v19 = *(void **)(v17 + 32);
      if ( v19 )
      {
        *(_QWORD *)(v17 + 40) = 0;
        qfree(v19);
      }
      v20 = *(void **)v17;
      if ( *(_QWORD *)v17 )
      {
        *(_QWORD *)(v17 + 8) = 0;
        qfree(v20);
      }
      ++v15;
      v16 += 88;
    }
    while ( (const char *)v4 != v15 );
LABEL_21:
    *(_QWORD *)(a1 + 8) = a2;
    goto LABEL_22;
  }
  if ( v4 < (unsigned __int64)a2 )
  {
    v5 = *(const char **)a1;
    v6 = *(_QWORD *)(a1 + 16);
    if ( (unsigned __int64)&v27 >= *(_QWORD *)a1 && &v27 < (void **)&v5[88 * v6] )
    {
      sub_7CAE00((__int64)&v35, (__int64)&v27);
      sub_7CC3F0((const char **)a1, a2, (__int64)&v35);
      sub_7BEF50((__int64)&v35);
      goto LABEL_22;
    }
    if ( v6 >= (unsigned __int64)a2
      || (v24 = qvector_reserve(a1, v5, a2, 88),
          v4 = *(_QWORD *)(a1 + 8),
          *(_QWORD *)a1 = v24,
          v5 = (const char *)v24,
          v4 < (unsigned __int64)a2) )
    {
      v7 = 88 * v4;
      while ( 1 )
      {
        v10 = (char *)&v5[v7];
        v11 = &v27;
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        sub_7B9AC0(v10, (__int64)&v27);
        v12 = v29;
        v13 = n[0];
        *((_QWORD *)v10 + 4) = 0;
        *(_OWORD *)(v10 + 40) = 0;
        *((_DWORD *)v10 + 6) = v12;
        if ( v13 )
        {
          v14 = (void *)qalloc_or_throw(v13, (const char *)&v27);
          *((_QWORD *)v10 + 4) = v14;
          v11 = src;
          *((_QWORD *)v10 + 6) = v13;
          memcpy(v14, v11, v13);
          *((_QWORD *)v10 + 5) = v13;
        }
        v8 = v32;
        v9 = v34[0];
        *((_QWORD *)v10 + 8) = 0;
        *(_OWORD *)(v10 + 72) = 0;
        *((_DWORD *)v10 + 14) = v8;
        if ( v9 )
        {
          v22 = (void *)qalloc_or_throw(v9, (const char *)v11);
          *((_QWORD *)v10 + 8) = v22;
          v23 = ptr;
          *((_QWORD *)v10 + 10) = v9;
          memcpy(v22, v23, v9);
          *((_QWORD *)v10 + 9) = v9;
        }
        ++v4;
        v7 += 88;
        if ( v4 >= (unsigned __int64)a2 )
          break;
        v5 = *(const char **)a1;
      }
    }
    goto LABEL_21;
  }
LABEL_22:
  if ( ptr )
    qfree(ptr);
  if ( src )
    qfree(src);
  if ( v27 )
    qfree(v27);
  return v37 - __readfsqword(0x28u);
}

