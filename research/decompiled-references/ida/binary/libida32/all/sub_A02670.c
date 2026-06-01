__int64 __fastcall sub_A02670(__int64 a1, const __m128i *a2, __int64 a3, char a4)
{
  _QWORD *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  __int64 *v12; // rsi
  __m128i si128; // xmm4
  const __m128i *v14; // rax
  __int64 *v15; // rdx
  __m128 v16; // xmm5
  __m128 v17; // xmm0
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __m128i v25; // xmm1
  __m128i v26; // xmm3
  unsigned __int64 v27; // rcx
  __int64 **v28; // rdx
  _BYTE *v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 result; // rax
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // r12
  __int64 (__fastcall *v36)(__int64); // rax
  _QWORD *v37; // rdi
  __int64 v38; // rax
  int v39; // [rsp+Ch] [rbp-2Ch] BYREF
  char v40[40]; // [rsp+10h] [rbp-28h] BYREF

  if ( a4 )
    sub_9FC5A0(a1, a3);
  v7 = *(_QWORD **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 48) )
  {
    v37 = *(_QWORD **)(a1 + 24);
    v39 = *(_DWORD *)(a1 + 52);
    sub_9FC110(v37, &v39, v40);
    *(_QWORD *)(a1 + 48) = 0;
    v7 = *(_QWORD **)(a1 + 24);
  }
  v8 = a3;
  v9 = v7[1];
  v10 = (v8 * 8) >> 3;
  v11 = ((v8 * 8) >> 3) + v9;
  if ( v11 > v7[2] )
  {
    sub_22130D0(v7, v7 + 3, v11, 1);
    v9 = v7[1];
    v11 = v10 + v9;
  }
  v12 = (__int64 *)(*v7 + v9);
  if ( v8 > 0 )
  {
    if ( ((unsigned __int64)a2 >= *v7 + v11 || v12 >= &a2->m128i_i64[v8]) && v8 > 15 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D40);
      v14 = a2;
      v15 = v12;
      do
      {
        v16 = (__m128)_mm_loadu_si128(v14 + 1);
        v17 = (__m128)_mm_loadu_si128(v14);
        v14 += 8;
        v15 += 2;
        v18 = (__m128i)_mm_shuffle_ps(v17, v16, 136);
        v19 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v14 - 6), (__m128)_mm_loadu_si128(v14 - 5), 136);
        v20 = _mm_unpacklo_epi16(v18, v19);
        v21 = _mm_unpackhi_epi16(v18, v19);
        v22 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v20, v21), _mm_unpackhi_epi16(v20, v21));
        v23 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v14 - 2), (__m128)_mm_loadu_si128(v14 - 1), 136);
        v24 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v14 - 4), (__m128)_mm_loadu_si128(v14 - 3), 136);
        v25 = _mm_unpacklo_epi16(v24, v23);
        v26 = _mm_unpackhi_epi16(v24, v23);
        *((__m128i *)v15 - 1) = _mm_packus_epi16(
                                  _mm_and_si128(v22, si128),
                                  _mm_and_si128(
                                    _mm_unpacklo_epi16(_mm_unpacklo_epi16(v25, v26), _mm_unpackhi_epi16(v25, v26)),
                                    si128));
      }
      while ( v14 != &a2[8 * (v10 >> 4)] );
      v27 = v10 - (v10 & 0xFFFFFFFFFFFFFFF0LL);
      v28 = (__int64 **)a2 + (v10 & 0xFFFFFFFFFFFFFFF0LL);
      v29 = (char *)v12 + (v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != v10 )
      {
        v12 = *v28;
        *v29 = (unsigned __int8)*v28;
        if ( v27 != 1 )
        {
          v12 = v28[1];
          v29[1] = (_BYTE)v12;
          if ( v27 != 2 )
          {
            v12 = v28[2];
            v29[2] = (_BYTE)v12;
            if ( v27 != 3 )
            {
              v12 = v28[3];
              v29[3] = (_BYTE)v12;
              if ( v27 != 4 )
              {
                v12 = v28[4];
                v29[4] = (_BYTE)v12;
                if ( v27 != 5 )
                {
                  v12 = v28[5];
                  v29[5] = (_BYTE)v12;
                  if ( v27 != 6 )
                  {
                    v12 = v28[6];
                    v29[6] = (_BYTE)v12;
                    if ( v27 != 7 )
                    {
                      v12 = v28[7];
                      v29[7] = (_BYTE)v12;
                      if ( v27 != 8 )
                      {
                        v12 = v28[8];
                        v29[8] = (_BYTE)v12;
                        if ( v27 != 9 )
                        {
                          v12 = v28[9];
                          v29[9] = (_BYTE)v12;
                          if ( v27 != 10 )
                          {
                            v12 = v28[10];
                            v29[10] = (_BYTE)v12;
                            if ( v27 != 11 )
                            {
                              v12 = v28[11];
                              v29[11] = (_BYTE)v12;
                              if ( v27 != 12 )
                              {
                                v12 = v28[12];
                                v29[12] = (_BYTE)v12;
                                if ( v27 != 13 )
                                {
                                  v12 = v28[13];
                                  v29[13] = (_BYTE)v12;
                                  if ( v27 != 14 )
                                    v29[14] = (unsigned __int8)v28[14];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v38 = 0;
      do
      {
        *((_BYTE *)v12 + v38) = a2->m128i_i64[v38];
        ++v38;
      }
      while ( (__int64)(v10 - v38) > 0 );
    }
    v11 = v10 + v7[1];
  }
  v7[1] = v11;
  while ( 1 )
  {
    result = *(_QWORD *)(a1 + 24);
    v33 = *(_QWORD *)(a1 + 32);
    v34 = *(_QWORD *)(result + 8);
    if ( v33 )
    {
      result = sub_2259B60(v33);
      if ( (_BYTE)result )
      {
        v35 = *(_QWORD *)(a1 + 32);
        if ( !v35 || !(unsigned __int8)sub_2259B60(*(_QWORD *)(a1 + 32)) )
          BUG();
        v36 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 80LL);
        if ( v36 == sub_9FAD20 )
          result = *(_QWORD *)(v35 + 88);
        else
          result = ((__int64 (__fastcall *)(__int64, __int64 *))v36)(v35, v12);
        LOBYTE(v34) = result + *(_BYTE *)(v35 + 32) - *(_BYTE *)(v35 + 16) + v34;
      }
    }
    if ( (v34 & 3) == 0 )
      break;
    v30 = *(_QWORD **)(a1 + 24);
    v31 = v30[1];
    if ( (unsigned __int64)(v31 + 1) > v30[2] )
    {
      v12 = v30 + 3;
      sub_22130D0(*(_QWORD *)(a1 + 24), v30 + 3, v31 + 1, 1);
      v31 = v30[1];
    }
    *(_BYTE *)(*v30 + v31) = 0;
    ++v30[1];
  }
  return result;
}

