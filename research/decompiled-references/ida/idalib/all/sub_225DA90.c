_QWORD *__fastcall sub_225DA90(_QWORD *a1, __int64 a2, __int64 a3, __m128i *a4)
{
  _BYTE *v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r15
  __m128i *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __m128i v11; // xmm2
  __int64 v12; // rdx
  __int64 v13; // rsi
  __m128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rbx
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm3
  __int64 v20; // rax
  __m128i v22; // [rsp+0h] [rbp-A8h] BYREF
  __m128i *v23; // [rsp+10h] [rbp-98h]
  __int64 v24; // [rsp+18h] [rbp-90h]
  __m128i v25; // [rsp+20h] [rbp-88h] BYREF
  __m128i v26; // [rsp+30h] [rbp-78h] BYREF
  __int64 v27; // [rsp+40h] [rbp-68h]
  __int64 v28; // [rsp+48h] [rbp-60h]
  __int64 v29; // [rsp+50h] [rbp-58h]
  __int64 v30; // [rsp+58h] [rbp-50h]
  char v31; // [rsp+60h] [rbp-48h]

  v4 = *(_BYTE **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a3 + 8);
  *(_OWORD *)a3 = 0;
  v7 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0;
  v8 = (__m128i *)a4->m128i_i64[0];
  v23 = &v25;
  if ( v8 == &a4[1] )
  {
    v25 = _mm_loadu_si128(a4 + 1);
  }
  else
  {
    v23 = v8;
    v25.m128i_i64[0] = a4[1].m128i_i64[0];
  }
  v9 = a4->m128i_i64[1];
  a4->m128i_i64[0] = (__int64)a4[1].m128i_i64;
  v10 = a4[3].m128i_i64[0];
  v11 = _mm_loadu_si128(a4 + 2);
  v22.m128i_i64[0] = v6;
  v24 = v9;
  v12 = a4[4].m128i_i64[0];
  a4->m128i_i64[1] = 0;
  v13 = a4[3].m128i_i64[1];
  a4[1].m128i_i8[0] = 0;
  v14 = _mm_loadh_ps((const double *)v22.m128i_i64);
  v27 = v10;
  LOBYTE(v10) = a4[5].m128i_i8[0];
  v29 = v12;
  v15 = a4[4].m128i_i64[1];
  v22 = (__m128i)v14;
  v26 = v11;
  v28 = v13;
  v30 = v15;
  v31 = v10;
  v16 = operator new(0xA0u);
  *(_DWORD *)(v16 + 8) = 0;
  *(_QWORD *)v16 = &off_2BEB750;
  *(_QWORD *)(v16 + 16) = v16 + 32;
  sub_2259A00((_QWORD *)(v16 + 16), v4, (__int64)&v4[v5]);
  v17 = _mm_load_si128(&v22);
  *(_QWORD *)(v16 + 64) = v7;
  *(__m128i *)(v16 + 48) = v17;
  *(_QWORD *)v16 = &off_2BEB770;
  *(_QWORD *)(v16 + 72) = v16 + 88;
  if ( v23 == &v25 )
  {
    *(__m128i *)(v16 + 88) = _mm_load_si128(&v25);
  }
  else
  {
    *(_QWORD *)(v16 + 72) = v23;
    *(_QWORD *)(v16 + 88) = v25.m128i_i64[0];
  }
  v18 = v24;
  v19 = _mm_load_si128(&v26);
  *a1 = v16;
  *(_QWORD *)(v16 + 80) = v18;
  v20 = v27;
  *(__m128i *)(v16 + 104) = v19;
  *(_QWORD *)(v16 + 120) = v20;
  *(_QWORD *)(v16 + 128) = v28;
  *(_QWORD *)(v16 + 136) = v29;
  *(_QWORD *)(v16 + 144) = v30;
  *(_BYTE *)(v16 + 152) = v31;
  return a1;
}
