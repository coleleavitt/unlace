__int64 __fastcall sub_21B6AE0(__int64 a1, __int8 *a2, __int64 a3, __int8 *a4, signed __int64 a5)
{
  size_t v5; // r9
  unsigned int v8; // r12d
  __m128i *v9; // rax
  __m128i *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  size_t v15; // [rsp+0h] [rbp-68h]
  __m128i *v16; // [rsp+10h] [rbp-58h]
  size_t v17; // [rsp+18h] [rbp-50h]
  __m128i v18[4]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a3;
  v8 = *(_DWORD *)(a1 + 184);
  v16 = v18;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v9 = (__m128i *)operator new(a3 + 1);
    v5 = a3;
    v16 = v9;
    v18[0].m128i_i64[0] = a3;
LABEL_15:
    v15 = v5;
    memcpy(v9, a2, v5);
    v9 = v16;
    v5 = v15;
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    v18[0].m128i_i8[0] = *a2;
    v9 = v18;
    goto LABEL_6;
  }
  v9 = v18;
  if ( a3 )
    goto LABEL_15;
LABEL_6:
  v17 = v5;
  v9->m128i_i8[v5] = 0;
  v10 = (__m128i *)operator new(0x30u);
  v10[1].m128i_i64[0] = (__int64)v10[2].m128i_i64;
  if ( v16 == v18 )
  {
    v10[2] = _mm_load_si128(v18);
  }
  else
  {
    v10[1].m128i_i64[0] = (__int64)v16;
    v10[2].m128i_i64[0] = v18[0].m128i_i64[0];
  }
  v10[1].m128i_i64[1] = v17;
  v18[0].m128i_i8[0] = 0;
  std::__detail::_List_node_base::_M_hook(
    (std::__detail::_List_node_base *)v10,
    (std::__detail::_List_node_base *)(a1 + 320));
  ++*(_QWORD *)(a1 + 336);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 16LL);
  v12 = *(unsigned int *)(a1 + 184);
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v12 + 1, 8);
    v12 = *(unsigned int *)(a1 + 184);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v12) = v11;
  ++*(_DWORD *)(a1 + 184);
  sub_21B6910(a1, a4, a5);
  return v8;
}
