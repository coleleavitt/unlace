void __fastcall sub_9CAC70(__int64 a1, __int64 a2)
{
  char *v3; // rbp
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // r14
  char *v7; // rbx
  char *v8; // rbx
  const __m128i *v9; // rdx
  __int64 v10; // rcx
  __int8 v11; // al
  const __m128i *v12; // rax
  char *v13; // r13
  char *v14; // rdi
  int v15; // r13d
  __int64 v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (char *)(a1 + 16);
  v4 = sub_22136C0(a1, a1 + 16, a2, 64, v16);
  v5 = *(char **)a1;
  v6 = v4;
  v7 = (char *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6));
  if ( *(char **)a1 != v7 )
  {
    v8 = (char *)(v7 - v5);
    v9 = (const __m128i *)(v5 + 40);
    v10 = v4;
    do
    {
      *(_QWORD *)v10 = v9[-3].m128i_i64[1];
      *(_DWORD *)(v10 + 8) = v9[-2].m128i_i32[0];
      *(_QWORD *)(v10 + 12) = *(__int64 *)((char *)v9[-2].m128i_i64 + 4);
      *(_DWORD *)(v10 + 20) = v9[-2].m128i_i32[3];
      *(_QWORD *)(v10 + 24) = v10 + 40;
      v12 = (const __m128i *)v9[-1].m128i_i64[0];
      if ( v9 == v12 )
      {
        *(__m128i *)(v10 + 40) = _mm_loadu_si128(v9);
      }
      else
      {
        *(_QWORD *)(v10 + 24) = v12;
        *(_QWORD *)(v10 + 40) = v9->m128i_i64[0];
      }
      v10 += 64;
      *(_QWORD *)(v10 - 32) = v9[-1].m128i_i64[1];
      v11 = v9[1].m128i_i8[0];
      v9[-1].m128i_i64[0] = (__int64)v9;
      v9 += 4;
      v9[-5].m128i_i64[1] = 0;
      v9[-4].m128i_i8[0] = 0;
      *(_BYTE *)(v10 - 8) = v11;
    }
    while ( v10 != v6 + ((unsigned __int64)(v8 - 64) & 0xFFFFFFFFFFFFFFC0LL) + 64 );
    v13 = *(char **)a1;
    v7 = (char *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6));
    if ( v7 != *(char **)a1 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 64;
          v14 = *((char **)v7 + 3);
          if ( v14 == v7 + 40 )
            break;
          operator delete(v14);
          if ( v7 == v13 )
          {
            v7 = *(char **)a1;
            goto LABEL_11;
          }
        }
      }
      while ( v7 != v13 );
      v7 = *(char **)a1;
    }
  }
LABEL_11:
  v15 = v16[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v15;
}

