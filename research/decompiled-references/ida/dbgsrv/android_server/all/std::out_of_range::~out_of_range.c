/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::out_of_range::~out_of_range
// Address: 0x00000000000D95C8

//----- (00000000000D95C8) ----------------------------------------------------
// Alternative name is '_ZNSt16invalid_argumentD1Ev'
// Alternative name is '_ZNSt12length_errorD2Ev'
// Alternative name is '_ZNSt16invalid_argumentD2Ev'
// Alternative name is '_ZNSt12length_errorD1Ev'
// Alternative name is '_ZNSt12domain_errorD1Ev'
// Alternative name is '_ZNSt11logic_errorD2Ev'
// Alternative name is '_ZNSt11logic_errorD1Ev'
// Alternative name is '_ZNSt12domain_errorD2Ev'
// Alternative name is '_ZNSt12out_of_rangeD2Ev'
void __fastcall std::out_of_range::~out_of_range(std::out_of_range *this)
{
  __int64 v1; // x8
  unsigned int *v3; // x9
  unsigned int v4; // w10
  signed int v5; // w10

  v1 = *((_QWORD *)this + 1);
  *(_QWORD *)this = off_161438;
  v3 = (unsigned int *)(v1 - 8);
  do
  {
    v4 = __ldaxr(v3);
    v5 = v4 - 1;
  }
  while ( __stlxr(v5, v3) );
  if ( v5 < 0 )
    operator delete((void *)(v1 - 24));
  std::bad_alloc::~bad_alloc(this);
}
// 161438: using guessed type void (__fastcall *off_161438[2])(std::out_of_range *__hidden this);
