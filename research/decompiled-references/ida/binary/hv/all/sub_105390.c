void __fastcall sub_105390(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  pthread_mutex_t *v3; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax

  if ( *(_DWORD *)(a1 + 136) == 1 )
  {
    v3 = (pthread_mutex_t *)(a1 + 2856);
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 2856));
    v6 = a2 + a3;
    while ( 1 )
    {
      v8 = *(unsigned int *)(a1 + 2968);
      v9 = *(unsigned int *)(a1 + 2972);
      v10 = *(_QWORD *)(a1 + 2952) + v8;
      v11 = *(_QWORD *)(a1 + 2960) + v9;
      if ( !v11 || !a2 || (v7 = v11 + (unsigned int)(v8 - v9), v6 == a2) || v11 == v7 || v7 <= a2 || v11 >= v6 )
      {
        v12 = *(_QWORD *)(a1 + 2944);
        if ( !v10 || !a2 || v6 == a2 || v12 == v10 || v12 <= a2 || v10 >= v6 )
          break;
      }
      pthread_cond_wait((pthread_cond_t *)(a1 + 2896), v3);
    }
    pthread_mutex_unlock(v3);
  }
}

