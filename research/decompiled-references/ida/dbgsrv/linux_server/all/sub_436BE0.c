/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436BE0
// Address: 0x0000000000436BE0

//----- (0000000000436BE0) ----------------------------------------------------
__int64 sub_436BE0()
{
  __int64 v0; // rbx
  pthread_mutex_t *v1; // rbp

  v0 = 0;
  v1 = (pthread_mutex_t *)qword_4C80E0;
  sub_482EC0((pthread_mutex_t *)qword_4C80E0);
  if ( qword_4C80D8 < (unsigned __int64)xmmword_4C80C8 )
  {
    v0 = *(_QWORD *)(qword_4C80C0 + 8 * qword_4C80D8);
    if ( v0 )
      ++*(_DWORD *)(v0 + 12);
  }
  sub_482F10(v1);
  return v0;
}
// 4C80C0: using guessed type __int64 qword_4C80C0;
// 4C80C8: using guessed type __int128 xmmword_4C80C8;
// 4C80D8: using guessed type __int64 qword_4C80D8;
// 4C80E0: using guessed type __int64 qword_4C80E0;
