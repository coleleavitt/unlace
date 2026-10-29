/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80729C0
// Address: 0x080729C0

//----- (080729C0) --------------------------------------------------------
int sub_80729C0()
{
  FILE **v0; // esi
  pthread_mutex_t *mutex; // [esp+0h] [ebp-20h]
  int v3; // [esp+4h] [ebp-1Ch]

  mutex = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v0 = (FILE **)dword_811E620;
  v3 = dword_811E620 + 4 * dword_811E624;
  if ( dword_811E620 != v3 )
  {
    do
    {
      if ( *v0 )
        sub_80CF060(*v0);
      ++v0;
    }
    while ( (FILE **)v3 != v0 );
  }
  dword_811E624 = 0;
  sub_80D1600(mutex);
  return 0;
}
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
// 811E6F8: using guessed type int dword_811E6F8;
