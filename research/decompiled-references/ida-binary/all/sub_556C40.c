_QWORD *__fastcall sub_556C40(_QWORD *a1, unsigned __int64 a2, int *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // rax
  size_t v9; // r15
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  size_t v14; // r15
  void *v15; // rax
  void *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // r15
  void *v22; // rax
  void *v23; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+18h] [rbp-50h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 152);
  v4 = a1[1];
  v25 = v4;
  if ( v4 < a2 )
  {
    v26 = 152 * v4;
    do
    {
      v10 = *a1 + v26;
      v11 = *a3;
      *(_QWORD *)(v10 + 8) = *((_QWORD *)a3 + 1);
      v12 = *((_QWORD *)a3 + 2);
      *(_DWORD *)v10 = v11;
      LOWORD(v11) = *((_WORD *)a3 + 2);
      *(_QWORD *)(v10 + 16) = v12;
      *(_WORD *)(v10 + 4) = v11;
      v13 = *((_QWORD *)a3 + 3);
      *(_QWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 24) = v13;
      *(_OWORD *)(v10 + 40) = 0;
      v14 = *((_QWORD *)a3 + 5);
      if ( v14 )
      {
        v15 = (void *)qalloc_or_throw(*((_QWORD *)a3 + 5));
        *(_QWORD *)(v10 + 48) = v14;
        *(_QWORD *)(v10 + 32) = v15;
        memcpy(v15, *((const void **)a3 + 4), v14);
        *(_QWORD *)(v10 + 40) = v14;
      }
      *(_QWORD *)(v10 + 56) = 0;
      *(_OWORD *)(v10 + 64) = 0;
      v5 = *((_QWORD *)a3 + 8);
      if ( v5 )
      {
        v23 = (void *)qalloc_or_throw(40 * v5);
        *(_QWORD *)(v10 + 56) = v23;
        *(_QWORD *)(v10 + 72) = v5;
        memcpy(v23, *((const void **)a3 + 7), 40 * v5);
        *(_QWORD *)(v10 + 64) = v5;
      }
      *(_QWORD *)(v10 + 80) = 0;
      *(_OWORD *)(v10 + 88) = 0;
      v6 = *((_QWORD *)a3 + 11);
      if ( v6 )
      {
        v17 = qalloc_or_throw(24 * v6);
        *(_QWORD *)(v10 + 80) = v17;
        v18 = v17;
        v19 = 0;
        *(_QWORD *)(v10 + 96) = v6;
        while ( 1 )
        {
          v20 = v18 + 24 * v19;
          v21 = *((_QWORD *)a3 + 10) + 24 * v19;
          *(_QWORD *)v20 = 0;
          *(_OWORD *)(v20 + 8) = 0;
          if ( *(_QWORD *)(v21 + 8) )
          {
            n = *(_QWORD *)(v21 + 8);
            v22 = (void *)qalloc_or_throw(n);
            *(_QWORD *)v20 = v22;
            ++v19;
            *(_QWORD *)(v20 + 16) = n;
            memcpy(v22, *(const void **)v21, n);
            *(_QWORD *)(v20 + 8) = n;
            if ( v6 == v19 )
            {
LABEL_18:
              *(_QWORD *)(v10 + 88) = v6;
              break;
            }
          }
          else if ( v6 == ++v19 )
          {
            goto LABEL_18;
          }
          v18 = *(_QWORD *)(v10 + 80);
        }
      }
      v7 = _mm_loadu_si128((const __m128i *)(a3 + 26));
      v8 = *((_QWORD *)a3 + 15);
      *(_QWORD *)(v10 + 128) = 0;
      *(_OWORD *)(v10 + 136) = 0;
      *(_QWORD *)(v10 + 120) = v8;
      *(__m128i *)(v10 + 104) = v7;
      v9 = *((_QWORD *)a3 + 17);
      if ( v9 )
      {
        v16 = (void *)qalloc_or_throw(*((_QWORD *)a3 + 17));
        *(_QWORD *)(v10 + 128) = v16;
        *(_QWORD *)(v10 + 144) = v9;
        memcpy(v16, *((const void **)a3 + 16), v9);
        *(_QWORD *)(v10 + 136) = v9;
      }
      ++v25;
      v26 += 152;
    }
    while ( a2 != v25 );
  }
  a1[1] = a2;
  return a1;
}
