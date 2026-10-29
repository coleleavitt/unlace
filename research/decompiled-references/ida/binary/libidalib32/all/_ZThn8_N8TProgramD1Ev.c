void __fastcall `non-virtual thunk to'TProgram::~TProgram(TProgram *this)
{
  *(__m128i *)((char *)this - 8) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)off_23EE48,
                                     (__m128i)(unsigned __int64)off_23EEC0);
  TGroup::~TGroup(this);
  TSystemInit::~TSystemInit((TProgram *)((char *)this - 8));
}

