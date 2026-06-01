void __fastcall TApplication::~TApplication(TApplication *this)
{
  *(__m128i *)this = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_240020, (__m128i)(unsigned __int64)off_240098);
  TProgram::~TProgram(this);
}

