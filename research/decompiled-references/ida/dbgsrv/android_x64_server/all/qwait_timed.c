/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_timed
// Address: 0x00000000000C7DC0

//----- (00000000000C7DC0) ----------------------------------------------------
__int64 __fastcall qwait_timed(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  pthread_mutex_t *v6; // rax

  v6 = (pthread_mutex_t *)sub_C6650();
  return sub_C5E00(v6, a1, a2, a3, a4);
}
