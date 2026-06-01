__m128i *__fastcall sub_7A7C30(
        _QWORD *a1,
        __int64 a2,
        __int32 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  __m128i *v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // r13
  __m128i *v14; // rbx
  __int32 v15; // edx
  __int64 v16; // rax
  __int64 v17; // r15
  __int16 v18; // ax
  __int64 v19; // rbp
  __m128i v20; // xmm2
  __int64 v21; // rax
  bool v23; // al
  __m128i v24; // [rsp+0h] [rbp-58h] BYREF
  int v25; // [rsp+18h] [rbp-40h]
  __int32 v26; // [rsp+1Ch] [rbp-3Ch]

  v25 = a7;
  v11 = (__m128i *)sub_79A610(88, a1, a2, 0);
  v12 = (__m128i)a4;
  v13 = *(_QWORD *)a6;
  v14 = v11;
  v15 = *(_DWORD *)(a6 + 8);
  v24 = _mm_unpacklo_epi64(v12, (__m128i)a5);
  v11->m128i_i64[0] = (__int64)off_49F5208;
  if ( !a2
    || (v26 = v15, v16 = sub_79A2E0(a2), v15 = v26, v17 = *(_QWORD *)(v16 + 8) & 7LL, (*(_QWORD *)(v16 + 8) & 7) == 0)
    || *(char *)(v16 + 29) < 0 && (v23 = sub_7946A0(v16), v15 = v26, !v23) )
  {
    v17 = 0;
  }
  v14[1].m128i_i32[2] = v15;
  v14->m128i_i64[1] = v17;
  v14[1].m128i_i64[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
  v14[1].m128i_i16[6] = 24654;
  v18 = sub_799DF0(0x4Eu);
  v14[2].m128i_i8[0] &= 0xF8u;
  v14[1].m128i_i16[7] = v18 & 0x3FFF | v14[1].m128i_i16[7] & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(78);
  v19 = (unsigned __int8)v25;
  v14[2].m128i_i64[1] = v13;
  v14[3].m128i_i64[0] = 0;
  v20 = _mm_load_si128(&v24);
  v14[3].m128i_i32[2] = a3;
  v14->m128i_i64[0] = (__int64)&off_49F5930;
  v21 = *(_QWORD *)(a6 + 16);
  v14[3].m128i_i64[0] = 4 * v19;
  v14[5].m128i_i64[0] = v21;
  v14[4] = v20;
  return v14;
}

