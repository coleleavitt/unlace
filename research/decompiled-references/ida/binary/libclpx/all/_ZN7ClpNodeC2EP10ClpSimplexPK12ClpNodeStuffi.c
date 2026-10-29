// Alternative name is '_ZN7ClpNodeC1EP10ClpSimplexPK12ClpNodeStuffi'
void __fastcall ClpNode::ClpNode(ClpNode *this, ClpSimplex *a2, const ClpNodeStuff *a3, int a4)
{
  __m128i v4; // xmm0

  v4 = _mm_loadl_epi64((const __m128i *)&qword_28CFF0);
  *((_BYTE *)this + 112) &= 0xF8u;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 37) = 0;
  *(__m128i *)((char *)this + 8) = v4;
  *(_QWORD *)this = off_4D09E0;
  *(_OWORD *)((char *)this + 24) = 0;
  *(_OWORD *)((char *)this + 40) = 0;
  *(_OWORD *)((char *)this + 56) = 0;
  *(_OWORD *)((char *)this + 72) = 0;
  *(_OWORD *)((char *)this + 88) = 0;
  *(__m128i *)((char *)this + 116) = _mm_load_si128((const __m128i *)&xmmword_28D000);
  *(_OWORD *)((char *)this + 132) = 0;
  ClpNode::gutsOfConstructor(this, a2, a3, 0, a4);
}

