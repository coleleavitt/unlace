/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807C560
// Address: 0x0807C560

//----- (0807C560) --------------------------------------------------------
int __cdecl sub_807C560(unsigned int a1, void **a2, int a3, char a4)
{
  int v4; // edi
  int v6; // [esp+0h] [ebp-20h]
  pthread_mutex_t *mutex; // [esp+4h] [ebp-1Ch]

  mutex = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v6 = sub_807F510();
  sub_809B370(*(_DWORD *)(v6 + 16), a1, *(_DWORD *)(v6 + 12));
  v4 = sub_807C120(v6, a3, a2, a4 ^ 1);
  sub_80D1600(mutex);
  return v4;
}
// 811E6F8: using guessed type int dword_811E6F8;
