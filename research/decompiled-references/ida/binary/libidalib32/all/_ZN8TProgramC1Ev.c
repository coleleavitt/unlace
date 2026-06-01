void __fastcall TProgram::TProgram(TProgram *this)
{
  __m128i v1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v2; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  v1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_23EE48, (__m128i)(unsigned __int64)off_23EEC0);
  TProgInit::TProgInit((char *)this + 136, 0, 0, 0);
  TSystemInit::TSystemInit(this);
  v2 = 0;
  TGroup::TGroup((char *)this + 8, &v2);
  *(__m128i *)this = _mm_load_si128(&v1);
}

