__int64 __fastcall sub_15F4620(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  void *v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rax
  unsigned int v9; // r12d
  void *v10; // rax
  void *v11; // rax
  unsigned int v12; // r12d
  void *v13; // rax
  unsigned int v14; // r12d
  void *v15; // rax
  unsigned int v16; // r12d
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  int v20; // edx
  int v21; // edx
  int v22; // edx
  __int64 v23; // rdx
  const void *v24; // rsi
  int v25; // eax
  const void *v26; // rsi
  int v27; // eax
  __int64 v28; // rdx
  const void *v29; // rsi
  int v30; // eax
  __int64 v31; // rdx
  const void *v32; // rsi
  int v33; // eax
  __int64 v34; // rdx
  const void *v35; // rsi
  int v36; // eax
  size_t v37; // rdx
  size_t v38; // rdx
  size_t v39; // rdx
  size_t v40; // rdx
  size_t v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // rbx
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  void *v49; // rdi
  void *v50; // rdi

  result = *((unsigned int *)a1 + 2);
  v3 = *a1;
  v4 = *a1 + 640 * result;
  if ( *a1 != v4 )
  {
    do
    {
      *(_DWORD *)a2 = *(_DWORD *)v3;
      *(_WORD *)(a2 + 4) = *(_WORD *)(v3 + 4);
      v18 = *(_DWORD *)(v3 + 8);
      *(_QWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 8) = v18;
      v19 = *(_QWORD *)(v3 + 16);
      *(_DWORD *)(a2 + 32) = 0;
      *(_DWORD *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 16) = v19;
      LODWORD(v19) = *(_DWORD *)(v3 + 24);
      *(_QWORD *)(v3 + 16) = 0;
      *(_DWORD *)(a2 + 24) = v19;
      v20 = *(_DWORD *)(v3 + 28);
      *(_DWORD *)(v3 + 24) = 0;
      LODWORD(v19) = *(_DWORD *)(a2 + 28);
      *(_DWORD *)(a2 + 28) = v20;
      v21 = *(_DWORD *)(v3 + 32);
      *(_DWORD *)(v3 + 28) = v19;
      LODWORD(v19) = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 32) = v21;
      *(_DWORD *)(v3 + 32) = v19;
      *(_DWORD *)(a2 + 48) = 0;
      *(_DWORD *)(a2 + 52) = 4;
      v22 = *(_DWORD *)(v3 + 48);
      *(_QWORD *)(a2 + 40) = a2 + 56;
      if ( v22 )
        sub_1576230((char ***)(a2 + 40), (char ***)(v3 + 40));
      *(_DWORD *)(a2 + 96) = 0;
      v6 = (void *)(a2 + 104);
      *(_DWORD *)(a2 + 100) = 2;
      v7 = *(_DWORD *)(v3 + 96);
      *(_QWORD *)(a2 + 88) = a2 + 104;
      if ( v7 && a2 + 88 != v3 + 88 )
      {
        v31 = *(_QWORD *)(v3 + 88);
        v32 = (const void *)(v3 + 104);
        if ( v31 == v3 + 104 )
        {
          v41 = 8LL * v7;
          if ( v7 <= 2uLL
            || (sub_2237220(a2 + 88, a2 + 104, v7, 8),
                v6 = *(void **)(a2 + 88),
                v32 = *(const void **)(v3 + 88),
                (v41 = 8LL * *(unsigned int *)(v3 + 96)) != 0) )
          {
            memcpy(v6, v32, v41);
          }
          *(_DWORD *)(a2 + 96) = v7;
          *(_DWORD *)(v3 + 96) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 96) = v7;
          v33 = *(_DWORD *)(v3 + 100);
          *(_QWORD *)(a2 + 88) = v31;
          *(_DWORD *)(a2 + 100) = v33;
          *(_QWORD *)(v3 + 88) = v32;
          *(_DWORD *)(v3 + 100) = 0;
          *(_DWORD *)(v3 + 96) = 0;
        }
      }
      v8 = *(_QWORD *)(v3 + 120);
      *(_DWORD *)(a2 + 136) = 0;
      *(_DWORD *)(a2 + 140) = 8;
      *(_QWORD *)(a2 + 120) = v8;
      v9 = *(_DWORD *)(v3 + 136);
      v10 = (void *)(a2 + 144);
      *(_QWORD *)(a2 + 128) = a2 + 144;
      if ( v9 && a2 + 128 != v3 + 128 )
      {
        v28 = *(_QWORD *)(v3 + 128);
        v29 = (const void *)(v3 + 144);
        if ( v28 == v3 + 144 )
        {
          v39 = 8LL * v9;
          if ( v9 <= 8uLL
            || (sub_2237220(a2 + 128, a2 + 144, v9, 8),
                v10 = *(void **)(a2 + 128),
                v29 = *(const void **)(v3 + 128),
                (v39 = 8LL * *(unsigned int *)(v3 + 136)) != 0) )
          {
            memcpy(v10, v29, v39);
          }
          *(_DWORD *)(a2 + 136) = v9;
          *(_DWORD *)(v3 + 136) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 136) = v9;
          v30 = *(_DWORD *)(v3 + 140);
          *(_QWORD *)(a2 + 128) = v28;
          *(_DWORD *)(a2 + 140) = v30;
          *(_QWORD *)(v3 + 128) = v29;
          *(_DWORD *)(v3 + 140) = 0;
          *(_DWORD *)(v3 + 136) = 0;
        }
      }
      *(_DWORD *)(a2 + 216) = 0;
      v11 = (void *)(a2 + 224);
      *(_DWORD *)(a2 + 220) = 8;
      v12 = *(_DWORD *)(v3 + 216);
      *(_QWORD *)(a2 + 208) = a2 + 224;
      if ( v12 && a2 + 208 != v3 + 208 )
      {
        v34 = *(_QWORD *)(v3 + 208);
        v35 = (const void *)(v3 + 224);
        if ( v34 == v3 + 224 )
        {
          v37 = 8LL * v12;
          if ( v12 <= 8uLL
            || (sub_2237220(a2 + 208, a2 + 224, v12, 8),
                v11 = *(void **)(a2 + 208),
                v35 = *(const void **)(v3 + 208),
                (v37 = 8LL * *(unsigned int *)(v3 + 216)) != 0) )
          {
            memcpy(v11, v35, v37);
          }
          *(_DWORD *)(a2 + 216) = v12;
          *(_DWORD *)(v3 + 216) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 216) = v12;
          v36 = *(_DWORD *)(v3 + 220);
          *(_QWORD *)(a2 + 208) = v34;
          *(_DWORD *)(a2 + 220) = v36;
          *(_QWORD *)(v3 + 208) = v35;
          *(_DWORD *)(v3 + 220) = 0;
          *(_DWORD *)(v3 + 216) = 0;
        }
      }
      sub_2236950(a2 + 288, a2 + 312, 8, v3 + 312, v3 + 288);
      *(_DWORD *)(a2 + 384) = 0;
      *(_QWORD *)(a2 + 376) = a2 + 392;
      *(_DWORD *)(a2 + 388) = 2;
      if ( *(_DWORD *)(v3 + 384) )
        sub_1576230((char ***)(a2 + 376), (char ***)(v3 + 376));
      *(_DWORD *)(a2 + 416) = 0;
      v13 = (void *)(a2 + 424);
      *(_DWORD *)(a2 + 420) = 4;
      v14 = *(_DWORD *)(v3 + 416);
      *(_QWORD *)(a2 + 408) = a2 + 424;
      if ( v14 && a2 + 408 != v3 + 408 )
      {
        v26 = *(const void **)(v3 + 408);
        if ( (const void *)(v3 + 424) == v26 )
        {
          v40 = 8LL * v14;
          if ( v14 <= 4uLL
            || (sub_2237220(a2 + 408, a2 + 424, v14, 8),
                v13 = *(void **)(a2 + 408),
                v26 = *(const void **)(v3 + 408),
                (v40 = 8LL * *(unsigned int *)(v3 + 416)) != 0) )
          {
            memcpy(v13, v26, v40);
          }
          *(_DWORD *)(a2 + 416) = v14;
          *(_DWORD *)(v3 + 416) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 416) = v14;
          v27 = *(_DWORD *)(v3 + 420);
          *(_QWORD *)(a2 + 408) = v26;
          *(_DWORD *)(a2 + 420) = v27;
          *(_QWORD *)(v3 + 408) = v3 + 424;
          *(_DWORD *)(v3 + 420) = 0;
          *(_DWORD *)(v3 + 416) = 0;
        }
      }
      sub_2236950(a2 + 456, a2 + 480, 4, v3 + 480, v3 + 456);
      v15 = (void *)(a2 + 528);
      *(_DWORD *)(a2 + 520) = 0;
      *(_DWORD *)(a2 + 524) = 8;
      v16 = *(_DWORD *)(v3 + 520);
      *(_QWORD *)(a2 + 512) = a2 + 528;
      if ( v16 && a2 + 512 != v3 + 512 )
      {
        v23 = *(_QWORD *)(v3 + 512);
        v24 = (const void *)(v3 + 528);
        if ( v23 == v3 + 528 )
        {
          v38 = 8LL * v16;
          if ( v16 <= 8uLL
            || (sub_2237220(a2 + 512, a2 + 528, v16, 8),
                v15 = *(void **)(a2 + 512),
                v24 = *(const void **)(v3 + 512),
                (v38 = 8LL * *(unsigned int *)(v3 + 520)) != 0) )
          {
            memcpy(v15, v24, v38);
          }
          *(_DWORD *)(a2 + 520) = v16;
          *(_DWORD *)(v3 + 520) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 520) = v16;
          v25 = *(_DWORD *)(v3 + 524);
          *(_QWORD *)(a2 + 512) = v23;
          *(_DWORD *)(a2 + 524) = v25;
          *(_QWORD *)(v3 + 512) = v24;
          *(_DWORD *)(v3 + 524) = 0;
          *(_DWORD *)(v3 + 520) = 0;
        }
      }
      v17 = *(_DWORD *)(v3 + 592);
      v3 += 640;
      a2 += 640;
      *(_DWORD *)(a2 - 48) = v17;
      *(_BYTE *)(a2 - 44) = *(_BYTE *)(v3 - 44);
      *(_BYTE *)(a2 - 43) = *(_BYTE *)(v3 - 43);
      *(_BYTE *)(a2 - 42) = *(_BYTE *)(v3 - 42);
      *(_BYTE *)(a2 - 41) = *(_BYTE *)(v3 - 41);
      *(_BYTE *)(a2 - 40) = *(_BYTE *)(v3 - 40);
      *(_BYTE *)(a2 - 39) = *(_BYTE *)(v3 - 39);
      *(_BYTE *)(a2 - 38) = *(_BYTE *)(v3 - 38);
      *(_BYTE *)(a2 - 37) = *(_BYTE *)(v3 - 37);
      *(__m128i *)(a2 - 32) = _mm_loadu_si128((const __m128i *)(v3 - 32));
      *(__m128i *)(a2 - 16) = _mm_loadu_si128((const __m128i *)(v3 - 16));
    }
    while ( v4 != v3 );
    result = *((unsigned int *)a1 + 2);
    v42 = *a1;
    v43 = *a1 + 640 * result;
    if ( *a1 != v43 )
    {
      do
      {
        v43 -= 640;
        v50 = *(void **)(v43 + 512);
        if ( v50 != (void *)(v43 + 528) )
          free(v50);
        if ( !*(_BYTE *)(v43 + 476) )
          free(*(void **)(v43 + 456));
        v44 = *(void **)(v43 + 408);
        if ( v44 != (void *)(v43 + 424) )
          free(v44);
        v45 = *(void **)(v43 + 376);
        if ( v45 != (void *)(v43 + 392) )
          free(v45);
        if ( !*(_BYTE *)(v43 + 308) )
          free(*(void **)(v43 + 288));
        v46 = *(void **)(v43 + 208);
        if ( v46 != (void *)(v43 + 224) )
          free(v46);
        v47 = *(void **)(v43 + 128);
        if ( v47 != (void *)(v43 + 144) )
          free(v47);
        v48 = *(void **)(v43 + 88);
        if ( v48 != (void *)(v43 + 104) )
          free(v48);
        v49 = *(void **)(v43 + 40);
        if ( v49 != (void *)(v43 + 56) )
          free(v49);
        result = operator delete(*(_QWORD *)(v43 + 16), 8LL * *(unsigned int *)(v43 + 32), 8);
      }
      while ( v42 != v43 );
    }
  }
  return result;
}
