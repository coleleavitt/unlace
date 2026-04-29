__int64 __fastcall sub_18EEE0(__int64 a1, _QWORD *a2, signed int a3, __int64 a4)
{
  __m128i v6; // xmm0
  __m128i *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  int v10; // r15d
  int v11; // r14d
  __int64 v12; // rax
  const __m128i *v13; // rdi
  __int64 v14; // rdx
  __m128i *v15; // rax
  __int64 v16; // rsi
  __m128i *v17; // rcx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned int *v20; // r12
  _QWORD *v21; // r13
  __int64 result; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r13
  __m128i v25; // xmm1
  __int64 v26; // rax
  __int64 v27; // rcx
  const __m128i *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rsi
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __m128i v38; // [rsp+10h] [rbp-98h] BYREF
  __int64 v39; // [rsp+20h] [rbp-88h]
  __int64 v40; // [rsp+28h] [rbp-80h]
  __int64 v41; // [rsp+30h] [rbp-78h]
  _QWORD *v42; // [rsp+38h] [rbp-70h]
  const __m128i *v43; // [rsp+48h] [rbp-60h] BYREF
  __m128i v44; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  v6 = _mm_loadu_si128((const __m128i *)(a4 + 24));
  v41 = a4;
  v45 = __readfsqword(0x28u);
  v44 = v6;
  v7 = sub_18E660((_QWORD *)(a1 + 16), a3, &v44);
  v43 = &v44;
  v8 = sub_18EBE0(v7, (__int64)&v44, &v43);
  if ( !*(_QWORD *)(v8 + 48) )
    return 1;
  v9 = v8 + 24;
  v10 = 0;
  v11 = 0;
  v42 = a2 + 3;
  v12 = 0;
  do
  {
    v13 = (const __m128i *)(*(_QWORD *)(v9 + 16) + 24 * v12);
    v14 = a2[4];
    v15 = (__m128i *)a2[3];
    v16 = v13->m128i_i64[1];
    v17 = (__m128i *)((char *)v15 + 24 * v14);
    if ( v15 == v17 )
      goto LABEL_17;
    while ( v16 != v15->m128i_i64[1] )
    {
      v15 = (__m128i *)((char *)v15 + 24);
      if ( v17 == v15 )
        goto LABEL_17;
    }
    if ( v17 == v15 )
    {
LABEL_17:
      v23 = v14 + 1;
      v24 = v13[1].m128i_i64[0];
      v25 = _mm_unpacklo_epi64(_mm_loadl_epi64(v13), (__m128i)(unsigned __int64)v16);
      if ( a2[5] < v23 )
      {
        v39 = a2[5];
        v38 = v25;
        v26 = qvector_reserve(v42, 0, v23, 24);
        v27 = a2[5];
        v28 = (const __m128i *)a2[3];
        v29 = v26;
        v30 = a2[4] - 1LL;
        a2[5] = v39;
        v31 = _mm_load_si128(&v38);
        if ( v30 >= 0 )
        {
          do
          {
            v32 = _mm_loadu_si128(v28);
            v26 += 24;
            v28 = (const __m128i *)((char *)v28 + 24);
            *(__m128i *)(v26 - 24) = v32;
            *(_QWORD *)(v26 - 8) = v28[-1].m128i_i64[1];
          }
          while ( v30-- != 0 );
          v28 = (const __m128i *)a2[3];
        }
        v40 = v27;
        v39 = v29;
        v38 = v31;
        qfree(v28);
        v34 = v39;
        v35 = v40;
        v25 = _mm_load_si128(&v38);
        v36 = 3LL * a2[4];
        a2[3] = v39;
        a2[5] = v35;
        v17 = (__m128i *)(v34 + 8 * v36);
      }
      v17[1].m128i_i64[0] = v24;
      ++v11;
      *v17 = v25;
      ++a2[4];
    }
    ++v10;
    v18 = *(_QWORD *)(v9 + 24);
    v12 = v10;
  }
  while ( v10 < v18 );
  if ( v11 )
  {
    if ( *(_DWORD *)(a1 + 208) == a3 )
      return 1;
    if ( v11 != v18 )
    {
      if ( !under_debugger )
        sub_37CFE0(51543);
      BUG();
    }
  }
  v19 = sub_100230((unsigned __int64 *)(**(_QWORD **)a1 + 24LL * a3), v41);
  v20 = (unsigned int *)*v19;
  v21 = v19;
  if ( !(4LL * v19[1]) )
    return 1;
  while ( 1 )
  {
    result = sub_18F1A0(a1, a2, *v20, v21);
    if ( !(_BYTE)result )
      break;
    if ( ++v20 == (unsigned int *)(*v21 + 4LL * v21[1]) )
      return 1;
  }
  return result;
}
