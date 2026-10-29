__int64 *__fastcall sub_137DE0(__int64 *a1, __int64 *a2, int *a3, int a4, char a5)
{
  _DWORD *v6; // rsi
  __int64 v9; // rax
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  const char *encoding_name; // rax
  const char *v16; // rbp
  size_t v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  void *v22; // rbp
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rax
  void *v26; // rdi
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 *v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct _Unwind_Exception *v33; // rbx
  __m128i v34; // [rsp+0h] [rbp-68h] BYREF
  void *v35; // [rsp+10h] [rbp-58h] BYREF
  __m128i v36; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( a4 <= 0 )
    return (__int64 *)(v37 - __readfsqword(0x28u));
  v6 = (_DWORD *)*a2;
  v9 = a2[1];
  v12 = &v6[v9];
  if ( v6 != v12 )
  {
    v13 = v6;
    while ( *v13 != a4 )
    {
      if ( v12 == ++v13 )
        goto LABEL_8;
    }
    if ( v12 != v13 )
      return (__int64 *)(v37 - __readfsqword(0x28u));
  }
LABEL_8:
  if ( dword_2440A0 == a4 )
  {
    if ( *a3 >= 0 )
    {
      if ( !under_debugger )
      {
        v33 = (struct _Unwind_Exception *)interr();
        if ( v35 )
        {
          v36.m128i_i64[0] = 0;
          qfree();
        }
        _Unwind_Resume(v33);
      }
      BUG();
    }
    *a3 = a1[1];
    v9 = a2[1];
    v6 = (_DWORD *)*a2;
  }
  if ( a2[2] < (unsigned __int64)(v9 + 1) )
  {
    v30 = qvector_reserve();
    *a2 = v30;
    v6 = (_DWORD *)v30;
    v9 = a2[1];
  }
  v6[v9] = a4;
  ++a2[1];
  encoding_name = (const char *)get_encoding_name();
  v35 = nullptr;
  v16 = encoding_name;
  v36 = 0;
  if ( encoding_name )
  {
    v17 = strlen(encoding_name);
    v34.m128i_i64[0] = v17 + 1;
    v35 = (void *)qvector_reserve();
    v36.m128i_i64[0] = v17 + 1;
    memmove(v35, v16, v17);
    *((_BYTE *)v35 + v17) = 0;
  }
  v18 = a1[1];
  v19 = *a1;
  v20 = a1[2];
  v21 = v18 + 1;
  if ( (unsigned __int64)&v35 < *a1 || (unsigned __int64)&v35 >= v19 + 24 * v20 )
  {
    if ( v20 < v21 )
    {
      v31 = qvector_reserve();
      *a1 = v31;
      v19 = v31;
      v18 = a1[1];
    }
    v27 = _mm_loadu_si128(&v36);
    v28 = v19 + 24 * v18;
    *(_QWORD *)v28 = v35;
    *(__m128i *)(v28 + 8) = v27;
    ++a1[1];
  }
  else
  {
    v22 = v35;
    v23 = _mm_loadl_epi64(&v36);
    v35 = nullptr;
    v24 = _mm_loadl_epi64((const __m128i *)&v36.m128i_u64[1]);
    v36 = 0;
    if ( v20 < v21 )
    {
      v34.m128i_i64[1] = v24.m128i_i64[0];
      v34.m128i_i64[0] = v23.m128i_i64[0];
      v32 = qvector_reserve();
      *a1 = v32;
      v19 = v32;
      v24 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
      v18 = a1[1];
      v23 = _mm_loadl_epi64(&v34);
    }
    v25 = v19 + 24 * v18;
    *(_QWORD *)v25 = v22;
    v26 = v35;
    *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64(v23, v24);
    ++a1[1];
    if ( v26 )
    {
      v36.m128i_i64[0] = 0;
      qfree();
    }
  }
  if ( !a5 )
    return (__int64 *)(v37 - __readfsqword(0x28u));
  v29 = (__int64 *)(*a1 + 24 * a1[1] - 24);
  get_encoding_bpu();
  return sub_96570(v29);
}

