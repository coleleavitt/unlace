int sub_2F7360()
{
  __m128i *v0; // rax
  void *v1; // rax
  size_t v2; // rax
  int v4; // [rsp+4h] [rbp-1B4h] BYREF
  int *v5; // [rsp+8h] [rbp-1B0h] BYREF
  void *ptr; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v7; // [rsp+18h] [rbp-1A0h]
  _BYTE v8[160]; // [rsp+20h] [rbp-198h] BYREF
  void *v9[2]; // [rsp+C0h] [rbp-F8h] BYREF
  __m128i v10; // [rsp+D0h] [rbp-E8h] BYREF
  __m128i v11; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i v12; // [rsp+F0h] [rbp-C8h] BYREF
  __m128i v13; // [rsp+100h] [rbp-B8h] BYREF
  __m128i v14; // [rsp+110h] [rbp-A8h] BYREF
  __m128i v15; // [rsp+120h] [rbp-98h] BYREF
  __m128i v16; // [rsp+130h] [rbp-88h] BYREF
  __m128i v17; // [rsp+140h] [rbp-78h] BYREF
  __m128i v18; // [rsp+150h] [rbp-68h] BYREF
  __m128i v19; // [rsp+160h] [rbp-58h] BYREF
  __m128i v20; // [rsp+170h] [rbp-48h] BYREF
  __int64 v21; // [rsp+180h] [rbp-38h]

  v9[0] = "throughput";
  v10.m128i_i64[1] = (__int64)"Reciprocal throughput";
  v11.m128i_i64[1] = (__int64)"latency";
  v13.m128i_i64[0] = (__int64)"Instruction latency";
  v14.m128i_i64[0] = (__int64)"code-size";
  v15.m128i_i64[1] = (__int64)"Code size";
  v16.m128i_i64[1] = (__int64)"size-latency";
  v18.m128i_i64[0] = (__int64)"Code size and latency";
  v19.m128i_i64[0] = (__int64)"all";
  v20.m128i_i64[1] = (__int64)"Print all cost kinds";
  v9[1] = byte_9 + 1;
  v10.m128i_i32[0] = 0;
  v11.m128i_i64[0] = 21;
  v12.m128i_i64[0] = 7;
  v12.m128i_i32[2] = 1;
  v13.m128i_i64[1] = 19;
  v14.m128i_i64[1] = 9;
  v15.m128i_i32[0] = 2;
  v16.m128i_i64[0] = 9;
  v17.m128i_i64[0] = 12;
  v17.m128i_i32[2] = 3;
  v18.m128i_i64[1] = 21;
  v19.m128i_i64[1] = 3;
  v20.m128i_i32[0] = 4;
  v21 = 20;
  ptr = v8;
  v7 = 0x400000000LL;
  sub_2237220(&ptr, v8, 5, 40);
  v0 = (__m128i *)((char *)ptr + 40 * (unsigned int)v7);
  *v0 = _mm_load_si128((const __m128i *)v9);
  v0[1] = _mm_load_si128(&v10);
  v0[2] = _mm_load_si128(&v11);
  v0[3] = _mm_load_si128(&v12);
  v0[4] = _mm_load_si128(&v13);
  v0[5] = _mm_load_si128(&v14);
  v0[6] = _mm_load_si128(&v15);
  v0[7] = _mm_load_si128(&v16);
  v0[8] = _mm_load_si128(&v17);
  v0[9] = _mm_load_si128(&v18);
  v0[10] = _mm_load_si128(&v19);
  v0[11] = _mm_load_si128(&v20);
  v0[12].m128i_i64[0] = v21;
  v4 = 0;
  LODWORD(v7) = v7 + 5;
  v5 = &v4;
  v1 = (void *)j__strlen("Target cost kind");
  v9[0] = (void *)"Target cost kind";
  v9[1] = v1;
  sub_20112A0(&unk_2CDBE00, "cost-kind", v9, &v5, &ptr);
  if ( ptr != v8 )
    free(ptr);
  __cxa_atexit(sub_2010F60, &unk_2CDBE00, &off_2B25620);
  v9[0] = &v10;
  v10.m128i_i64[0] = (__int64)"instruction-cost";
  v11.m128i_i64[1] = (__int64)"Use TargetTransformInfo::getInstructionCost";
  v12.m128i_i64[1] = (__int64)"intrinsic-cost";
  v14.m128i_i64[0] = (__int64)"Use TargetTransformInfo::getIntrinsicInstrCost";
  v15.m128i_i64[0] = (__int64)"type-based-intrinsic-cost";
  v16.m128i_i64[1] = (__int64)"Calculate the intrinsic cost based only on argument types";
  v10.m128i_i64[1] = 16;
  v11.m128i_i32[0] = 0;
  v12.m128i_i64[0] = 43;
  v13.m128i_i64[0] = 14;
  v13.m128i_i32[2] = 1;
  v14.m128i_i64[1] = 46;
  v15.m128i_i64[1] = 25;
  v16.m128i_i32[0] = 2;
  v17.m128i_i64[0] = 57;
  v9[1] = (void *)0x400000003LL;
  v4 = 0;
  v5 = &v4;
  v2 = j__strlen("Costing strategy for intrinsic instructions");
  ptr = (void *)"Costing strategy for intrinsic instructions";
  v7 = v2;
  sub_2011680(&unk_2CDBBA0, "intrinsic-cost-strategy", &ptr, &v5, v9);
  if ( v9[0] != &v10 )
    free(v9[0]);
  return __cxa_atexit(sub_2010EC0, &unk_2CDBBA0, &off_2B25620);
}
