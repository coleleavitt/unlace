__int64 sub_418750()
{
  __m128i *v0; // rax
  __m128i *v1; // rbx
  __m128i *v2; // rbp
  __m128i **v3; // rax
  __m128i ***v4; // rdx

  v0 = (__m128i *)qalloc_or_throw(24);
  v0[1].m128i_i64[0] = 0;
  v1 = v0;
  *v0 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v0, (__m128i)(unsigned __int64)v0);
  v2 = (__m128i *)operator new(8u);
  v2->m128i_i64[0] = (__int64)hvui_common_t::update_status_bar_vault_info;
  v3 = (__m128i **)qalloc_or_throw(24);
  *v3 = v1;
  v3[2] = v2;
  v4 = (__m128i ***)v1->m128i_i64[1];
  v3[1] = (__m128i *)v4;
  *v4 = v3;
  v1->m128i_i64[1] = (__int64)v3;
  ++v1[1].m128i_i64[0];
  return sub_479810(QT::QCoreApplication::self + 2, v1);
}
