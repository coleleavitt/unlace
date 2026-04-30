__int64 __fastcall drawable_graph_t::clear_layout_info(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 (__fastcall *v3)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v4)(__int64); // rax
  int v5; // eax
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm1

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v2 + 152LL);
  if ( v3 == interactive_graph_t__::vfunc_19 )
  {
    v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL);
    if ( v4 == interactive_graph_t__::vfunc_7 )
      v5 = *(_DWORD *)(v2 + 184);
    else
      v5 = v4(v2);
    if ( a2 >= v5 )
      sub_16B930((__int64)"nrect(%d) failed", a2);
    v6 = *(_QWORD *)(v2 + 224) + 16LL * a2;
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(_QWORD))v3)(*(_QWORD *)(a1 + 8));
  }
  v7 = _mm_loadl_epi64((const __m128i *)(v6 + 8));
  v8 = _mm_loadl_epi64((const __m128i *)v6);
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 8) = _mm_sub_epi32(v7, v8).m128i_u64[0];
  return 0;
}
