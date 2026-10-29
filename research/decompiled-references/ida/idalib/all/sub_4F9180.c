unsigned __int64 __fastcall sub_4F9180(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r13
  __int64 v8; // rbx
  const __m128i *v9; // r15
  const __m128i *v10; // rbx
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rbx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdx
  char *v20; // rdi
  char *v21; // rbx
  __int64 v22; // rax
  char *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbp
  int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  __m128i *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm0
  bool v36; // cf
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r15
  __m128i *v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __m128i v45; // xmm0
  __int64 v46; // [rsp+8h] [rbp-70h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  __m128i v48; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+38h] [rbp-40h]

  v4 = *(__int64 **)(a1 + 192);
  v49 = __readfsqword(0x28u);
  v6 = *v4;
  v7 = *(_QWORD **)(*v4 + 48 * a2 + 32);
  if ( !v7 )
  {
    if ( !under_debugger )
      interr(2883);
    BUG();
  }
  v8 = v7[4];
  if ( v8 )
  {
    v9 = (const __m128i *)v7[3];
    v10 = &v9[v8];
    if ( v9 != v10 )
    {
      do
      {
        v13 = _mm_loadu_si128(v9);
        v14 = *(_QWORD *)(a1 + 200);
        ++v9;
        v48 = v13;
        v15 = sub_4F90B0(v14, v48.m128i_i64);
        *(_QWORD *)(v15 + 56) += a4;
        *(_QWORD *)(v15 + 48) = a3;
      }
      while ( v9 != v10 );
      v6 = **(_QWORD **)(a1 + 192);
    }
    v16 = *(_QWORD **)(v6 + 48 * a3 + 32);
    if ( v16 )
    {
      v17 = v7[4];
      v18 = v16[5];
      v19 = v17 + v16[4];
      if ( v18 < v19 )
      {
        v38 = qvector_reserve(v16 + 3, 0, v19, 16);
        v39 = v16[4];
        v40 = v16[5];
        v16[5] = v18;
        v41 = (__m128i *)v16[3];
        v42 = v38;
        v43 = v39 - 1;
        if ( v43 >= 0 )
        {
          v44 = v38;
          do
          {
            v45 = _mm_loadu_si128(v41);
            v44 += 16;
            ++v41;
            *(__m128i *)(v44 - 16) = v45;
            v36 = v43-- == 0;
          }
          while ( !v36 );
          v41 = (__m128i *)v16[3];
        }
        qfree(v41);
        v16[3] = v42;
        v16[5] = v40;
        v17 = v7[4];
      }
      v20 = (char *)v7[3];
      v21 = &v20[16 * v17];
      if ( v21 == v20 )
        goto LABEL_19;
      v22 = v16[4];
      v23 = (char *)v7[3];
      do
      {
        v26 = *(_QWORD *)v23;
        v27 = *((_DWORD *)v23 + 2);
        if ( v16[5] >= (unsigned __int64)(v22 + 1) )
        {
          v24 = v16[3];
        }
        else
        {
          v46 = v16[5];
          v28 = qvector_reserve(v16 + 3, 0, v22 + 1, 16);
          v29 = v16[5];
          v30 = v28;
          v31 = v16[4];
          v32 = (__m128i *)v16[3];
          v16[5] = v46;
          v33 = v31 - 1;
          if ( v33 >= 0 )
          {
            v34 = v30;
            do
            {
              v35 = _mm_loadu_si128(v32);
              v34 += 16;
              ++v32;
              *(__m128i *)(v34 - 16) = v35;
              v36 = v33-- == 0;
            }
            while ( !v36 );
            v32 = (__m128i *)v16[3];
          }
          v47 = v30;
          qfree(v32);
          v24 = v47;
          v22 = v16[4];
          v16[3] = v47;
          v16[5] = v29;
        }
        v23 += 16;
        v25 = v24 + 16 * v22;
        *(_QWORD *)v25 = v26;
        *(_DWORD *)(v25 + 8) = v27;
        v22 = v16[4] + 1LL;
        v16[4] = v22;
      }
      while ( v21 != v23 );
    }
    v20 = (char *)v7[3];
LABEL_19:
    if ( v20 )
    {
      v7[4] = 0;
      qfree(v20);
      v7[3] = 0;
      v7[5] = 0;
    }
  }
  return v49 - __readfsqword(0x28u);
}
