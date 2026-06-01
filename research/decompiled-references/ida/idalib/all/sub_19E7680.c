char *__fastcall sub_19E7680(char **a1, __int64 a2, __int64 a3)
{
  char *v5; // r13
  char *v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  char v17; // dl
  const __m128i *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r14
  __int8 v21; // cl
  const __m128i *v22; // rcx
  const __m128i *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const __m128i *v26; // rcx
  char *i; // r15
  char *v28; // rdi
  char *result; // rax
  __int64 v30; // [rsp+8h] [rbp-50h] BYREF
  char *v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+18h] [rbp-40h]

  v5 = a1[1];
  v6 = *a1;
  v7 = a2 - (_QWORD)*a1;
  v8 = (v5 - *a1) >> 6;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_32;
  }
  v9 = 2 * v8;
  v10 = -64;
  if ( v8 > 2 * v8 || v9 > 0x3FFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_32:
    v10 = v9 << 6;
LABEL_3:
    v32 = a3;
    v30 = v7;
    v11 = operator new(v10);
    a3 = v32;
    v12 = v11;
    v31 = (char *)(v11 + v10);
    v13 = v11 + 64;
    goto LABEL_4;
  }
  v13 = 64;
  v12 = 0;
  v31 = nullptr;
LABEL_4:
  v14 = v12 + v7;
  v15 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)v14 = *(_QWORD *)a3;
  *(_DWORD *)(v14 + 8) = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(v14 + 12) = *(_QWORD *)(a3 + 12);
  *(_DWORD *)(v14 + 20) = *(_DWORD *)(a3 + 20);
  *(_QWORD *)(v14 + 24) = v14 + 40;
  if ( v15 == a3 + 40 )
  {
    *(__m128i *)(v14 + 40) = _mm_loadu_si128((const __m128i *)(a3 + 40));
  }
  else
  {
    *(_QWORD *)(v14 + 24) = v15;
    *(_QWORD *)(v14 + 40) = *(_QWORD *)(a3 + 40);
  }
  v16 = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(a3 + 24) = a3 + 40;
  *(_QWORD *)(a3 + 32) = 0;
  *(_BYTE *)(a3 + 40) = 0;
  v17 = *(_BYTE *)(a3 + 56);
  *(_QWORD *)(v14 + 32) = v16;
  *(_BYTE *)(v14 + 56) = v17;
  if ( (char *)a2 != v6 )
  {
    v18 = (const __m128i *)(v6 + 40);
    v19 = v12;
    v20 = (unsigned __int64)(a2 - 64 - (_QWORD)v6) >> 6;
    do
    {
      *(_QWORD *)v19 = v18[-3].m128i_i64[1];
      *(_DWORD *)(v19 + 8) = v18[-2].m128i_i32[0];
      *(_QWORD *)(v19 + 12) = *(__int64 *)((char *)v18[-2].m128i_i64 + 4);
      *(_DWORD *)(v19 + 20) = v18[-2].m128i_i32[3];
      *(_QWORD *)(v19 + 24) = v19 + 40;
      v22 = (const __m128i *)v18[-1].m128i_i64[0];
      if ( v22 == v18 )
      {
        *(__m128i *)(v19 + 40) = _mm_loadu_si128(v18);
      }
      else
      {
        *(_QWORD *)(v19 + 24) = v22;
        *(_QWORD *)(v19 + 40) = v18->m128i_i64[0];
      }
      v19 += 64;
      *(_QWORD *)(v19 - 32) = v18[-1].m128i_i64[1];
      v21 = v18[1].m128i_i8[0];
      v18[-1].m128i_i64[0] = (__int64)v18;
      v18 += 4;
      v18[-5].m128i_i64[1] = 0;
      v18[-4].m128i_i8[0] = 0;
      *(_BYTE *)(v19 - 8) = v21;
    }
    while ( v19 != v12 + ((v20 + 1) << 6) );
    v13 = v12 + ((v20 + 2) << 6);
  }
  if ( (char *)a2 != v5 )
  {
    v23 = (const __m128i *)(a2 + 40);
    v24 = v13;
    do
    {
      *(_QWORD *)v24 = v23[-3].m128i_i64[1];
      *(_DWORD *)(v24 + 8) = v23[-2].m128i_i32[0];
      *(_QWORD *)(v24 + 12) = *(__int64 *)((char *)v23[-2].m128i_i64 + 4);
      *(_DWORD *)(v24 + 20) = v23[-2].m128i_i32[3];
      *(_QWORD *)(v24 + 24) = v24 + 40;
      v26 = (const __m128i *)v23[-1].m128i_i64[0];
      if ( v26 == v23 )
      {
        *(__m128i *)(v24 + 40) = _mm_loadu_si128(v23);
      }
      else
      {
        *(_QWORD *)(v24 + 24) = v26;
        *(_QWORD *)(v24 + 40) = v23->m128i_i64[0];
      }
      v25 = v23[-1].m128i_i64[1];
      v24 += 64;
      v23[-1].m128i_i64[0] = (__int64)v23;
      v23 += 4;
      v23[-5].m128i_i64[1] = 0;
      *(_QWORD *)(v24 - 32) = v25;
      LOBYTE(v25) = v23[-3].m128i_i8[0];
      v23[-4].m128i_i8[0] = 0;
      *(_BYTE *)(v24 - 8) = v25;
    }
    while ( v24 != v13 + ((((unsigned __int64)&v5[-a2 - 64] >> 6) + 1) << 6) );
    v13 += (((unsigned __int64)&v5[-a2 - 64] >> 6) + 1) << 6;
  }
  for ( i = v6; i != v5; i += 64 )
  {
    while ( 1 )
    {
      v28 = *((char **)i + 3);
      if ( v28 == i + 40 )
        break;
      operator delete(v28);
      i += 64;
      if ( v5 == i )
        goto LABEL_23;
    }
  }
LABEL_23:
  if ( v6 )
    operator delete(v6);
  v30 = v13;
  result = v31;
  a1[2] = v31;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v30);
  return result;
}
