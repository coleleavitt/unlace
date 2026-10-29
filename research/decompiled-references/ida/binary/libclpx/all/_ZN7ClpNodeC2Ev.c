// Alternative name is '_ZN7ClpNodeC1Ev'
void __fastcall ClpNode::ClpNode(ClpNode *this)
{
  __m128i v1; // xmm0

  v1 = _mm_loadl_epi64((const __m128i *)&qword_28CFF0);
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 37) = 0;
  *(__m128i *)((char *)this + 8) = v1;
  *(_OWORD *)((char *)this + 24) = 0;
  *(_QWORD *)this = off_4D09E0;
  *(_OWORD *)((char *)this + 40) = 0;
  *((_BYTE *)this + 112) &= 0xF8u;
  *(_OWORD *)((char *)this + 56) = 0;
  *(_OWORD *)((char *)this + 72) = 0;
  *(_OWORD *)((char *)this + 88) = 0;
  *(__m128i *)((char *)this + 116) = _mm_load_si128((const __m128i *)&xmmword_28D000);
  *(_OWORD *)((char *)this + 132) = 0;
}

