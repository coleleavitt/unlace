/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D1630
// Address: 0x080D1630

//----- (080D1630) --------------------------------------------------------
bool __cdecl sub_80D1630(char *arg)
{
  pthread_t v1; // eax
  int v3; // [esp-18h] [ebp-34h]
  int v4; // [esp-14h] [ebp-30h]
  int v5; // [esp-10h] [ebp-2Ch]
  pthread_mutex_t *mutex; // [esp+0h] [ebp-1Ch]

  mutex = *((pthread_mutex_t **)arg + 7);
  sub_80D15A0(mutex);
  if ( !arg[164] )
  {
    v1 = sub_80D1500((void *(*)(void *))sub_80D1770, arg);
    *((_DWORD *)arg + 8) = v1;
    if ( !v1 )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(1258, v3, v4, v5);
      JUMPOUT(0x80523BC);
    }
    arg[164] = 1;
    pthread_sigmask(1, (const __sigset_t *)(arg + 36), nullptr);
  }
  return sub_80D1600(mutex);
}
// 80D16B6: control flows out of bounds to 80523BC
// 80D16C4: variable 'v3' is possibly undefined
// 80D16C4: variable 'v4' is possibly undefined
// 80D16C4: variable 'v5' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
