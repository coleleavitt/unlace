__m128i *__fastcall sub_1EDEA30(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 *v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // r9
  __m128i si128; // xmm0
  int v17; // r12d
  __int64 *v18; // r11
  int v19; // edx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  __m128i v23; // xmm1
  __int64 v24; // [rsp+8h] [rbp-40h]
  __m128 v25[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = a2;
  v7 = (__int64 *)a3;
  v9 = *(unsigned int *)(a2 + 16);
  if ( !(_DWORD)v9 )
  {
    v25[0].m128_u64[0] = 0;
LABEL_11:
    v24 = v6;
    sub_1EDE830(v6, 2 * v9, a3, v6, a5, a6);
LABEL_12:
    sub_1EC2640((__int64 *)v24, v7, v25);
    v6 = v24;
    v11 = *(_QWORD *)v24;
    v9 = *(unsigned int *)(v24 + 16);
    LODWORD(a3) = *(_DWORD *)(v24 + 8) + 1;
    v13 = (__int64 *)v25[0].m128_u64[0];
    goto LABEL_7;
  }
  v10 = *(_QWORD *)a3;
  v11 = *(_QWORD *)a2;
  v12 = (v9 - 1) & (((0xBF58476D1CE4E5B9LL * *(_QWORD *)a3) >> 31) ^ (484763065 * *(_DWORD *)a3));
  v13 = (__int64 *)(*(_QWORD *)a2 + 8LL * v12);
  v14 = *v13;
  if ( v10 == *v13 )
  {
LABEL_3:
    sub_1ECF950(v25, v13, (__int64 *)(v11 + 8 * v9), v6, 1);
    si128 = _mm_load_si128((const __m128i *)v25);
    a1[1].m128i_i8[0] = 0;
    *a1 = si128;
    return a1;
  }
  v17 = 1;
  v18 = nullptr;
  if ( v14 != -1 )
  {
    while ( 1 )
    {
      if ( !v18 && v14 == -2 )
        v18 = v13;
      v12 = (v9 - 1) & (v17 + v12);
      v13 = (__int64 *)(v11 + 8LL * v12);
      v14 = *v13;
      if ( v10 == *v13 )
        goto LABEL_3;
      if ( v14 == -1 )
      {
        if ( v18 )
          v13 = v18;
        break;
      }
      ++v17;
    }
  }
  v19 = *(_DWORD *)(v6 + 8);
  a5 = (unsigned int)(3 * v9);
  v25[0].m128_u64[0] = (unsigned __int64)v13;
  a3 = (unsigned int)(v19 + 1);
  a6 = (unsigned int)(4 * a3);
  if ( (unsigned int)a6 >= (unsigned int)a5 )
    goto LABEL_11;
  v20 = (unsigned int)(v9 - *(_DWORD *)(v6 + 12) - a3);
  v21 = (unsigned int)v9 >> 3;
  if ( (unsigned int)v20 <= (unsigned int)v21 )
  {
    v24 = v6;
    sub_1EDE830(v6, v9, a3, v6, v20, v21);
    goto LABEL_12;
  }
LABEL_7:
  v22 = *v13 == -1;
  *(_DWORD *)(v6 + 8) = a3;
  if ( !v22 )
    --*(_DWORD *)(v6 + 12);
  *v13 = *v7;
  sub_1ECF950(v25, v13, (__int64 *)(v11 + 8 * v9), v6, 1);
  v23 = _mm_load_si128((const __m128i *)v25);
  a1[1].m128i_i8[0] = 1;
  *a1 = v23;
  return a1;
}
