void __fastcall sub_3F3070(__int64 *a1, char *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  size_t v11; // r15
  size_t v12; // r15
  __int64 v13; // rbx
  size_t v14; // r15
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  char *v18; // rdx
  __int64 v19; // rax
  char *v20; // rdx
  char *v21; // r12
  char *v22; // rbx
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rcx
  __m128i v26; // xmm0
  __int64 v27; // rcx
  __m128i v28; // xmm0
  __int64 v29; // rcx
  __m128i v30; // xmm0
  void *v31; // rdi
  void *v32; // rdi
  __int64 v34; // [rsp+0h] [rbp-48h]
  char *v35; // [rsp+8h] [rbp-40h]

  v6 = a2;
  v9 = a1[2];
  if ( v9 < (unsigned __int64)a2 )
  {
    v18 = a2;
    a2 = nullptr;
    v19 = qvector_reserve(a1, 0, v18, 80);
    v20 = (char *)a1[2];
    v21 = (char *)a1[1];
    a1[2] = v9;
    v34 = v19;
    v22 = (char *)*a1;
    v35 = v20;
    v23 = (__int64)(v21 - 1);
    if ( v23 >= 0 )
    {
      v24 = v19;
      do
      {
        *(_QWORD *)v24 = *(_QWORD *)v22;
        v25 = *((_QWORD *)v22 + 1);
        v26 = _mm_loadu_si128((const __m128i *)v22 + 1);
        *((_QWORD *)v22 + 1) = 0;
        *(_QWORD *)(v24 + 8) = v25;
        *(__m128i *)(v24 + 16) = v26;
        v27 = *((_QWORD *)v22 + 4);
        v28 = _mm_loadu_si128((const __m128i *)(v22 + 40));
        *((_OWORD *)v22 + 1) = 0;
        *(_QWORD *)(v24 + 32) = v27;
        *(__m128i *)(v24 + 40) = v28;
        v29 = *((_QWORD *)v22 + 7);
        v30 = _mm_loadu_si128((const __m128i *)v22 + 4);
        *((_QWORD *)v22 + 4) = 0;
        *(_OWORD *)(v22 + 40) = 0;
        *(_QWORD *)(v24 + 56) = v29;
        *(__m128i *)(v24 + 64) = v30;
        v31 = *((void **)v22 + 4);
        *((_QWORD *)v22 + 7) = 0;
        *((_QWORD *)v22 + 9) = 0;
        if ( v31 )
        {
          *((_QWORD *)v22 + 5) = 0;
          qfree(v31);
        }
        v32 = *((void **)v22 + 1);
        if ( v32 )
        {
          *((_QWORD *)v22 + 2) = 0;
          qfree(v32);
        }
        v22 += 80;
        v24 += 80;
      }
      while ( v23-- != 0 );
      v22 = (char *)*a1;
    }
    qfree(v22);
    *a1 = v34;
    a1[2] = (__int64)v35;
  }
  v10 = a1[1];
  if ( v10 < (unsigned __int64)v6 )
  {
    do
    {
      while ( 1 )
      {
        v13 = *a1 + 80 * v10;
        *(_QWORD *)v13 = *a3;
        *(_QWORD *)(v13 + 8) = 0;
        *(_OWORD *)(v13 + 16) = 0;
        v14 = a3[2];
        if ( v14 )
        {
          v15 = (void *)qalloc_or_throw(a3[2], a2, a3, a4, a5, a6);
          *(_QWORD *)(v13 + 24) = v14;
          *(_QWORD *)(v13 + 8) = v15;
          a2 = (char *)a3[1];
          memcpy(v15, a2, v14);
          *(_QWORD *)(v13 + 16) = v14;
        }
        *(_QWORD *)(v13 + 32) = 0;
        *(_OWORD *)(v13 + 40) = 0;
        v11 = a3[5];
        if ( v11 )
        {
          v17 = (void *)qalloc_or_throw(a3[5], a2, a3, a4, a5, a6);
          *(_QWORD *)(v13 + 32) = v17;
          *(_QWORD *)(v13 + 48) = v11;
          a2 = (char *)a3[4];
          memcpy(v17, a2, v11);
          *(_QWORD *)(v13 + 40) = v11;
        }
        *(_QWORD *)(v13 + 56) = 0;
        *(_OWORD *)(v13 + 64) = 0;
        v12 = a3[8];
        if ( v12 )
          break;
        if ( v6 == (char *)++v10 )
          goto LABEL_11;
      }
      v16 = (void *)qalloc_or_throw(a3[8], a2, a3, a4, a5, a6);
      *(_QWORD *)(v13 + 56) = v16;
      ++v10;
      *(_QWORD *)(v13 + 72) = v12;
      a2 = (char *)a3[7];
      memcpy(v16, a2, v12);
      *(_QWORD *)(v13 + 64) = v12;
    }
    while ( v6 != (char *)v10 );
  }
LABEL_11:
  a1[1] = (__int64)v6;
}

