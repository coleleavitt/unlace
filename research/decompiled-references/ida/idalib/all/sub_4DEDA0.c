__int64 __fastcall sub_4DEDA0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  pthread_rwlock_t *v5; // rdi
  _QWORD *v6; // r12
  void *v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int8 v13; // [rsp+Fh] [rbp-79h]
  pthread_rwlock_t *rwlock; // [rsp+20h] [rbp-68h]
  __m128i v17; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v5 = *(pthread_rwlock_t **)a1;
  v18 = __readfsqword(0x28u);
  rwlock = v5;
  if ( !v5 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v5) == 35 )
    std::__throw_system_error(35);
  v6 = *(_QWORD **)(a1 + 64);
  while ( v6 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    operator delete(v7, 0x18u);
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
      v10 = (unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 8 * v8);
      v11 = *v10;
      if ( *v10 != -1 )
      {
        if ( v11 >= a2 && v11 < a2 + a4 )
        {
          v13 = 1;
          v11 += a3 - a2;
          *v10 = v11;
        }
        v17.m128i_i32[2] = v8;
        v17.m128i_i64[0] = v11;
        sub_4DDDD0((char **)(a1 + 48), &v17);
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
