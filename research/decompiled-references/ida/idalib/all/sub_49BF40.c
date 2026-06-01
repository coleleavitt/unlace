__int64 __fastcall sub_49BF40(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 *v20; // rbp
  unsigned __int64 *v21; // r13
  unsigned __int64 *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  __m128i v26; // xmm1
  unsigned __int64 v27; // rdx
  char *v28; // rdx
  __int64 v29; // r12
  __int64 v30; // rbp
  char *v31; // rax
  void *v32; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __m128i v37; // xmm0
  __m128i v38; // [rsp+0h] [rbp-88h] BYREF
  __int64 v39; // [rsp+10h] [rbp-78h]
  void **p_ptr; // [rsp+18h] [rbp-70h]
  __m128i v41; // [rsp+20h] [rbp-68h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v43; // [rsp+38h] [rbp-50h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v44 = __readfsqword(0x28u);
  v43 = 0;
  ptr = nullptr;
  v3 = *(int *)(v1 + 28);
  p_ptr = &ptr;
  if ( v3 )
  {
    v4 = qvector_reserve(&ptr, 0, v3, 24);
    v5 = *((_QWORD *)&v43 + 1);
    *((_QWORD *)&v43 + 1) = 0;
    v6 = (char *)ptr;
    v7 = v43 - 1;
    if ( (__int64)v43 - 1 >= 0 )
    {
      v8 = v4;
      do
      {
        v9 = *(_QWORD *)v6;
        v10 = _mm_loadu_si128((const __m128i *)(v6 + 8));
        v8 += 24;
        v6 += 24;
        *((_QWORD *)v6 - 3) = 0;
        *(_QWORD *)(v8 - 24) = v9;
        *(__m128i *)(v8 - 16) = v10;
        *((_QWORD *)v6 - 1) = 0;
      }
      while ( v7-- != 0 );
      v6 = (char *)ptr;
    }
    v38.m128i_i64[0] = v4;
    qfree(v6);
    v12 = v43;
    *((_QWORD *)&v43 + 1) = v5;
    ptr = (void *)v38.m128i_i64[0];
    if ( (unsigned __int64)v43 < v3 )
    {
      v13 = 24 * v43;
      v14 = 24 * v43 + v38.m128i_i64[0];
      *(_QWORD *)v14 = 0;
      *(_OWORD *)(v14 + 8) = 0;
      v15 = v12 + 1;
      if ( v12 + 1 < v3 )
      {
        v16 = v13 + 24;
        do
        {
          ++v15;
          v17 = (char *)ptr + v16;
          v16 += 24;
          *(_QWORD *)v17 = 0;
          *(_OWORD *)(v17 + 8) = 0;
        }
        while ( v3 != v15 );
      }
    }
    *(_QWORD *)&v43 = v3;
    if ( (int)v3 > 0 )
    {
      v18 = 0;
      v39 = 8 * v3;
      do
      {
        v19 = *(_QWORD *)(a1 + v18 + 56);
        v20 = (unsigned __int64 *)((char *)ptr + 3 * v18);
        v21 = *(unsigned __int64 **)(v19 + 56);
        v22 = &v21[18 * *(_QWORD *)(v19 + 64)];
        if ( v21 != v22 )
        {
          v23 = *(_QWORD *)((char *)ptr + 3 * v18 + 8);
          do
          {
            v24 = v21[1];
            v25 = v23 + 1;
            if ( !v24 )
              v24 = 1;
            v36 = *v20;
            v26 = (__m128i)(*v21 + v24);
            v27 = v20[2];
            v37 = _mm_unpacklo_epi64((__m128i)*v21, v26);
            v41 = v37;
            if ( (unsigned __int64)&v41 < v36 || (unsigned __int64)&v41 >= v36 + 16 * v27 )
            {
              if ( v27 < v25 )
              {
                v34 = qvector_reserve(v20, v36, v23 + 1, 16);
                *v20 = v34;
                v36 = v34;
                v23 = v20[1];
              }
              *(__m128i *)(v36 + 16 * v23) = _mm_load_si128(&v41);
            }
            else
            {
              if ( v27 < v25 )
              {
                v38 = v37;
                v35 = qvector_reserve(v20, v36, v23 + 1, 16);
                *v20 = v35;
                v36 = v35;
                v37 = _mm_load_si128(&v38);
                v23 = v20[1];
              }
              *(__m128i *)(v36 + 16 * v23) = v37;
            }
            v21 += 18;
            v23 = v20[1] + 1;
            v20[1] = v23;
          }
          while ( v22 != v21 );
        }
        v18 += 8;
      }
      while ( v18 != v39 );
    }
  }
  sub_459830((__int64 *)(a1 + 152), p_ptr);
  v28 = (char *)ptr;
  if ( ptr )
  {
    v29 = v43;
    if ( (_QWORD)v43 )
    {
      v30 = 0;
      do
      {
        v31 = &v28[24 * v30];
        v32 = *(void **)v31;
        if ( *(_QWORD *)v31 )
        {
          *((_QWORD *)v31 + 1) = 0;
          qfree(v32);
          v28 = (char *)ptr;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v43 = 0;
    qfree(v28);
  }
  return merge_handler_perform_diff(a1);
}
