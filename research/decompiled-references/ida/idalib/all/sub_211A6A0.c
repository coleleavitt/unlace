__m128i *__fastcall sub_211A6A0(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // rbp
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  void *v8; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rbp
  __int64 v12; // rbx
  void *v13; // r12
  __int64 v14; // r15
  void *v15; // r14
  _QWORD *v16; // r15
  _QWORD *v17; // r12
  void *v18; // rdi
  void *v19; // rdi
  int v20; // edx
  __int64 v21; // rax
  __m128i v22; // xmm1
  __m128i *result; // rax
  __int64 v24; // rsi
  __int64 v25; // rdi
  void *v26; // [rsp+0h] [rbp-78h]
  __int64 *v27; // [rsp+8h] [rbp-70h]
  __int64 *v28; // [rsp+18h] [rbp-60h]
  __m128i v29; // [rsp+20h] [rbp-58h] BYREF
  __m128i v30; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  if ( v2 != v3 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    do
    {
      while ( 1 )
      {
        v5 = *(_QWORD **)(v4 + 40);
        v6 = *(_QWORD **)(v4 + 32);
        if ( v5 != v6 )
        {
          do
          {
            while ( 1 )
            {
              v7 = (_QWORD *)v6[9];
              if ( v7 != v6 + 11 )
                operator delete(v7);
              v8 = (void *)v6[6];
              if ( !v8 )
                break;
              operator delete(v8);
              v6 += 13;
              if ( v5 == v6 )
                goto LABEL_8;
            }
            v6 += 13;
          }
          while ( v5 != v6 );
LABEL_8:
          v6 = *(_QWORD **)(v4 + 32);
        }
        if ( !v6 )
          break;
        v4 += 96;
        operator delete(v6);
        if ( v3 == v4 )
          goto LABEL_11;
      }
      v4 += 96;
    }
    while ( v3 != v4 );
LABEL_11:
    *(_QWORD *)(a1 + 32) = v2;
  }
  v9 = *(__int64 **)(a1 + 80);
  v10 = *(__int64 **)(a1 + 88);
  *(_QWORD *)(a1 + 104) = 0;
  v28 = v9;
  v27 = v10;
  if ( v9 != v10 )
  {
    v11 = v9;
    do
    {
      v12 = *v11;
      if ( *v11 )
      {
        v13 = *(void **)(v12 + 176);
        v14 = *(_QWORD *)(v12 + 168);
        if ( v13 != (void *)v14 )
        {
          do
          {
            while ( 1 )
            {
              v15 = *(void **)(v14 + 56);
              v26 = (void *)(v14 + 72);
              if ( v15 == (void *)(v14 + 72) )
                break;
              free(v15);
              operator delete(*(_QWORD *)(v14 + 32), 16LL * *(unsigned int *)(v14 + 48), 8);
              v14 += 72;
              if ( v13 == v26 )
                goto LABEL_18;
            }
            v24 = *(unsigned int *)(v14 + 48);
            v25 = *(_QWORD *)(v14 + 32);
            v14 = *(_QWORD *)(v14 + 56);
            operator delete(v25, 16 * v24, 8);
          }
          while ( v13 != v15 );
LABEL_18:
          v14 = *(_QWORD *)(v12 + 168);
        }
        if ( v14 )
          operator delete((void *)v14);
        v16 = *(_QWORD **)(v12 + 152);
        v17 = &v16[9 * *(unsigned int *)(v12 + 160)];
        if ( v16 != v17 )
        {
          do
          {
            while ( 1 )
            {
              v17 -= 9;
              v18 = (void *)v17[1];
              if ( !v18 )
                break;
              operator delete(v18);
              if ( v16 == v17 )
                goto LABEL_24;
            }
          }
          while ( v16 != v17 );
LABEL_24:
          v17 = *(_QWORD **)(v12 + 152);
        }
        if ( (_QWORD *)(v12 + 168) != v17 )
          free(v17);
        operator delete(*(_QWORD *)(v12 + 128), 16LL * *(unsigned int *)(v12 + 144), 8);
        v19 = *(void **)(v12 + 104);
        if ( v19 )
          operator delete(v19);
        operator delete((void *)v12, 0xC0u);
      }
      ++v11;
    }
    while ( v27 != v11 );
    *(_QWORD *)(a1 + 88) = v28;
  }
  v20 = *(_DWORD *)(a1 + 132);
  v29.m128i_i32[2] = 0;
  v21 = 0;
  *(_DWORD *)(a1 + 128) = 0;
  v29.m128i_i64[0] = 0;
  v30.m128i_i64[0] = 0;
  v30.m128i_i32[2] = 0;
  if ( !v20 )
  {
    sub_2237220(a1 + 120, a1 + 136, 1, 32);
    v21 = 32LL * *(unsigned int *)(a1 + 128);
  }
  v22 = _mm_load_si128(&v30);
  result = (__m128i *)(*(_QWORD *)(a1 + 120) + v21);
  *result = _mm_load_si128(&v29);
  result[1] = v22;
  *(_QWORD *)(a1 + 288) = 0;
  ++*(_DWORD *)(a1 + 128);
  return result;
}
