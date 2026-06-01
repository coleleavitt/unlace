void __fastcall TProgram::~TProgram(TProgram *this)
{
  TGroup *v2; // rdi

  v2 = (TProgram *)((char *)this + 8);
  *(__m128i *)((char *)v2 - 8) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)off_23EE48,
                                   (__m128i)(unsigned __int64)off_23EEC0);
  TGroup::~TGroup(v2);
  TSystemInit::~TSystemInit(this);
}

