/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BFB20
// Address: 0x080BFB20

//----- (080BFB20) --------------------------------------------------------
void sub_80BFB20()
{
  int v0; // edx
  pthread_mutex_t *v1; // edi
  pthread_mutex_t *v2; // ebx
  int v3; // [esp+0h] [ebp-20h]
  pthread_mutex_t *mutexa; // [esp+4h] [ebp-1Ch]
  pthread_mutex_t *mutex; // [esp+4h] [ebp-1Ch]

  mutexa = (pthread_mutex_t *)dword_811E7D0;
  sub_80D15A0((pthread_mutex_t *)dword_811E7D0);
  v0 = dword_811E7D8;
  v1 = (pthread_mutex_t *)dword_811E7D4;
  dword_811E7D8 = 0;
  dword_811E7D4 = 0;
  v3 = v0;
  dword_811E7DC = 0;
  sub_80D1600(mutexa);
  mutex = (pthread_mutex_t *)((char *)v1 + 4 * v3);
  if ( v1 != mutex )
  {
    v2 = v1;
    do
    {
      (**(void (__cdecl ***)(int, int))v2->__lock)(v2->__lock, -1);
      v2 = (pthread_mutex_t *)((char *)v2 + 4);
    }
    while ( mutex != v2 );
  }
  if ( v1 )
    sub_80CF780(v1);
}
// 811E7D0: using guessed type int dword_811E7D0;
// 811E7D4: using guessed type int dword_811E7D4;
// 811E7D8: using guessed type int dword_811E7D8;
// 811E7DC: using guessed type int dword_811E7DC;
