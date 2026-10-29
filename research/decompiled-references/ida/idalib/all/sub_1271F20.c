__int64 __fastcall sub_1271F20(__int64 *a1, __int64 a2)
{
  size_t v3; // r12
  __int64 v4; // rbx
  const void *v5; // r13
  void *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  void **v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  size_t v14; // r13
  __int64 v15; // r14
  const void *v16; // rax
  __m128i si128; // xmm0
  __int64 v18; // r12
  void *v19; // rdi
  __int64 v20; // r12
  void **v21; // rbx
  __int64 v22; // r13
  __int128 v23; // xmm1
  unsigned __int64 v24; // r8
  void *v25; // rdi
  const void *v26; // rsi
  void **v27; // r12
  int v28; // r12d
  int v29; // eax
  __int64 v30; // rax
  size_t v31; // rdx
  const void *v32; // [rsp+8h] [rbp-50h]
  unsigned __int64 v33; // [rsp+8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( *((_DWORD *)a1 + 3) > *((_DWORD *)a1 + 2) )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v4 = *a1 + 1048LL * *((unsigned int *)a1 + 2);
    v5 = *(const void **)a2;
    v6 = (void *)(v4 + 24);
    *(__m128i *)(v4 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
    *(_QWORD *)v4 = v4 + 24;
    if ( v3 > 0x400 )
    {
      sub_2236E10(v4, v4 + 24, v3, 1);
      v6 = (void *)(*(_QWORD *)v4 + *(_QWORD *)(v4 + 8));
    }
    else if ( !v3 )
    {
LABEL_4:
      v7 = *((_DWORD *)a1 + 2);
      v8 = *a1;
      *(_QWORD *)(v4 + 8) = v3;
      v9 = (unsigned int)(v7 + 1);
      *((_DWORD *)a1 + 2) = v9;
      return v8 + 1048 * v9 - 1048;
    }
    memcpy(v6, v5, v3);
    v3 += *(_QWORD *)(v4 + 8);
    goto LABEL_4;
  }
  v11 = (void **)(a1 + 2);
  v12 = sub_2237400(a1, a1 + 2, 0, 1048, v35);
  v13 = *((unsigned int *)a1 + 2);
  v14 = *(_QWORD *)(a2 + 8);
  v15 = v12;
  v16 = *(const void **)a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  v18 = v15 + 1048 * v13;
  v19 = (void *)(v18 + 24);
  *(__m128i *)(v18 + 8) = si128;
  *(_QWORD *)v18 = v18 + 24;
  if ( v14 > 0x400 )
  {
    v32 = v16;
    sub_2236E10(v15 + 1048 * v13, v18 + 24, v14, 1);
    v16 = v32;
    v19 = (void *)(*(_QWORD *)v18 + *(_QWORD *)(v18 + 8));
  }
  else if ( !v14 )
  {
    goto LABEL_9;
  }
  memcpy(v19, v16, v14);
  v14 += *(_QWORD *)(v18 + 8);
  v13 = *((unsigned int *)a1 + 2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
LABEL_9:
  *(_QWORD *)(v18 + 8) = v14;
  v20 = *a1;
  v21 = (void **)(*a1 + 1048 * v13);
  if ( (void **)*a1 != v21 )
  {
    v22 = v15;
    v23 = 0;
    do
    {
      *(__m128i *)(v22 + 8) = si128;
      v24 = *(_QWORD *)(v20 + 8);
      v25 = (void *)(v22 + 24);
      *(_QWORD *)v22 = v22 + 24;
      if ( v24 && v22 != v20 )
      {
        v26 = (const void *)(v20 + 24);
        if ( *(_QWORD *)v20 == v20 + 24 )
        {
          v31 = v24;
          if ( v24 <= 0x400
            || (v34 = v24,
                sub_2236E10(v22, v22 + 24, v24, 1),
                v31 = *(_QWORD *)(v20 + 8),
                v25 = *(void **)v22,
                v23 = 0,
                v26 = *(const void **)v20,
                v24 = v34,
                si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30),
                v31) )
          {
            v33 = v24;
            memcpy(v25, v26, v31);
            v24 = v33;
            v23 = 0;
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
          }
          *(_QWORD *)(v22 + 8) = v24;
          *(_QWORD *)(v20 + 8) = 0;
        }
        else
        {
          *(_QWORD *)v22 = *(_QWORD *)v20;
          *(_QWORD *)(v22 + 8) = v24;
          *(_QWORD *)(v22 + 16) = *(_QWORD *)(v20 + 16);
          *(_QWORD *)v20 = v26;
          *(_OWORD *)(v20 + 8) = v23;
        }
      }
      v20 += 1048;
      v22 += 1048;
    }
    while ( v21 != (void **)v20 );
    v27 = (void **)*a1;
    v21 = (void **)(*a1 + 1048LL * *((unsigned int *)a1 + 2));
    if ( (void **)*a1 != v21 )
    {
      do
      {
        while ( 1 )
        {
          v21 -= 131;
          if ( *v21 == v21 + 3 )
            break;
          free(*v21);
          if ( v21 == v27 )
            goto LABEL_21;
        }
      }
      while ( v21 != v27 );
LABEL_21:
      v21 = (void **)*a1;
    }
  }
  v28 = v35[0];
  if ( v11 != v21 )
    free(v21);
  v29 = *((_DWORD *)a1 + 2);
  *a1 = v15;
  *((_DWORD *)a1 + 3) = v28;
  v30 = (unsigned int)(v29 + 1);
  *((_DWORD *)a1 + 2) = v30;
  return v15 + 1048 * v30 - 1048;
}
