unsigned __int64 __fastcall sub_2B41F0(__int64 a1, __int64 *a2, unsigned __int64 a3, double a4, double a5, __m128 a6)
{
  __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int8 (*v10)(void); // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rbx
  char *v17; // rax
  signed __int64 v18; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // r14
  __int64 v21; // rbx
  char *v22; // rax
  char *v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rdi
  const void *v26; // r13
  __int64 v27; // r15
  const char *v28; // rdi
  size_t v29; // rax
  __m128 v30; // xmm0
  size_t v31; // r8
  __int64 v32; // r10
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // rax
  char *v38; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+8h] [rbp-A0h]
  __m128i v45; // [rsp+10h] [rbp-98h] BYREF
  char **p_s; // [rsp+20h] [rbp-88h]
  size_t v47; // [rsp+28h] [rbp-80h]
  char *s; // [rsp+30h] [rbp-78h] BYREF
  __m128i v49; // [rsp+38h] [rbp-70h]
  __int64 v50; // [rsp+50h] [rbp-58h] BYREF
  __m128i v51; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v8 = 80 * a3;
    v9 = 80 * a3 + *(_QWORD *)(a1 + 40);
    v10 = **(unsigned __int8 (***)(void))v9;
    if ( (char *)v10 == (char *)sub_2AD100 )
    {
      if ( *(_QWORD *)(v9 + 8) == *(_QWORD *)(v9 + 56) && *(_DWORD *)(v9 + 16) == *(_DWORD *)(v9 + 64) )
        return v52 - __readfsqword(0x28u);
    }
    else if ( !v10() )
    {
      return v52 - __readfsqword(0x28u);
    }
    switch_dbctx();
    v11 = *(_QWORD *)(a1 + 40) + v8 + 24;
    p_s = &s;
    s = nullptr;
    v49 = 0;
    sub_2AE320(&s, v11, v12, v13);
    while ( v49.m128i_i64[0] )
    {
      v16 = s;
      v17 = strchr(s, 10);
      if ( !v17 )
        break;
      v18 = v17 - v16;
      if ( v17 - v16 == -1 )
        break;
      v14 = a2[1];
      v19 = *a2;
      if ( a2[2] < (unsigned __int64)(v14 + 1) )
      {
        v41 = qvector_reserve((__int64)a2, v19, v14 + 1, 24);
        *a2 = v41;
        v14 = a2[1];
        v19 = v41;
      }
      v20 = v18 + 1;
      v21 = v19 + 24 * v14;
      *(_QWORD *)v21 = 0;
      v22 = s;
      *(_OWORD *)(v21 + 8) = 0;
      ++a2[1];
      v23 = *(char **)v21;
      *(_QWORD *)v21 = v22;
      v24 = _mm_loadu_si128((const __m128i *)(v21 + 8));
      s = v23;
      *(__m128i *)(v21 + 8) = v49;
      v49 = v24;
      v25 = *(_QWORD *)v21;
      v26 = (const void *)(v18 + 1 + *(_QWORD *)v21);
      if ( v26 )
      {
        v27 = v24.m128i_i64[0];
        v28 = (const char *)(v18 + 1 + *(_QWORD *)v21);
        v45 = v24;
        v29 = strlen(v28);
        v30 = (__m128)_mm_load_si128(&v45);
        v31 = v29;
        v32 = v29;
        if ( v27 )
        {
          --v27;
          v32 = v29 + v27;
        }
        a6 = _mm_movehl_ps(a6, v30);
        v33 = v32 + 1;
        if ( a6.m128_u64[0] < v32 + 1 )
        {
          v47 = v29;
          v45.m128i_i64[0] = v32;
          v44 = v32 + 1;
          s = (char *)qvector_reserve((__int64)p_s, (__int64)v23, v33, 1);
          v31 = v47;
          v23 = s;
          v32 = v45.m128i_i64[0];
          v33 = v44;
        }
        v49.m128i_i64[0] = v33;
        v23[v32] = 0;
        memmove(&s[v27], v26, v31);
        v25 = *(_QWORD *)v21;
      }
      if ( v18 )
      {
        v40 = *(_QWORD *)(v21 + 8);
        if ( v40 < v20 )
        {
          if ( *(_QWORD *)(v21 + 16) < v20 )
          {
            v42 = qvector_reserve(v21, v25, v18 + 1, 1);
            *(_QWORD *)v21 = v42;
            v25 = v42;
            v40 = *(_QWORD *)(v21 + 8);
          }
          memset((void *)(v40 + v25), 0, v20 - v40);
          *(_QWORD *)(v21 + 8) = v20;
          v25 = *(_QWORD *)v21;
        }
        else if ( v20 != v40 )
        {
          *(_QWORD *)(v21 + 8) = v20;
        }
        *(_BYTE *)(v25 + v18) = 0;
      }
      else if ( v25 )
      {
        *(_QWORD *)(v21 + 8) = 0;
        qfree(v25);
        *(_QWORD *)v21 = 0;
        *(_QWORD *)(v21 + 16) = 0;
      }
    }
    v50 = 0;
    v51 = 0;
    sub_2AE320(&v50, (__int64)p_s, v14, v15);
    v34 = a2[1];
    v35 = *a2;
    if ( a2[2] < (unsigned __int64)(v34 + 1) )
    {
      v43 = qvector_reserve((__int64)a2, v35, v34 + 1, 24);
      *a2 = v43;
      v34 = a2[1];
      v35 = v43;
    }
    v36 = _mm_loadu_si128(&v51);
    v37 = v35 + 24 * v34;
    *(_QWORD *)v37 = v50;
    v38 = s;
    *(__m128i *)(v37 + 8) = v36;
    ++a2[1];
    if ( v38 )
    {
      v49.m128i_i64[0] = 0;
      qfree((__int64)v38);
    }
  }
  return v52 - __readfsqword(0x28u);
}
