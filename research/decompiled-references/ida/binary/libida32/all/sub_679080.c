void __fastcall sub_679080(void **a1, void **a2)
{
  void **v2; // rbp
  char v4; // al
  void *v5; // r13
  unsigned __int64 v6; // rdx
  __m128i si128; // xmm0
  void *v8; // rdi
  char v9; // al
  size_t v10; // r12
  void *v11; // rax
  void *v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  size_t v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // r13
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // r15
  void *v21; // rax
  size_t v22; // rdx
  void *v23; // r12
  void *v24; // rax
  void *v25; // r12
  char *v26; // rdx
  void *v27; // r13
  void *i; // r12
  char *v29; // rax
  void *v30; // rdi
  void *v31; // rax
  void *v32; // rax
  void *v33; // rdi
  void *v34; // rdi
  size_t n[2]; // [rsp+0h] [rbp-58h] BYREF
  size_t v36; // [rsp+18h] [rbp-40h]

  if ( a1 == a2 )
    return;
  v2 = a2;
  v4 = *((_BYTE *)a1 + 89);
  if ( v4 )
  {
    if ( v4 == 2 )
    {
      v26 = (char *)a1[3];
      if ( v26 )
      {
        v27 = a1[4];
        if ( v27 )
        {
          for ( i = nullptr; i != v27; i = (char *)i + 1 )
          {
            v29 = &v26[40 * (_QWORD)i];
            v30 = *(void **)v29;
            if ( *(_QWORD *)v29 )
            {
              *((_QWORD *)v29 + 1) = 0;
              qfree(v30);
              v26 = (char *)a1[3];
            }
          }
        }
        a1[4] = nullptr;
        qfree(v26);
      }
    }
    else if ( v4 == 1 )
    {
      v33 = a1[7];
      if ( v33 )
      {
        a1[8] = nullptr;
        qfree(v33);
      }
      v34 = a1[3];
      if ( v34 )
      {
        a1[4] = nullptr;
        qfree(v34);
      }
    }
    *((_BYTE *)a1 + 89) = 0;
  }
  v5 = nullptr;
  *((_BYTE *)a1 + 89) = *((_BYTE *)a2 + 89);
  *((_BYTE *)a1 + 90) = *((_BYTE *)a2 + 90);
  v6 = (unsigned __int64)a2[1];
  si128 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( !v6 )
  {
    v8 = *a1;
    if ( !*a1 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v10 = 8 * v6;
  *(__m128i *)n = si128;
  v11 = (void *)qalloc_or_throw(8 * v6, (const char *)a2);
  a2 = (void **)*a2;
  v5 = v11;
  memcpy(v11, a2, v10);
  v8 = *a1;
  si128 = _mm_load_si128((const __m128i *)n);
  if ( *a1 )
  {
LABEL_5:
    a1[1] = nullptr;
    *(__m128i *)n = si128;
    qfree(v8);
    si128 = _mm_load_si128((const __m128i *)n);
  }
LABEL_6:
  v9 = *((_BYTE *)a1 + 89);
  *a1 = v5;
  *(__m128i *)(a1 + 1) = si128;
  if ( v9 == 1 )
  {
    a1[3] = nullptr;
    *((_OWORD *)a1 + 2) = 0;
    v23 = v2[4];
    if ( v23 )
    {
      v32 = (void *)qalloc_or_throw(8LL * (_QWORD)v23, (const char *)a2);
      a1[5] = v23;
      a1[3] = v32;
      a2 = (void **)v2[3];
      memcpy(v32, a2, 8LL * (_QWORD)v23);
      a1[4] = v23;
    }
    v24 = v2[6];
    a1[7] = nullptr;
    *((_OWORD *)a1 + 4) = 0;
    a1[6] = v24;
    v25 = v2[8];
    if ( v25 )
    {
      v31 = (void *)qalloc_or_throw(8LL * (_QWORD)v25, (const char *)a2);
      a1[7] = v31;
      a1[9] = v25;
      memcpy(v31, v2[7], 8LL * (_QWORD)v25);
      a1[8] = v25;
    }
    *((_DWORD *)a1 + 20) = *((_DWORD *)v2 + 20);
  }
  else if ( v9 == 2 )
  {
    a1[3] = nullptr;
    *((_OWORD *)a1 + 2) = 0;
    v12 = v2[4];
    if ( v12 )
    {
      n[0] = (size_t)v2[4];
      v13 = 0;
      v14 = qalloc_or_throw(40LL * (_QWORD)v12, (const char *)a2);
      v15 = n[0];
      v16 = 0;
      a1[3] = (void *)v14;
      v17 = v14;
      a1[5] = (void *)v15;
      while ( 1 )
      {
        v18 = 40 * v13 + v17;
        v19 = (__int64)v2[3] + 40 * v13;
        *(_QWORD *)v18 = 0;
        *(_OWORD *)(v18 + 8) = v16;
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 )
        {
          v36 = v15;
          n[0] = 8 * v20;
          v21 = (void *)qalloc_or_throw(8 * v20, (const char *)a2);
          *(_QWORD *)(v18 + 16) = v20;
          v22 = n[0];
          *(_QWORD *)v18 = v21;
          a2 = *(void ***)v19;
          memcpy(v21, *(const void **)v19, v22);
          *(_QWORD *)(v18 + 8) = v20;
          v15 = v36;
          v16 = 0;
        }
        ++v13;
        *(_QWORD *)(v18 + 24) = *(_QWORD *)(v19 + 24);
        *(_QWORD *)(v18 + 32) = *(_QWORD *)(v19 + 32);
        if ( v15 == v13 )
          break;
        v17 = (__int64)a1[3];
      }
      a1[4] = (void *)v15;
    }
  }
}

