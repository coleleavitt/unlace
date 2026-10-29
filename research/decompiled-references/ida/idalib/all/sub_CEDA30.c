void __fastcall sub_CEDA30(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // edi
  unsigned int v5; // r12d
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  volatile signed __int32 *v9; // rbx
  signed __int32 v10; // eax
  void (*v11)(); // rax
  signed __int32 v12; // eax
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // [rsp+8h] [rbp-20h]
  __int64 v15; // [rsp+8h] [rbp-20h]

  if ( *(_BYTE *)(a2 + 24) )
  {
    v9 = *(volatile signed __int32 **)(a2 + 16);
    *(_BYTE *)(a2 + 24) = 0;
    if ( v9 )
    {
      if ( &_pthread_key_create )
      {
        v10 = _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF);
      }
      else
      {
        v10 = *((_DWORD *)v9 + 2);
        *((_DWORD *)v9 + 2) = v10 - 1;
      }
      if ( v10 == 1 )
      {
        v11 = *(void (**)())(*(_QWORD *)v9 + 16LL);
        if ( v11 != nullsub_425 )
        {
          v15 = a3;
          ((void (__fastcall *)(volatile signed __int32 *))v11)(v9);
          a3 = v15;
        }
        if ( &_pthread_key_create )
        {
          v12 = _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
        }
        else
        {
          v12 = *((_DWORD *)v9 + 3);
          *((_DWORD *)v9 + 3) = v12 - 1;
        }
        if ( v12 == 1 )
        {
          v14 = a3;
          v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL);
          if ( v13 == sub_A09830 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
          else
            v13((__int64)v9);
          a3 = v14;
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
        v8 = v6;
        ++v7;
        v6 += 64;
        sub_E232A0(v8);
      }
      while ( v7 < v5 );
    }
  }
}
