void __fastcall sub_115E4A0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i *v17; // rsi
  __m128i *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rbx
  void *v22; // rdi
  void *v23; // rdi
  void **v24; // rdi
  void **v25; // r12
  void **v26; // rbp
  void *v27; // rdi
  void *v28; // rdi

  v2 = *a1;
  v3 = *a1 + 192LL * *((unsigned int *)a1 + 2);
  if ( *a1 != v3 )
  {
    v6 = v2 + ((v3 - v2 - 192) & 0xFFFFFFFFFFFFFFC0LL) + 208;
    v7 = v2 + 16;
    do
    {
      *(_QWORD *)a2 = a2 + 16;
      v19 = *(_QWORD *)(v7 - 16);
      if ( v19 == v7 )
      {
        *(__m128i *)(a2 + 16) = _mm_loadu_si128((const __m128i *)v7);
      }
      else
      {
        *(_QWORD *)a2 = v19;
        *(_QWORD *)(a2 + 16) = *(_QWORD *)v7;
      }
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v7 - 8);
      *(_QWORD *)(v7 - 16) = v7;
      *(_QWORD *)(v7 - 8) = 0;
      *(_BYTE *)v7 = 0;
      *(_QWORD *)(a2 + 32) = a2 + 48;
      v8 = *(_QWORD *)(v7 + 16);
      if ( v8 == v7 + 32 )
      {
        *(__m128i *)(a2 + 48) = _mm_loadu_si128((const __m128i *)(v7 + 32));
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v8;
        *(_QWORD *)(a2 + 48) = *(_QWORD *)(v7 + 32);
      }
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 16) = v7 + 32;
      *(_QWORD *)(v7 + 24) = 0;
      *(_BYTE *)(v7 + 32) = 0;
      *(_QWORD *)(a2 + 64) = a2 + 80;
      v9 = *(_QWORD *)(v7 + 48);
      if ( v9 == v7 + 64 )
      {
        *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(v7 + 64));
      }
      else
      {
        *(_QWORD *)(a2 + 64) = v9;
        *(_QWORD *)(a2 + 80) = *(_QWORD *)(v7 + 64);
      }
      *(_QWORD *)(a2 + 72) = *(_QWORD *)(v7 + 56);
      *(_BYTE *)(v7 + 64) = 0;
      *(_QWORD *)(v7 + 48) = v7 + 64;
      *(_QWORD *)(v7 + 56) = 0;
      *(_OWORD *)(a2 + 96) = 0;
      *(_QWORD *)(a2 + 112) = 0;
      *(_QWORD *)(a2 + 96) = *(_QWORD *)(v7 + 80);
      v10 = *(_QWORD *)(v7 + 88);
      *(_QWORD *)(v7 + 80) = 0;
      v11 = *(_QWORD *)(a2 + 104);
      *(_QWORD *)(a2 + 104) = v10;
      v12 = *(_QWORD *)(v7 + 96);
      *(_QWORD *)(v7 + 88) = v11;
      v13 = *(_QWORD *)(a2 + 112);
      *(_QWORD *)(a2 + 112) = v12;
      *(_QWORD *)(v7 + 96) = v13;
      *(_QWORD *)(a2 + 120) = a2 + 136;
      v14 = *(_QWORD *)(v7 + 104);
      v15 = v7 + 120;
      if ( v14 == v7 + 120 )
      {
        *(__m128i *)(a2 + 136) = _mm_loadu_si128((const __m128i *)(v7 + 120));
      }
      else
      {
        *(_QWORD *)(a2 + 120) = v14;
        *(_QWORD *)(a2 + 136) = *(_QWORD *)(v7 + 120);
      }
      v16 = *(_QWORD *)(v7 + 112);
      v17 = (__m128i *)(v7 + 136);
      v18 = (__m128i *)(a2 + 152);
      v7 += 192;
      a2 += 192;
      *(_QWORD *)(a2 - 64) = v16;
      *(_QWORD *)(v7 - 88) = v15;
      *(_QWORD *)(v7 - 80) = 0;
      *(_BYTE *)(v7 - 72) = 0;
      sub_9FD150(v18, v17);
    }
    while ( v7 != v6 );
    v20 = *a1;
    v21 = *a1 + 192LL * *((unsigned int *)a1 + 2);
    while ( v20 != v21 )
    {
      while ( 1 )
      {
        v21 -= 192;
        if ( *(_BYTE *)(v21 + 184) )
        {
          v22 = *(void **)(v21 + 152);
          if ( v22 != (void *)(v21 + 168) )
            operator delete(v22);
        }
        v23 = *(void **)(v21 + 120);
        if ( v23 != (void *)(v21 + 136) )
          operator delete(v23);
        v24 = *(void ***)(v21 + 96);
        v25 = *(void ***)(v21 + 104);
        v26 = v24;
        if ( v25 != v24 )
        {
          do
          {
            while ( *v26 != v26 + 2 )
            {
              operator delete(*v26);
              v26 += 4;
              if ( v26 == v25 )
                goto LABEL_26;
            }
            v26 += 4;
          }
          while ( v25 != v26 );
LABEL_26:
          v24 = *(void ***)(v21 + 96);
        }
        if ( v24 )
          operator delete(v24);
        v27 = *(void **)(v21 + 64);
        if ( v27 != (void *)(v21 + 80) )
          operator delete(v27);
        v28 = *(void **)(v21 + 32);
        if ( v28 != (void *)(v21 + 48) )
          operator delete(v28);
        if ( *(_QWORD *)v21 == v21 + 16 )
          break;
        operator delete(*(void **)v21);
        if ( v20 == v21 )
          return;
      }
    }
  }
}

