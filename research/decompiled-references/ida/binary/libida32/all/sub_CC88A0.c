void __fastcall sub_CC88A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // ecx
  int v11; // edi
  volatile signed __int32 *v12; // rbp
  signed __int32 v13; // eax
  void (*v14)(); // rax
  signed __int32 v15; // eax
  __int64 (__fastcall *v16)(__int64); // rax
  __int64 v17; // [rsp+8h] [rbp-20h]
  __int64 v18; // [rsp+8h] [rbp-20h]

  if ( *(_BYTE *)(a2 + 24) )
  {
    v12 = *(volatile signed __int32 **)(a2 + 16);
    *(_BYTE *)(a2 + 24) = 0;
    if ( v12 )
    {
      if ( &_pthread_key_create )
      {
        v13 = _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF);
      }
      else
      {
        v13 = *((_DWORD *)v12 + 2);
        *((_DWORD *)v12 + 2) = v13 - 1;
      }
      if ( v13 == 1 )
      {
        v14 = *(void (**)())(*(_QWORD *)v12 + 16LL);
        if ( v14 != nullsub_404 )
        {
          v18 = a4;
          ((void (__fastcall *)(volatile signed __int32 *))v14)(v12);
          a4 = v18;
        }
        if ( &_pthread_key_create )
        {
          v15 = _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF);
        }
        else
        {
          v15 = *((_DWORD *)v12 + 3);
          *((_DWORD *)v12 + 3) = v15 - 1;
        }
        if ( v15 == 1 )
        {
          v17 = a4;
          v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL);
          if ( v16 == sub_9E5AF0 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          else
            v16((__int64)v12);
          a4 = v17;
        }
      }
    }
  }
  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != -1 )
  {
    v6 = *(_DWORD *)(a4 + 16);
    v7 = v5 / v6;
    if ( v6 <= v5 )
    {
      v8 = a3 + 32;
      v9 = a2 + 32;
      v10 = 0;
      do
      {
        v11 = *(_DWORD *)(v9 + 8);
        ++v10;
        v8 += 24;
        v9 += 24;
        *(_DWORD *)(v8 - 16) = v11;
        *(_QWORD *)(v8 - 24) = *(_QWORD *)(v9 - 24);
        LOBYTE(v11) = *(_BYTE *)(v9 - 12);
        *(_DWORD *)(v9 - 16) = 0;
        *(_BYTE *)(v8 - 12) = v11;
        *(_DWORD *)(v8 - 8) = *(_DWORD *)(v9 - 8);
      }
      while ( v10 < v7 );
    }
  }
}

