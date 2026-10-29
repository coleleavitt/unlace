__int64 __fastcall sub_15A1920(__int64 a1)
{
  volatile signed __int32 *v1; // rbp
  int v3; // eax
  signed __int32 v4; // eax

  v1 = *(volatile signed __int32 **)(a1 + 56);
  *(_QWORD *)a1 = &off_2BB3F98;
  if ( v1 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) != 1 )
        return operator delete(*(_QWORD *)(a1 + 24), 24LL * *(unsigned int *)(a1 + 40), 8);
    }
    else
    {
      v3 = *((_DWORD *)v1 + 2);
      *((_DWORD *)v1 + 2) = v3 - 1;
      if ( v3 != 1 )
        return operator delete(*(_QWORD *)(a1 + 24), 24LL * *(unsigned int *)(a1 + 40), 8);
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
    if ( &_pthread_key_create )
    {
      v4 = _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
    }
    else
    {
      v4 = *((_DWORD *)v1 + 3);
      *((_DWORD *)v1 + 3) = v4 - 1;
    }
    if ( v4 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
  }
  return operator delete(*(_QWORD *)(a1 + 24), 24LL * *(unsigned int *)(a1 + 40), 8);
}
