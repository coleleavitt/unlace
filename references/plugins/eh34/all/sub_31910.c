__int64 sub_31910()
{
  __int64 v0; // rax
  __m128i v1; // xmm0
  __int64 v2; // rbx
  __int64 v3; // rax

  v0 = operator new(0x18u);
  v1 = _mm_loadl_epi64((const __m128i *)off_8C210);
  v2 = v0;
  *(_BYTE *)(v0 + 16) = 1;
  *(_WORD *)(v0 + 17) = 17990;
  *(__m128i *)v0 = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)&off_8C828);
  v3 = sub_31370();
  *(_BYTE *)(v2 + 18) = netnode_altval(v3, 0, 65);
  *(_QWORD *)(v2 + 8) = off_8BFF8;
  return v2;
}
