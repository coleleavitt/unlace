__int64 __fastcall sub_62C560(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 v3; // rdx
  const void *v4; // rsi
  void *v5; // rdi
  volatile signed __int32 *v6; // rbp
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi

  *(_QWORD *)a1 = &off_47CFF08;
  v2 = *(__int64 **)(a1 + 16);
  *v2 = operator new[](16LL * *(unsigned int *)(a1 + 72));
  v3 = *(unsigned int *)(a1 + 72);
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = v3;
  v4 = *(const void **)(a1 + 64);
  memcpy(**(void ***)(a1 + 16), v4, 16 * v3);
  v5 = *(void **)(a1 + 64);
  *(_DWORD *)(a1 + 72) = 0;
  if ( v5 != (void *)(a1 + 80) )
    free(v5);
  v6 = *(volatile signed __int32 **)(a1 + 56);
  if ( v6 )
  {
    v7 = v6 + 2;
    if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
    {
      v11 = *(_QWORD *)v6;
      v12 = *(_QWORD *)(a1 + 56);
      *((_QWORD *)v6 + 1) = 0;
      (*(void (__fastcall **)(__int64, const void *, volatile signed __int32 *))(v11 + 16))(v12, v4, v7);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v8 = _InterlockedExchangeAdd(v7, 0xFFFFFFFF);
      }
      else
      {
        v8 = *((_DWORD *)v6 + 2);
        *((_DWORD *)v6 + 2) = v8 - 1;
      }
      if ( v8 == 1 )
        sub_6111C0(v6);
    }
  }
  v9 = 24LL * *(unsigned int *)(a1 + 40);
  operator delete();
  return sub_120E040(a1, v9);
}

