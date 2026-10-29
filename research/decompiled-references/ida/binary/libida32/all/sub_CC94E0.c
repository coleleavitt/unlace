void __fastcall sub_CC94E0(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  signed __int32 v3; // eax
  void (*v4)(); // rax
  signed __int32 v5; // eax
  __int64 (__fastcall *v6)(__int64); // rdx

  if ( *(_BYTE *)(a2 + 24) )
  {
    v2 = *(volatile signed __int32 **)(a2 + 16);
    *(_BYTE *)(a2 + 24) = 0;
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
        v4 = *(void (**)())(*(_QWORD *)v2 + 16LL);
        if ( v4 != nullsub_404 )
          ((void (__fastcall *)(volatile signed __int32 *))v4)(v2);
        if ( &_pthread_key_create )
        {
          v5 = _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
        }
        else
        {
          v5 = *((_DWORD *)v2 + 3);
          *((_DWORD *)v2 + 3) = v5 - 1;
        }
        if ( v5 == 1 )
        {
          v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL);
          if ( v6 == sub_9E5AF0 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
          else
            v6((__int64)v2);
        }
      }
    }
  }
}

