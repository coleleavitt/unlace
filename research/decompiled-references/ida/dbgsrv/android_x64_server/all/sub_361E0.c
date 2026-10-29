/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_361E0
// Address: 0x00000000000361E0

//----- (00000000000361E0) ----------------------------------------------------
void __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sub_361E0()
{
  if ( !thread2 )
  {
    thread2 = pthread_self();
    mutex = qmutex_create();
  }
}
