_BOOL8 __fastcall sub_539470(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3,
        __int32 a4,
        __int64 *a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  int v16; // edx
  const char *v17; // rsi
  char *v18; // rbx
  double v19; // xmm4_8
  double v20; // xmm5_8
  size_t v21; // rax
  size_t v22; // rbp
  __m128i v23; // xmm0
  __m128 v24; // xmm0
  __int64 v25; // r9
  _BOOL4 v26; // ebp
  void ****v27; // rax
  size_t v29; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  void *v33; // rbx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  char *v36; // rax
  void *v37; // rdi
  __m128i v38; // xmm0
  char *v39; // rax
  void *v40; // rdi
  size_t v41; // r12
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // [rsp+0h] [rbp-D8h] BYREF
  char *s; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v47; // [rsp+18h] [rbp-C0h]
  void *v48; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v49; // [rsp+38h] [rbp-A0h] BYREF
  _OWORD v50[3]; // [rsp+50h] [rbp-88h] BYREF
  __m128 v51; // [rsp+80h] [rbp-58h]
  unsigned __int64 v52; // [rsp+98h] [rbp-40h]

  v45.m128i_i64[0] = a3;
  v45.m128i_i32[2] = a4;
  v52 = __readfsqword(0x28u);
  v47 = 0;
  s = nullptr;
  do
  {
    v16 = dword_8D2538;
    v17 = "___dynact#%d";
    ++dword_8D2538;
    sub_169A50((__int64 *)&s, (__int64)"___dynact#%d", v16);
    v18 = s;
  }
  while ( sub_534430(s) );
  if ( a5 )
  {
    if ( v18 && (v21 = strlen(v18), (v22 = v21) != 0) )
    {
      v40 = (void *)*a5;
      v41 = v21 + 1;
      if ( a5[2] < v21 + 1 )
      {
        v43 = qvector_reserve(a5, *a5, v21 + 1, 1);
        *a5 = v43;
        v40 = (void *)v43;
      }
      a5[1] = v41;
      v17 = v18;
      memmove(v40, v18, v22);
      *(_BYTE *)(*a5 + v22) = 0;
    }
    else
    {
      a5[1] = 0;
    }
  }
  v50[0] = _mm_loadu_si128(a2);
  v23 = _mm_loadu_si128(a2 + 1);
  *((_QWORD *)&v50[0] + 1) = v18;
  v50[1] = v23;
  v50[2] = _mm_loadu_si128(a2 + 2);
  v24 = (__m128)_mm_loadu_si128(a2 + 3);
  v51 = v24;
  v51.m128_i32[3] = v24.m128_i32[3] | 1;
  if ( !sub_538360((__int64)v50, v24, a7, a8, a9, v19, v20, a12, a13) )
    goto LABEL_11;
  v17 = v18;
  v26 = sub_5390E0(
          (__int64)a1,
          (__int64)v18,
          (const char *)v45.m128i_i64[0],
          v45.m128i_i32[2],
          nullptr,
          v25,
          *(double *)v24.m128_u64);
  if ( !v26 )
  {
    v27 = (void ****)sub_534430(v18);
    if ( v27 )
    {
      v17 = (const char *)v27;
      sub_533DA0(v27[17], v27);
    }
LABEL_11:
    v26 = 0;
    goto LABEL_12;
  }
  v48 = nullptr;
  v49 = 0;
  if ( v18 )
  {
    v29 = strlen(v18);
    v45.m128i_i64[0] = v29 + 1;
    v48 = (void *)qvector_reserve(&v48, 0, v29 + 1, 1);
    v49.m128i_i64[0] = v29 + 1;
    memmove(v48, v18, v29);
    *((_BYTE *)v48 + v29) = 0;
  }
  v30 = a1[4];
  v17 = (const char *)a1[3];
  v31 = a1[5];
  v32 = v30 + 1;
  if ( &v48 < (void **)v17 || &v48 >= (void **)&v17[24 * v31] )
  {
    if ( v31 < v32 )
    {
      v42 = qvector_reserve(a1 + 3, v17, v30 + 1, 24);
      a1[3] = v42;
      v17 = (const char *)v42;
      v30 = a1[4];
    }
    v38 = _mm_loadu_si128(&v49);
    v39 = (char *)&v17[24 * v30];
    *(_QWORD *)v39 = v48;
    *(__m128i *)(v39 + 8) = v38;
    ++a1[4];
  }
  else
  {
    v33 = v48;
    v34 = _mm_loadl_epi64(&v49);
    v48 = nullptr;
    v35 = _mm_loadl_epi64((const __m128i *)&v49.m128i_u64[1]);
    v49 = 0;
    if ( v31 < v32 )
    {
      v45.m128i_i64[1] = v35.m128i_i64[0];
      v45.m128i_i64[0] = v34.m128i_i64[0];
      v44 = qvector_reserve(a1 + 3, v17, v30 + 1, 24);
      a1[3] = v44;
      v17 = (const char *)v44;
      v30 = a1[4];
      v35 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
      v34 = _mm_loadl_epi64(&v45);
    }
    v36 = (char *)&v17[24 * v30];
    *(_QWORD *)v36 = v33;
    v37 = v48;
    *(__m128i *)(v36 + 8) = _mm_unpacklo_epi64(v34, v35);
    ++a1[4];
    if ( v37 )
    {
      v49.m128i_i64[0] = 0;
      qfree(v37, v17);
    }
  }
LABEL_12:
  if ( s )
  {
    *(_QWORD *)&v47 = 0;
    qfree(s, v17);
  }
  return v26;
}
