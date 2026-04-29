__int64 __fastcall sub_1CFE0(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r12
  double v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rbx
  __m128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rbp
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rdi
  bool v26; // cf
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-58h]
  double v37; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int16 v38; // [rsp+16h] [rbp-42h]
  __int64 v39; // [rsp+18h] [rbp-40h]

  v3 = *a1;
  v4 = a1[2];
  if ( a2 >= *a1 && a2 < v3 + 32 * v4 )
  {
    v10 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0;
    v11 = *(double *)(a2 + 16);
    *(_OWORD *)(a2 + 8) = 0;
    v12 = a1[2];
    v37 = v11;
    v38 = *(_WORD *)(a2 + 24);
    v13 = a1[1];
    if ( v12 < v13 + 1 )
    {
      v14 = qvector_reserve(a1, 0, v13 + 1, 32);
      v27 = a1[1];
      v28 = a1[2];
      a1[2] = v12;
      v29 = *a1;
      v39 = v28;
      v30 = v27 - 1;
      if ( v30 >= 0 )
      {
        v31 = v14;
        do
        {
          v32 = *(_QWORD *)v29;
          v33 = _mm_loadu_si128((const __m128i *)(v29 + 8));
          *(_QWORD *)v29 = 0;
          *(_QWORD *)(v29 + 16) = 0;
          *(_QWORD *)v31 = v32;
          *(__m128i *)(v31 + 8) = v33;
          *(_WORD *)(v31 + 24) = *(_WORD *)(v29 + 24);
          v34 = *(_QWORD *)v29;
          if ( *(_QWORD *)v29 )
          {
            *(_QWORD *)(v29 + 8) = 0;
            qfree(v34);
          }
          v29 += 32;
          v31 += 32;
          v26 = v30-- == 0;
        }
        while ( !v26 );
        v29 = *a1;
      }
      qfree(v29);
      v35 = v39;
      *a1 = v14;
      a1[2] = v35;
      v13 = a1[1];
    }
    else
    {
      v14 = *a1;
    }
    v15 = 32 * v13 + v14;
    result = v38;
    v16 = _mm_loadh_ps(&v37);
    *(_QWORD *)v15 = v10;
    *(_WORD *)(v15 + 24) = result;
    *(__m128 *)(v15 + 8) = v16;
  }
  else
  {
    v5 = a1[1];
    if ( v4 < v5 + 1 )
    {
      v17 = qvector_reserve(a1, 0, v5 + 1, 32);
      v18 = a1[1];
      v3 = v17;
      v19 = a1[2];
      a1[2] = v4;
      v20 = *a1;
      v36 = v19;
      v21 = v18 - 1;
      if ( v21 >= 0 )
      {
        v22 = v3;
        do
        {
          v23 = *(_QWORD *)v20;
          v24 = _mm_loadu_si128((const __m128i *)(v20 + 8));
          *(_QWORD *)v20 = 0;
          *(_QWORD *)(v20 + 16) = 0;
          *(_QWORD *)v22 = v23;
          *(__m128i *)(v22 + 8) = v24;
          *(_WORD *)(v22 + 24) = *(_WORD *)(v20 + 24);
          v25 = *(_QWORD *)v20;
          if ( *(_QWORD *)v20 )
          {
            *(_QWORD *)(v20 + 8) = 0;
            qfree(v25);
          }
          v20 += 32;
          v22 += 32;
          v26 = v21-- == 0;
        }
        while ( !v26 );
        v20 = *a1;
      }
      qfree(v20);
      *a1 = v3;
      a1[2] = v36;
      v5 = a1[1];
    }
    v6 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    v7 = 32 * v5 + v3;
    v8 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0;
    *(__m128i *)(v7 + 8) = v6;
    *(_QWORD *)v7 = v8;
    result = *(unsigned __int16 *)(a2 + 24);
    *(_OWORD *)(a2 + 8) = 0;
    *(_WORD *)(v7 + 24) = result;
  }
  ++a1[1];
  return result;
}
