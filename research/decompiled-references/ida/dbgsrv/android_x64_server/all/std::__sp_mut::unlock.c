/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__sp_mut::unlock
// Address: 0x00000000000CEB90

//----- (00000000000CEB90) ----------------------------------------------------
void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> std::__sp_mut::unlock(pthread_mutex_t **this)
{
  pthread_mutex_unlock(*this);
}
