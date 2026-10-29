void __fastcall sub_A0AD20(__int64 a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // rbx
  volatile signed __int32 *v3; // rbp
  int v4; // eax
  void (*v5)(); // rax
  signed __int32 v6; // eax
  __int64 (__fastcall *v7)(__int64); // rdx

  v1 = *(_QWORD **)(a1 + 8);
  v2 = *(_QWORD **)a1;
  if ( v1 == *(_QWORD **)a1 )
    goto LABEL_16;
  do
  {
    while ( 1 )
    {
      v3 = (volatile signed __int32 *)v2[1];
      if ( !v3 )
        goto LABEL_4;
      if ( !&_pthread_key_create )
        break;
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
        goto LABEL_8;
LABEL_4:
      v2 += 2;
      if ( v1 == v2 )
        goto LABEL_15;
    }
    v4 = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = v4 - 1;
    if ( v4 != 1 )
      goto LABEL_4;
LABEL_8:
    v5 = *(void (**)())(*(_QWORD *)v3 + 16LL);
    if ( v5 != nullsub_425 )
      ((void (__fastcall *)(volatile signed __int32 *))v5)(v3);
    if ( &_pthread_key_create )
    {
      v6 = _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    }
    else
    {
      v6 = *((_DWORD *)v3 + 3);
      *((_DWORD *)v3 + 3) = v6 - 1;
    }
    if ( v6 != 1 )
      goto LABEL_4;
    v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL);
    if ( v7 != sub_A09830 )
    {
      v7((__int64)v3);
      goto LABEL_4;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    v2 += 2;
  }
  while ( v1 != v2 );
LABEL_15:
  v2 = *(_QWORD **)a1;
LABEL_16:
  if ( v2 )
    operator delete(v2);
}
