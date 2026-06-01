int sub_22965A0()
{
  int v0; // eax
  int result; // eax
  void (*v2)(int); // rax
  size_t *v3; // r15
  int v4; // ebp
  struct sigaction *v5; // rbx
  int *v6; // r15
  int v7; // ebp
  struct sigaction *v8; // rbx
  struct sigaction *v9; // rbx
  unsigned int v10; // ebx
  pthread_mutex_t *mutex; // [rsp+8h] [rbp-E0h]
  struct sigaction act; // [rsp+10h] [rbp-D8h] BYREF

  if ( !qword_2D0AE00 )
    sub_2230020((__int64 *)&qword_2D0AE00, (__int64 (*)(void))sub_20C09B0, (__int64)sub_20C0990);
  mutex = qword_2D0AE00;
  if ( &_pthread_key_create )
  {
    v0 = pthread_mutex_lock(qword_2D0AE00);
    if ( v0 )
      std::__throw_system_error(v0);
  }
  result = dword_2D0B840;
  if ( !dword_2D0B840 )
  {
    if ( !(sigaltstack(nullptr, &oss) | oss.ss_flags & 1) && (!oss.ss_sp || oss.ss_size <= 0x107FF) )
    {
      memset(&act, 0, 24);
      v2 = (void (*)(int))malloc(0x10800u);
      if ( !v2 )
        sub_2221CE0("Allocation failed", 1u);
      act.sa_handler = v2;
      qword_2D0AE18 = (__int64)v2;
      act.sa_mask.__val[1] = 67584;
      if ( sigaltstack((const struct sigaltstack *)&act, &oss) )
        free(act.sa_handler);
    }
    v3 = (size_t *)&unk_26FB7D0;
    do
    {
      v4 = *(_DWORD *)v3;
      v5 = (struct sigaction *)((char *)&::act + 160 * (unsigned int)dword_2D0B840);
      act.sa_handler = (__sighandler_t)sub_2296AE0;
      act.sa_flags = -939524092;
      sigemptyset(&act.sa_mask);
      sigaction(v4, &act, v5);
      LODWORD(v5[1].sa_handler) = v4;
      _InterlockedAdd(&dword_2D0B840, 1u);
      v3 = (size_t *)((char *)v3 + 4);
    }
    while ( v3 != qword_26FB7E0 );
    v6 = (int *)&unk_26FB7A0;
    do
    {
      v7 = *v6;
      v8 = (struct sigaction *)((char *)&::act + 160 * (unsigned int)dword_2D0B840);
      act.sa_handler = (__sighandler_t)sub_2296AE0;
      act.sa_flags = -939524092;
      sigemptyset(&act.sa_mask);
      sigaction(v7, &act, v8);
      LODWORD(v8[1].sa_handler) = v7;
      _InterlockedAdd(&dword_2D0B840, 1u);
      ++v6;
    }
    while ( &unk_26FB7C8 != (_UNKNOWN *)v6 );
    if ( qword_2D0B868 )
    {
      v9 = (struct sigaction *)((char *)&::act + 160 * (unsigned int)dword_2D0B840);
      act.sa_handler = (__sighandler_t)sub_2296AE0;
      act.sa_flags = -939524092;
      sigemptyset(&act.sa_mask);
      sigaction(13, &act, v9);
      LODWORD(v9[1].sa_handler) = 13;
      _InterlockedAdd(&dword_2D0B840, 1u);
    }
    v10 = dword_2D0B840;
    act.sa_handler = (__sighandler_t)sub_2296520;
    act.sa_flags = 0x8000000;
    sigemptyset(&act.sa_mask);
    result = sigaction(10, &act, (struct sigaction *)((char *)&::act + 160 * v10));
    *((_DWORD *)&::act + 40 * v10 + 38) = 10;
    _InterlockedAdd(&dword_2D0B840, 1u);
  }
  if ( &_pthread_key_create )
    return pthread_mutex_unlock(mutex);
  return result;
}
