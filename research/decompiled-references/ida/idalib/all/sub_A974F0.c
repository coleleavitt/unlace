__m128i *__fastcall sub_A974F0(__m128i *a1, __int64 a2, __int64 *a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rsi
  __int64 v12; // r9
  __m128i si128; // xmm0
  int v15; // r11d
  __int64 v16; // r13
  int v17; // edi
  int v18; // edi
  __int64 v19; // r9
  bool v20; // zf
  __m128i v21; // xmm1
  _BYTE *v22; // [rsp+8h] [rbp-40h]
  __m128 v23[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = a3;
  v9 = *(_DWORD *)(a2 + 16);
  if ( !v9 )
  {
    v23[0].m128_u64[0] = 0;
LABEL_11:
    v22 = a4;
    sub_A972E0((__int64 *)a2, 2 * v9, (__int64)a3, (__int64)a4, a5, a6);
LABEL_12:
    sub_A6EA10((__int64 *)a2, v6, v23);
    a3 = (__int64 *)*v6;
    a5 = *(_QWORD *)a2;
    v9 = *(_DWORD *)(a2 + 16);
    v18 = *(_DWORD *)(a2 + 8) + 1;
    v11 = v23[0].m128_u64[0];
    a4 = v22;
    goto LABEL_7;
  }
  a3 = (__int64 *)*a3;
  a5 = *(_QWORD *)a2;
  v10 = (v9 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v11 = *(_QWORD *)a2 + 16LL * v10;
  v12 = *(_QWORD *)v11;
  if ( a3 == *(__int64 **)v11 )
  {
LABEL_3:
    sub_A858D0(v23, (_QWORD *)v11, (_QWORD *)(a5 + 16LL * v9), a2, 1);
    si128 = _mm_load_si128((const __m128i *)v23);
    a1[1].m128i_i8[0] = 0;
    *a1 = si128;
    return a1;
  }
  v15 = 1;
  v16 = 0;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( !v16 && v12 == -8192 )
        v16 = v11;
      v10 = (v9 - 1) & (v15 + v10);
      v11 = a5 + 16LL * v10;
      v12 = *(_QWORD *)v11;
      if ( a3 == *(__int64 **)v11 )
        goto LABEL_3;
      if ( v12 == -4096 )
      {
        if ( v16 )
          v11 = v16;
        break;
      }
      ++v15;
    }
  }
  v17 = *(_DWORD *)(a2 + 8);
  a6 = 3 * v9;
  v23[0].m128_u64[0] = v11;
  v18 = v17 + 1;
  if ( 4 * v18 >= (unsigned int)a6 )
    goto LABEL_11;
  v19 = v9 - *(_DWORD *)(a2 + 12) - v18;
  if ( (unsigned int)v19 <= v9 >> 3 )
  {
    v22 = a4;
    sub_A972E0((__int64 *)a2, v9, (__int64)a3, (__int64)a4, a5, v19);
    goto LABEL_12;
  }
LABEL_7:
  v20 = *(_QWORD *)v11 == -4096;
  *(_DWORD *)(a2 + 8) = v18;
  if ( !v20 )
    --*(_DWORD *)(a2 + 12);
  *(_QWORD *)v11 = a3;
  *(_BYTE *)(v11 + 8) = *a4;
  sub_A858D0(v23, (_QWORD *)v11, (_QWORD *)(a5 + 16LL * v9), a2, 1);
  v21 = _mm_load_si128((const __m128i *)v23);
  a1[1].m128i_i8[0] = 1;
  *a1 = v21;
  return a1;
}
