unsigned __int64 __fastcall sub_54BC0(__int64 *a1, const __m128i *a2, __int32 a3)
{
  __int64 v6; // rdx
  __m128i *v7; // rcx
  __m128i v8; // xmm0
  __m128i *v9; // r10
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbx
  const __m128i *v18; // rbx
  const __m128i *v19; // rbx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r13
  const __m128i *v26; // rdi
  __int64 v27; // rbp
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v31; // rax
  size_t v32; // rdi
  void *v33; // r13
  int v34; // [rsp+0h] [rbp-A8h]
  __int64 v35; // [rsp+8h] [rbp-A0h]
  __m256i *v36; // [rsp+10h] [rbp-98h]
  int n; // [rsp+18h] [rbp-90h]
  __m128i v38; // [rsp+20h] [rbp-88h] BYREF
  __m128i v39; // [rsp+30h] [rbp-78h] BYREF
  __m256i v40; // [rsp+40h] [rbp-68h] BYREF
  __int64 v41; // [rsp+60h] [rbp-48h]
  unsigned __int64 v42; // [rsp+68h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  while ( 1 )
  {
    v6 = a1[4];
    v7 = (__m128i *)a1[3];
    v39.m128i_i32[2] = a3;
    v8 = _mm_loadu_si128(a2);
    v39.m128i_i64[0] = a2[1].m128i_i64[0];
    v9 = &v7[2 * v6];
    v38 = v8;
    if ( v7 != v9 )
    {
      while ( *(_OWORD *)&v38 - *v7 != 0 || v7[1].m128i_i64[0] != v39.m128i_i64[0] )
      {
        v7 += 2;
        if ( v9 == v7 )
          goto LABEL_9;
      }
      if ( v9 != v7 )
        return v42 - __readfsqword(0x28u);
    }
LABEL_9:
    v11 = a1[5];
    v12 = v6 + 1;
    *(__m128i *)v40.m256i_i8 = _mm_load_si128(&v38);
    *(__m128i *)&v40.m256i_u64[2] = _mm_load_si128(&v39);
    if ( v11 < v12 )
    {
      v23 = qvector_reserve(a1 + 3, 0, v12, 32);
      v24 = a1[4];
      v25 = a1[5];
      a1[5] = v11;
      v26 = (const __m128i *)a1[3];
      v27 = v23;
      v28 = v24 - 1;
      if ( v28 >= 0 )
      {
        do
        {
          v29 = _mm_loadu_si128(v26);
          v23 += 32;
          v26 += 2;
          *(__m128i *)(v23 - 32) = v29;
          *(__m128i *)(v23 - 16) = _mm_loadu_si128(v26 - 1);
        }
        while ( v28-- != 0 );
        v26 = (const __m128i *)a1[3];
      }
      qfree(v26);
      v31 = a1[4];
      a1[3] = v27;
      a1[5] = v25;
      v9 = (__m128i *)(v27 + 32 * v31);
    }
    *v9 = _mm_load_si128((const __m128i *)&v40);
    v9[1] = _mm_load_si128((const __m128i *)&v40.m256i_u64[2]);
    ++a1[4];
    if ( a2->m128i_i32[0] != 1 )
      return v42 - __readfsqword(0x28u);
    v13 = a2->m128i_i64[1];
    v14 = *(_DWORD *)(v13 + 272);
    if ( v14 != 1 )
    {
      if ( (unsigned int)(v14 - 2) <= 1 )
      {
        v15 = *(_QWORD *)(v13 + 392);
        if ( (int)v15 > 0 )
        {
          v16 = 0;
          LODWORD(v35) = 104 * v15;
          v36 = &v40;
          do
          {
            v17 = *(_QWORD *)(v13 + 384);
            *(_OWORD *)&v40.m256i_u64[1] = 0;
            v18 = (const __m128i *)(v16 + v17);
            if ( v18[1].m128i_i64[1] )
            {
              v32 = v18[1].m128i_u64[1];
              n = v32;
              v19 = v18 + 3;
              v33 = (void *)qalloc_or_throw(v32);
              v40.m256i_i64[2] = v32;
              memcpy(v33, (const void *)v19[-2].m128i_i64[0], v32);
              v40.m256i_i64[0] = (__int64)v33;
              v40.m256i_i64[1] = v32;
              sub_53CD0(a1, v13, v19, (__int64)v36);
              if ( v33 )
                qfree(v33);
            }
            else
            {
              v19 = v18 + 3;
              v40.m256i_i64[0] = 0;
              sub_53CD0(a1, v13, v19, (__int64)v36);
            }
            v16 += 104;
            sub_54BC0(
              (_DWORD)a1,
              (_DWORD)v19,
              a3 + 1,
              v20,
              v21,
              v22,
              v34,
              v35,
              (_DWORD)v36,
              n,
              v38.m128i_i32[0],
              v38.m128i_i32[2],
              v39.m128i_i32[0],
              v39.m128i_i64[1],
              v40.m256i_i64[0],
              v40.m256i_i32[2],
              v40.m256i_i32[4],
              v40.m256i_i32[6],
              v41);
          }
          while ( v16 != v35 );
        }
      }
      return v42 - __readfsqword(0x28u);
    }
    memset(&v40, 0, 24);
    v40.m256i_i64[0] = qvector_reserve(&v40, 0, 1, 1);
    v40.m256i_i64[1] = 1;
    a2 = (const __m128i *)(v13 + 392);
    *(_BYTE *)v40.m256i_i64[0] = 0;
    sub_53CD0(a1, v13, (const __m128i *)(v13 + 392), (__int64)&v40);
    if ( v40.m256i_i64[0] )
    {
      v40.m256i_i64[1] = 0;
      qfree(v40.m256i_i64[0]);
    }
    ++a3;
  }
}
