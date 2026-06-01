__int64 __fastcall sub_6BE720(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, _QWORD *a5)
{
  char **v6; // r13
  _QWORD *v8; // r12
  unsigned int v9; // eax
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 tinfo_size; // rax
  unsigned __int8 reftype_by_size; // al
  int v15; // r13d
  int v16; // edx
  __int64 result; // rax
  __int64 v18; // rax
  __m128i v19; // xmm0
  int v20; // eax
  __int64 tinfo_property; // [rsp+8h] [rbp-2C0h] BYREF
  char *v22; // [rsp+10h] [rbp-2B8h] BYREF
  int v23; // [rsp+18h] [rbp-2B0h]
  __m128i v24; // [rsp+20h] [rbp-2A8h] BYREF
  __m128i v25; // [rsp+30h] [rbp-298h] BYREF
  __m128i v26; // [rsp+40h] [rbp-288h] BYREF
  __int64 v27; // [rsp+50h] [rbp-278h]
  _QWORD v28[34]; // [rsp+60h] [rbp-268h] BYREF
  __int128 v29; // [rsp+170h] [rbp-158h] BYREF
  __int64 v30; // [rsp+180h] [rbp-148h]
  int v31; // [rsp+188h] [rbp-140h]
  unsigned __int64 v32; // [rsp+288h] [rbp-40h]

  v6 = nullptr;
  v32 = __readfsqword(0x28u);
  v8 = a5;
  v23 = -1;
  v22 = (char *)&dword_0 + 1;
  if ( a4 != -1 )
  {
    if ( !a5 )
      v8 = sub_3C9470(a1, v28, a4, 0, a3);
    v6 = &v22;
    if ( get_array_parameters(&v22, a4) <= 0 )
      v6 = nullptr;
  }
  v26.m128i_i64[1] = (__int64)&dword_0 + 1;
  v24.m128i_i64[0] = 0;
  LODWORD(v27) = -1;
  v9 = (unsigned int)sub_3C5DC0((__int64)a1, a4);
  value_repr_t__from_opinfo((__int64)&v24, a3, v9, (__int64)v8, (__int64)v6);
  tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 64), 289);
  if ( (v24.m128i_i8[0] & 0xF) == 9 && (get_tinfo_property(tinfo_property, 2) & 0xF) == 0xA )
  {
    tinfo_size = get_tinfo_size(0, tinfo_property, 0);
    reftype_by_size = get_reftype_by_size(tinfo_size);
    v30 = 0;
    v31 = reftype_by_size;
    v29 = -1;
    v15 = sub_3C30D0((__int64)&v29, (__int64)&v24.m128i_i64[1]);
    clear_tinfo_t(&tinfo_property);
    if ( !v15 )
      goto LABEL_16;
  }
  else
  {
    clear_tinfo_t(&tinfo_property);
  }
  v10 = get_tinfo_property(*(_QWORD *)(a2 + 64), 2);
  tinfo_property = 0;
  if ( (v10 & 0xF) == 0xB )
    tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 64), 11);
  else
    copy_tinfo_t(&tinfo_property);
  if ( (v24.m128i_i8[0] & 0xF) != 8
    || (get_tinfo_property(tinfo_property, 2) & 0x3F) != 0x2D
    || (v20 = get_tinfo_property(tinfo_property, 8), v25.m128i_i32[0] != v20) )
  {
    clear_tinfo_t(&tinfo_property);
    v11 = v24.m128i_i64[0];
    v12 = 2304;
    if ( !_bittest64(&v12, v24.m128i_i8[0] & 0xF) || v25.m128i_i32[0] )
      goto LABEL_18;
    goto LABEL_17;
  }
  clear_tinfo_t(&tinfo_property);
LABEL_16:
  v11 = v24.m128i_i64[0];
LABEL_17:
  v24.m128i_i64[0] = v11 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_18:
  v16 = sub_580C90((__int64 *)(a2 + 72), (__int64)&v24);
  result = 0;
  if ( v16 )
  {
    v18 = v27;
    *(__m128i *)(a2 + 72) = _mm_load_si128(&v24);
    v19 = _mm_load_si128(&v25);
    *(_QWORD *)(a2 + 120) = v18;
    result = 1;
    *(__m128i *)(a2 + 88) = v19;
    *(__m128i *)(a2 + 104) = _mm_load_si128(&v26);
  }
  return result;
}
