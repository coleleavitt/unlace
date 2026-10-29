__m128i *__fastcall sub_1A41E40(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 *v7; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // r9
  __m128i si128; // xmm0
  int v16; // r12d
  __int64 *v17; // r11
  int v18; // edx
  __int64 v19; // r9
  bool v20; // zf
  __m128i v21; // xmm1
  __int64 v22; // [rsp+8h] [rbp-40h]
  __m128 v23[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = a2;
  v7 = (__int64 *)a3;
  v9 = *(unsigned int *)(a2 + 16);
  if ( !(_DWORD)v9 )
  {
    v23[0].m128_u64[0] = 0;
LABEL_11:
    v22 = v6;
    sub_1A41BE0(v6, 2 * v9, a3, v6, a5, a6);
LABEL_12:
    sub_1A3AEF0((__int64 *)v22, v7, v23);
    v6 = v22;
    v10 = *v7;
    a5 = *(_QWORD *)v22;
    v9 = *(unsigned int *)(v22 + 16);
    LODWORD(a3) = *(_DWORD *)(v22 + 8) + 1;
    v12 = (__int64 *)v23[0].m128_u64[0];
    goto LABEL_7;
  }
  v10 = *(_QWORD *)a3;
  a5 = *(_QWORD *)a2;
  v11 = (v9 - 1) & (((unsigned int)*(_QWORD *)a3 >> 9) ^ ((unsigned int)*(_QWORD *)a3 >> 4));
  v12 = (__int64 *)(*(_QWORD *)a2 + 8LL * v11);
  v13 = *v12;
  if ( v10 == *v12 )
  {
LABEL_3:
    sub_FF4650(v23, v12, (_QWORD *)(a5 + 8 * v9), v6, 1);
    si128 = _mm_load_si128((const __m128i *)v23);
    a1[1].m128i_i8[0] = 0;
    *a1 = si128;
    return a1;
  }
  v16 = 1;
  v17 = nullptr;
  if ( v13 != -4096 )
  {
    while ( 1 )
    {
      if ( !v17 && v13 == -8192 )
        v17 = v12;
      v11 = (v9 - 1) & (v16 + v11);
      v12 = (__int64 *)(a5 + 8LL * v11);
      v13 = *v12;
      if ( v10 == *v12 )
        goto LABEL_3;
      if ( v13 == -4096 )
      {
        if ( v17 )
          v12 = v17;
        break;
      }
      ++v16;
    }
  }
  v18 = *(_DWORD *)(v6 + 8);
  a6 = (unsigned int)(3 * v9);
  v23[0].m128_u64[0] = (unsigned __int64)v12;
  a3 = (unsigned int)(v18 + 1);
  if ( 4 * (int)a3 >= (unsigned int)a6 )
    goto LABEL_11;
  v19 = (unsigned int)(v9 - *(_DWORD *)(v6 + 12) - a3);
  if ( (unsigned int)v19 <= (unsigned int)v9 >> 3 )
  {
    v22 = v6;
    sub_1A41BE0(v6, v9, a3, v6, a5, v19);
    goto LABEL_12;
  }
LABEL_7:
  v20 = *v12 == -4096;
  *(_DWORD *)(v6 + 8) = a3;
  if ( !v20 )
    --*(_DWORD *)(v6 + 12);
  *v12 = v10;
  sub_FF4650(v23, v12, (_QWORD *)(a5 + 8 * v9), v6, 1);
  v21 = _mm_load_si128((const __m128i *)v23);
  a1[1].m128i_i8[0] = 1;
  *a1 = v21;
  return a1;
}
