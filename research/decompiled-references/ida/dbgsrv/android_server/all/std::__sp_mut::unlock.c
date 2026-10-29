/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__sp_mut::unlock
// Address: 0x00000000000D5C0C

//----- (00000000000D5C0C) ----------------------------------------------------
__int64 __fastcall std::__sp_mut::unlock(pthread_mutex_t **this)
{
  return pthread_mutex_unlock(*this);
}
