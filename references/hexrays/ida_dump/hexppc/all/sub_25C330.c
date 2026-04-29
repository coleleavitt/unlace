__int64 __fastcall sub_25C330(__int64 a1, _QWORD *a2, const char *a3, __int64 a4, __int64 a5)
{
  size_t v8; // rax
  int tinfo_udt_member; // ebx
  __m128i v10; // xmm8
  __m128i si128; // xmm7
  __m128i v12; // xmm6
  __m128i v13; // xmm5
  __m128i v14; // xmm9
  __m128i v15; // xmm4
  __m128i v16; // xmm3
  __m128i v17; // xmm2
  __m128i v18; // xmm9
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm9
  __m128i v22; // xmm9
  __m128i v23; // xmm9
  __m128i v24; // xmm9
  __m128i v25; // xmm9
  __m128i v26; // xmm9
  unsigned int data_value; // ebx
  __int64 v29; // [rsp+0h] [rbp-208h]
  size_t n; // [rsp+8h] [rbp-200h]
  __m128i v31; // [rsp+10h] [rbp-1F8h] BYREF
  __m128i v32[2]; // [rsp+20h] [rbp-1E8h] BYREF
  __m128i v33; // [rsp+40h] [rbp-1C8h] BYREF
  __m128i v34; // [rsp+50h] [rbp-1B8h] BYREF
  __m128i v35; // [rsp+60h] [rbp-1A8h] BYREF
  __m128i v36; // [rsp+70h] [rbp-198h] BYREF
  __m128i v37; // [rsp+80h] [rbp-188h] BYREF
  __m128i v38; // [rsp+90h] [rbp-178h] BYREF
  __m128i v39; // [rsp+A0h] [rbp-168h] BYREF
  __m128i v40[2]; // [rsp+B0h] [rbp-158h] BYREF
  __m128i v41; // [rsp+D0h] [rbp-138h] BYREF
  __m128i v42; // [rsp+E0h] [rbp-128h] BYREF
  __m128i v43; // [rsp+F0h] [rbp-118h] BYREF
  __m128i v44; // [rsp+100h] [rbp-108h] BYREF
  __m128i v45; // [rsp+110h] [rbp-F8h] BYREF
  __m128i v46[10]; // [rsp+120h] [rbp-E8h] BYREF
  unsigned __int64 v47; // [rsp+1C8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v38.m128i_i8[8] = 0;
  memset(v32, 0, sizeof(v32));
  v37.m128i_i64[0] = 1;
  v37.m128i_i32[2] = -1;
  v38.m128i_i64[0] = 0;
  memset(v40, 0, sizeof(v40));
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v45.m128i_i64[0] = 1;
  v45.m128i_i32[2] = -1;
  v46[0].m128i_i64[0] = 0;
  v46[0].m128i_i8[8] = 0;
  v8 = strlen(a3);
  if ( v8 )
  {
    n = v8;
    v29 = v8 + 1;
    v40[0].m128i_i64[0] = qvector_reserve(v40, 0, v8 + 1, 1);
    v40[0].m128i_i64[1] = v29;
    memmove((void *)v40[0].m128i_i64[0], a3, n);
    *(_BYTE *)(v40[0].m128i_i64[0] + n) = 0;
  }
  tinfo_udt_member = find_tinfo_udt_member(&v39, *a2, 3);
  if ( tinfo_udt_member >= 0 )
  {
    v10 = _mm_load_si128(&v31);
    si128 = _mm_load_si128(v32);
    v12 = _mm_load_si128(&v32[1]);
    v31 = _mm_load_si128(&v39);
    v13 = _mm_load_si128(&v33);
    v14 = _mm_load_si128(v40);
    v15 = _mm_load_si128(&v34);
    v16 = _mm_load_si128(&v35);
    v46[1] = v10;
    v32[0] = v14;
    v17 = _mm_load_si128(&v36);
    v18 = _mm_load_si128(&v40[1]);
    v19 = _mm_load_si128(&v37);
    v46[2] = si128;
    v20 = _mm_load_si128(&v38);
    v32[1] = v18;
    v21 = _mm_load_si128(&v41);
    v46[3] = v12;
    v33 = v21;
    v22 = _mm_load_si128(&v42);
    v46[4] = v13;
    v34 = v22;
    v23 = _mm_load_si128(&v43);
    v46[5] = v15;
    v35 = v23;
    v24 = _mm_load_si128(&v44);
    v46[6] = v16;
    v46[7] = v17;
    v46[8] = v19;
    v46[9] = v20;
    v36 = v24;
    v25 = _mm_load_si128(&v45);
    v39 = v10;
    v37 = v25;
    v26 = _mm_load_si128(v46);
    v40[0] = si128;
    v38 = v26;
    v40[1] = v12;
    v41 = v13;
    v42 = v15;
    v43 = v16;
    v44 = v17;
    v45 = v19;
    v46[0] = v20;
  }
  clear_tinfo_t(&v42);
  if ( v40[1].m128i_i64[1] )
  {
    v41.m128i_i64[0] = 0;
    qfree(v40[1].m128i_i64[1]);
  }
  if ( v40[0].m128i_i64[0] )
  {
    v40[0].m128i_i64[1] = 0;
    qfree(v40[0].m128i_i64[0]);
  }
  if ( tinfo_udt_member == -1
    || (v31.m128i_i8[8] & 7) != 0
    || (v31.m128i_i8[0] & 7) != 0
    || (data_value = get_data_value(
                       a1,
                       a4 + ((unsigned __int64)v31.m128i_i64[0] >> 3),
                       (unsigned __int64)v31.m128i_i64[1] >> 3),
        !(_BYTE)data_value) )
  {
    data_value = 0;
  }
  else if ( a5 )
  {
    copy_tinfo_t(a5, &v34);
  }
  clear_tinfo_t(&v34);
  if ( v32[1].m128i_i64[1] )
  {
    v33.m128i_i64[0] = 0;
    qfree(v32[1].m128i_i64[1]);
  }
  if ( v32[0].m128i_i64[0] )
  {
    v32[0].m128i_i64[1] = 0;
    qfree(v32[0].m128i_i64[0]);
  }
  return data_value;
}
