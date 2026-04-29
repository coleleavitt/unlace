__int64 __fastcall sub_3DE780(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  __m128i *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // r12
  __m128i v12; // xmm1
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __m128i *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  const __m128i *v19; // rdi
  __m128i v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __m128i v24; // xmm0
  bool v25; // cf
  __int64 v26; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  const __m128i *v31; // rdi
  __m128i v32; // xmm1
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __m128i v36; // xmm0
  __int64 v37; // rsi
  __m128i v38; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+18h] [rbp-90h]
  __int64 v40; // [rsp+20h] [rbp-88h] BYREF
  __m128i v41; // [rsp+28h] [rbp-80h] BYREF
  __int64 v42; // [rsp+40h] [rbp-68h] BYREF
  __int64 v43; // [rsp+48h] [rbp-60h]
  __m128i v44; // [rsp+50h] [rbp-58h]
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  for ( i = netnode_supfirst(*(_QWORD *)(a2 + 24), 83); ; i = netnode_supnext(*(_QWORD *)(a2 + 24), v7, 83) )
  {
    v7 = i;
    if ( i == -1 )
      break;
    v8 = *(_QWORD *)(a2 + 24);
    v41 = 0;
    v40 = 0;
    netnode_qsupstr(v8, &v40, i, 83);
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)a1;
    v11 = v40;
    v12 = _mm_loadu_si128(&v41);
    v42 = v7;
    v13 = *(_QWORD *)(a1 + 16);
    v41 = 0;
    v14 = v9 + 1;
    v43 = v40;
    v40 = 0;
    v44 = v12;
    if ( (unsigned __int64)&v42 < v10 || (unsigned __int64)&v42 >= v10 + 32 * v13 )
    {
      if ( v13 < v14 )
      {
        v38 = v12;
        v16 = qvector_reserve(a1, 0, v9 + 1, 32);
        v17 = *(_QWORD *)(a1 + 8);
        v18 = *(_QWORD *)(a1 + 16);
        v10 = v16;
        *(_QWORD *)(a1 + 16) = v13;
        v19 = *(const __m128i **)a1;
        v20 = _mm_load_si128(&v38);
        v21 = v17 - 1;
        if ( v21 >= 0 )
        {
          do
          {
            v22 = v19->m128i_i64[0];
            v16 += 32;
            v19 += 2;
            *(_QWORD *)(v16 - 32) = v22;
            v23 = v19[-2].m128i_i64[1];
            v24 = _mm_loadu_si128(v19 - 1);
            v19[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v16 - 24) = v23;
            *(__m128i *)(v16 - 16) = v24;
            v19[-1].m128i_i64[1] = 0;
            v25 = v21-- == 0;
          }
          while ( !v25 );
          v19 = *(const __m128i **)a1;
        }
        v39 = v18;
        v38 = v20;
        qfree(v19);
        v26 = v39;
        v9 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v10;
        v12 = _mm_load_si128(&v38);
        *(_QWORD *)(a1 + 16) = v26;
      }
      v15 = (__m128i *)(32 * v9 + v10);
      v15->m128i_i64[0] = v7;
      v15->m128i_i64[1] = v11;
      v15[1] = v12;
    }
    else
    {
      v43 = 0;
      v44 = 0;
      if ( v13 < v14 )
      {
        v38 = v12;
        v28 = qvector_reserve(a1, 0, v9 + 1, 32);
        v29 = *(_QWORD *)(a1 + 8);
        v30 = *(_QWORD *)(a1 + 16);
        v10 = v28;
        *(_QWORD *)(a1 + 16) = v13;
        v31 = *(const __m128i **)a1;
        v32 = _mm_load_si128(&v38);
        v33 = v29 - 1;
        if ( v33 >= 0 )
        {
          do
          {
            v34 = v31->m128i_i64[0];
            v28 += 32;
            v31 += 2;
            *(_QWORD *)(v28 - 32) = v34;
            v35 = v31[-2].m128i_i64[1];
            v36 = _mm_loadu_si128(v31 - 1);
            v31[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v28 - 24) = v35;
            *(__m128i *)(v28 - 16) = v36;
            v31[-1].m128i_i64[1] = 0;
            v25 = v33-- == 0;
          }
          while ( !v25 );
          v31 = *(const __m128i **)a1;
        }
        v39 = v30;
        v38 = v32;
        qfree(v31);
        v37 = v39;
        v9 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v10;
        v12 = _mm_load_si128(&v38);
        *(_QWORD *)(a1 + 16) = v37;
      }
      v5 = (__m128i *)(v10 + 32 * v9);
      v5->m128i_i64[0] = v7;
      v5->m128i_i64[1] = v11;
      v5[1] = v12;
    }
    v6 = v40;
    ++*(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      v41.m128i_i64[0] = 0;
      qfree(v6);
    }
  }
  return a1;
}
