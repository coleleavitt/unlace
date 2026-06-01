int __fastcall sub_2296AE0(unsigned int sig, __int64 a2)
{
  struct sigaction *v2; // rbx
  struct sigaction *v3; // rbp
  __int64 v4; // r15
  __int64 i; // rbx
  const char *v6; // rbp
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // eax
  int *v11; // rax
  __int64 (*v12)(void); // rax
  sigset_t v14; // [rsp+0h] [rbp-148h] BYREF
  struct stat stat_buf; // [rsp+80h] [rbp-C8h] BYREF

  if ( dword_2D0B840 )
  {
    v2 = &act;
    v3 = (struct sigaction *)((char *)&unk_2D0AEE0 + 160 * (unsigned int)(dword_2D0B840 - 1));
    do
    {
      sigaction((int)v2[1].sa_handler, v2, nullptr);
      _InterlockedSub(&dword_2D0B840, 1u);
      v2 = (struct sigaction *)((char *)v2 + 160);
    }
    while ( v3 != v2 );
  }
  sigfillset(&v14);
  sigprocmask(1, &v14, nullptr);
  v4 = _InterlockedExchange64(&qword_2D0B848, 0);
  for ( i = v4; i; i = *(_QWORD *)(i + 8) )
  {
    while ( 1 )
    {
      v6 = (const char *)_InterlockedExchange64((volatile __int64 *)i, 0);
      if ( v6 )
        break;
      i = *(_QWORD *)(i + 8);
      if ( !i )
        goto LABEL_12;
    }
    if ( !__xstat(1, v6, &stat_buf) && (stat_buf.st_mode & 0xF000) == 0x8000 )
      unlink(v6);
    _InterlockedExchange64((volatile __int64 *)i, (__int64)v6);
  }
LABEL_12:
  _InterlockedExchange64(&qword_2D0B848, v4);
  if ( sig == 13 )
  {
    v12 = (__int64 (*)(void))_InterlockedExchange64(&qword_2D0B868, 0);
    if ( v12 )
      goto LABEL_24;
    goto LABEL_22;
  }
  if ( sig <= 0xF )
  {
    v7 = 36870;
    if ( _bittest64(&v7, sig) )
    {
      v12 = (__int64 (*)(void))_InterlockedExchange64(&qword_2D0B878, 0);
      if ( v12 )
      {
LABEL_24:
        LODWORD(v11) = v12();
        return (int)v11;
      }
LABEL_22:
      LODWORD(v11) = raise(sig);
      return (int)v11;
    }
  }
  if ( !(_BYTE)byte_2D0B880 && __cxa_guard_acquire(&byte_2D0B880) )
    __cxa_guard_release(&byte_2D0B880);
  v8 = (volatile signed __int32 *)&unk_2D0B8B0;
  do
  {
    if ( _InterlockedCompareExchange(v8, 3, 2) == 2 )
    {
      (*((void (__fastcall **)(_QWORD))v8 - 2))(*((_QWORD *)v8 - 1));
      *((_QWORD *)v8 - 2) = 0;
      *((_QWORD *)v8 - 1) = 0;
      *v8 = 0;
      _mm_mfence();
    }
    v8 += 6;
  }
  while ( &byte_2D0B970 != (__guard *)v8 );
  v9 = syscall(186);
  v10 = getpid();
  LODWORD(v11) = syscall(297, v10, v9, sig, a2);
  if ( (_DWORD)v11 )
  {
    v11 = __errno_location();
    if ( *v11 == 1 )
      goto LABEL_22;
  }
  return (int)v11;
}
