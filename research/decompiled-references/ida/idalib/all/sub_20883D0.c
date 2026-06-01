__m128i *__fastcall sub_20883D0(__m128i **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __m128i *v9; // r12
  unsigned int v10; // edi
  __m128i *result; // rax
  __m128i *v12; // r14
  __int64 v13; // rcx
  __m128i *v14; // rdx
  unsigned __int64 v15; // rsi
  __m128i si128; // xmm0
  __m128i *v17; // rbp
  __m128i **v18; // r13
  _QWORD *v19; // rax
  int v20; // ebx
  unsigned __int8 v21; // dl
  __m128i *v22; // r15
  __int64 v23; // rdi
  __int64 *v24; // rdx
  int v25; // ebx
  int v26; // eax
  _QWORD *v27; // rsi
  unsigned int v28; // eax
  __int64 *v29; // rdx
  _QWORD *v30; // rdi
  int v31; // r10d
  __int64 *v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rcx
  __m128i *v35; // rdx
  unsigned __int64 v36; // rsi
  __m128i v37; // xmm0
  __int64 v38; // [rsp+18h] [rbp-60h]
  __int64 v39; // [rsp+28h] [rbp-50h] BYREF
  char v40[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = *a1;
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
  *((_DWORD *)a1 + 4) = v10;
  result = (__m128i *)sub_22300B0(8LL * v10, 8, a3, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    a1[1] = nullptr;
    v38 = 8 * v8;
    v12 = (__m128i *)((char *)v9 + 8 * v8);
    v13 = 8LL * *((unsigned int *)a1 + 4);
    if ( result != (__m128i *)&result->m128i_i8[v13] )
    {
      v14 = result;
      v15 = ((unsigned __int64)(v13 - 8) >> 3) + 1;
      if ( v13 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v14++ = si128;
      while ( v14 != &result[v15 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v15 & 0xFFFFFFFFFFFFFFFELL));
      if ( v15 != (v15 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    v17 = v9;
    if ( v12 != v9 )
    {
      v18 = a1;
      do
      {
        v19 = (_QWORD *)v17->m128i_i64[0];
        if ( v17->m128i_i64[0] != -8192 && v19 != (_QWORD *)-4096LL )
        {
          v20 = *((_DWORD *)v18 + 4);
          if ( !v20 )
          {
            *(_QWORD *)&dword_0 = v17->m128i_i64[0];
            BUG();
          }
          v21 = *((_BYTE *)v19 - 16);
          v22 = *v18;
          if ( (v21 & 2) != 0 )
          {
            v23 = *(_QWORD *)*(v19 - 4);
            v24 = (__int64 *)*(v19 - 4);
          }
          else
          {
            v24 = (_QWORD *)((char *)v19 - 16 - 8LL * ((v21 >> 2) & 0xF));
            v23 = *v24;
          }
          v25 = v20 - 1;
          v39 = v24[1];
          v40[0] = (unsigned __int8)BYTE1(*v19) >> 7;
          v26 = sub_207AAB0(v23, &v39, v40);
          v27 = (_QWORD *)v17->m128i_i64[0];
          v28 = v25 & v26;
          v29 = &v22->m128i_i64[v28];
          v30 = (_QWORD *)*v29;
          if ( *v29 != v17->m128i_i64[0] && v30 != (_QWORD *)-4096LL )
          {
            v31 = 1;
            v32 = nullptr;
            while ( 1 )
            {
              if ( v30 != (_QWORD *)-8192LL || v32 )
                v29 = v32;
              v28 = v25 & (v31 + v28);
              v30 = (_QWORD *)v22->m128i_i64[v28];
              if ( v30 == v27 )
              {
                v29 = &v22->m128i_i64[v28];
                goto LABEL_26;
              }
              if ( v30 == (_QWORD *)-4096LL )
                break;
              v32 = v29;
              ++v31;
              v29 = &v22->m128i_i64[v28];
            }
            if ( !v29 )
              v29 = &v22->m128i_i64[v28];
          }
LABEL_26:
          *v29 = (__int64)v27;
          ++*((_DWORD *)v18 + 2);
        }
        v17 = (__m128i *)((char *)v17 + 8);
      }
      while ( v12 != v17 );
    }
    return (__m128i *)operator delete(v9, v38, 8);
  }
  else
  {
    v33 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v34 = 8 * v33;
    if ( result != (__m128i *)&result->m128i_i8[v34] )
    {
      v35 = result;
      v36 = ((unsigned __int64)(v34 - 8) >> 3) + 1;
      if ( v34 == 8 )
        goto LABEL_36;
      v37 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v35++ = v37;
      while ( v35 != &result[v36 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v36 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v36 & 0xFFFFFFFFFFFFFFFELL) != v36 )
LABEL_36:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
