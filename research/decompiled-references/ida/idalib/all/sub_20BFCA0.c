__int64 __fastcall sub_20BFCA0(pthread_rwlock_t *rwlock, __int64 a2)
{
  int v4; // eax
  int writer; // eax
  __int64 v6; // rsi
  int v7; // ecx
  unsigned int v8; // edx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  int v13; // eax
  int v14; // r8d
  __int64 v15; // rdi

  do
    v4 = pthread_rwlock_rdlock(rwlock);
  while ( v4 == 11 );
  if ( v4 == 35 )
    std::__throw_system_error(35);
  writer = rwlock[1].__writer;
  v6 = *(&rwlock[1].__align + 1);
  if ( writer )
  {
    v7 = writer - 1;
    v8 = (writer - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v9 = (__int64 *)(v6 + 16LL * v8);
    v10 = *v9;
    if ( a2 != *v9 )
    {
      v11 = 0;
      v13 = 1;
      if ( v10 == -4096 )
        goto LABEL_6;
      while ( 1 )
      {
        v14 = v13 + 1;
        v8 = v7 & (v13 + v8);
        v9 = (__int64 *)(v6 + 16LL * v8);
        v15 = *v9;
        if ( a2 == *v9 )
          break;
        v13 = v14;
        if ( v15 == -4096 )
          goto LABEL_10;
      }
    }
    v11 = v9[1];
LABEL_6:
    pthread_rwlock_unlock(rwlock);
    return v11;
  }
LABEL_10:
  pthread_rwlock_unlock(rwlock);
  return 0;
}
