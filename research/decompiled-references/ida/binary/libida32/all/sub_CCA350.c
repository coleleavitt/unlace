void __fastcall sub_CCA350(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v6; // ecx
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rbp
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
          v14 = a4;
          ((void (__fastcall *)(volatile signed __int32 *))v10)(v8);
          a4 = v14;
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
          v13 = a4;
          v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL);
          if ( v12 == sub_9E5AF0 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
          else
            v12((__int64)v8);
          a4 = v13;
        }
      }
    }
  }
  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != -1 )
  {
    v6 = *(_DWORD *)(a4 + 16);
    if ( v6 <= v5 )
    {
      v7 = 0;
      do
      {
        *(_WORD *)(a3 + 2 * v7 + 32) = *(_WORD *)(a2 + 2 * v7 + 32);
        ++v7;
      }
      while ( v5 / v6 > (unsigned int)v7 );
    }
  }
}

