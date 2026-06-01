__int64 __fastcall sub_4C7C60(__int64 a1, unsigned int a2, int a3, int a4)
{
  pthread_rwlock_t *v5; // rdi
  _QWORD *v6; // r12
  void *v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned int *v10; // rdx
  unsigned int v11; // eax
  unsigned __int8 v13; // [rsp+7h] [rbp-71h]
  unsigned __int64 v16; // [rsp+18h] [rbp-60h] BYREF
  pthread_rwlock_t *rwlock; // [rsp+20h] [rbp-58h]
  char v18; // [rsp+28h] [rbp-50h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v5 = *(pthread_rwlock_t **)a1;
  v19 = __readfsqword(0x28u);
  rwlock = v5;
  v18 = 0;
  if ( !v5 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v5) == 35 )
    std::__throw_system_error(35);
  v6 = *(_QWORD **)(a1 + 64);
  v18 = 1;
  while ( v6 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    operator delete(v7, 0x10u);
  }
  v8 = 0;
  memset(*(void **)(a1 + 48), 0, 8LL * *(_QWORD *)(a1 + 56));
  v9 = *(unsigned int *)(a1 + 40);
  v13 = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  if ( (_DWORD)v9 )
  {
    do
    {
      v10 = (unsigned int *)(*(_QWORD *)(a1 + 104) + 4 * v8);
      v11 = *v10;
      if ( *v10 != -1 )
      {
        if ( v11 >= a2 && v11 < a2 + a4 )
        {
          v13 = 1;
          v11 += a3 - a2;
          *v10 = v11;
        }
        v16 = __PAIR64__(v8, v11);
        sub_4C6C90((char **)(a1 + 48), (__int64 *)&v16);
      }
      ++v8;
    }
    while ( v9 != v8 );
    if ( v13 )
      ++*(_QWORD *)(*(_QWORD *)a1 + 56LL);
  }
  if ( rwlock && &_pthread_key_create )
    pthread_rwlock_unlock(rwlock);
  return v13;
}

