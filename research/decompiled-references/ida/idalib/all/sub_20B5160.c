__m128i *__fastcall sub_20B5160(__m128i *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r9
  __m128i si128; // xmm0
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rdx
  __m128i v15; // xmm1
  __int64 *v16; // [rsp+8h] [rbp-40h] BYREF
  __m128 v17[3]; // [rsp+10h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_20AF550((__int64 *)a2, a3, &v16) )
  {
    sub_2093B20(v17, v16, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
    si128 = _mm_load_si128((const __m128i *)v17);
    a1[1].m128i_i8[0] = 0;
    *a1 = si128;
    return a1;
  }
  v8 = v16;
  v9 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  v10 = *(unsigned int *)(a2 + 16);
  v17[0].m128_u64[0] = (unsigned __int64)v16;
  v11 = (unsigned int)(4 * v9);
  if ( (unsigned int)v11 >= 3 * (int)v10 )
  {
    sub_20B4EF0(a2, 2 * v10, v9, (unsigned int)(2 * v10), v11, v5);
LABEL_9:
    sub_20AF550((__int64 *)a2, a3, (__int64 **)v17);
    v10 = *(unsigned int *)(a2 + 16);
    v8 = (__int64 *)v17[0].m128_u64[0];
    LODWORD(v9) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_5;
  }
  v12 = (unsigned int)(v10 - *(_DWORD *)(a2 + 12) - v9);
  if ( (unsigned int)v12 <= (unsigned int)v10 >> 3 )
  {
    sub_20B4EF0(a2, v10, v9, v12, v11, v5);
    goto LABEL_9;
  }
LABEL_5:
  v13 = *v8 == -4096;
  *(_DWORD *)(a2 + 8) = v9;
  if ( !v13 )
    --*(_DWORD *)(a2 + 12);
  *v8 = *a3;
  v14 = *(_QWORD *)a2;
  v16 = v8;
  sub_2093B20(v17, v8, (_QWORD *)(v14 + 8 * v10), a2, 1);
  v15 = _mm_load_si128((const __m128i *)v17);
  a1[1].m128i_i8[0] = 1;
  *a1 = v15;
  return a1;
}
