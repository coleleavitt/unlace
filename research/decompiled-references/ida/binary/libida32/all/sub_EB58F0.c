__m128i *__fastcall sub_EB58F0(__m128i *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // r9
  __m128i si128; // xmm0
  __int64 v10; // rdx
  __int64 *v11; // rsi
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm1
  __int64 *v19; // [rsp+8h] [rbp-40h] BYREF
  __m128 v20[3]; // [rsp+10h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_A49FE0((__int64 *)a2, a3, &v19) )
  {
    sub_EB51F0(v20, v19, (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16)), a2, 1);
    si128 = _mm_load_si128((const __m128i *)v20);
    a1[1].m128i_i8[0] = 0;
    *a1 = si128;
    return a1;
  }
  v10 = *(unsigned int *)(a2 + 16);
  v11 = v19;
  v12 = *(_DWORD *)(a2 + 8) + 1;
  v13 = (unsigned int)(4 * v12);
  v20[0].m128_u64[0] = (unsigned __int64)v19;
  if ( (unsigned int)v13 >= 3 * (int)v10 )
  {
    sub_6E50A0(a2, 2 * v10, v10, (unsigned int)(2 * v10), v13, v7);
LABEL_9:
    sub_A49FE0((__int64 *)a2, a3, v20);
    v10 = *(unsigned int *)(a2 + 16);
    v11 = (__int64 *)v20[0].m128_u64[0];
    v12 = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_5;
  }
  v14 = (unsigned int)(v10 - *(_DWORD *)(a2 + 12) - v12);
  if ( (unsigned int)v14 <= (unsigned int)v10 >> 3 )
  {
    sub_6E50A0(a2, v10, v10, v14, v13, v7);
    goto LABEL_9;
  }
LABEL_5:
  v15 = *v11 == -4096;
  *(_DWORD *)(a2 + 8) = v12;
  if ( !v15 )
    --*(_DWORD *)(a2 + 12);
  v16 = (_QWORD *)(*(_QWORD *)a2 + 16 * v10);
  *v11 = *a3;
  v17 = *a4;
  v19 = v11;
  v11[1] = v17;
  sub_EB51F0(v20, v11, v16, a2, 1);
  v18 = _mm_load_si128((const __m128i *)v20);
  a1[1].m128i_i8[0] = 1;
  *a1 = v18;
  return a1;
}

