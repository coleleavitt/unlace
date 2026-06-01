void __fastcall sub_12DF670(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r13
  _QWORD *v7; // rbx
  const __m128i *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rsi
  const __m128i *v20; // rsi
  _QWORD *v21; // r15
  _QWORD *v22; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // r14
  char *v25; // rdi
  void *v26; // rdi
  _QWORD *v27; // rdi
  _QWORD *v28; // rdi
  int v29; // r14d
  _QWORD *v30; // [rsp+8h] [rbp-50h]
  __int64 v31[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = (_QWORD *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 128, v31);
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = (_QWORD *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 7));
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = (const __m128i *)(v5 + 3);
    v9 = (__int64)(v5 + 7);
    v10 = v6;
    do
    {
      *(_DWORD *)v10 = v8[-2].m128i_i32[2];
      *(_DWORD *)(v10 + 4) = v8[-2].m128i_i32[3];
      *(_QWORD *)(v10 + 8) = v10 + 24;
      v20 = (const __m128i *)v8[-1].m128i_i64[0];
      if ( v20 == v8 )
      {
        *(__m128i *)(v10 + 24) = _mm_loadu_si128(v8);
      }
      else
      {
        *(_QWORD *)(v10 + 8) = v20;
        *(_QWORD *)(v10 + 24) = v8->m128i_i64[0];
      }
      *(_QWORD *)(v10 + 16) = v8[-1].m128i_i64[1];
      v8[-1].m128i_i64[0] = (__int64)v8;
      v8[-1].m128i_i64[1] = 0;
      v8->m128i_i8[0] = 0;
      *(_QWORD *)(v10 + 40) = v10 + 56;
      v11 = v8[1].m128i_i64[0];
      if ( v11 == v9 )
      {
        *(__m128i *)(v10 + 56) = _mm_loadu_si128(v8 + 2);
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v11;
        *(_QWORD *)(v10 + 56) = v8[2].m128i_i64[0];
      }
      v12 = v8[1].m128i_i64[1];
      v8 += 8;
      v10 += 128;
      *(_QWORD *)(v10 - 80) = v12;
      LODWORD(v12) = v8[-5].m128i_i32[0];
      v8[-6].m128i_i8[0] = 0;
      v8[-7].m128i_i64[0] = v9;
      v9 += 128;
      v8[-7].m128i_i64[1] = 0;
      *(_QWORD *)(v10 - 40) = 0;
      *(_QWORD *)(v10 - 32) = 0;
      *(_QWORD *)(v10 - 48) = 0;
      *(_DWORD *)(v10 - 56) = v12;
      *(_QWORD *)(v10 - 48) = v8[-5].m128i_i64[1];
      v13 = v8[-4].m128i_i64[0];
      v8[-5].m128i_i64[1] = 0;
      v14 = *(_QWORD *)(v10 - 40);
      *(_QWORD *)(v10 - 40) = v13;
      v15 = v8[-4].m128i_i64[1];
      v8[-4].m128i_i64[0] = v14;
      v16 = *(_QWORD *)(v10 - 32);
      *(_QWORD *)(v10 - 32) = v15;
      v8[-4].m128i_i64[1] = v16;
      *(_QWORD *)(v10 - 16) = 0;
      *(_QWORD *)(v10 - 24) = 0;
      *(_QWORD *)(v10 - 8) = 0;
      *(_QWORD *)(v10 - 24) = v8[-3].m128i_i64[0];
      v17 = v8[-3].m128i_i64[1];
      v8[-3].m128i_i64[0] = 0;
      v18 = *(_QWORD *)(v10 - 16);
      *(_QWORD *)(v10 - 16) = v17;
      v8[-3].m128i_i64[1] = v18;
      v19 = *(_QWORD *)(v10 - 8);
      *(_QWORD *)(v10 - 8) = v8[-2].m128i_i64[0];
      v8[-2].m128i_i64[0] = v19;
    }
    while ( v8 != (const __m128i *)(v7 + 3) );
    v21 = *(_QWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 7));
    if ( *(_QWORD **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 16;
          v22 = (_QWORD *)v7[13];
          v23 = (_QWORD *)v7[14];
          v24 = v22;
          if ( v23 != v22 )
          {
            do
            {
              while ( 1 )
              {
                v25 = (char *)v24[2];
                if ( v25 == (char *)(v24 + 4) )
                  break;
                v30 = v23;
                v24 += 7;
                operator delete(v25);
                v23 = v30;
                if ( v24 == v30 )
                  goto LABEL_13;
              }
              v24 += 7;
            }
            while ( v23 != v24 );
LABEL_13:
            v22 = (_QWORD *)v7[13];
          }
          if ( v22 )
            operator delete(v22);
          v26 = (void *)v7[10];
          if ( v26 )
            operator delete(v26);
          v27 = (_QWORD *)v7[5];
          if ( v27 != v7 + 7 )
            operator delete(v27);
          v28 = (_QWORD *)v7[1];
          if ( v28 == v7 + 3 )
            break;
          operator delete(v28);
          if ( v21 == v7 )
          {
            v7 = *(_QWORD **)a1;
            goto LABEL_23;
          }
        }
      }
      while ( v21 != v7 );
      v7 = *(_QWORD **)a1;
    }
  }
LABEL_23:
  v29 = v31[0];
  if ( v2 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v29;
}
