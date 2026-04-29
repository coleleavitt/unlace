unsigned __int64 __fastcall sub_6920(__int64 a1, _DWORD *a2, _DWORD *a3, const char *a4)
{
  size_t v6; // rax
  size_t v7; // r14
  int tinfo_udt_member; // ebx
  __m128i v9; // xmm8
  __m128i si128; // xmm7
  __m128i v11; // xmm6
  __m128i v12; // xmm5
  __m128i v13; // xmm9
  __m128i v14; // xmm4
  __m128i v15; // xmm3
  __m128i v16; // xmm2
  __m128i v17; // xmm9
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm9
  __m128i v21; // xmm9
  __m128i v22; // xmm9
  __m128i v23; // xmm9
  __m128i v24; // xmm9
  __m128i v25; // xmm9
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-200h]
  __m128i v29; // [rsp+8h] [rbp-1F8h] BYREF
  __m128i v30[2]; // [rsp+18h] [rbp-1E8h] BYREF
  __m128i v31; // [rsp+38h] [rbp-1C8h] BYREF
  __m128i v32; // [rsp+48h] [rbp-1B8h] BYREF
  __m128i v33; // [rsp+58h] [rbp-1A8h] BYREF
  __m128i v34; // [rsp+68h] [rbp-198h] BYREF
  __m128i v35; // [rsp+78h] [rbp-188h] BYREF
  __m128i v36; // [rsp+88h] [rbp-178h] BYREF
  __m128i v37; // [rsp+98h] [rbp-168h] BYREF
  __m128i v38[2]; // [rsp+A8h] [rbp-158h] BYREF
  __m128i v39; // [rsp+C8h] [rbp-138h] BYREF
  __m128i v40; // [rsp+D8h] [rbp-128h] BYREF
  __m128i v41; // [rsp+E8h] [rbp-118h] BYREF
  __m128i v42; // [rsp+F8h] [rbp-108h] BYREF
  __m128i v43; // [rsp+108h] [rbp-F8h] BYREF
  __m128i v44[10]; // [rsp+118h] [rbp-E8h] BYREF
  unsigned __int64 v45; // [rsp+1C0h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v36.m128i_i8[8] = 0;
  memset(v30, 0, sizeof(v30));
  v35.m128i_i64[0] = 1;
  v35.m128i_i32[2] = -1;
  v36.m128i_i64[0] = 0;
  memset(v38, 0, sizeof(v38));
  v29 = 0;
  v31 = 0;
  v32 = 0;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v43.m128i_i64[0] = 1;
  v43.m128i_i32[2] = -1;
  v44[0].m128i_i64[0] = 0;
  v44[0].m128i_i8[8] = 0;
  if ( a4 )
  {
    v6 = strlen(a4);
    v7 = v6;
    if ( v6 )
    {
      v28 = v6 + 1;
      v38[0].m128i_i64[0] = qvector_reserve();
      v38[0].m128i_i64[1] = v28;
      memmove((void *)v38[0].m128i_i64[0], a4, v7);
      *(_BYTE *)(v38[0].m128i_i64[0] + v7) = 0;
    }
  }
  tinfo_udt_member = find_tinfo_udt_member();
  if ( tinfo_udt_member >= 0 )
  {
    v9 = _mm_load_si128(&v29);
    si128 = _mm_load_si128(v30);
    v11 = _mm_load_si128(&v30[1]);
    v29 = _mm_load_si128(&v37);
    v12 = _mm_load_si128(&v31);
    v13 = _mm_load_si128(v38);
    v14 = _mm_load_si128(&v32);
    v15 = _mm_load_si128(&v33);
    v44[1] = v9;
    v30[0] = v13;
    v16 = _mm_load_si128(&v34);
    v17 = _mm_load_si128(&v38[1]);
    v18 = _mm_load_si128(&v35);
    v44[2] = si128;
    v19 = _mm_load_si128(&v36);
    v30[1] = v17;
    v20 = _mm_load_si128(&v39);
    v44[3] = v11;
    v31 = v20;
    v21 = _mm_load_si128(&v40);
    v44[4] = v12;
    v32 = v21;
    v22 = _mm_load_si128(&v41);
    v44[5] = v14;
    v33 = v22;
    v23 = _mm_load_si128(&v42);
    v44[6] = v15;
    v44[7] = v16;
    v44[8] = v18;
    v44[9] = v19;
    v34 = v23;
    v24 = _mm_load_si128(&v43);
    v37 = v9;
    v35 = v24;
    v25 = _mm_load_si128(v44);
    v38[0] = si128;
    v36 = v25;
    v38[1] = v11;
    v39 = v12;
    v40 = v14;
    v41 = v15;
    v42 = v16;
    v43 = v18;
    v44[0] = v19;
  }
  clear_tinfo_t();
  if ( v38[1].m128i_i64[1] )
  {
    v39.m128i_i64[0] = 0;
    qfree();
  }
  if ( v38[0].m128i_i64[0] )
  {
    v38[0].m128i_i64[1] = 0;
    qfree();
  }
  if ( tinfo_udt_member >= 0 && (v29.m128i_i8[8] & 7) == 0 && (v29.m128i_i8[0] & 7) == 0 )
  {
    v27 = (unsigned __int64)v29.m128i_i64[1] >> 3;
    *a2 = (unsigned __int64)v29.m128i_i64[0] >> 3;
    *a3 = v27;
  }
  clear_tinfo_t();
  if ( v30[1].m128i_i64[1] )
  {
    v31.m128i_i64[0] = 0;
    qfree();
  }
  if ( v30[0].m128i_i64[0] )
  {
    v30[0].m128i_i64[1] = 0;
    qfree();
  }
  return v45 - __readfsqword(0x28u);
}
