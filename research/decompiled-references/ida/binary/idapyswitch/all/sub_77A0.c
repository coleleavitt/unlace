__int64 __fastcall sub_77A0(__int64 a1, __int64 a2, const char *a3, char **a4)
{
  const char *v6; // rbx
  unsigned int v7; // r13d
  __int64 v9; // rbx
  size_t v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  void *v15; // r12
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rax
  void *v19; // rdi
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // [rsp+8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+18h] [rbp-58h]
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __m128i v27; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-38h]

  v25 = a2;
  v28 = __readfsqword(0x28u);
  v6 = (const char *)sub_10990(a3);
  if ( !v6 || (v7 = sub_10F00(a3), !(_BYTE)v7) )
  {
    sub_7320(a4);
    return 0;
  }
  sub_5AD0(v25, v6, "libpython", ".so");
  if ( *(_DWORD *)v25 < (unsigned int)qword_1C338 || *(_DWORD *)(v25 + 4) < HIDWORD(qword_1C338) )
  {
    ptr = nullptr;
    v27 = 0;
    sub_7320((char **)&ptr);
    sub_7320(a4);
    if ( ptr )
    {
      v27.m128i_i64[0] = 0;
      j__free(ptr);
    }
    return 0;
  }
  ptr = nullptr;
  v27 = 0;
  v9 = v25 + 64;
  if ( a3 )
  {
    v10 = strlen(a3);
    v24.m128i_i64[1] = v10 + 1;
    ptr = (void *)sub_11430(&ptr, 0, v10 + 1, 1);
    v27.m128i_i64[0] = v10 + 1;
    memmove(ptr, a3, v10);
    *((_BYTE *)ptr + v10) = 0;
  }
  v11 = *(_QWORD *)(v25 + 64);
  v12 = *(_QWORD *)(v25 + 80);
  v13 = *(_QWORD *)(v25 + 72);
  v14 = v13 + 1;
  if ( (unsigned __int64)&ptr < v11 || (unsigned __int64)&ptr >= v11 + 24 * v12 )
  {
    if ( v12 < v14 )
    {
      v11 = sub_11430(v9, v11, v13 + 1, 24);
      v22 = v25;
      *(_QWORD *)(v25 + 64) = v11;
      v13 = *(_QWORD *)(v22 + 72);
    }
    v20 = _mm_loadu_si128(&v27);
    v21 = v11 + 24 * v13;
    *(_QWORD *)v21 = ptr;
    *(__m128i *)(v21 + 8) = v20;
    ++*(_QWORD *)(v25 + 72);
  }
  else
  {
    v15 = ptr;
    v16 = _mm_loadl_epi64(&v27);
    ptr = nullptr;
    v17 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
    v27 = 0;
    if ( v12 < v14 )
    {
      v24.m128i_i64[0] = v17.m128i_i64[0];
      v24.m128i_i64[1] = v16.m128i_i64[0];
      v11 = sub_11430(v9, v11, v13 + 1, 24);
      v23 = v25;
      v17 = _mm_loadl_epi64(&v24);
      v16 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
      *(_QWORD *)(v25 + 64) = v11;
      v13 = *(_QWORD *)(v23 + 72);
    }
    v18 = v11 + 24 * v13;
    *(_QWORD *)v18 = v15;
    *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
    v19 = ptr;
    ++*(_QWORD *)(v25 + 72);
    if ( v19 )
    {
      v27.m128i_i64[0] = 0;
      j__free(v19);
    }
  }
  return v7;
}

