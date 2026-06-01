/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D15D0
// Address: 0x080D15D0

//----- (080D15D0) --------------------------------------------------------
bool __cdecl sub_80D15D0(_DWORD *a1)
{
  pthread_mutex_t *v1; // eax

  v1 = (pthread_mutex_t *)dword_811F8C8;
  *a1 = dword_811F8C8;
  return sub_80D15A0(v1);
}
// 811F8C8: using guessed type int dword_811F8C8;
