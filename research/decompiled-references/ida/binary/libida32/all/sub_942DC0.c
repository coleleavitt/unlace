__int64 __fastcall sub_942DC0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi

  for ( result = *(unsigned int *)(a1 + 3012);
        (unsigned int)result < *(_DWORD *)(a1 + 3016);
        *(_DWORD *)(a1 + 3012) = result )
  {
    v3 = 448LL * (*(_DWORD *)(a1 + 3008) & (unsigned int)result);
    pthread_mutex_lock((pthread_mutex_t *)(v3 + *(_QWORD *)(a1 + 8) + 16));
    while ( 1 )
    {
      v4 = v3 + *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)v4 >= *(_QWORD *)(v4 + 176) )
        break;
      pthread_cond_wait((pthread_cond_t *)(v4 + 56), (pthread_mutex_t *)(v4 + 16));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(v4 + 16));
    result = (unsigned int)(*(_DWORD *)(a1 + 3012) + 1);
  }
  return result;
}

