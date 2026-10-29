void __fastcall sub_CCAAF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // r13d
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  signed __int32 v14; // eax
  void (*v15)(); // rax
  signed __int32 v16; // eax
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // [rsp+8h] [rbp-30h]
  __int64 v19; // [rsp+8h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 24) )
  {
    v13 = *(volatile signed __int32 **)(a2 + 16);
    *(_BYTE *)(a2 + 24) = 0;
    if ( v13 )
    {
      if ( &_pthread_key_create )
      {
        v14 = _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF);
      }
      else
      {
        v14 = *((_DWORD *)v13 + 2);
        *((_DWORD *)v13 + 2) = v14 - 1;
      }
      if ( v14 == 1 )
      {
        v15 = *(void (**)())(*(_QWORD *)v13 + 16LL);
        if ( v15 != nullsub_404 )
        {
          v19 = a4;
          ((void (__fastcall *)(volatile signed __int32 *))v15)(v13);
          a4 = v19;
        }
        if ( &_pthread_key_create )
        {
          v16 = _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF);
        }
        else
        {
          v16 = *((_DWORD *)v13 + 3);
          *((_DWORD *)v13 + 3) = v16 - 1;
        }
        if ( v16 == 1 )
        {
          v18 = a4;
          v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL);
          if ( v17 == sub_9E5AF0 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          else
            v17((__int64)v13);
          a4 = v18;
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
        v11 = v8;
        ++v10;
        v8 += 64;
        sub_DFF520(v11);
        v12 = *(_QWORD *)(v9 + 48);
        v9 += 64;
        *(_QWORD *)(v8 - 16) = v12;
        *(_DWORD *)(v8 - 8) = *(_DWORD *)(v9 - 8);
      }
      while ( v10 < v7 );
    }
  }
}

