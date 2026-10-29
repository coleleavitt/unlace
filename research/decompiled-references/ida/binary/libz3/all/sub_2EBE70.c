__m128i *__fastcall sub_2EBE70(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  __m128i v8; // xmm0
  __m128i *v9; // rbx
  __int32 v10; // ecx
  __int64 v11; // r15
  __m128i *v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __m128i *v15; // rdi
  __m128i *result; // rax
  __int64 *v17; // rcx
  int v18; // edx
  __m128i *v19; // rax
  __int32 v20; // r8d
  __int64 v21; // r9
  __m128i *v22; // rdx
  const __m128i *v23; // r12
  __m128i *v24; // r10
  __int64 v25; // rax
  __m128i *v26; // rdx
  __m128i *v27; // rax
  __m128i v28; // xmm1
  __m128i v29; // [rsp+0h] [rbp-78h] BYREF
  __m128i *v30; // [rsp+18h] [rbp-60h]
  __m128i v31; // [rsp+20h] [rbp-58h] BYREF
  __int32 v32; // [rsp+34h] [rbp-44h]
  __int64 v33; // [rsp+38h] [rbp-40h]

  v5 = sub_186B270(0xA8u);
  sub_303370(v5, a1 + 80, a3);
  sub_300690(v5, a1 + 288);
  v6 = *(unsigned int *)(a1 + 424);
  v7 = *a2;
  v8 = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)(unsigned __int64)v5);
  if ( 3 * (int)v6 < (unsigned int)(4 * (*(_DWORD *)(a1 + 428) + *(_DWORD *)(a1 + 432))) )
  {
    LODWORD(v30) = 2 * v6;
    v31 = v8;
    v29.m128i_i64[0] = 24LL * (unsigned int)(2 * v6);
    v11 = v29.m128i_i64[0];
    v19 = (__m128i *)sub_186B270(v29.m128i_u64[0]);
    v20 = (int)v30;
    v21 = v29.m128i_i64[0];
    v8 = _mm_load_si128(&v31);
    v9 = v19;
    v22 = (__m128i *)((char *)v19 + v29.m128i_i64[0]);
    if ( (_DWORD)v30 )
    {
      do
      {
        v19->m128i_i64[0] = 0;
        v19 = (__m128i *)((char *)v19 + 24);
        v19[-1].m128i_i64[0] = 0;
      }
      while ( v19 != v22 );
    }
    v23 = *(const __m128i **)(a1 + 416);
    v10 = v20 - 1;
    v12 = (__m128i *)((char *)v9 + v21);
    v24 = (__m128i *)((char *)v23 + 24 * *(unsigned int *)(a1 + 424));
    if ( v23 != v24 )
    {
      do
      {
        while ( v23->m128i_i32[1] != 2 )
        {
          v23 = (const __m128i *)((char *)v23 + 24);
          if ( v24 == v23 )
            goto LABEL_37;
        }
        v25 = 24LL * (v23->m128i_i32[0] & (unsigned int)v10);
        v26 = (__m128i *)((char *)v9 + v25);
        if ( v25 == v21 )
        {
LABEL_43:
          if ( v26 == v9 )
          {
LABEL_50:
            v33 = v21;
            v32 = v20;
            v31.m128i_i32[0] = v20 - 1;
            v30 = v24;
            v29 = v8;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v27 = v9;
          while ( v27->m128i_i32[1] )
          {
            v27 = (__m128i *)((char *)v27 + 24);
            if ( v26 == v27 )
              goto LABEL_50;
          }
        }
        else
        {
          v27 = (__m128i *)((char *)v9 + v25);
          while ( v27->m128i_i32[1] )
          {
            v27 = (__m128i *)((char *)v27 + 24);
            if ( v12 == v27 )
              goto LABEL_43;
          }
        }
        v28 = _mm_loadu_si128(v23);
        v23 = (const __m128i *)((char *)v23 + 24);
        *v27 = v28;
        v27[1].m128i_i64[0] = v23[-1].m128i_i64[1];
      }
      while ( v24 != v23 );
LABEL_37:
      v24 = *(__m128i **)(a1 + 416);
    }
    if ( v24 )
    {
      v31.m128i_i32[0] = v20;
      LODWORD(v30) = v20 - 1;
      v29 = v8;
      sub_186B220(v24);
      v20 = v31.m128i_i32[0];
      v10 = (int)v30;
      v8 = _mm_load_si128(&v29);
    }
    *(_QWORD *)(a1 + 416) = v9;
    *(_DWORD *)(a1 + 424) = v20;
    *(_DWORD *)(a1 + 432) = 0;
    if ( v7 )
      goto LABEL_3;
  }
  else
  {
    v9 = *(__m128i **)(a1 + 416);
    v10 = v6 - 1;
    v11 = 24 * v6;
    v12 = (__m128i *)((char *)v9 + 24 * v6);
    if ( v7 )
    {
LABEL_3:
      if ( (v7 & 7) == 1 )
        v13 = v7 >> 3;
      else
        LODWORD(v13) = *(_DWORD *)(v7 - 8);
      goto LABEL_5;
    }
  }
  LODWORD(v13) = -1640531495;
LABEL_5:
  v14 = (unsigned int)v13 & v10;
  v15 = (__m128i *)((char *)v9 + 24 * v14);
  if ( 24 * v14 != v11 )
  {
    result = (__m128i *)((char *)v9 + 24 * v14);
    v17 = nullptr;
    while ( 1 )
    {
      v18 = result->m128i_i32[1];
      if ( v18 == 2 )
      {
        if ( (_DWORD)v13 == result->m128i_i32[0] && result->m128i_i64[1] == v7 )
        {
          result->m128i_i32[1] = 2;
          *(__m128i *)((char *)result + 8) = v8;
          return result;
        }
      }
      else
      {
        if ( !v18 )
        {
          if ( v17 )
            goto LABEL_24;
          v17 = (__int64 *)result;
          goto LABEL_25;
        }
        v17 = (__int64 *)result;
      }
      result = (__m128i *)((char *)result + 24);
      if ( result == v12 )
        goto LABEL_17;
    }
  }
  v17 = nullptr;
  while ( 1 )
  {
LABEL_17:
    if ( v15 == v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v9->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( (_DWORD)v13 == v9->m128i_i32[0] && v9->m128i_i64[1] == v7 )
    {
      v9->m128i_i32[1] = 2;
      *(__m128i *)((char *)v9 + 8) = v8;
      return result;
    }
LABEL_16:
    v9 = (__m128i *)((char *)v9 + 24);
  }
  if ( (_DWORD)result )
  {
    v17 = (__int64 *)v9;
    goto LABEL_16;
  }
  if ( v17 )
LABEL_24:
    --*(_DWORD *)(a1 + 432);
  else
    v17 = (__int64 *)v9;
LABEL_25:
  *((_DWORD *)v17 + 1) = 2;
  *(_DWORD *)v17 = v13;
  *(__m128i *)(v17 + 1) = v8;
  ++*(_DWORD *)(a1 + 428);
  return result;
}

