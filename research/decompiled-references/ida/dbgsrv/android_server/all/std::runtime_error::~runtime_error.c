/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::~runtime_error
// Address: 0x00000000000D96D4

//----- (00000000000D96D4) ----------------------------------------------------
void __fastcall std::runtime_error::~runtime_error(std::runtime_error *this)
{
  __int64 v1; // x8
  unsigned int *v3; // x9
  unsigned int v4; // w10
  signed int v5; // w10

  v1 = *((_QWORD *)this + 1);
  *(_QWORD *)this = off_161460;
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
  operator delete(this);
}
// 161460: using guessed type void (__fastcall *off_161460[2])(std::overflow_error *__hidden this);
