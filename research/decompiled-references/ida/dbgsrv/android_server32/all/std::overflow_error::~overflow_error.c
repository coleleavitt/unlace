/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::overflow_error::~overflow_error
// Address: 0x00091EE4

//----- (00091EE4) --------------------------------------------------------
// Alternative name is '_ZNSt11range_errorD1Ev'
// Alternative name is '_ZNSt11range_errorD2Ev'
// Alternative name is '_ZNSt13runtime_errorD1Ev'
// Alternative name is '_ZNSt13runtime_errorD2Ev'
// Alternative name is '_ZNSt14overflow_errorD2Ev'
// Alternative name is '_ZNSt15underflow_errorD1Ev'
// Alternative name is '_ZNSt15underflow_errorD2Ev'
void __fastcall std::overflow_error::~overflow_error(std::overflow_error *this)
{
  *(_DWORD *)this = &off_DBA84;
  sub_91EA0((int *)this + 1);
  std::exception::~exception(this);
}
// DBA84: using guessed type _UNKNOWN *off_DBA84;
