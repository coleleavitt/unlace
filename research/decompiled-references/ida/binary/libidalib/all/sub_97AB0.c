__int64 __fastcall sub_97AB0(__int64 a1, const char *a2)
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
  unsigned __int64 v13; // r8
  void *v14; // rbx
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // rax
  void *v18; // rdi
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // [rsp+0h] [rbp-68h] BYREF
  void *v22; // [rsp+10h] [rbp-58h] BYREF
  __m128i v23; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v3 = xmmword_251928;
  v24 = __readfsqword(0x28u);
  if ( !(_QWORD)xmmword_251928 )
    goto LABEL_11;
  v4 = qword_251920;
  v5 = 0;
  while ( 1 )
  {
    v6 = s1;
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
    v22 = nullptr;
    v23 = 0;
    if ( a2 )
    {
      v8 = strlen(a2);
      v9 = v8 + 1;
      v10 = v8;
      v22 = (void *)qvector_reserve();
      v23.m128i_i64[0] = v9;
      memmove(v22, a2, v10);
      *((_BYTE *)v22 + v10) = 0;
      v11 = xmmword_251928;
    }
    else
    {
      v11 = v3;
    }
    v12 = qword_251920;
    v13 = v11 + 1;
    if ( (unsigned __int64)&v22 < qword_251920
      || (unsigned __int64)&v22 >= qword_251920 + 24LL * *((_QWORD *)&xmmword_251928 + 1) )
    {
      if ( *((_QWORD *)&xmmword_251928 + 1) < v13 )
      {
        qword_251920 = qvector_reserve();
        v12 = qword_251920;
        v11 = xmmword_251928;
      }
      v19 = _mm_loadu_si128(&v23);
      v20 = v12 + 24 * v11;
      *(_QWORD *)v20 = v22;
      *(__m128i *)(v20 + 8) = v19;
      *(_QWORD *)&xmmword_251928 = xmmword_251928 + 1;
    }
    else
    {
      v14 = v22;
      v15 = _mm_loadl_epi64(&v23);
      v22 = nullptr;
      v16 = _mm_loadl_epi64((const __m128i *)&v23.m128i_u64[1]);
      v23 = 0;
      if ( *((_QWORD *)&xmmword_251928 + 1) < v13 )
      {
        v21.m128i_i64[1] = v16.m128i_i64[0];
        v21.m128i_i64[0] = v15.m128i_i64[0];
        qword_251920 = qvector_reserve();
        v12 = qword_251920;
        v16 = _mm_loadl_epi64((const __m128i *)&v21.m128i_u64[1]);
        v11 = xmmword_251928;
        v15 = _mm_loadl_epi64(&v21);
      }
      v17 = v12 + 24 * v11;
      *(_QWORD *)v17 = v14;
      v18 = v22;
      *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v15, v16);
      *(_QWORD *)&xmmword_251928 = xmmword_251928 + 1;
      if ( v18 )
      {
        v23.m128i_i64[0] = 0;
        qfree();
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

