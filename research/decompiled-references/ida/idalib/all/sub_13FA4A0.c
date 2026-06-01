void __fastcall sub_13FA4A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void **v3; // rcx
  __int64 v4; // r14
  void **v5; // rbx
  char *v6; // rbx
  const __m128i *v7; // rdx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rsi
  const __m128i *v10; // rax
  __int32 v11; // eax
  void **v12; // r13
  int v13; // r13d
  __int32 v14; // eax
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 40, v15);
  v3 = *(void ***)a1;
  v4 = v2;
  v5 = (void **)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 != v5 )
  {
    v6 = (char *)((char *)v5 - (char *)v3);
    v7 = (const __m128i *)(v3 + 2);
    v8 = (_QWORD *)v2;
    v9 = v2 + 8 * ((unsigned __int64)(v6 - 40) >> 3) + 40;
    do
    {
      while ( 1 )
      {
        *v8 = v8 + 2;
        v10 = (const __m128i *)v7[-1].m128i_i64[0];
        if ( v10 == v7 )
          break;
        *v8 = v10;
        v8 += 5;
        *(v8 - 3) = v7->m128i_i64[0];
        *(v8 - 4) = v7[-1].m128i_i64[1];
        v11 = v7[1].m128i_i32[0];
        v7[-1].m128i_i64[0] = (__int64)v7;
        v7 = (const __m128i *)((char *)v7 + 40);
        v7[-3].m128i_i64[0] = 0;
        v7[-3].m128i_i8[8] = 0;
        *((_DWORD *)v8 - 2) = v11;
        if ( v8 == (_QWORD *)v9 )
          goto LABEL_5;
      }
      v8 += 5;
      *(__m128i *)(v8 - 3) = _mm_loadu_si128(v7);
      *(v8 - 4) = v7[-1].m128i_i64[1];
      v14 = v7[1].m128i_i32[0];
      v7[-1].m128i_i64[0] = (__int64)v7;
      v7 = (const __m128i *)((char *)v7 + 40);
      v7[-3].m128i_i64[0] = 0;
      v7[-3].m128i_i8[8] = 0;
      *((_DWORD *)v8 - 2) = v14;
    }
    while ( (_QWORD *)v9 != v8 );
LABEL_5:
    v12 = *(void ***)a1;
    v5 = (void **)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
    if ( v5 != *(void ***)a1 )
    {
      do
      {
        while ( 1 )
        {
          v5 -= 5;
          if ( *v5 == v5 + 2 )
            break;
          operator delete(*v5);
          if ( v5 == v12 )
            goto LABEL_8;
        }
      }
      while ( v5 != v12 );
LABEL_8:
      v5 = *(void ***)a1;
    }
  }
  v13 = v15[0];
  if ( (void **)(a1 + 16) != v5 )
    free(v5);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v13;
}
