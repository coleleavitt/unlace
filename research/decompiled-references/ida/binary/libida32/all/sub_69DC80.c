__int64 __fastcall sub_69DC80(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 *v6; // r13
  _DWORD *v8; // r12
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
  __int64 tinfo_property; // [rsp+8h] [rbp-1A0h] BYREF
  __int64 v22; // [rsp+10h] [rbp-198h] BYREF
  int v23; // [rsp+18h] [rbp-190h]
  __m128i v24; // [rsp+20h] [rbp-188h] BYREF
  __m128i v25; // [rsp+30h] [rbp-178h] BYREF
  __int64 v26; // [rsp+40h] [rbp-168h]
  _DWORD v27[36]; // [rsp+50h] [rbp-158h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-C8h] BYREF
  int v29; // [rsp+E8h] [rbp-C0h]
  int v30; // [rsp+ECh] [rbp-BCh]
  unsigned __int64 v31; // [rsp+168h] [rbp-40h]

  v6 = nullptr;
  v31 = __readfsqword(0x28u);
  v8 = a5;
  v23 = -1;
  v22 = 1;
  if ( a4 != -1 )
  {
    if ( !a5 )
      v8 = sub_3C4190(a1, v27, a4, 0, a3);
    v6 = &v22;
    if ( get_array_parameters(&v22, a4) <= 0 )
      v6 = nullptr;
  }
  v25.m128i_i64[1] = 1;
  v24.m128i_i64[0] = 0;
  LODWORD(v26) = -1;
  v9 = sub_3C0CC0((__int64)a1, a4);
  value_repr_t__from_opinfo(&v24, a3, v9, v8, v6);
  tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 64), 289);
  if ( (v24.m128i_i8[0] & 0xF) == 9 && (get_tinfo_property(tinfo_property, 2) & 0xF) == 0xA )
  {
    tinfo_size = get_tinfo_size(0, tinfo_property, 0);
    reftype_by_size = get_reftype_by_size(tinfo_size);
    v29 = 0;
    v30 = reftype_by_size;
    v28 = -1;
    v15 = sub_3BDFF0(&v28, &v24.m128i_i32[2]);
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
    || (v20 = get_tinfo_property(tinfo_property, 8), v24.m128i_i32[3] != v20) )
  {
    clear_tinfo_t(&tinfo_property);
    v11 = v24.m128i_i64[0];
    v12 = 2304;
    if ( !_bittest64(&v12, v24.m128i_i8[0] & 0xF) || v24.m128i_i32[3] )
      goto LABEL_18;
    goto LABEL_17;
  }
  clear_tinfo_t(&tinfo_property);
LABEL_16:
  v11 = v24.m128i_i64[0];
LABEL_17:
  v24.m128i_i64[0] = v11 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_18:
  v16 = sub_567390((__int64 *)(a2 + 72), (__int64)&v24);
  result = 0;
  if ( v16 )
  {
    v18 = v26;
    *(__m128i *)(a2 + 72) = _mm_load_si128(&v24);
    v19 = _mm_load_si128(&v25);
    *(_QWORD *)(a2 + 104) = v18;
    result = 1;
    *(__m128i *)(a2 + 88) = v19;
  }
  return result;
}

