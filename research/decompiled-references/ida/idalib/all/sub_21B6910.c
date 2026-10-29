__int64 __fastcall sub_21B6910(__int64 a1, __int8 *a2, signed __int64 a3)
{
  unsigned int v4; // r13d
  __m128i *v5; // rax
  __m128i *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __m128i *v10; // [rsp+10h] [rbp-48h]
  __m128i v11[3]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 184);
  v10 = v11;
  if ( &a2[a3] && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v5 = (__m128i *)operator new(a3 + 1);
    v11[0].m128i_i64[0] = a3;
    v10 = v5;
LABEL_15:
    memcpy(v5, a2, a3);
    v5 = v10;
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    v11[0].m128i_i8[0] = *a2;
    v5 = v11;
    goto LABEL_6;
  }
  v5 = v11;
  if ( a3 )
    goto LABEL_15;
LABEL_6:
  v5->m128i_i8[a3] = 0;
  v6 = (__m128i *)operator new(0x30u);
  v6[1].m128i_i64[0] = (__int64)v6[2].m128i_i64;
  if ( v10 == v11 )
  {
    v6[2] = _mm_load_si128(v11);
  }
  else
  {
    v6[1].m128i_i64[0] = (__int64)v10;
    v6[2].m128i_i64[0] = v11[0].m128i_i64[0];
  }
  v6[1].m128i_i64[1] = a3;
  v11[0].m128i_i8[0] = 0;
  std::__detail::_List_node_base::_M_hook(
    (std::__detail::_List_node_base *)v6,
    (std::__detail::_List_node_base *)(a1 + 320));
  ++*(_QWORD *)(a1 + 336);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 16LL);
  v8 = *(unsigned int *)(a1 + 184);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v8 + 1, 8);
    v8 = *(unsigned int *)(a1 + 184);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v8) = v7;
  ++*(_DWORD *)(a1 + 184);
  return v4;
}
