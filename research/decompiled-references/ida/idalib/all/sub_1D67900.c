void __fastcall sub_1D67900(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r13
  __int64 v4; // rax
  _QWORD *v5; // rbp
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  __m128i v10; // xmm3
  _QWORD *v11; // rbp
  _QWORD *v12; // rdi
  int v13; // ebp
  _QWORD v14[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 224, v14);
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = (_QWORD *)(*(_QWORD *)a1 + 224LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = v4;
    do
    {
      *(_DWORD *)v8 = *(_DWORD *)v5;
      *(__m128i *)(v8 + 8) = _mm_loadu_si128((const __m128i *)(v5 + 1));
      *(__m128i *)(v8 + 24) = _mm_loadu_si128((const __m128i *)(v5 + 3));
      *(__m128i *)(v8 + 40) = _mm_loadu_si128((const __m128i *)(v5 + 5));
      v10 = _mm_loadu_si128((const __m128i *)(v5 + 7));
      *(_QWORD *)(v8 + 72) = v8 + 88;
      *(__m128i *)(v8 + 56) = v10;
      *(_DWORD *)(v8 + 80) = 0;
      *(_DWORD *)(v8 + 84) = 4;
      if ( *((_DWORD *)v5 + 20) )
        sub_1D67790(v8 + 72, (char **)v5 + 9);
      v9 = v5[27];
      v5 += 28;
      v8 += 224;
      *(_QWORD *)(v8 - 8) = v9;
    }
    while ( v7 != v5 );
    v11 = *(_QWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + 224LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 28;
          v12 = (_QWORD *)v7[9];
          if ( v12 == v7 + 11 )
            break;
          free(v12);
          if ( v11 == v7 )
          {
            v7 = *(_QWORD **)a1;
            goto LABEL_10;
          }
        }
      }
      while ( v11 != v7 );
      v7 = *(_QWORD **)a1;
    }
  }
LABEL_10:
  v13 = v14[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v13;
}
