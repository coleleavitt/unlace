/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::length_error::~length_error
// Address: 0x00091E78

//----- (00091E78) --------------------------------------------------------
// Alternative name is '_ZNSt11logic_errorD1Ev'
// Alternative name is '_ZNSt11logic_errorD2Ev'
// Alternative name is '_ZNSt12domain_errorD1Ev'
// Alternative name is '_ZNSt12domain_errorD2Ev'
// Alternative name is '_ZNSt12length_errorD2Ev'
// Alternative name is '_ZNSt12out_of_rangeD1Ev'
// Alternative name is '_ZNSt12out_of_rangeD2Ev'
// Alternative name is '_ZNSt16invalid_argumentD1Ev'
// Alternative name is '_ZNSt16invalid_argumentD2Ev'
void __fastcall std::length_error::~length_error(std::length_error *this)
{
  *(_DWORD *)this = &off_DBA70;
  sub_91EA0((int *)this + 1);
  std::exception::~exception(this);
}
// DBA70: using guessed type _UNKNOWN *off_DBA70;
