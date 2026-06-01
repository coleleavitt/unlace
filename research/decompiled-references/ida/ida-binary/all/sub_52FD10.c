unsigned __int64 __fastcall sub_52FD10(__int64 a1, const char *a2, const char *a3)
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
  char *v15; // rbx
  size_t v16; // r10
  __int64 v17; // r9
  size_t v18; // r11
  __int64 v19; // rdx
  __m128i v20; // xmm0
  char *v21; // rdi
  __int64 v22; // rax
  __int64 v24; // rbx
  size_t v25; // rax
  size_t v26; // r12
  size_t v27; // r13
  char *haystack; // [rsp+0h] [rbp-90h]
  __int64 v29; // [rsp+8h] [rbp-88h]
  __int64 v30; // [rsp+8h] [rbp-88h]
  __int64 v31; // [rsp+10h] [rbp-80h]
  size_t v32; // [rsp+10h] [rbp-80h]
  size_t v33; // [rsp+18h] [rbp-78h]
  __int64 v34; // [rsp+18h] [rbp-78h]
  size_t v36; // [rsp+30h] [rbp-60h]
  __int64 v37; // [rsp+38h] [rbp-58h] BYREF
  __m128i v38; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v38 = 0;
  v37 = 0;
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
    v15 = v14;
    if ( !v14 )
      break;
    v16 = v14 - v6;
    if ( v14 != v6 )
    {
      v17 = v38.m128i_i64[0];
      v18 = v14 - v6;
      if ( v38.m128i_i64[0] )
      {
        v17 = v38.m128i_i64[0] - 1;
        v18 = v16 + v38.m128i_i64[0] - 1;
      }
      v19 = v18 + 1;
      if ( v38.m128i_i64[1] < v18 + 1 )
      {
        v36 = v18;
        v34 = v17;
        v32 = v14 - v6;
        v30 = v18 + 1;
        v37 = qvector_reserve(&v37, v7, v19, 1);
        v18 = v36;
        v7 = v37;
        v17 = v34;
        v16 = v32;
        v19 = v30;
      }
      v38.m128i_i64[0] = v19;
      *(_BYTE *)(v7 + v18) = 0;
      memmove((void *)(v17 + v37), v6, v16);
      v7 = v37;
    }
    if ( a3 )
    {
      v8 = strlen(a3);
      v9 = v38.m128i_i64[0];
      v10 = v8;
      v11 = v8;
      if ( v38.m128i_i64[0] )
      {
        v9 = v38.m128i_i64[0] - 1;
        v11 = v8 + v38.m128i_i64[0] - 1;
      }
      v12 = v11 + 1;
      if ( v38.m128i_i64[1] < v11 + 1 )
      {
        v33 = v11;
        v31 = v9;
        v29 = v11 + 1;
        v37 = qvector_reserve(&v37, v7, v12, 1);
        v11 = v33;
        v7 = v37;
        v9 = v31;
        v12 = v29;
      }
      v38.m128i_i64[0] = v12;
      *(_BYTE *)(v7 + v11) = 0;
      memmove((void *)(v9 + v37), a3, v10);
      v7 = v37;
    }
    v6 = &v15[v5];
  }
  if ( v6 == haystack )
  {
    v21 = (char *)v7;
  }
  else
  {
    if ( *v6 && v6 )
    {
      v24 = v38.m128i_i64[0];
      v25 = strlen(v6);
      v26 = v25;
      v27 = v25;
      if ( v24 )
      {
        --v24;
        v27 = v25 + v24;
      }
      if ( v38.m128i_i64[1] < v27 + 1 )
      {
        v37 = qvector_reserve(&v37, v7, v27 + 1, 1);
        v7 = v37;
      }
      v38.m128i_i64[0] = v27 + 1;
      v13 = v6;
      *(_BYTE *)(v7 + v27) = 0;
      memmove((void *)(v37 + v24), v6, v26);
      v7 = v37;
    }
    v20 = _mm_loadu_si128(&v38);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v7;
    *(__m128i *)(a1 + 8) = v20;
    v37 = (__int64)v21;
    v38.m128i_i64[1] = v22;
  }
  if ( v21 )
  {
    v38.m128i_i64[0] = 0;
    qfree(v21, v13);
  }
  return v39 - __readfsqword(0x28u);
}
