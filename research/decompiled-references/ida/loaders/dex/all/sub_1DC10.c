__int64 __fastcall sub_1DC10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r12
  __int128 v8; // xmm1
  __int64 v9; // r14
  __int64 v10; // rbx
  __m128i v11; // xmm0
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rsi
  __m128i v17; // xmm1
  unsigned int v18; // edx
  __m128i v19; // xmm0
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // r13
  __int64 *v23; // r12
  __int64 v24; // r14
  __m128i v25; // xmm2
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r12
  __int64 v31; // r13
  __m128i v32; // xmm0
  __int64 v33; // rdi
  __m128i v34; // [rsp+0h] [rbp-98h] BYREF
  __m128i v35; // [rsp+10h] [rbp-88h] BYREF
  __m128i v36; // [rsp+20h] [rbp-78h] BYREF
  __int64 v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+38h] [rbp-60h]
  __m128i v39; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-44h]
  __int64 v41; // [rsp+58h] [rbp-40h]

  v36.m128i_i64[0] = a3;
  v37 = a2;
  v6 = (a3 - 1) / 2;
  if ( a2 >= v6 )
  {
    v9 = v37;
    v10 = a1 + 56 * v37;
  }
  else
  {
    v7 = v6;
    v8 = 0;
    while ( 1 )
    {
      v9 = 2 * (a2 + 1);
      v10 = a1 + 112 * (a2 + 1);
      if ( *(_DWORD *)(v10 + 52) < *(_DWORD *)(v10 - 4) )
      {
        --v9;
        v10 = a1 + 56 * v9;
      }
      v11 = _mm_loadu_si128((const __m128i *)(v10 + 8));
      *(_OWORD *)(v10 + 8) = v8;
      v12 = (__int64 *)(a1 + 56 * a2);
      v13 = *(_QWORD *)v10;
      *(_QWORD *)v10 = 0;
      v14 = *v12;
      if ( *v12 )
      {
        v12[1] = 0;
        v34.m128i_i64[0] = v13;
        v35 = v11;
        qfree(v14);
        v11 = _mm_load_si128(&v35);
        v13 = v34.m128i_i64[0];
        v8 = 0;
      }
      *v12 = v13;
      *(__m128i *)(v12 + 1) = v11;
      v12[3] = *(_QWORD *)(v10 + 24);
      v12[4] = *(_QWORD *)(v10 + 32);
      v12[5] = *(_QWORD *)(v10 + 40);
      *((_DWORD *)v12 + 12) = *(_DWORD *)(v10 + 48);
      *((_DWORD *)v12 + 13) = *(_DWORD *)(v10 + 52);
      if ( v9 >= v7 )
        break;
      a2 = v9;
    }
  }
  if ( (v36.m128i_i8[0] & 1) == 0 && (v36.m128i_i64[0] - 2) / 2 == v9 )
  {
    v28 = v9 + 1;
    v29 = 2 * (v9 + 1);
    v30 = a1 + 8 * (16 * v28 - v29) - 56;
    v31 = *(_QWORD *)v30;
    v32 = _mm_loadu_si128((const __m128i *)(v30 + 8));
    *(_QWORD *)v30 = 0;
    *(_OWORD *)(v30 + 8) = 0;
    v33 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 )
    {
      *(_QWORD *)(v10 + 8) = 0;
      v34 = v32;
      qfree(v33);
      v32 = _mm_load_si128(&v34);
    }
    *(_QWORD *)v10 = v31;
    v9 = v29 - 1;
    *(__m128i *)(v10 + 8) = v32;
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(v30 + 24);
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(v30 + 32);
    *(_QWORD *)(v10 + 40) = *(_QWORD *)(v30 + 40);
    *(_DWORD *)(v10 + 48) = *(_DWORD *)(v30 + 48);
    *(_DWORD *)(v10 + 52) = *(_DWORD *)(v30 + 52);
    v10 = a1 + 56 * v9;
  }
  v15 = *(_QWORD *)a4;
  v16 = *(_QWORD *)(a4 + 24);
  v17 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v18 = *(_DWORD *)(a4 + 52);
  *(_OWORD *)(a4 + 8) = 0;
  v19 = _mm_loadu_si128((const __m128i *)(a4 + 32));
  v20 = *(_QWORD *)(a4 + 48);
  *(_QWORD *)a4 = 0;
  result = v37;
  v22 = (v9 - 1) / 2;
  if ( v9 > v37 )
  {
    while ( 1 )
    {
      v23 = (__int64 *)(a1 + 56 * v22);
      result = 7 * v9;
      v10 = a1 + 56 * v9;
      if ( *((_DWORD *)v23 + 13) >= v18 )
        break;
      v24 = *v23;
      v25 = _mm_loadu_si128((const __m128i *)(v23 + 1));
      *v23 = 0;
      *(_OWORD *)(v23 + 1) = 0;
      v26 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 )
      {
        *(_QWORD *)(v10 + 8) = 0;
        v41 = v20;
        v40 = v18;
        v38 = v16;
        v36.m128i_i64[0] = v15;
        v39 = v19;
        v35 = v17;
        v34 = v25;
        qfree(v26);
        v20 = v41;
        v19 = _mm_load_si128(&v39);
        v18 = v40;
        v16 = v38;
        v15 = v36.m128i_i64[0];
        v17 = _mm_load_si128(&v35);
        v25 = _mm_load_si128(&v34);
      }
      *(_QWORD *)v10 = v24;
      v9 = v22;
      *(__m128i *)(v10 + 8) = v25;
      *(_QWORD *)(v10 + 24) = v23[3];
      *(_QWORD *)(v10 + 32) = v23[4];
      *(_QWORD *)(v10 + 40) = v23[5];
      *(_DWORD *)(v10 + 48) = *((_DWORD *)v23 + 12);
      *(_DWORD *)(v10 + 52) = *((_DWORD *)v23 + 13);
      result = (v22 - 1) / 2;
      if ( v37 >= v22 )
      {
        v10 = a1 + 56 * v22;
        break;
      }
      v22 = (v22 - 1) / 2;
    }
  }
  v27 = *(_QWORD *)v10;
  if ( *(_QWORD *)v10 )
  {
    *(_QWORD *)(v10 + 8) = 0;
    v38 = v20;
    v37 = v16;
    v35.m128i_i64[0] = v15;
    v36 = v19;
    v34 = v17;
    result = qfree(v27);
    v20 = v38;
    v19 = _mm_load_si128(&v36);
    v16 = v37;
    v15 = v35.m128i_i64[0];
    v17 = _mm_load_si128(&v34);
  }
  *(_QWORD *)v10 = v15;
  *(_QWORD *)(v10 + 24) = v16;
  *(_QWORD *)(v10 + 48) = v20;
  *(__m128i *)(v10 + 8) = v17;
  *(__m128i *)(v10 + 32) = v19;
  return result;
}

