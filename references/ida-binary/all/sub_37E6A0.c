__int64 __fastcall sub_37E6A0(__int64 *a1, const char *a2)
{
  const char **v2; // rbx
  const char *v3; // rax
  __m128i v4; // xmm2
  __m128i v5; // xmm3
  const char *v6; // r13
  const char *v7; // rdi
  double v8; // rdi
  const char *v9; // r15
  __m128i v10; // xmm0
  const char *v11; // rdi
  const char *v12; // r14
  __m128i v13; // xmm0
  int v14; // eax
  double v15; // rdi
  __m128i si128; // xmm4
  const char *v17; // rdi
  __m128i v18; // xmm5
  __int64 result; // rax
  __m128i v20; // [rsp+0h] [rbp-78h] BYREF
  const char *v21; // [rsp+10h] [rbp-68h]
  unsigned int v22; // [rsp+1Ch] [rbp-5Ch]
  __m128i v23; // [rsp+20h] [rbp-58h] BYREF
  __m128i v24[4]; // [rsp+30h] [rbp-48h] BYREF

  v2 = (const char **)a1;
  v3 = (const char *)a1[3];
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  a1[3] = 0;
  v5 = _mm_loadu_si128((const __m128i *)a1 + 2);
  v6 = (const char *)*a1;
  *(_OWORD *)(a1 + 1) = 0;
  v21 = v3;
  LODWORD(v3) = *((_DWORD *)a1 + 12);
  *a1 = 0;
  v22 = (unsigned int)v3;
  v24[0] = v4;
  v23 = v5;
  *((_OWORD *)a1 + 2) = 0;
  while ( 1 )
  {
    if ( *(v2 - 6) )
    {
      a2 = *(v2 - 7);
      v7 = &s1;
      if ( !v4.m128i_i64[0] )
        goto LABEL_3;
      goto LABEL_12;
    }
    if ( !v4.m128i_i64[0] )
      break;
    a2 = &s1;
LABEL_12:
    v7 = v6;
LABEL_3:
    if ( strcmp(v7, a2) >= 0 )
      break;
    v8 = *(double *)v2;
    v9 = *(v2 - 7);
    v10 = (__m128i)_mm_loadh_ps((const double *)v2 - 5);
    *(v2 - 7) = nullptr;
    *((_OWORD *)v2 - 3) = 0;
    if ( v8 != 0.0 )
    {
      v2[1] = nullptr;
      v20 = v10;
      qfree(*(_QWORD *)&v8, a2);
      v10 = _mm_load_si128(&v20);
    }
    v11 = v2[3];
    v12 = *(v2 - 4);
    *(__m128i *)(v2 + 1) = v10;
    *v2 = v9;
    v13 = _mm_loadu_si128((const __m128i *)(v2 - 3));
    *(v2 - 4) = nullptr;
    *(_OWORD *)(v2 - 3) = 0;
    if ( v11 )
    {
      v2[4] = nullptr;
      v20 = v13;
      qfree(v11, a2);
      v13 = _mm_load_si128(&v20);
    }
    v14 = *((_DWORD *)v2 - 2);
    v2[3] = v12;
    v2 -= 7;
    *(__m128i *)(v2 + 11) = v13;
    *((_DWORD *)v2 + 26) = v14;
  }
  v15 = *(double *)v2;
  if ( *v2 )
  {
    v2[1] = nullptr;
    qfree(*(_QWORD *)&v15, a2);
  }
  si128 = _mm_load_si128(v24);
  v17 = v2[3];
  *v2 = v6;
  *(__m128i *)(v2 + 1) = si128;
  if ( v17 )
  {
    v2[4] = nullptr;
    qfree(v17, a2);
  }
  v18 = _mm_load_si128(&v23);
  v2[3] = v21;
  result = v22;
  *((__m128i *)v2 + 2) = v18;
  *((_DWORD *)v2 + 12) = result;
  return result;
}
