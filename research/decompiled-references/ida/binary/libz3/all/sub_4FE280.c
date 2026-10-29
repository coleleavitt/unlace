_QWORD *__fastcall sub_4FE280(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // r13d
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rbp
  unsigned int v23; // r13d
  _QWORD *v24; // rax
  __int64 v25; // rdx
  size_t v26; // rdx
  unsigned int v28; // [rsp+8h] [rbp-40h]
  unsigned int v29; // [rsp+8h] [rbp-40h]
  unsigned int v30; // [rsp+Ch] [rbp-3Ch]

  v4 = *(_DWORD *)(a2[1] + 32LL);
  if ( v4 != 1 )
    return nullptr;
  v7 = sub_4C5590(*(_QWORD *)(a1 + 24), a2[4], a3, a4);
  v8 = (_QWORD *)a2[2];
  v9 = v7;
  if ( v8 )
  {
    v30 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)v8 - 1)));
    v28 = *((_DWORD *)v8 - 2);
    v10 = (_QWORD *)sub_186B270(8LL * v28 + 8);
    v11 = (_QWORD *)a2[2];
    v8 = v10 + 1;
    *v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v30)).m128i_u64[0];
    if ( v11 )
    {
      v12 = 8LL * *((unsigned int *)v11 - 1);
      if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          v10[1] = *v11;
      }
      else
      {
        memmove(v10 + 1, v11, v12);
      }
    }
  }
  if ( a3 > 1 )
  {
    v13 = *a4;
    v14 = v8[v13];
    if ( a3 > 3 )
    {
      v15 = 3;
      do
      {
        v4 = v15;
        v16 = &v8[a4[v15 - 2]];
        v8[v13] = *v16;
        v13 = a4[v15 - 1];
        v15 += 2;
        *v16 = v8[v13];
      }
      while ( 2 * ((a3 - 4) >> 1) + 5LL != v15 );
    }
    v17 = v4;
    v18 = v4 - 1;
    v19 = v4 + 1;
    v20 = &v8[a4[v17]];
    v8[a4[v18]] = *v20;
    if ( (unsigned int)v19 < a3 )
      *v20 = v8[a4[v19]];
    v8[a4[a3 - 1]] = v14;
  }
  v21 = (_QWORD *)sub_186B270(0x18u);
  v21[1] = 0;
  v22 = v21;
  *v21 = &off_1C500E0;
  v21[2] = v9;
  if ( v8 )
  {
    v23 = *((_DWORD *)v8 - 1);
    v29 = *((_DWORD *)v8 - 2);
    v24 = (_QWORD *)sub_186B270(8LL * v29 + 8);
    v25 = *((unsigned int *)v8 - 1);
    v22[1] = v24 + 1;
    v26 = 8 * v25;
    *v24 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(v23)).m128i_u64[0];
    if ( v26 <= 8 )
    {
      if ( v26 == 8 )
        v24[1] = *v8;
    }
    else
    {
      memcpy(v24 + 1, v8, v26);
    }
    sub_186B220(v8 - 1);
  }
  return v22;
}

