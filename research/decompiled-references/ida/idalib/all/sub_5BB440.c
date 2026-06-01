unsigned __int64 __fastcall sub_5BB440(__m128i *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rsi
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i *v15; // rcx
  unsigned __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r12
  unsigned __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r12
  __m128i *v27; // rdi
  __int64 v28; // r10
  __m128i v29; // xmm0
  bool v30; // cf
  __int64 v31; // rax
  __int64 v32; // rsi
  __m128i *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // r10
  __m128i v36; // xmm0
  __int64 v39; // [rsp+10h] [rbp-88h]
  __int64 v40; // [rsp+18h] [rbp-80h]
  __int64 v41; // [rsp+18h] [rbp-80h]
  unsigned __int64 v42; // [rsp+20h] [rbp-78h]
  unsigned __int64 v43; // [rsp+20h] [rbp-78h]
  __m128i v44; // [rsp+30h] [rbp-68h] BYREF
  __m128i v45; // [rsp+40h] [rbp-58h] BYREF
  __int64 v46; // [rsp+50h] [rbp-48h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v39 = sub_5CAD90();
  if ( v39 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = sub_5CAAB0(a1, v2);
      v4 = v3;
      if ( !v3 || !*(_DWORD *)(v3 + 68) )
        goto LABEL_3;
      v5 = sub_5B8DA0(a1, v3);
      if ( !v5 )
      {
        if ( !under_debugger )
          interr(1924);
        BUG();
      }
      v6 = *(_QWORD *)(a2 + 8);
      v7 = *(unsigned int *)(v4 + 68);
      v8 = v6 + v7;
      if ( v6 + v7 != v6 )
      {
        v44.m128i_i64[0] = 0;
        v44.m128i_i64[1] = -1;
        v45 = 0u;
        v46 = -1;
        if ( !__CFADD__(v6, v7) )
        {
          v9 = *(_QWORD *)(a2 + 16);
          if ( (unsigned __int64)&v44 < *(_QWORD *)a2 || (unsigned __int64)&v44 >= *(_QWORD *)a2 + 40 * v9 )
          {
            v10 = v6;
            if ( v9 < v8 )
            {
              v42 = v6 + v7;
              v24 = qvector_reserve(a2, 0, v8, 40);
              v25 = v24;
              v26 = *(_QWORD *)(a2 + 16);
              v27 = *(__m128i **)a2;
              *(_QWORD *)(a2 + 16) = v9;
              v28 = *(_QWORD *)(a2 + 8) - 1LL;
              if ( v28 >= 0 )
              {
                do
                {
                  v29 = _mm_loadu_si128(v27);
                  v24 += 40;
                  v27 = (__m128i *)((char *)v27 + 40);
                  *(__m128i *)(v24 - 40) = v29;
                  *(__m128i *)(v24 - 24) = _mm_loadu_si128((__m128i *)((char *)v27 - 24));
                  *(_QWORD *)(v24 - 8) = v27[-1].m128i_i64[1];
                  v30 = v28-- == 0;
                }
                while ( !v30 );
                v27 = *(__m128i **)a2;
              }
              v40 = v25;
              qfree(v27);
              v8 = v42;
              *(_QWORD *)a2 = v40;
              v10 = *(_QWORD *)(a2 + 8);
              *(_QWORD *)(a2 + 16) = v26;
            }
            if ( v10 < v8 )
            {
              v11 = _mm_load_si128(&v44);
              v12 = _mm_load_si128(&v45);
              v13 = v46;
              v14 = 5 * v10;
              do
              {
                ++v10;
                v15 = *(__m128i **)a2;
                v15[2].m128i_i64[v14] = v13;
                *(__m128i *)((char *)v15 + v14 * 8) = v11;
                *(__m128i *)((char *)v15 + v14 * 8 + 16) = v12;
                v14 += 5;
              }
              while ( v8 != v10 );
            }
          }
          else
          {
            v21 = v6;
            if ( v9 < v8 )
            {
              v43 = v6 + v7;
              v31 = qvector_reserve(a2, 0, v8, 40);
              v32 = *(_QWORD *)(a2 + 16);
              v33 = *(__m128i **)a2;
              *(_QWORD *)(a2 + 16) = v9;
              v34 = v31;
              v35 = *(_QWORD *)(a2 + 8) - 1LL;
              if ( v35 >= 0 )
              {
                do
                {
                  v36 = _mm_loadu_si128(v33);
                  v31 += 40;
                  v33 = (__m128i *)((char *)v33 + 40);
                  *(__m128i *)(v31 - 40) = v36;
                  *(__m128i *)(v31 - 24) = _mm_loadu_si128((__m128i *)((char *)v33 - 24));
                  *(_QWORD *)(v31 - 8) = v33[-1].m128i_i64[1];
                  v30 = v35-- == 0;
                }
                while ( !v30 );
                v33 = *(__m128i **)a2;
              }
              v41 = v34;
              qfree(v33);
              v8 = v43;
              *(_QWORD *)a2 = v41;
              v21 = *(_QWORD *)(a2 + 8);
              *(_QWORD *)(a2 + 16) = v32;
            }
            v22 = 40 * v21;
            if ( v21 < v8 )
            {
              do
              {
                ++v21;
                v23 = v22 + *(_QWORD *)a2;
                v22 += 40;
                *(_QWORD *)v23 = 0;
                *(_QWORD *)(v23 + 8) = -1;
                *(_QWORD *)(v23 + 16) = 0;
                *(_BYTE *)(v23 + 24) = 0;
                *(_QWORD *)(v23 + 32) = -1;
              }
              while ( v8 != v21 );
              *(_QWORD *)(a2 + 8) = v8;
              LODWORD(v7) = *(_DWORD *)(v4 + 68);
              goto LABEL_15;
            }
          }
        }
        *(_QWORD *)(a2 + 8) = v8;
        LODWORD(v7) = *(_DWORD *)(v4 + 68);
      }
LABEL_15:
      if ( (_DWORD)v7 )
      {
        v16 = 0;
        v17 = 0;
        v18 = 40 * v6;
        do
        {
          ++v16;
          v5 += 16;
          v19 = v18 + *(_QWORD *)a2;
          v18 += 40;
          *(_QWORD *)v19 = v4;
          *(_QWORD *)(v19 + 8) = *(_QWORD *)(v5 - 16);
          *(_QWORD *)(v19 + 16) = *(_QWORD *)(v5 - 8) - v17;
          *(_BYTE *)(v19 + 24) = (get_aflags(*(_QWORD *)(v5 - 16)) & 2) != 0;
          v17 = *(_QWORD *)(v5 - 8);
        }
        while ( v16 < *(unsigned int *)(v4 + 68) );
        if ( v39 == ++v2 )
          return v47 - __readfsqword(0x28u);
      }
      else
      {
LABEL_3:
        if ( v39 == ++v2 )
          return v47 - __readfsqword(0x28u);
      }
    }
  }
  return v47 - __readfsqword(0x28u);
}
