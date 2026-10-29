int __fastcall sub_24E970(__int64 a1)
{
  int v1; // eax
  _QWORD *v2; // rbx
  _QWORD *i; // rbp
  int result; // eax

  if ( &_pthread_key_create )
  {
    v1 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 256));
    if ( v1 )
      std::__throw_system_error(v1);
  }
  v2 = *(_QWORD **)(a1 + 1576);
  if ( v2 )
  {
    for ( i = &v2[*((unsigned int *)v2 - 1)]; i != v2; ++v2 )
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 16LL))(*v2, 4);
  }
  sub_18295D0(a1 + 1624);
  result = sub_18295D0(*(_QWORD *)(a1 + 232));
  if ( &_pthread_key_create )
    return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 256));
  return result;
}

