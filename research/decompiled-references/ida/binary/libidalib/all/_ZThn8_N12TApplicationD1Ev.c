void __fastcall `non-virtual thunk to'TApplication::~TApplication(TApplication *this)
{
  TProgram *v1; // rdi

  v1 = (TApplication *)((char *)this - 8);
  *(__m128i *)v1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_240020, (__m128i)(unsigned __int64)off_240098);
  TProgram::~TProgram(v1);
}

