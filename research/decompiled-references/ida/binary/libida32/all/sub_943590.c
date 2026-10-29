pthread_mutex_t *__fastcall sub_943590(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  pthread_mutex_t *v7; // rax
  pthread_mutex_t *v8; // rbx
  __int128 v10; // [rsp+0h] [rbp-38h]
  __int64 v11; // [rsp+10h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 40);
  v10 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 56));
  v11 = *(_QWORD *)(a1 + 72);
  sub_942AE0((pthread_mutex_t *)a1);
  v7 = (pthread_mutex_t *)sub_943440(a2, a2, v3, v4, v5, v6, v10, v11);
  v8 = v7;
  if ( v7 )
  {
    pthread_mutex_lock(v7);
    v8[1].__align = v2;
    pthread_mutex_unlock(v8);
  }
  return v8;
}

