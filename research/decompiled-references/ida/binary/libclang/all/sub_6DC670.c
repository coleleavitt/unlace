unsigned __int64 __fastcall sub_6DC670(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rbp
  const __m128i *v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __m128i v22; // [rsp+10h] [rbp-128h] BYREF
  __m128i v23; // [rsp+20h] [rbp-118h] BYREF
  __m128i v24; // [rsp+30h] [rbp-108h] BYREF
  __m128i v25; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v26; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v27; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v28; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+80h] [rbp-B8h]
  __m128i v30; // [rsp+90h] [rbp-A8h] BYREF
  __m512i v31; // [rsp+A0h] [rbp-98h]
  __m128i v32; // [rsp+E0h] [rbp-58h]
  __m128i v33; // [rsp+F0h] [rbp-48h]
  __int64 v34; // [rsp+100h] [rbp-38h]

  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v4;
  v7 = *(_BYTE *)(*v4 + 16);
  switch ( v7 )
  {
    case 0:
      v12 = sub_6DC670(a1, *(_QWORD *)(v6 + 40), a3, a4);
      result = sub_6C4490(a1, *(_QWORD *)(v6 + 32), v12);
      break;
    case 8:
      v13 = *(_QWORD *)(v6 + 32);
      v14 = sub_6DC670(a1, *(_QWORD *)(v6 + 48), a3, a4);
      v15 = sub_6DC670(a1, *(_QWORD *)(v6 + 40), a3, a4);
      result = sub_6C7EB0(a1, *(_WORD *)(v6 + 18) >> 3, v15, v14, v13);
      break;
    case 9:
      v16 = sub_6DC670(a1, *(_QWORD *)(v6 + 32), a3, a4);
      result = sub_6C80F0(a1, *(_QWORD *)(v6 + 40), v16);
      break;
    case 24:
      v17 = sub_6DC670(a1, *(_QWORD *)(v6 + 40), a3, a4);
      result = sub_6C8A10(a1, (unsigned __int8)(*(_WORD *)(v6 + 18) >> 3), *(_QWORD *)(v6 + 32), v17, 0);
      break;
    case 29:
      v18 = *(_QWORD *)(v6 + 32);
      v19 = sub_6DC670(a1, *(_QWORD *)(v6 + 24), a3, a4);
      result = sub_6C8F20(a1, v19, v18);
      break;
    case 39:
      v20 = sub_6DC670(a1, *(_QWORD *)(v6 + 32), a3, a4);
      result = sub_6C8D20(a1, v20);
      break;
    default:
      if ( v7 != 26 )
        v6 = sub_B0D320(*v4);
      v8 = *(_QWORD *)(a4 + 8);
      sub_6B29F0((__int64)&v22, v6);
      v9 = *(const __m128i **)a4;
      v30 = _mm_load_si128(&v22);
      v10 = _mm_load_si128(&v23);
      v34 = v29;
      *(__m128i *)v31.m512i_i8 = v10;
      *(__m128i *)&v31.m512i_u64[2] = _mm_load_si128(&v24);
      *(__m128i *)&v31.m512i_u64[4] = _mm_load_si128(&v25);
      *(__m128i *)&v31.m512i_u64[6] = _mm_load_si128(&v26);
      v32 = _mm_load_si128(&v27);
      v33 = _mm_load_si128(&v28);
      *(__m128i *)&v31.m512i_u64[1] = _mm_loadu_si128(v9);
      *(__m128i *)&v31.m512i_u64[3] = _mm_loadu_si128(v9 + 1);
      *(__m128i *)&v31.m512i_u64[5] = _mm_loadu_si128(v9 + 2);
      result = sub_6DB070(v8, *(_QWORD *)(v6 + 24), v6 + 48, (unsigned __int16)(*(_DWORD *)(v6 + 20) >> 6), &v30, 0);
      break;
  }
  return result;
}

