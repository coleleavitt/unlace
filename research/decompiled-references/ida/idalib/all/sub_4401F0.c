int __fastcall sub_4401F0(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  pthread_rwlock_t *v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v8; // [rsp+18h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 572);
  v8 = __readfsqword(0x28u);
  if ( v1 == (unsigned int)getinf(36) && *(_BYTE *)(a1 + 568) )
    return v8 - __readfsqword(0x28u);
  *(_BYTE *)(a1 + 568) = 1;
  v2 = getinf(36);
  v3 = *(pthread_rwlock_t **)(a1 + 8);
  *(_DWORD *)(a1 + 572) = v2;
  if ( !v3 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(v3) == 35 )
    std::__throw_system_error(35);
  v4 = *(unsigned int *)(a1 + 48);
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v5) != -1 )
        sub_43FFC0(
          a1 + 360,
          v5,
          *(_QWORD *)(a1 + 144)
        + *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4 * v5)));
      ++v5;
    }
    while ( v5 != v4 );
  }
  if ( !&_pthread_key_create )
    return v8 - __readfsqword(0x28u);
  else
    LODWORD(v6) = pthread_rwlock_unlock(v3);
  return v6;
}
