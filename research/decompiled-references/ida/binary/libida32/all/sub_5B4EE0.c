_QWORD *__fastcall sub_5B4EE0(__int64 *a1, const char *a2)
{
  _QWORD *v2; // rax
  size_t v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128i si128; // xmm1
  int v12; // edx
  _QWORD *v13; // rdx
  void *v15; // rax
  const void *v16; // rsi

  v2 = (_QWORD *)operator new(0x98u);
  v3 = a1[2];
  v4 = v2;
  *v2 = &off_2AFD020;
  v5 = *a1;
  v4[2] = 0;
  v4[1] = v5;
  *(_OWORD *)(v4 + 3) = 0;
  if ( v3 )
  {
    v15 = (void *)qalloc_or_throw(v3, a2);
    v4[2] = v15;
    v16 = (const void *)a1[1];
    v4[4] = v3;
    memcpy(v15, v16, v3);
    v4[3] = v3;
  }
  v6 = a1[4];
  v4[15] = -1;
  v4[5] = v6;
  LODWORD(v6) = *((_DWORD *)a1 + 10);
  v4[16] = -1;
  *((_DWORD *)v4 + 12) = v6;
  v4[17] = 0xFFFFFFFFLL;
  *((_DWORD *)v4 + 36) = 0;
  *(_OWORD *)(v4 + 7) = 0;
  *(_OWORD *)(v4 + 9) = 0;
  *(_OWORD *)(v4 + 11) = 0;
  *(_OWORD *)(v4 + 13) = 0;
  merge_handler_ctr();
  v4[9] = 0;
  *v4 = &off_2B05B80;
  if ( *(int *)(v4[1] + 28LL) > 0 )
  {
    v7 = 0;
    do
    {
      v8 = v7;
      v9 = operator new(0xA0u);
      v10 = v4[1];
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v12 = *(_DWORD *)(v10 + 4LL * (int)v7 + 16);
      *(_QWORD *)(v9 + 32) = v10;
      *(_QWORD *)v9 = off_2B05AC8;
      *(_DWORD *)(v9 + 8) = v12;
      v13 = (_QWORD *)(v9 + 40);
      *(__m128i *)(v9 + 16) = si128;
      do
      {
        *v13 = 0;
        v13 += 5;
        *((_OWORD *)v13 - 2) = 0;
        *(v13 - 2) = 0;
        *((_DWORD *)v13 - 2) = -1;
      }
      while ( (_QWORD *)(v9 + 160) != v13 );
      v4[v7++ + 7] = v9;
      *(_DWORD *)(v9 + 12) = v8;
    }
    while ( *(_DWORD *)(v10 + 28) > (int)v7 );
  }
  return v4;
}

