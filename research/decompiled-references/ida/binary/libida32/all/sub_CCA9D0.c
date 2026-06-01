void __fastcall sub_CCA9D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // edi
  unsigned int v5; // r12d
  __int64 v6; // rbx
  unsigned int v7; // ebp
  volatile signed __int32 *v8; // rbx
  signed __int32 v9; // eax
  void (*v10)(); // rax
  signed __int32 v11; // eax
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+8h] [rbp-20h]

  if ( *(_BYTE *)(a2 + 24) )
  {
    v8 = *(volatile signed __int32 **)(a2 + 16);
    *(_BYTE *)(a2 + 24) = 0;
    if ( v8 )
    {
      if ( &_pthread_key_create )
      {
        v9 = _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF);
      }
      else
      {
        v9 = *((_DWORD *)v8 + 2);
        *((_DWORD *)v8 + 2) = v9 - 1;
      }
      if ( v9 == 1 )
      {
        v10 = *(void (**)())(*(_QWORD *)v8 + 16LL);
        if ( v10 != nullsub_404 )
        {
          v14 = a3;
          ((void (__fastcall *)(volatile signed __int32 *))v10)(v8);
          a3 = v14;
        }
        if ( &_pthread_key_create )
        {
          v11 = _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF);
        }
        else
        {
          v11 = *((_DWORD *)v8 + 3);
          *((_DWORD *)v8 + 3) = v11 - 1;
        }
        if ( v11 == 1 )
        {
          v13 = a3;
          v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL);
          if ( v12 == sub_9E5AF0 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
          else
            v12((__int64)v8);
          a3 = v13;
        }
      }
    }
  }
  v3 = *(_DWORD *)(a3 + 20);
  if ( v3 != -1 )
  {
    v4 = *(_DWORD *)(a3 + 16);
    v5 = v3 / v4;
    if ( v3 >= v4 )
    {
      v6 = a2 + 32;
      v7 = 0;
      do
      {
        if ( *(_DWORD *)(v6 + 8) > 0x40u )
        {
          if ( *(_QWORD *)v6 )
            operator delete[](*(void **)v6);
        }
        ++v7;
        v6 += 24;
      }
      while ( v7 < v5 );
    }
  }
}

