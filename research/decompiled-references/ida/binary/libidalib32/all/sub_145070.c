__int64 __fastcall sub_145070(__int64 *a1)
{
  const char **v1; // rbx
  const char *v2; // rax
  __m128i v3; // xmm2
  __m128i v4; // xmm3
  const char *v5; // r13
  const char *v6; // rsi
  const char *v7; // rdi
  double v8; // rdi
  const char *v9; // r15
  __m128i v10; // xmm0
  const char *v11; // rdi
  const char *v12; // r14
  __m128i v13; // xmm0
  int v14; // eax
  __m128i si128; // xmm4
  const char *v16; // rdi
  __m128i v17; // xmm5
  __int64 result; // rax
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  const char *v20; // [rsp+10h] [rbp-68h]
  unsigned int v21; // [rsp+1Ch] [rbp-5Ch]
  __m128i v22; // [rsp+20h] [rbp-58h] BYREF
  __m128i v23[4]; // [rsp+30h] [rbp-48h] BYREF

  v1 = (const char **)a1;
  v2 = (const char *)a1[3];
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  a1[3] = 0;
  v4 = _mm_loadu_si128((const __m128i *)a1 + 2);
  v5 = (const char *)*a1;
  *(_OWORD *)(a1 + 1) = 0;
  v20 = v2;
  LODWORD(v2) = *((_DWORD *)a1 + 12);
  *a1 = 0;
  v21 = (unsigned int)v2;
  v23[0] = v3;
  v22 = v4;
  *((_OWORD *)a1 + 2) = 0;
  while ( 1 )
  {
    if ( *(v1 - 6) )
    {
      v6 = *(v1 - 7);
      v7 = s1;
      if ( !v3.m128i_i64[0] )
        goto LABEL_3;
      goto LABEL_12;
    }
    if ( !v3.m128i_i64[0] )
      break;
    v6 = s1;
LABEL_12:
    v7 = v5;
LABEL_3:
    if ( strcmp(v7, v6) >= 0 )
      break;
    v8 = *(double *)v1;
    v9 = *(v1 - 7);
    v10 = (__m128i)_mm_loadh_ps((const double *)v1 - 5);
    *(v1 - 7) = nullptr;
    *((_OWORD *)v1 - 3) = 0;
    if ( v8 != 0.0 )
    {
      v1[1] = nullptr;
      v19 = v10;
      qfree();
      v10 = _mm_load_si128(&v19);
    }
    v11 = v1[3];
    v12 = *(v1 - 4);
    *(__m128i *)(v1 + 1) = v10;
    *v1 = v9;
    v13 = _mm_loadu_si128((const __m128i *)(v1 - 3));
    *(v1 - 4) = nullptr;
    *(_OWORD *)(v1 - 3) = 0;
    if ( v11 )
    {
      v1[4] = nullptr;
      v19 = v13;
      qfree();
      v13 = _mm_load_si128(&v19);
    }
    v14 = *((_DWORD *)v1 - 2);
    v1[3] = v12;
    v1 -= 7;
    *(__m128i *)(v1 + 11) = v13;
    *((_DWORD *)v1 + 26) = v14;
  }
  if ( *v1 )
  {
    v1[1] = nullptr;
    qfree();
  }
  si128 = _mm_load_si128(v23);
  v16 = v1[3];
  *v1 = v5;
  *(__m128i *)(v1 + 1) = si128;
  if ( v16 )
  {
    v1[4] = nullptr;
    qfree();
  }
  v17 = _mm_load_si128(&v22);
  v1[3] = v20;
  result = v21;
  *((__m128i *)v1 + 2) = v17;
  *((_DWORD *)v1 + 12) = result;
  return result;
}

