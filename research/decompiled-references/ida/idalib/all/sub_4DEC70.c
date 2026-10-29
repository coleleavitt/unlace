int __fastcall sub_4DEC70(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  pthread_rwlock_t *v3; // r14
  __int64 v4; // r12
  __int64 i; // rbx
  unsigned __int64 v7; // [rsp+18h] [rbp-40h]

  v1 = a1 + 360;
  v7 = __readfsqword(0x28u);
  sub_43CDF0(a1 + 360);
  if ( *(_BYTE *)(a1 + 568) )
    return v7 - __readfsqword(0x28u);
  sub_43CE20(v1);
  v3 = *(pthread_rwlock_t **)a1;
  if ( !*(_QWORD *)a1 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v3) == 35 )
    std::__throw_system_error(35);
  v4 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * i) != -1 )
        sub_43FFC0(
          v1,
          i,
          *(_QWORD *)(a1 + 152)
        + *(_QWORD *)(*(_QWORD *)(a1 + 200) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 232) + 4 * i)));
    }
  }
  if ( !&_pthread_key_create )
    return v7 - __readfsqword(0x28u);
  else
    LODWORD(v2) = pthread_rwlock_unlock(v3);
  return v2;
}
