void __fastcall sub_208B8D0(__int64 a1)
{
  _QWORD *v1; // rbx
  volatile signed __int32 *v2; // rbp
  signed __int32 v3; // eax
  signed __int32 v4; // eax

  v1 = *(_QWORD **)(a1 + 120);
  v2 = (volatile signed __int32 *)v1[1];
  *v1 = 0;
  if ( v2 )
  {
    if ( &_pthread_key_create )
    {
      v3 = _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF);
    }
    else
    {
      v3 = *((_DWORD *)v2 + 2);
      *((_DWORD *)v2 + 2) = v3 - 1;
    }
    if ( v3 == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
      if ( &_pthread_key_create )
      {
        v4 = _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
      }
      else
      {
        v4 = *((_DWORD *)v2 + 3);
        *((_DWORD *)v2 + 3) = v4 - 1;
      }
      if ( v4 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 24LL))(v2);
    }
    v1[1] = 0;
  }
}
