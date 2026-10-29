/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::~runtime_error
// Address: 0x0008AC0C

//----- (0008AC0C) --------------------------------------------------------
void __fastcall std::runtime_error::~runtime_error(std::runtime_error *this)
{
  int v2; // r5
  void *v3; // r0
  unsigned int *v4; // r5
  int v5; // r3

  v2 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &off_D1E98;
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v4 = (unsigned int *)(v2 - 4);
      __dmb(0xBu);
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
      __dmb(0xBu);
    }
    else
    {
      v5 = *(_DWORD *)(v2 - 4);
      *(_DWORD *)(v2 - 4) = v5 - 1;
    }
    if ( v5 <= 0 )
      sub_82148(v3);
  }
  nullsub_1(this);
}
// 7FC84: using guessed type int __fastcall nullsub_1(_DWORD);
// D1E98: using guessed type _UNKNOWN *;
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
