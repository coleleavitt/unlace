size_t __fastcall sub_5EA6B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  size_t result; // rax
  size_t v5; // r13
  __int64 v6; // r12
  char *v7; // rax
  __int64 *v8; // rbx
  const char **v9; // rax
  size_t v10; // rax
  const char *v11; // r8
  size_t v12; // r15
  const void *v13; // r15
  size_t v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r14
  char *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __m128i v26; // xmm0
  void *v27; // rdi
  void *v29; // rdi
  __int64 v30; // rdx
  void *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  char *src; // [rsp+0h] [rbp-48h]
  const char *srca; // [rsp+0h] [rbp-48h]
  void *srcb; // [rsp+0h] [rbp-48h]
  void *srcc; // [rsp+0h] [rbp-48h]
  const char *v39; // [rsp+8h] [rbp-40h]

  v3 = *(int *)(a1 + 8);
  switch_dbctx(v3);
  result = get_idati(v3, a2);
  if ( *(int *)(result + 16) > 0 )
  {
    v5 = result;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(a1 + 48);
        v16 = *(_QWORD *)(a1 + 56);
        if ( v16 >= v15 + 1 )
        {
          src = *(char **)(a1 + 40);
        }
        else
        {
          v17 = qvector_reserve(a1 + 40, 0, v15 + 1, 48);
          v18 = *(_QWORD *)(a1 + 56);
          v19 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)(a1 + 56) = v16;
          src = (char *)v17;
          v20 = *(char **)(a1 + 40);
          v21 = v19 - 1;
          if ( v21 >= 0 )
          {
            v22 = v17;
            do
            {
              v23 = *(_QWORD *)v20;
              v24 = _mm_loadu_si128((const __m128i *)(v20 + 8));
              *(_QWORD *)v20 = 0;
              *(_OWORD *)(v20 + 8) = 0;
              *(_QWORD *)v22 = v23;
              *(__m128i *)(v22 + 8) = v24;
              v25 = *((_QWORD *)v20 + 3);
              v26 = _mm_loadu_si128((const __m128i *)v20 + 2);
              *((_QWORD *)v20 + 3) = 0;
              *(_QWORD *)(v22 + 24) = v25;
              *(__m128i *)(v22 + 32) = v26;
              v27 = *(void **)v20;
              *((_QWORD *)v20 + 5) = 0;
              if ( v27 )
              {
                *((_QWORD *)v20 + 1) = 0;
                qfree(v27);
              }
              v20 += 48;
              v22 += 48;
            }
            while ( v21-- != 0 );
            v20 = *(char **)(a1 + 40);
          }
          qfree(v20);
          *(_QWORD *)(a1 + 40) = src;
          *(_QWORD *)(a1 + 56) = v18;
          v15 = *(_QWORD *)(a1 + 48);
        }
        v7 = &src[48 * v15];
        *(_QWORD *)v7 = 0;
        v8 = (__int64 *)v7;
        *((_QWORD *)v7 + 3) = 0;
        *(_OWORD *)(v7 + 8) = 0;
        *((_OWORD *)v7 + 2) = 0;
        ++*(_QWORD *)(a1 + 48);
        v9 = *(const char ***)(*(_QWORD *)(v5 + 24) + 8 * v6);
        if ( *v9 && (srca = *v9, v10 = strlen(*v9), v11 = srca, (v12 = v10) != 0) )
        {
          v31 = (void *)*v8;
          v32 = v10 + 1;
          if ( v8[2] < v10 + 1 )
          {
            srcc = (void *)(v10 + 1);
            v39 = v11;
            v34 = qvector_reserve(v8, *v8, v32, 1);
            v11 = v39;
            v32 = (__int64)srcc;
            *v8 = v34;
            v31 = (void *)v34;
          }
          v8[1] = v32;
          memmove(v31, v11, v12);
          *(_BYTE *)(*v8 + v12) = 0;
        }
        else
        {
          v8[1] = 0;
        }
        result = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8 * v6);
        v13 = *(const void **)(result + 8);
        if ( v13 )
        {
          result = strlen(*(const char **)(result + 8));
          v14 = result;
          if ( result )
            break;
        }
        v8[4] = 0;
        if ( *(_DWORD *)(v5 + 16) <= (int)++v6 )
          return result;
      }
      v29 = (void *)v8[3];
      v30 = result + 1;
      if ( v8[5] < result + 1 )
      {
        srcb = (void *)(result + 1);
        v33 = qvector_reserve(v8 + 3, v8[3], v30, 1);
        v30 = (__int64)srcb;
        v8[3] = v33;
        v29 = (void *)v33;
      }
      v8[4] = v30;
      ++v6;
      memmove(v29, v13, v14);
      result = v8[3];
      *(_BYTE *)(result + v14) = 0;
    }
    while ( *(_DWORD *)(v5 + 16) > (int)v6 );
  }
  return result;
}

