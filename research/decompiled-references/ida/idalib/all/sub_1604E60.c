void __fastcall sub_1604E60(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r12
  __m128i *v8; // rbp
  __int64 v9; // rax
  __m128i *v10; // rcx
  __int64 *v11; // rdx
  __int64 *v12; // rax
  unsigned __int32 v13; // ecx
  unsigned int v14; // esi
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rbx
  void *v19; // rdi
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int32 v24; // edx
  __int64 v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int32 v29; // edx
  __int64 v30[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = a1 + 16;
  v4 = sub_2237400(a1, a1 + 16, a2, 80, v30);
  v5 = *(_QWORD *)a1;
  v6 = v4;
  v7 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 == v7 )
    goto LABEL_18;
  v8 = (__m128i *)v4;
  do
  {
    v9 = *(_QWORD *)v5;
    v10 = v8 + 1;
    v8->m128i_i32[2] = 1;
    v11 = &v8->m128i_i64[1];
    v8->m128i_i32[3] = 0;
    v8->m128i_i64[0] = v9;
    v12 = (__int64 *)(v5 + 8);
    if ( &v8[3] == &v8[1] )
    {
      v13 = 0;
    }
    else
    {
      do
      {
        v10->m128i_i64[0] = -4096;
        ++v10;
        v10[-1].m128i_i32[2] = 0;
      }
      while ( &v8[3] != v10 );
      v13 = (unsigned __int32)v8->m128i_i32[2] >> 1;
    }
    v14 = *(_DWORD *)(v5 + 8) & 0xFFFFFFFE;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(v5 + 8) & 1 | (2 * v13);
    v8->m128i_i32[2] = v14 | v8->m128i_i32[2] & 1;
    v15 = v8->m128i_i32[3];
    v8->m128i_i32[3] = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v5 + 12) = v15;
    if ( (v8->m128i_i8[8] & 1) != 0 )
    {
      if ( (*(_BYTE *)(v5 + 8) & 1) == 0 )
      {
        v16 = *(_DWORD *)(v5 + 24);
        v11 = (__int64 *)(v5 + 8);
        v12 = &v8->m128i_i64[1];
LABEL_8:
        *(_BYTE *)v11 |= 1u;
        v17 = v11[1];
        *(__m128i *)(v11 + 1) = _mm_loadu_si128((const __m128i *)(v12 + 1));
        *(__m128i *)(v11 + 3) = _mm_loadu_si128((const __m128i *)(v12 + 3));
        *(_BYTE *)v12 &= ~1u;
        v12[1] = v17;
        *((_DWORD *)v12 + 4) = v16;
        goto LABEL_9;
      }
      v22 = *(_QWORD *)(v5 + 16);
      if ( v22 == -4096 || v22 == -8192 || (v23 = v8[1].m128i_i64[0], v23 == -8192) || v23 == -4096 )
      {
        v27 = _mm_loadu_si128(v8 + 1);
        v8[1].m128i_i64[0] = *(_QWORD *)(v5 + 16);
        v8[1].m128i_i32[2] = *(_DWORD *)(v5 + 24);
        *(_QWORD *)(v5 + 16) = v27.m128i_i64[0];
        *(_DWORD *)(v5 + 24) = v27.m128i_i32[2];
        v25 = *(_QWORD *)(v5 + 32);
        if ( v25 == -4096 )
          goto LABEL_31;
      }
      else
      {
        v24 = v8[1].m128i_i32[2];
        v8[1] = _mm_loadu_si128((const __m128i *)(v5 + 16));
        *(_QWORD *)(v5 + 16) = v23;
        v25 = *(_QWORD *)(v5 + 32);
        *(_DWORD *)(v5 + 24) = v24;
        if ( v25 == -4096 )
          goto LABEL_31;
      }
      if ( v25 == -8192 || (v28 = v8[2].m128i_i64[0], v28 == -4096) || v28 == -8192 )
      {
LABEL_31:
        v26 = _mm_loadu_si128(v8 + 2);
        v8[2].m128i_i64[0] = *(_QWORD *)(v5 + 32);
        v8[2].m128i_i32[2] = *(_DWORD *)(v5 + 40);
        *(_QWORD *)(v5 + 32) = v26.m128i_i64[0];
        *(_DWORD *)(v5 + 40) = v26.m128i_i32[2];
        goto LABEL_9;
      }
      v29 = v8[2].m128i_i32[2];
      v8[2] = _mm_loadu_si128((const __m128i *)(v5 + 32));
      *(_QWORD *)(v5 + 32) = v28;
      *(_DWORD *)(v5 + 40) = v29;
    }
    else
    {
      v16 = v8[1].m128i_i32[2];
      if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
        goto LABEL_8;
      v21 = v8[1].m128i_i64[0];
      v8[1].m128i_i64[0] = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = v21;
      v8[1].m128i_i32[2] = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(v5 + 24) = v16;
    }
LABEL_9:
    v8[3].m128i_i32[2] = 0;
    v8[3].m128i_i64[0] = (__int64)v8[4].m128i_i64;
    v8[3].m128i_i32[3] = 1;
    if ( *(_DWORD *)(v5 + 56) )
      sub_1604240((char ***)&v8[3], (char ***)(v5 + 48));
    v5 += 80;
    v8 += 5;
  }
  while ( v7 != v5 );
  v18 = *(_QWORD *)a1;
  v7 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v7 -= 80;
        v19 = *(void **)(v7 + 48);
        if ( v19 != (void *)(v7 + 64) )
          free(v19);
        if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
          break;
        operator delete(*(_QWORD *)(v7 + 16), 16LL * *(unsigned int *)(v7 + 24), 8);
        if ( v18 == v7 )
          goto LABEL_17;
      }
    }
    while ( v18 != v7 );
LABEL_17:
    v7 = *(_QWORD *)a1;
  }
LABEL_18:
  v20 = v30[0];
  if ( v3 != v7 )
    free((void *)v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v20;
}
