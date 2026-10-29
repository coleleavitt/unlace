__m128i *__fastcall sub_EDB730(__m128i *a1, __int64 a2, __int64 *a3, const __m128i *a4)
{
  __int64 v7; // r9
  __m128i si128; // xmm0
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  __m128i v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i v19; // xmm2
  __int64 *v20; // [rsp+8h] [rbp-40h] BYREF
  __m128 v21[3]; // [rsp+10h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_A6DDE0((__int64 *)a2, a3, &v20) )
  {
    sub_ED95C0(v21, v20, (_QWORD *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 16)), a2, 1);
    si128 = _mm_load_si128((const __m128i *)v21);
    a1[1].m128i_i8[0] = 0;
    *a1 = si128;
    return a1;
  }
  v10 = v20;
  v11 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  v12 = *(unsigned int *)(a2 + 16);
  v21[0].m128_u64[0] = (unsigned __int64)v20;
  v13 = (unsigned int)(4 * v11);
  if ( (unsigned int)v13 >= 3 * (int)v12 )
  {
    sub_A921D0((__int64 **)a2, 2 * v12, v11, (unsigned int)(2 * v12), v13, v7);
LABEL_9:
    sub_A6DDE0((__int64 *)a2, a3, v21);
    v12 = *(unsigned int *)(a2 + 16);
    v10 = (__int64 *)v21[0].m128_u64[0];
    LODWORD(v11) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_5;
  }
  v14 = (unsigned int)(v12 - *(_DWORD *)(a2 + 12) - v11);
  if ( (unsigned int)v14 <= (unsigned int)v12 >> 3 )
  {
    sub_A921D0((__int64 **)a2, v12, v11, v14, v13, v7);
    goto LABEL_9;
  }
LABEL_5:
  v15 = *v10 == -4096;
  *(_DWORD *)(a2 + 8) = v11;
  if ( !v15 )
    --*(_DWORD *)(a2 + 12);
  v16 = _mm_loadu_si128(a4);
  *v10 = *a3;
  v17 = 3 * v12;
  v18 = *(_QWORD *)a2;
  *(__m128i *)(v10 + 1) = v16;
  v20 = v10;
  sub_ED95C0(v21, v10, (_QWORD *)(v18 + 8 * v17), a2, 1);
  v19 = _mm_load_si128((const __m128i *)v21);
  a1[1].m128i_i8[0] = 1;
  *a1 = v19;
  return a1;
}
