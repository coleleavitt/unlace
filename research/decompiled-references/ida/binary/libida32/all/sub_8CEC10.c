int __fastcall sub_8CEC10(__int64 *a1)
{
  __int64 v2; // rdi
  bool v3; // zf
  int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    if ( *(int *)(v2 + 88) <= 0 )
      sub_8CBDF0();
    _InterlockedSub((volatile signed __int32 *)(v2 + 88), 1u);
    v3 = *(_BYTE *)(v2 + 84) == 0;
    dword_2CAD3D4 = 0;
    if ( !v3 )
      *(_BYTE *)(v2 + 84) = 0;
    result = pthread_rwlock_unlock((pthread_rwlock_t *)v2);
    *a1 = 0;
  }
  return result;
}

