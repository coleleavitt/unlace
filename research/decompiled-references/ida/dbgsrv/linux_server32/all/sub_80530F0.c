/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80530F0
// Address: 0x080530F0

//----- (080530F0) --------------------------------------------------------
pthread_mutex_t *sub_80530F0()
{
  pthread_mutex_t *result; // eax

  result = (pthread_mutex_t *)dword_811F8C4;
  if ( !dword_811F8C4 )
  {
    dword_811F8C4 = sub_80D0B70();
    result = sub_80D1320();
    dword_811F8C8 = (int)result;
  }
  return result;
}
// 811F8C4: using guessed type int dword_811F8C4;
// 811F8C8: using guessed type int dword_811F8C8;
