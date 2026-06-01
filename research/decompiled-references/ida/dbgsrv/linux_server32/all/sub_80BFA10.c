/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BFA10
// Address: 0x080BFA10

//----- (080BFA10) --------------------------------------------------------
void __cdecl __noreturn sub_80BFA10(int a1)
{
  int v1; // ecx
  int v2; // eax
  _DWORD *v3; // ebx
  pthread_mutex_t *mutex; // [esp+0h] [ebp-24h]
  _DWORD *ptr; // [esp+4h] [ebp-20h]
  int v6; // [esp+8h] [ebp-1Ch]
  _DWORD *v7; // [esp+8h] [ebp-1Ch]

  mutex = (pthread_mutex_t *)dword_811E7D0;
  sub_80D15A0((pthread_mutex_t *)dword_811E7D0);
  v1 = dword_811E7D8;
  v2 = dword_811E7D4;
  dword_811E7D8 = 0;
  dword_811E7D4 = 0;
  v6 = v1;
  ptr = (_DWORD *)v2;
  dword_811E7DC = 0;
  sub_80D1600(mutex);
  v3 = &ptr[v6];
  if ( ptr != v3 )
  {
    v7 = ptr;
    do
    {
      (**(void (__cdecl ***)(_DWORD, int))*v7)(*v7, a1);
      ++v7;
    }
    while ( v3 != v7 );
  }
  if ( ptr )
    sub_80CF780(ptr);
  _exit((a1 == 15) - 1);
}
// 811E7D0: using guessed type int dword_811E7D0;
// 811E7D4: using guessed type int dword_811E7D4;
// 811E7D8: using guessed type int dword_811E7D8;
// 811E7DC: using guessed type int dword_811E7DC;
