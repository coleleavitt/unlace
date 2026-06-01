__int64 __fastcall sub_903310(__int64 a1, __int64 a2, __int64 a3)
{
  pthread_mutex_t *v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax

  v4 = (pthread_mutex_t *)(a1 + 96);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 96));
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 > 1 )
  {
    if ( *(_QWORD *)(a1 + 56) != (*(_QWORD *)(a1 + 64) + 1LL) % v5 )
      goto LABEL_3;
LABEL_8:
    pthread_mutex_unlock(v4);
    return 0;
  }
  if ( *(_QWORD *)(a1 + 80) == *(_QWORD *)(a1 + 40) || !*(_DWORD *)(a1 + 88) )
    goto LABEL_8;
LABEL_3:
  if ( !*(_DWORD *)(a1 + 232) )
  {
    v7 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 88) = 0;
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v7);
    *v8 = a2;
    v8[1] = a3;
    *(_QWORD *)(a1 + 64) = (unsigned __int64)(*(_QWORD *)(a1 + 64) + 1LL) % *(_QWORD *)(a1 + 72);
    pthread_cond_signal((pthread_cond_t *)(a1 + 184));
  }
  pthread_mutex_unlock(v4);
  return 1;
}
