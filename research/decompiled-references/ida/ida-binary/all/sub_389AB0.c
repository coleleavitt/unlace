_QWORD *__fastcall struc_tree_node_info_t__::vfunc_2(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __int64 v6; // rdx

  v2 = operator new(0x40u);
  v3 = *(_QWORD *)(a2 + 24);
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)v2 = struc_tree_node_info_t___vtable;
  *(_QWORD *)(v2 + 24) = v3;
  LOWORD(v3) = *(_WORD *)(a2 + 32);
  *(__m128i *)(v2 + 8) = v4;
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_WORD *)(v2 + 32) = v3;
  v6 = *(_QWORD *)(a2 + 56);
  *(__m128i *)(v2 + 40) = v5;
  *(_QWORD *)(v2 + 56) = v6;
  *a1 = v2;
  return a1;
}
