unsigned __int64 __fastcall sub_2D5330(const char *a1, const char **a2, unsigned int a3, int *a4)
{
  const char *v7; // rdi
  unsigned int tinfo_property; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v13; // ebx
  const char *v14; // rsi
  int tinfo_udt_member; // r15d
  __m128i v16; // xmm8
  __m128i si128; // xmm7
  __m128i v18; // xmm6
  __m128i v19; // xmm5
  __m128i v20; // xmm9
  __m128i v21; // xmm4
  __m128i v22; // xmm3
  __m128i v23; // xmm2
  __m128i v24; // xmm9
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __m128i v27; // xmm9
  __m128i v28; // xmm9
  __m128i v29; // xmm9
  __m128i v30; // xmm9
  __m128i v31; // xmm9
  __m128i v32; // xmm9
  unsigned int place_class_id; // eax
  __int64 place_class; // rax
  __int64 v35; // rax
  __int64 v36; // r15
  unsigned __int64 v37; // rax
  int tinfo_tid; // edx
  __int32 v39; // eax
  char v40; // al
  const char *v41; // rdi
  __int64 tinfo_property4; // rax
  __int64 local_types_tlc; // [rsp+8h] [rbp-210h]
  __int64 v44; // [rsp+18h] [rbp-200h] BYREF
  __m128i v45; // [rsp+20h] [rbp-1F8h] BYREF
  __m128i v46[2]; // [rsp+30h] [rbp-1E8h] BYREF
  __m128i v47; // [rsp+50h] [rbp-1C8h] BYREF
  __m128i v48; // [rsp+60h] [rbp-1B8h] BYREF
  __m128i v49; // [rsp+70h] [rbp-1A8h] BYREF
  __m128i v50; // [rsp+80h] [rbp-198h] BYREF
  __m128i v51; // [rsp+90h] [rbp-188h] BYREF
  __m128i v52; // [rsp+A0h] [rbp-178h] BYREF
  __m128i v53; // [rsp+B0h] [rbp-168h] BYREF
  __m128i v54[2]; // [rsp+C0h] [rbp-158h] BYREF
  __m128i v55; // [rsp+E0h] [rbp-138h] BYREF
  __m128i v56; // [rsp+F0h] [rbp-128h] BYREF
  __m128i v57; // [rsp+100h] [rbp-118h] BYREF
  __m128i v58; // [rsp+110h] [rbp-108h] BYREF
  __m128i v59; // [rsp+120h] [rbp-F8h] BYREF
  __m128i v60[10]; // [rsp+130h] [rbp-E8h] BYREF
  unsigned __int64 v61; // [rsp+1D8h] [rbp-40h]

  v7 = *a2;
  v61 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v7, 7);
  if ( !tinfo_property )
    return v61 - __readfsqword(0x28u);
  v13 = tinfo_property;
  if ( (unsigned int)get_ordinal_limit(0, 7, v10, v11) <= tinfo_property )
    return v61 - __readfsqword(0x28u);
  v44 = -2;
  local_types_tlc = get_local_types_tlc(0, 7);
  if ( a3 != -1 )
  {
    v14 = *a2;
    memset(v46, 0, sizeof(v46));
    v51.m128i_i64[0] = 1;
    v59.m128i_i64[0] = 1;
    v51.m128i_i32[2] = -1;
    v52.m128i_i64[0] = 0;
    v52.m128i_i8[8] = 0;
    memset(v54, 0, sizeof(v54));
    v59.m128i_i32[2] = -1;
    v60[0].m128i_i64[0] = 0;
    v60[0].m128i_i8[8] = 0;
    v53 = (__m128i)(unsigned __int64)(int)a3;
    v45 = 0;
    v47 = 0;
    v48 = 0;
    v55 = 0;
    v56 = 0;
    tinfo_udt_member = find_tinfo_udt_member(&v53, v14, 1);
    if ( tinfo_udt_member >= 0 )
    {
      v16 = _mm_load_si128(&v45);
      si128 = _mm_load_si128(v46);
      v18 = _mm_load_si128(&v46[1]);
      v45 = _mm_load_si128(&v53);
      v19 = _mm_load_si128(&v47);
      v20 = _mm_load_si128(v54);
      v21 = _mm_load_si128(&v48);
      v22 = _mm_load_si128(&v49);
      v60[1] = v16;
      v23 = _mm_load_si128(&v50);
      v46[0] = v20;
      v24 = _mm_load_si128(&v54[1]);
      v25 = _mm_load_si128(&v51);
      v60[2] = si128;
      v26 = _mm_load_si128(&v52);
      v46[1] = v24;
      v27 = _mm_load_si128(&v55);
      v60[3] = v18;
      v47 = v27;
      v28 = _mm_load_si128(&v56);
      v60[4] = v19;
      v48 = v28;
      v29 = _mm_load_si128(&v57);
      v60[5] = v21;
      v49 = v29;
      v30 = _mm_load_si128(&v58);
      v60[6] = v22;
      v60[7] = v23;
      v60[8] = v25;
      v60[9] = v26;
      v50 = v30;
      v31 = _mm_load_si128(&v59);
      v53 = v16;
      v51 = v31;
      v32 = _mm_load_si128(v60);
      v54[0] = si128;
      v52 = v32;
      v54[1] = v18;
      v55 = v19;
      v56 = v21;
      v57 = v22;
      v58 = v23;
      v59 = v25;
      v60[0] = v26;
    }
    clear_tinfo_t(&v56);
    if ( v54[1].m128i_i64[1] )
    {
      v55.m128i_i64[0] = 0;
      qfree(v54[1].m128i_i64[1], v14);
    }
    if ( v54[0].m128i_i64[0] )
    {
      v54[0].m128i_i64[1] = 0;
      qfree(v54[0].m128i_i64[0], v14);
    }
    if ( tinfo_udt_member != -1 )
    {
      v14 = (const char *)&v44;
      (*(void (__fastcall **)(__int64, __int64 *, const char **, _QWORD, __int64))(*(_QWORD *)local_types_tlc + 104LL))(
        local_types_tlc,
        &v44,
        a2,
        a3,
        v45.m128i_i64[0]);
    }
    clear_tinfo_t(&v48);
    if ( v46[1].m128i_i64[1] )
    {
      v47.m128i_i64[0] = 0;
      qfree(v46[1].m128i_i64[1], v14);
    }
    if ( v46[0].m128i_i64[0] )
    {
      v46[0].m128i_i64[1] = 0;
      qfree(v46[0].m128i_i64[0], v14);
    }
  }
  place_class_id = get_place_class_id("tiplace_t");
  place_class = get_place_class(0, 0, place_class_id);
  v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
  *(_DWORD *)(v35 + 12) = v13;
  v36 = v35;
  v37 = v44;
  *(_QWORD *)(v36 + 16) = v44;
  if ( v37 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_18;
  v40 = get_tinfo_property(*a2, 2);
  v41 = *a2;
  if ( (v40 & 0x2F) == 0xD )
  {
    tinfo_property4 = get_tinfo_property4(v41, 297, (int)a3, 0, 0, 0);
  }
  else
  {
    if ( (get_tinfo_property(v41, 2) & 0x3F) != 0x2D )
    {
LABEL_18:
      tinfo_tid = get_tinfo_tid(a2, 0);
      goto LABEL_19;
    }
    tinfo_property4 = get_tinfo_property4(*a2, 299, (int)a3, 0, 0, 0);
  }
  tinfo_tid = tinfo_property4;
  if ( tinfo_property4 == -1 )
    goto LABEL_18;
LABEL_19:
  v39 = *(_DWORD *)(v36 + 12);
  v54[0].m128i_i8[0] = 1;
  v54[1].m128i_i32[2] = v39;
  v53.m128i_i64[1] = local_types_tlc;
  v53.m128i_i64[0] = (__int64)linelist_tiplace_t___vtable;
  v54[0].m128i_i64[1] = v36;
  v54[1].m128i_i64[0] = 0xFFFFFFFFLL;
  v55.m128i_i64[0] = v44;
  sub_2D42D0(&v53, (__int64)a1, tinfo_tid, a4, 0);
  if ( v36 )
    qfree(v36, a1);
  return v61 - __readfsqword(0x28u);
}
