__int64 __fastcall sub_199E60(__int64 a1, const char *a2)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rbp
  const char *v6; // rdi
  __int64 result; // rax
  size_t v8; // rax
  __int64 v9; // r15
  size_t v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  void *v16; // rbx
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 v19; // rax
  void *v20; // rdi
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // [rsp+0h] [rbp-68h] BYREF
  void *v24; // [rsp+10h] [rbp-58h] BYREF
  __m128i v25; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v3 = xmmword_8CACB8;
  v26 = __readfsqword(0x28u);
  if ( !(_QWORD)xmmword_8CACB8 )
    goto LABEL_11;
  v4 = qword_8CACB0;
  v5 = 0;
  while ( 1 )
  {
    v6 = &s1;
    if ( *(_QWORD *)(v4 + 8) )
      v6 = *(const char **)v4;
    if ( !strcmp(v6, a2) )
      break;
    ++v5;
    v4 += 24;
    if ( v5 == v3 )
      goto LABEL_11;
  }
  if ( v3 == v5 )
  {
LABEL_11:
    v24 = nullptr;
    v25 = 0;
    if ( a2 )
    {
      v8 = strlen(a2);
      v9 = v8 + 1;
      v10 = v8;
      v24 = (void *)qvector_reserve(&v24, 0, v8 + 1, 1);
      v25.m128i_i64[0] = v9;
      memmove(v24, a2, v10);
      *((_BYTE *)v24 + v10) = 0;
      v11 = xmmword_8CACB8;
    }
    else
    {
      v11 = v3;
    }
    v12 = qword_8CACB0;
    v13 = *((_QWORD *)&xmmword_8CACB8 + 1);
    v14 = v11 + 1;
    if ( (unsigned __int64)&v24 < qword_8CACB0
      || (v15 = qword_8CACB0 + 24LL * *((_QWORD *)&xmmword_8CACB8 + 1), (unsigned __int64)&v24 >= v15) )
    {
      if ( *((_QWORD *)&xmmword_8CACB8 + 1) < v14 )
      {
        qword_8CACB0 = qvector_reserve(&qword_8CACB0, qword_8CACB0, v11 + 1, 24);
        v12 = qword_8CACB0;
        v11 = xmmword_8CACB8;
      }
      v21 = _mm_loadu_si128(&v25);
      v22 = v12 + 24 * v11;
      *(_QWORD *)v22 = v24;
      *(__m128i *)(v22 + 8) = v21;
      *(_QWORD *)&xmmword_8CACB8 = xmmword_8CACB8 + 1;
    }
    else
    {
      v16 = v24;
      v17 = _mm_loadl_epi64(&v25);
      v24 = nullptr;
      v18 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
      v25 = 0;
      if ( *((_QWORD *)&xmmword_8CACB8 + 1) < v14 )
      {
        v23.m128i_i64[1] = v18.m128i_i64[0];
        v23.m128i_i64[0] = v17.m128i_i64[0];
        qword_8CACB0 = qvector_reserve(&qword_8CACB0, qword_8CACB0, v11 + 1, 24);
        v12 = qword_8CACB0;
        v18 = _mm_loadl_epi64((const __m128i *)&v23.m128i_u64[1]);
        v11 = xmmword_8CACB8;
        v17 = _mm_loadl_epi64(&v23);
      }
      v19 = v12 + 24 * v11;
      *(_QWORD *)v19 = v16;
      v20 = v24;
      *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v17, v18);
      *(_QWORD *)&xmmword_8CACB8 = xmmword_8CACB8 + 1;
      if ( v20 )
      {
        v25.m128i_i64[0] = 0;
        qfree(v20, v12, v13, v15, v14);
      }
    }
    LODWORD(v5) = v3;
  }
  result = 0;
  if ( (unsigned int)v5 <= 0xF )
  {
    *(_DWORD *)(a1 + 72) = ((_DWORD)v5 << 28) | *(_DWORD *)(a1 + 72) & 0xFFFFFFF;
    return 1;
  }
  return result;
}
