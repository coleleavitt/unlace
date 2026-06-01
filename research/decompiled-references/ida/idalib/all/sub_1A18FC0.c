__m128i *__fastcall sub_1A18FC0(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9)
{
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  unsigned __int8 v18; // al
  __m128i *result; // rax
  __m128i *v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  const __m128i *v24; // rbx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __m128i *v30; // [rsp-10h] [rbp-F8h]
  char v32; // [rsp+10h] [rbp-D8h]
  int v33; // [rsp+1Ch] [rbp-CCh]
  __int16 *v34; // [rsp+28h] [rbp-C0h] BYREF
  __int16 v35; // [rsp+30h] [rbp-B8h] BYREF
  char v36; // [rsp+32h] [rbp-B6h]
  int v37; // [rsp+34h] [rbp-B4h]
  __int64 v38; // [rsp+38h] [rbp-B0h]
  __int64 v39; // [rsp+40h] [rbp-A8h]
  __m128i v40[3]; // [rsp+50h] [rbp-98h] BYREF
  int v41; // [rsp+80h] [rbp-68h] BYREF
  __int64 v42; // [rsp+88h] [rbp-60h]

  if ( (*(_BYTE *)(a4 + 1) & 6) != 0 )
  {
    sub_1A0B470((__int64)&v41, *(_QWORD **)(a1 + 248), 0, a3);
    v12 = *(_QWORD *)(a4 + 8);
    v13 = *(_QWORD *)(sub_A72040(*(_QWORD **)(a1 + 248), v12) + 32);
    v32 = *(_BYTE *)(a4 + 1);
    v17 = sub_C00A40(a4, v12, v14, v15, v16);
    v35 = v35 & 0xFE00 | 0x1A;
    if ( unk_2CD7484 )
    {
      v33 = v17;
      sub_EE9B50(26);
      v17 = v33;
    }
    v38 = v13;
    v39 = 0;
    v36 &= 0xF0u;
    v37 = v17;
    HIBYTE(v35) = v32 & 0x3E | HIBYTE(v35) & 1;
    v18 = sub_B62360((__int64)&v35);
    v34 = &v35;
    HIBYTE(v35) = (v18 << 6) | HIBYTE(v35) & 0x3F;
    v36 = v36 & 0xF8 | (v18 >> 2) & 7;
    sub_1A172F0((_DWORD *)a6, a1, (__int64)&v41, a2, (__int64)&v34, 1, a7, a8, 0, a9);
    result = v30;
    if ( *(_DWORD *)a6 )
    {
      v40[0].m128i_i64[1] = v13;
      v20 = *(__m128i **)(a6 + 8);
      v21 = *(_QWORD *)(a3 + 16);
      v40[0].m128i_i32[0] = 25;
      sub_1A0DAA0(a6 + 8, v20, v40);
      v40[0].m128i_i32[0] = 26;
      v40[0].m128i_i64[1] = v21;
      return sub_1A0C040(a6 + 8, v40);
    }
  }
  else
  {
    v22 = *(unsigned int *)(a6 + 16);
    v23 = *(_QWORD *)(a6 + 8);
    v41 = 27;
    v24 = (const __m128i *)&v41;
    v25 = *(unsigned int *)(a6 + 20);
    v42 = a5;
    v26 = v22 + 1;
    result = (__m128i *)(v23 + 40 * v22);
    if ( v26 > v25 )
    {
      v27 = a6 + 8;
      v28 = a6 + 24;
      if ( v23 > (unsigned __int64)&v41 || result <= (__m128i *)&v41 )
      {
        sub_2237220(v27, v28, v26, 40);
        result = (__m128i *)(*(_QWORD *)(a6 + 8) + 40LL * *(unsigned int *)(a6 + 16));
      }
      else
      {
        sub_2237220(v27, v28, v26, 40);
        v29 = *(_QWORD *)(a6 + 8);
        v24 = (const __m128i *)((char *)&v41 + v29 - v23);
        result = (__m128i *)(v29 + 40LL * *(unsigned int *)(a6 + 16));
      }
    }
    *result = _mm_loadu_si128(v24);
    result[1] = _mm_loadu_si128(v24 + 1);
    result[2].m128i_i64[0] = v24[2].m128i_i64[0];
    ++*(_DWORD *)(a6 + 16);
  }
  return result;
}
