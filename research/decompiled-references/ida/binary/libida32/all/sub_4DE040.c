unsigned __int64 __fastcall sub_4DE040(__int64 a1)
{
  __int64 v1; // rax
  __m128i *v2; // r13
  __int64 v4; // rbx
  __m128i *v5; // r12
  unsigned __int64 v6; // rdx
  __m128i *v7; // rbx
  __m128i *v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __m128i *v12; // rax
  __int32 v13; // edx
  __int32 v14; // esi
  const __m128i *v15; // rdx
  __m128i v16; // xmm0
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  __m128i v19; // xmm0
  unsigned __int64 v20; // rax
  unsigned __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(__m128i **)a1;
  v27 = __readfsqword(0x28u);
  v4 = 16 * v1;
  v5 = &v2[v1];
  if ( v2 == v5 )
  {
    if ( !v1 )
      return v27 - __readfsqword(0x28u);
LABEL_40:
    *(_QWORD *)(a1 + 8) = 0;
    return v27 - __readfsqword(0x28u);
  }
  if ( !(v4 >> 4) )
  {
    sub_4DD730(v2, (unsigned __int64 *)v5, -2);
    goto LABEL_32;
  }
  _BitScanReverse64(&v6, v4 >> 4);
  sub_4DD730(v2, (unsigned __int64 *)v5, 2LL * (int)v6);
  if ( v4 <= 256 )
  {
LABEL_32:
    sub_4DD040(v2, v5);
    goto LABEL_6;
  }
  v7 = v2 + 16;
  sub_4DD040(v2, v2 + 16);
  do
  {
    v8 = v7++;
    sub_4DCD60(v8);
  }
  while ( v5 != v7 );
LABEL_6:
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)a1;
  v11 = *(_QWORD *)a1 + 16 * v9;
  if ( *(_QWORD *)a1 == v11 )
  {
    if ( !v9 )
      return v27 - __readfsqword(0x28u);
    goto LABEL_40;
  }
  v12 = (__m128i *)(v10 + 16);
  if ( 16 * v9 == 16 )
  {
    v17 = 1;
  }
  else
  {
    v13 = *(_DWORD *)(v10 + 8);
    while ( 1 )
    {
      v14 = v13;
      v13 = v12->m128i_i32[2];
      if ( v13 == v14 && v12[-1].m128i_i64[0] == v12->m128i_i64[0] )
        break;
      if ( (__m128i *)v11 == ++v12 )
        goto LABEL_44;
    }
    if ( (__m128i *)v11 == --v12 )
    {
LABEL_44:
      v17 = (__int64)((__int64)v12->m128i_i64 - v10) >> 4;
      goto LABEL_21;
    }
    v15 = v12 + 2;
    if ( (__m128i *)v11 != &v12[2] )
    {
      do
      {
        while ( v12->m128i_i32[2] != v15->m128i_i32[2] || v12->m128i_i64[0] != v15->m128i_i64[0] )
        {
          v16 = _mm_loadu_si128(v15++);
          *++v12 = v16;
          if ( (const __m128i *)v11 == v15 )
            goto LABEL_19;
        }
        ++v15;
      }
      while ( (const __m128i *)v11 != v15 );
LABEL_19:
      v10 = *(_QWORD *)a1;
      v9 = *(_QWORD *)(a1 + 8);
    }
    v17 = (__int64)((__int64)v12[1].m128i_i64 - v10) >> 4;
  }
LABEL_21:
  if ( v9 != v17 )
  {
    v26.m128i_i64[0] = 0xFFFFFFFFLL;
    v26.m128i_i64[1] = 0xFFFFFFFFLL;
    if ( v17 >= v9 )
    {
      v18 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)&v26 < v10 || (unsigned __int64)&v26 >= v10 + 16 * v18 )
      {
        if ( v18 < v17 )
        {
          v24 = qvector_reserve(a1, v10, v17, 16);
          v9 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v24;
        }
        if ( v9 < v17 )
        {
          v19 = _mm_load_si128(&v26);
          do
          {
            v20 = v9++;
            *(__m128i *)(*(_QWORD *)a1 + 16 * v20) = v19;
          }
          while ( v9 != v17 );
        }
      }
      else
      {
        if ( v18 < v17 )
        {
          v25 = qvector_reserve(a1, v10, v17, 16);
          v9 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v25;
        }
        if ( v9 < v17 )
        {
          do
          {
            v22 = v9++;
            v23 = (_QWORD *)(*(_QWORD *)a1 + 16 * v22);
            *v23 = 0xFFFFFFFFLL;
            v23[1] = 0xFFFFFFFFLL;
          }
          while ( v9 != v17 );
        }
      }
    }
    *(_QWORD *)(a1 + 8) = v17;
  }
  return v27 - __readfsqword(0x28u);
}

