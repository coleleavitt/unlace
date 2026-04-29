__int64 __fastcall sub_2FF50(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __m128i v6; // xmm4
  __m128i v7; // xmm3
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  int v10; // eax
  __int16 v11; // si
  __int64 v12; // rbp
  __m128i si128; // xmm5
  __int64 v14; // rcx
  __m128 v15; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // [rsp+8h] [rbp-140h] BYREF
  __int64 v24; // [rsp+10h] [rbp-138h] BYREF
  __m128i v25; // [rsp+18h] [rbp-130h] BYREF
  __m128i v26; // [rsp+30h] [rbp-118h] BYREF
  __m128i v27; // [rsp+40h] [rbp-108h] BYREF
  __m128i v28; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v29; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+70h] [rbp-D8h]
  __int64 v31; // [rsp+80h] [rbp-C8h] BYREF
  __m128i v32[8]; // [rsp+88h] [rbp-C0h] BYREF
  unsigned __int64 v33; // [rsp+108h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v4 = sub_1EA70(a2);
  if ( v4 == -1 )
  {
    sub_19A90((__int64)&v31, (__int64)"lookup_rf_unwind(%a): no RUNTIME_FUNCTION", a3);
    v19 = v31;
    v20 = _mm_loadu_si128(v32);
    *(_BYTE *)(a1 + 128) = 1;
    *(_QWORD *)a1 = v19;
    *(__m128i *)(a1 + 8) = v20;
  }
  else
  {
    sub_1EB40((__int64)&v31, v4);
    if ( v31 == -1 )
    {
      sub_19A90((__int64)&v24, (__int64)"lookup_rf_unwind(%a): no RUNTIME_FUNCTION data for %a", a3, a4);
      v17 = v24;
      v18 = _mm_loadu_si128(&v25);
      *(_BYTE *)(a1 + 128) = 1;
      *(_QWORD *)a1 = v17;
      *(__m128i *)(a1 + 8) = v18;
    }
    else
    {
      v5 = v32[0].m128i_i64[1];
      v23 = v32[0].m128i_i64[0];
      sub_1EC80((__int64)&v24, v32[0].m128i_i64[1]);
      v6 = _mm_load_si128(&v26);
      v7 = _mm_load_si128(&v27);
      v8 = _mm_load_si128(&v28);
      v9 = _mm_load_si128(&v29);
      v10 = v24;
      v11 = WORD2(v24);
      v32[3] = v6;
      v12 = v25.m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)&v25.m128i_u64[1]);
      v32[4] = v7;
      v14 = v30;
      v32[5] = v8;
      v32[6] = v9;
      if ( (_BYTE)v24 == 0xFF )
      {
        sub_19A90(
          (__int64)&v24,
          (__int64)"lookup_rf_unwind(%a): no UNWIND_INFO data for %a",
          a3,
          *(double *)v9.m128i_i64);
        v21 = v24;
        v22 = _mm_loadu_si128(&v25);
        *(_BYTE *)(a1 + 128) = 1;
        *(_QWORD *)a1 = v21;
        *(__m128i *)(a1 + 8) = v22;
        if ( v12 )
          qfree(v12);
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v5;
        *(_DWORD *)(a1 + 24) = v10;
        v15 = _mm_loadh_ps((const double *)&v23);
        *(_WORD *)(a1 + 28) = v11;
        *(_QWORD *)(a1 + 32) = v12;
        *(_QWORD *)(a1 + 120) = v14;
        *(_BYTE *)(a1 + 128) = 0;
        *(__m128 *)a1 = v15;
        *(__m128i *)(a1 + 40) = si128;
        *(__m128i *)(a1 + 56) = v6;
        *(__m128i *)(a1 + 72) = v7;
        *(__m128i *)(a1 + 88) = v8;
        *(__m128i *)(a1 + 104) = v9;
      }
    }
  }
  return a1;
}
