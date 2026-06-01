/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D1500
// Address: 0x080D1500

//----- (080D1500) --------------------------------------------------------
pthread_t __cdecl sub_80D1500(void *(*start_routine)(void *), void *arg)
{
  int v2; // edi
  pthread_t result; // eax
  pthread_t newthread; // [esp+0h] [ebp-48h] BYREF
  pthread_attr_t attr; // [esp+4h] [ebp-44h] BYREF
  unsigned int v6; // [esp+28h] [ebp-20h]

  v6 = __readgsdword(0x14u);
  if ( !dword_811F8C4 )
  {
    dword_811F8C4 = sub_80D0B70();
    dword_811F8C8 = (int)sub_80D1320();
  }
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 0);
  v2 = pthread_create(&newthread, &attr, start_routine, arg);
  pthread_attr_destroy(&attr);
  result = 0;
  if ( !v2 )
    result = newthread;
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811F8C4: using guessed type int dword_811F8C4;
// 811F8C8: using guessed type int dword_811F8C8;
