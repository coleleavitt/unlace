void __fastcall sub_75A6B0(__int64 *a1, unsigned __int64 a2)
{
  char *v2; // rbx
  __int64 v4; // rax
  char *v5; // rcx
  char *v6; // r12
  char *v7; // rdi
  __int64 v8; // r12
  char *v9; // r15
  char *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm0
  int v26; // eax
  _QWORD *v27; // r14
  void *v28; // rdi
  char *v29; // rdi
  __int64 v30; // rsi
  _QWORD *v31; // r14
  void *v32; // rdi
  char *v33; // rdi
  __int64 v34; // rsi
  void *v35; // rdi
  void *v36; // rdi
  __int64 v37; // [rsp+0h] [rbp-48h]
  char *v38; // [rsp+8h] [rbp-40h]

  v2 = (char *)a1[2];
  if ( (unsigned __int64)v2 < a2 )
  {
    v4 = qvector_reserve(a1, 0, a2, 176);
    v5 = (char *)a1[2];
    v6 = (char *)a1[1];
    a1[2] = (__int64)v2;
    v37 = v4;
    v7 = (char *)*a1;
    v38 = v5;
    v8 = (__int64)(v6 - 1);
    if ( v8 >= 0 )
    {
      v9 = v7 + 96;
      v10 = v7 + 152;
      v11 = v4;
      do
      {
        v12 = *((_QWORD *)v9 - 12);
        v13 = _mm_loadu_si128((const __m128i *)(v9 - 88));
        *((_QWORD *)v9 - 12) = 0;
        *(_OWORD *)(v9 - 88) = 0;
        *(_QWORD *)v11 = v12;
        *(__m128i *)(v11 + 8) = v13;
        v14 = *((_QWORD *)v9 - 9);
        v15 = _mm_loadu_si128((const __m128i *)v9 - 4);
        *((_QWORD *)v9 - 9) = 0;
        *(_QWORD *)(v11 + 24) = v14;
        *(__m128i *)(v11 + 32) = v15;
        v16 = *((_QWORD *)v9 - 6);
        v17 = *((_QWORD *)v9 - 5);
        *((_OWORD *)v9 - 4) = 0;
        *(_QWORD *)(v11 + 48) = v16;
        v18 = *((_QWORD *)v9 - 4);
        *(_QWORD *)(v11 + 56) = v17;
        *(_QWORD *)(v11 + 64) = v18;
        v19 = *((_QWORD *)v9 - 3);
        v20 = _mm_loadu_si128((const __m128i *)v9 - 1);
        *(_QWORD *)(v11 + 96) = 0;
        *(_QWORD *)(v11 + 72) = v19;
        *(__m128i *)(v11 + 80) = v20;
        if ( *((char **)v9 - 6) == v9 )
        {
          *(_QWORD *)(v11 + 48) = v11 + 96;
          *(_QWORD *)(v11 + 96) = *(_QWORD *)v9;
        }
        if ( v18 )
          *(_QWORD *)(*(_QWORD *)(v11 + 48) + 8 * (*(unsigned int *)(v18 + 8) % v17)) = v11 + 64;
        v21 = *((_QWORD *)v9 + 1);
        *((_QWORD *)v9 - 1) = 0;
        *((_QWORD *)v9 - 5) = 1;
        v22 = *((_QWORD *)v9 + 2);
        *(_QWORD *)v9 = 0;
        *((_QWORD *)v9 - 6) = v9;
        *((_QWORD *)v9 - 4) = 0;
        *((_QWORD *)v9 - 3) = 0;
        *(_QWORD *)(v11 + 104) = v21;
        v23 = *((_QWORD *)v9 + 3);
        *(_QWORD *)(v11 + 112) = v22;
        *(_QWORD *)(v11 + 120) = v23;
        v24 = *((_QWORD *)v9 + 4);
        v25 = _mm_loadu_si128((const __m128i *)(v9 + 40));
        *(_QWORD *)(v11 + 152) = 0;
        *(_QWORD *)(v11 + 128) = v24;
        *(__m128i *)(v11 + 136) = v25;
        if ( *((char **)v9 + 1) == v10 )
        {
          *(_QWORD *)(v11 + 104) = v11 + 152;
          *(_QWORD *)(v11 + 152) = *((_QWORD *)v9 + 7);
        }
        if ( v23 )
          *(_QWORD *)(*(_QWORD *)(v11 + 104) + 8 * (*(unsigned int *)(v23 + 8) % v22)) = v11 + 120;
        v26 = *((_DWORD *)v9 + 16);
        *((_QWORD *)v9 + 3) = 0;
        *((_QWORD *)v9 + 6) = 0;
        *((_QWORD *)v9 + 2) = 1;
        *((_QWORD *)v9 + 7) = 0;
        *((_QWORD *)v9 + 1) = v10;
        *((_QWORD *)v9 + 4) = 0;
        *(_DWORD *)(v11 + 160) = v26;
        *(_QWORD *)(v11 + 164) = *(_QWORD *)(v9 + 68);
        v27 = *((_QWORD **)v9 + 3);
        while ( v27 )
        {
          v28 = v27;
          v27 = (_QWORD *)*v27;
          operator delete(v28, 0x10u);
        }
        memset(*((void **)v9 + 1), 0, 8LL * *((_QWORD *)v9 + 2));
        v29 = *((char **)v9 + 1);
        v30 = *((_QWORD *)v9 + 2);
        *((_QWORD *)v9 + 4) = 0;
        *((_QWORD *)v9 + 3) = 0;
        if ( v10 != v29 )
          operator delete(v29, 8 * v30);
        v31 = *((_QWORD **)v9 - 4);
        while ( v31 )
        {
          v32 = v31;
          v31 = (_QWORD *)*v31;
          operator delete(v32, 0x10u);
        }
        memset(*((void **)v9 - 6), 0, 8LL * *((_QWORD *)v9 - 5));
        v33 = *((char **)v9 - 6);
        v34 = *((_QWORD *)v9 - 5);
        *((_QWORD *)v9 - 3) = 0;
        *((_QWORD *)v9 - 4) = 0;
        if ( v33 != v9 )
          operator delete(v33, 8 * v34);
        v35 = *((void **)v9 - 9);
        if ( v35 )
        {
          *((_QWORD *)v9 - 8) = 0;
          qfree(v35);
        }
        v36 = *((void **)v9 - 12);
        if ( v36 )
        {
          *((_QWORD *)v9 - 11) = 0;
          qfree(v36);
        }
        --v8;
        v11 += 176;
        v9 += 176;
        v10 += 176;
      }
      while ( v8 != -1 );
      v7 = (char *)*a1;
    }
    qfree(v7);
    *a1 = v37;
    a1[2] = (__int64)v38;
  }
}

