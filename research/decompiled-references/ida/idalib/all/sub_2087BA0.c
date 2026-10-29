__m128i *__fastcall sub_2087BA0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  _QWORD **v9; // r12
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 v12; // rcx
  _QWORD **v13; // r13
  __int64 v14; // rcx
  __m128i *v15; // rdx
  unsigned __int64 v16; // rsi
  __m128i si128; // xmm0
  _QWORD **i; // r15
  _QWORD *v19; // rax
  int v20; // r14d
  unsigned __int8 v21; // si
  _QWORD **v22; // rbp
  __int64 v23; // rdi
  char *v24; // rsi
  int v25; // eax
  _QWORD *v26; // rdi
  unsigned int v27; // eax
  _QWORD *v28; // rsi
  _QWORD *v29; // r9
  int v30; // r11d
  _QWORD *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rcx
  __m128i *v34; // rdx
  unsigned __int64 v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+18h] [rbp-50h] BYREF
  char v39; // [rsp+20h] [rbp-48h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD ***)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (__m128i *)sub_22300B0(8LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v37 = 8 * v8;
    v13 = &v9[v8];
    v14 = 8 * v12;
    if ( result != (__m128i *)&result->m128i_i8[v14] )
    {
      v15 = result;
      v16 = ((unsigned __int64)(v14 - 8) >> 3) + 1;
      if ( v14 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v15++ = si128;
      while ( v15 != &result[v16 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v16 & 0xFFFFFFFFFFFFFFFELL));
      if ( v16 != (v16 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    for ( i = v9; v13 != i; ++i )
    {
      v19 = *i;
      if ( *i != (_QWORD *)-8192LL && v19 != (_QWORD *)-4096LL )
      {
        v20 = *(_DWORD *)(a1 + 16);
        if ( !v20 )
        {
          *(_QWORD *)&dword_0 = *i;
          BUG();
        }
        v21 = *((_BYTE *)v19 - 16);
        v22 = *(_QWORD ***)a1;
        if ( (v21 & 2) != 0 )
        {
          v23 = *(_QWORD *)(*(v19 - 4) + 8LL);
          v24 = (char *)*(v19 - 4);
        }
        else
        {
          v24 = (char *)v19 - 16 - 8LL * ((v21 >> 2) & 0xF);
          v23 = *((_QWORD *)v24 + 1);
        }
        v38 = *((_QWORD *)v24 + 2);
        v39 = (unsigned __int8)BYTE1(*v19) >> 7;
        v25 = sub_20786A0(v23, &v38);
        v26 = *i;
        v27 = (v20 - 1) & v25;
        v28 = &v22[v27];
        v29 = (_QWORD *)*v28;
        if ( *i != (_QWORD *)*v28 && v29 != (_QWORD *)-4096LL )
        {
          v30 = 1;
          v31 = nullptr;
          while ( 1 )
          {
            if ( v29 != (_QWORD *)-8192LL || v31 )
              v28 = v31;
            v27 = (v20 - 1) & (v30 + v27);
            v29 = v22[v27];
            if ( v29 == v26 )
            {
              v28 = &v22[v27];
              goto LABEL_25;
            }
            if ( v29 == (_QWORD *)-4096LL )
              break;
            ++v30;
            v31 = v28;
            v28 = &v22[v27];
          }
          if ( !v28 )
            v28 = &v22[v27];
        }
LABEL_25:
        *v28 = v26;
        ++*(_DWORD *)(a1 + 8);
      }
    }
    return (__m128i *)operator delete(v9, v37, 8);
  }
  else
  {
    v32 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v33 = 8 * v32;
    if ( result != (__m128i *)&result->m128i_i8[v33] )
    {
      v34 = result;
      v35 = ((unsigned __int64)(v33 - 8) >> 3) + 1;
      if ( v33 == 8 )
        goto LABEL_35;
      v36 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v34++ = v36;
      while ( v34 != &result[v35 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v35 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v35 & 0xFFFFFFFFFFFFFFFELL) != v35 )
LABEL_35:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
