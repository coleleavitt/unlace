void __fastcall TApplication::TApplication(TApplication *this)
{
  __m128i v1; // [rsp+0h] [rbp-18h] BYREF

  v1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_23F020, (__m128i)(unsigned __int64)off_23F098);
  TProgInit::TProgInit((char *)this + 136, 0, 0, 0);
  TProgram::TProgram(this);
  *(__m128i *)this = _mm_load_si128(&v1);
  TProgram::application = this;
}

