__int64 __fastcall sub_823990(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rbp
  unsigned __int32 v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rbx
  __m128i v18; // xmm0
  unsigned __int64 v19; // rax
  const __m128i *v20; // rbp
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __m128i *v24; // rax
  char *v25; // rbp
  __m128i v26; // [rsp+0h] [rbp-68h] BYREF
  const __m128i *v27; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+20h] [rbp-48h] BYREF
  __m128i v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+38h] [rbp-30h]

  v8 = a6;
  v26.m128i_i64[0] = a2;
  v26.m128i_i64[1] = a3;
  v10 = sub_69F3F0((__int64)&v26);
  v11 = *(_QWORD *)(a1 + 88);
  v12 = a1 + 80;
  v28 = a4;
  v29.m128i_i32[0] = v10;
  v13 = v12;
  if ( !v11 )
    goto LABEL_10;
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v11 + 32);
      if ( v14 < a4 || a4 == v14 && *(_DWORD *)(v11 + 40) < v10 )
        break;
      v13 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_8;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v11 );
LABEL_8:
  if ( v12 == v13 || a4 < *(_QWORD *)(v13 + 32) || a4 == *(_QWORD *)(v13 + 32) && v10 < *(_DWORD *)(v13 + 40) )
  {
LABEL_10:
    v27 = (const __m128i *)&v28;
    v13 = sub_820760((_QWORD *)(a1 + 72), v13, &v27);
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = v13 + 48;
  if ( *(_DWORD *)(v15 + 948) < *(_DWORD *)(a1 + 176) )
  {
    v18 = _mm_load_si128(&v26);
    v30 = a5;
    v19 = (2 * v8) | v16 & 0xFFFFFFFFFFFFFFF9LL;
    v29 = v18;
    v20 = (const __m128i *)&v28;
    v28 = v19;
    v21 = *(unsigned int *)(v15 + 320);
    v22 = *(_QWORD *)(v15 + 312);
    v23 = v21 + 1;
    if ( *(unsigned int *)(v15 + 324) < (unsigned __int64)(v21 + 1) )
    {
      if ( (unsigned __int64)&v28 < v22 || (unsigned __int64)&v28 >= v22 + 32 * v21 )
      {
        sub_25D6060(v15 + 312, v15 + 328, v23, 32);
        v22 = *(_QWORD *)(v15 + 312);
        v21 = *(unsigned int *)(v15 + 320);
      }
      else
      {
        v25 = (char *)&v28 - v22;
        sub_25D6060(v15 + 312, v15 + 328, v23, 32);
        v22 = *(_QWORD *)(v15 + 312);
        v21 = *(unsigned int *)(v15 + 320);
        v20 = (const __m128i *)&v25[v22];
      }
    }
    v24 = (__m128i *)(32 * v21 + v22);
    *v24 = _mm_loadu_si128(v20);
    v24[1] = _mm_loadu_si128(v20 + 1);
    ++*(_DWORD *)(v15 + 320);
    return v16;
  }
  else
  {
    if ( (unsigned int)sub_B19900(a5) )
      **(_BYTE **)(*(_QWORD *)(a1 + 8) + 24LL) = 1;
    return v13 + 48;
  }
}

