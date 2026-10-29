__int64 __fastcall sub_3AA920(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v13; // r14
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // r13
  __m128i v20; // xmm0
  __int64 v21; // rdi
  const __m128i *v22; // rsi
  const __m128i *v23; // rcx
  const __m128i *v24; // roff
  __m128 v25; // xmm2
  __m128i v26; // xmm3
  unsigned __int64 v27; // xmm6_8
  __int64 v28; // r13
  __int128 v29; // xmm1
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rdi
  __int64 v33; // rbp
  __int64 v34; // rdi
  __m128i si128; // xmm5
  __int64 result; // rax
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rbp
  __m128i v40; // [rsp+0h] [rbp-88h] BYREF
  __m128i v41; // [rsp+10h] [rbp-78h] BYREF
  __m128i v42; // [rsp+20h] [rbp-68h] BYREF
  const __m128i *v43; // [rsp+30h] [rbp-58h]
  unsigned int v44; // [rsp+3Ch] [rbp-4Ch]
  __m128i v45[4]; // [rsp+40h] [rbp-48h] BYREF

  v42.m128i_i64[0] = a3;
  v43 = a4;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v16 = a2;
    v17 = a1 + 48 * a2;
  }
  else
  {
    v13 = (a3 - 1) / 2;
    v14 = a2;
    v15 = 0;
    while ( 1 )
    {
      v16 = 2 * (v14 + 1);
      v17 = a1 + 96 * (v14 + 1);
      if ( *(_QWORD *)(v17 + 8) < *(_QWORD *)(v17 - 40) )
      {
        --v16;
        v17 = a1 + 48 * v16;
      }
      v18 = a1 + 48 * v14;
      *(_QWORD *)v18 = *(_QWORD *)v17;
      *(_QWORD *)(v18 + 8) = *(_QWORD *)(v17 + 8);
      v19 = *(_QWORD *)(v17 + 16);
      v20 = _mm_loadu_si128((const __m128i *)(v17 + 24));
      *(_QWORD *)(v17 + 16) = 0;
      *(_OWORD *)(v17 + 24) = v15;
      v21 = *(_QWORD *)(v18 + 16);
      if ( v21 )
      {
        *(_QWORD *)(v18 + 24) = 0;
        v40.m128i_i64[0] = v16;
        v41 = v20;
        qfree(v21);
        v20 = _mm_load_si128(&v41);
        v16 = v40.m128i_i64[0];
        v15 = 0;
      }
      *(_QWORD *)(v18 + 16) = v19;
      *(__m128i *)(v18 + 24) = v20;
      *(_DWORD *)(v18 + 40) = *(_DWORD *)(v17 + 40);
      if ( v16 >= v13 )
        break;
      v14 = v16;
    }
  }
  if ( (v42.m128i_i8[0] & 1) == 0 && (v42.m128i_i64[0] - 2) / 2 == v16 )
  {
    v37 = v16 + 1;
    v38 = 2 * v37;
    v39 = a1 + 96 * v37 - 48;
    *(_QWORD *)v17 = *(_QWORD *)v39;
    *(_QWORD *)(v17 + 8) = *(_QWORD *)(v39 + 8);
    sub_3A9450((__int64 *)(v17 + 16), v39 + 16);
    *(_DWORD *)(v17 + 40) = *(_DWORD *)(v39 + 40);
    v16 = v38 - 1;
    v17 = a1 + 48 * (v38 - 1);
  }
  v22 = v43;
  v23 = (const __m128i *)v43[1].m128i_i64[0];
  v24 = v43;
  v25 = (__m128)_mm_loadu_si128(v43);
  v43[1].m128i_i64[0] = 0;
  v26 = _mm_loadu_si128((const __m128i *)((char *)v24 + 24));
  *(const __m128i *)((char *)&v22[1] + 8) = 0;
  v43 = v23;
  LODWORD(v23) = v22[2].m128i_i32[2];
  v27 = _mm_movehl_ps(a11, v25).m128_u64[0];
  v42 = (__m128i)v25;
  v44 = (unsigned int)v23;
  v45[0] = v26;
  v28 = (v16 - 1) / 2;
  if ( v16 > a2 )
  {
    v29 = 0;
    while ( 1 )
    {
      v33 = a1 + 48 * v28;
      v17 = a1 + 48 * v16;
      if ( *(_QWORD *)(v33 + 8) >= v27 )
        break;
      *(_QWORD *)v17 = *(_QWORD *)v33;
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(v33 + 8);
      v30 = *(_QWORD *)(v33 + 16);
      v31 = _mm_loadu_si128((const __m128i *)(v33 + 24));
      *(_QWORD *)(v33 + 16) = 0;
      *(_OWORD *)(v33 + 24) = v29;
      v32 = *(_QWORD *)(v17 + 16);
      if ( v32 )
      {
        *(_QWORD *)(v17 + 24) = 0;
        v41.m128i_i64[0] = v30;
        v40 = v31;
        qfree(v32);
        v30 = v41.m128i_i64[0];
        v31 = _mm_load_si128(&v40);
        v29 = 0;
      }
      *(_QWORD *)(v17 + 16) = v30;
      *(__m128i *)(v17 + 24) = v31;
      *(_DWORD *)(v17 + 40) = *(_DWORD *)(v33 + 40);
      v16 = v28;
      if ( a2 >= v28 )
      {
        v17 = a1 + 48 * v28;
        break;
      }
      v28 = (v28 - 1) / 2;
    }
  }
  v34 = *(_QWORD *)(v17 + 16);
  *(__m128i *)v17 = _mm_load_si128(&v42);
  if ( v34 )
  {
    *(_QWORD *)(v17 + 24) = 0;
    qfree(v34);
  }
  si128 = _mm_load_si128(v45);
  *(_QWORD *)(v17 + 16) = v43;
  result = v44;
  *(__m128i *)(v17 + 24) = si128;
  *(_DWORD *)(v17 + 40) = result;
  return result;
}
