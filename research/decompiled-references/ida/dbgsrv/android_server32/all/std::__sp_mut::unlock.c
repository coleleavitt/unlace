/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__sp_mut::unlock
// Address: 0x0008FAD2

//----- (0008FAD2) --------------------------------------------------------
int __fastcall std::__sp_mut::unlock(pthread_mutex_t **this)
{
  return pthread_mutex_unlock(*this);
}
