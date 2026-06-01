unsigned __int64 __fastcall metadata_dumper_t__::vfunc_6(__int64 a1, int **a2)
{
  const char **v3; // rbx
  char *v5; // r14
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  const char *v8; // rax
  __int64 v9; // rax
  int *v10; // rbx
  __int64 v11; // r12
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  const char *v15; // r8
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rsi
  const char *v20; // r8
  __int64 v21; // rax
  int v22; // ecx
  int v23; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  const char *v29; // rdx
  const char *v30; // rsi
  char *v31; // rax
  char *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35; // [rsp+0h] [rbp-68h] BYREF
  char *v36; // [rsp+10h] [rbp-58h] BYREF
  __m128i v37; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v3 = *(const char ***)(a1 + 56);
  v38 = __readfsqword(0x28u);
  v37 = 0;
  v36 = nullptr;
  v36 = (char *)qvector_reserve(&v36, 0, 15, 1);
  v37.m128i_i64[0] = 15;
  strcpy(v36, "Extra Comments");
  v5 = v36;
  v6 = (__int64)*v3;
  v7 = (unsigned __int64)v3[2];
  if ( &v36 >= (char **)*v3 && (unsigned __int64)&v36 < v6 + 24 * v7 )
  {
    v27 = _mm_loadl_epi64(&v37);
    v28 = _mm_loadl_epi64((const __m128i *)&v37.m128i_u64[1]);
    v36 = nullptr;
    v37 = 0;
    v29 = v3[1];
    v30 = *v3;
    if ( v3[2] < v29 + 1 )
    {
      v35.m128i_i64[1] = v28.m128i_i64[0];
      v35.m128i_i64[0] = v27.m128i_i64[0];
      v34 = qvector_reserve(v3, v30, v29 + 1, 24);
      v29 = v3[1];
      v27 = _mm_loadl_epi64(&v35);
      *v3 = (const char *)v34;
      v30 = (const char *)v34;
      v28 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
    }
    v31 = (char *)&v30[24 * (_QWORD)v29];
    *(_QWORD *)v31 = v5;
    v32 = v36;
    *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v27, v28);
    ++v3[1];
    if ( v32 )
    {
      v37.m128i_i64[0] = 0;
      qfree(v32, v30);
    }
  }
  else
  {
    v8 = v3[1];
    if ( v7 < (unsigned __int64)(v8 + 1) )
    {
      v33 = qvector_reserve(v3, v6, v8 + 1, 24);
      *v3 = (const char *)v33;
      v6 = v33;
      v5 = v36;
      v8 = v3[1];
    }
    v9 = v6 + 24LL * (_QWORD)v8;
    *(__m128i *)(v9 + 8) = _mm_loadu_si128(&v37);
    *(_QWORD *)v9 = v5;
    v37 = 0;
    ++v3[1];
  }
  v10 = *a2;
  v11 = (__int64)&(*a2)[14 * (_QWORD)a2[1]];
  if ( v10 != (int *)v11 )
  {
    while ( 1 )
    {
      if ( *((_QWORD *)v10 + 2) <= 1u )
      {
        if ( *((_QWORD *)v10 + 5) <= 1u )
          goto LABEL_9;
LABEL_16:
        v17 = *(__int64 **)(a1 + 56);
        v18 = v17[1];
        v19 = *v17;
        if ( v17[2] < (unsigned __int64)(v18 + 1) )
        {
          v35.m128i_i64[0] = *(_QWORD *)(a1 + 56);
          v25 = qvector_reserve(v17, v19, v18 + 1, 24);
          v17 = (__int64 *)v35.m128i_i64[0];
          v19 = v25;
          *(_QWORD *)v35.m128i_i64[0] = v25;
          v18 = v17[1];
        }
        v20 = &s1;
        v21 = v19 + 24 * v18;
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        ++v17[1];
        if ( *((_QWORD *)v10 + 5) )
          v20 = *((const char **)v10 + 4);
        v22 = v10[1];
        v23 = *v10;
        v10 += 14;
        sub_169A50((__int64 *)v21, (__int64)"  @ %u+0x%x posterior: \"%s\"", v23, v22, v20);
        if ( (int *)v11 == v10 )
          return v38 - __readfsqword(0x28u);
      }
      else
      {
        v12 = *(__int64 **)(a1 + 56);
        v13 = v12[1];
        v14 = *v12;
        if ( v12[2] < (unsigned __int64)(v13 + 1) )
        {
          v35.m128i_i64[0] = *(_QWORD *)(a1 + 56);
          v26 = qvector_reserve(v12, v14, v13 + 1, 24);
          v12 = (__int64 *)v35.m128i_i64[0];
          v14 = v26;
          *(_QWORD *)v35.m128i_i64[0] = v26;
          v13 = v12[1];
        }
        v15 = &s1;
        v16 = v14 + 24 * v13;
        *(_QWORD *)v16 = 0;
        *(_OWORD *)(v16 + 8) = 0;
        ++v12[1];
        if ( *((_QWORD *)v10 + 2) )
          v15 = *((const char **)v10 + 1);
        sub_169A50((__int64 *)v16, (__int64)"  @ %u+0x%x anterior: \"%s\"", *v10, v10[1], v15);
        if ( *((_QWORD *)v10 + 5) > 1u )
          goto LABEL_16;
LABEL_9:
        v10 += 14;
        if ( (int *)v11 == v10 )
          return v38 - __readfsqword(0x28u);
      }
    }
  }
  return v38 - __readfsqword(0x28u);
}
