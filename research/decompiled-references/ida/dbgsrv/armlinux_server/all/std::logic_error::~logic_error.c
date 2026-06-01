/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::~logic_error
// Address: 0x00000000004AEFC0

//----- (00000000004AEFC0) ----------------------------------------------------
void __fastcall std::logic_error::~logic_error(std::logic_error *this)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  v2 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &off_51E8F8;
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v4 = (unsigned int *)(v2 - 8);
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      j_j__free_0_0(v3);
  }
  nullsub_4(this);
}
// 49F2D8: using guessed type __int64 __fastcall nullsub_4(_QWORD);
// 51E8F8: using guessed type void (__fastcall *)(std::logic_error *__hidden this);
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
