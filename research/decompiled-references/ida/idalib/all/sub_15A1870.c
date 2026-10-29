void __fastcall sub_15A1870(_QWORD *a1)
{
  volatile signed __int32 *v1; // rbp
  int v2; // eax
  signed __int32 v3; // eax

  v1 = (volatile signed __int32 *)a1[7];
  *a1 = &off_2BB3F98;
  if ( v1 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_4;
    }
    else
    {
      v2 = *((_DWORD *)v1 + 2);
      *((_DWORD *)v1 + 2) = v2 - 1;
      if ( v2 != 1 )
        goto LABEL_4;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
    if ( &_pthread_key_create )
    {
      v3 = _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
    }
    else
    {
      v3 = *((_DWORD *)v1 + 3);
      *((_DWORD *)v1 + 3) = v3 - 1;
    }
    if ( v3 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
  }
LABEL_4:
  operator delete(a1[3], 24LL * *((unsigned int *)a1 + 10), 8);
  operator delete(a1, 0x40u);
}
