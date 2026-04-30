unsigned __int64 __fastcall sub_185800(__int64 a1, const char *a2, const char *a3)
{
  size_t v5; // r14
  const char *v6; // r15
  __int64 v7; // rbp
  size_t v8; // rax
  __int64 v9; // r8
  size_t v10; // r15
  size_t v11; // r10
  __int64 v12; // rdx
  const char *v13; // rsi
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char *v18; // rbx
  size_t v19; // r10
  __int64 v20; // r9
  size_t v21; // r11
  __int64 v22; // rdx
  __m128i v23; // xmm0
  char *v24; // rdi
  __int64 v25; // rax
  __int64 v27; // rbx
  size_t v28; // rax
  size_t v29; // r12
  size_t v30; // r13
  char *haystack; // [rsp+0h] [rbp-90h]
  __int64 v32; // [rsp+8h] [rbp-88h]
  __int64 v33; // [rsp+8h] [rbp-88h]
  __int64 v34; // [rsp+10h] [rbp-80h]
  size_t v35; // [rsp+10h] [rbp-80h]
  size_t v36; // [rsp+18h] [rbp-78h]
  __int64 v37; // [rsp+18h] [rbp-78h]
  size_t v39; // [rsp+30h] [rbp-60h]
  __int64 v40; // [rsp+38h] [rbp-58h] BYREF
  __m128i v41; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v41 = 0;
  v40 = 0;
  v5 = strlen(a2);
  haystack = (char *)&s1;
  if ( *(_QWORD *)(a1 + 8) )
    haystack = *(char **)a1;
  v6 = haystack;
  v7 = 0;
  while ( 1 )
  {
    v13 = a2;
    v14 = strstr(v6, a2);
    v18 = v14;
    if ( !v14 )
      break;
    v19 = v14 - v6;
    if ( v14 != v6 )
    {
      v20 = v41.m128i_i64[0];
      v21 = v14 - v6;
      if ( v41.m128i_i64[0] )
      {
        v20 = v41.m128i_i64[0] - 1;
        v21 = v19 + v41.m128i_i64[0] - 1;
      }
      v22 = v21 + 1;
      if ( v41.m128i_i64[1] < v21 + 1 )
      {
        v39 = v21;
        v37 = v20;
        v35 = v14 - v6;
        v33 = v21 + 1;
        v40 = qvector_reserve(&v40, v7, v22, 1);
        v21 = v39;
        v7 = v40;
        v20 = v37;
        v19 = v35;
        v22 = v33;
      }
      v41.m128i_i64[0] = v22;
      *(_BYTE *)(v7 + v21) = 0;
      memmove((void *)(v20 + v40), v6, v19);
      v7 = v40;
    }
    if ( a3 )
    {
      v8 = strlen(a3);
      v9 = v41.m128i_i64[0];
      v10 = v8;
      v11 = v8;
      if ( v41.m128i_i64[0] )
      {
        v9 = v41.m128i_i64[0] - 1;
        v11 = v8 + v41.m128i_i64[0] - 1;
      }
      v12 = v11 + 1;
      if ( v41.m128i_i64[1] < v11 + 1 )
      {
        v36 = v11;
        v34 = v9;
        v32 = v11 + 1;
        v40 = qvector_reserve(&v40, v7, v12, 1);
        v11 = v36;
        v7 = v40;
        v9 = v34;
        v12 = v32;
      }
      v41.m128i_i64[0] = v12;
      *(_BYTE *)(v7 + v11) = 0;
      memmove((void *)(v9 + v40), a3, v10);
      v7 = v40;
    }
    v6 = &v18[v5];
  }
  if ( v6 == haystack )
  {
    v24 = (char *)v7;
  }
  else
  {
    if ( *v6 && v6 )
    {
      v27 = v41.m128i_i64[0];
      v28 = strlen(v6);
      v29 = v28;
      v30 = v28;
      if ( v27 )
      {
        --v27;
        v30 = v28 + v27;
      }
      if ( v41.m128i_i64[1] < v30 + 1 )
      {
        v40 = qvector_reserve(&v40, v7, v30 + 1, 1);
        v7 = v40;
      }
      v41.m128i_i64[0] = v30 + 1;
      v13 = v6;
      *(_BYTE *)(v7 + v30) = 0;
      memmove((void *)(v40 + v27), v6, v29);
      v7 = v40;
    }
    v16 = a1;
    v23 = _mm_loadu_si128(&v41);
    v24 = *(char **)a1;
    v25 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v7;
    *(__m128i *)(a1 + 8) = v23;
    v40 = (__int64)v24;
    v41.m128i_i64[1] = v25;
  }
  if ( v24 )
  {
    v41.m128i_i64[0] = 0;
    qfree(v24, v13, v15, v16, v17);
  }
  return v42 - __readfsqword(0x28u);
}
