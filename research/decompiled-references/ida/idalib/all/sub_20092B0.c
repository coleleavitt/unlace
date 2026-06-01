void __fastcall sub_20092B0(__int64 a1)
{
  __int64 v2; // rdi
  volatile signed __int32 *v3; // rbx
  void **v4; // r12
  void **v5; // rbx
  int v6; // eax
  signed __int32 v7; // eax

  if ( *(_BYTE *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = *(volatile signed __int32 **)(a1 + 56);
  if ( v3 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_7;
    }
    else
    {
      v6 = *((_DWORD *)v3 + 2);
      *((_DWORD *)v3 + 2) = v6 - 1;
      if ( v6 != 1 )
        goto LABEL_7;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    if ( &_pthread_key_create )
    {
      v7 = _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    }
    else
    {
      v7 = *((_DWORD *)v3 + 3);
      *((_DWORD *)v3 + 3) = v7 - 1;
    }
    if ( v7 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
  }
LABEL_7:
  v4 = *(void ***)(a1 + 8);
  v5 = *(void ***)a1;
  if ( v4 != *(void ***)a1 )
  {
    do
    {
      while ( *v5 != v5 + 2 )
      {
        operator delete(*v5);
        v5 += 4;
        if ( v5 == v4 )
          goto LABEL_10;
      }
      v5 += 4;
    }
    while ( v4 != v5 );
LABEL_10:
    v5 = *(void ***)a1;
  }
  if ( v5 )
    operator delete(v5);
}
