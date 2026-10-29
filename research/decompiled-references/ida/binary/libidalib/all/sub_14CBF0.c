__int64 __fastcall sub_14CBF0(TGroup *this)
{
  __m128i v1; // xmm0
  int v3; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v1 = _mm_loadl_epi64((const __m128i *)&off_234BB8);
  v4 = __readfsqword(0x28u);
  *(_QWORD *)this = &off_23A0F8;
  *((_QWORD *)this + 342) = off_23A470;
  *(__m128i *)((char *)this + 152) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)off_23A340);
  sub_F2740(&v3, (__int64)this + 2736);
  sub_195C20(this);
  sub_F27B0(&v3);
  if ( *((_QWORD *)this + 349) )
  {
    *((_QWORD *)this + 350) = 0;
    qfree();
  }
  sub_F28F0((_QWORD *)this + 342);
  return sub_195D30(this);
}

