void __fastcall sub_1FE2990(_QWORD *a1)
{
  __int64 v2; // rdi
  volatile signed __int32 *v3; // rbp
  int v4; // eax
  void (*v5)(); // rax
  signed __int32 v6; // eax
  __int64 (__fastcall *v7)(__int64); // rdx

  *a1 = &off_2C711F8;
  v2 = a1[4];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[3];
  if ( v3 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_6;
    }
    else
    {
      v4 = *((_DWORD *)v3 + 2);
      *((_DWORD *)v3 + 2) = v4 - 1;
      if ( v4 != 1 )
        goto LABEL_6;
    }
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
    if ( v6 == 1 )
    {
      v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL);
      if ( v7 == sub_A09830 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      else
        v7((__int64)v3);
    }
  }
LABEL_6:
  operator delete(a1, 0x28u);
}
