void __fastcall sub_CCA790(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  volatile signed __int32 *v10; // rbp
  signed __int32 v11; // eax
  void (*v12)(); // rax
  signed __int32 v13; // eax
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+8h] [rbp-20h]

  if ( *(_BYTE *)(a2 + 24) )
  {
    v10 = *(volatile signed __int32 **)(a2 + 16);
    *(_BYTE *)(a2 + 24) = 0;
    if ( v10 )
    {
      if ( &_pthread_key_create )
      {
        v11 = _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF);
      }
      else
      {
        v11 = *((_DWORD *)v10 + 2);
        *((_DWORD *)v10 + 2) = v11 - 1;
      }
      if ( v11 == 1 )
      {
        v12 = *(void (**)())(*(_QWORD *)v10 + 16LL);
        if ( v12 != nullsub_404 )
        {
          v16 = a4;
          ((void (__fastcall *)(volatile signed __int32 *))v12)(v10);
          a4 = v16;
        }
        if ( &_pthread_key_create )
        {
          v13 = _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF);
        }
        else
        {
          v13 = *((_DWORD *)v10 + 3);
          *((_DWORD *)v10 + 3) = v13 - 1;
        }
        if ( v13 == 1 )
        {
          v15 = a4;
          v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL);
          if ( v14 == sub_9E5AF0 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          else
            v14((__int64)v10);
          a4 = v15;
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
      v8 = 32;
      v9 = 0;
      do
      {
        ++v9;
        *(__m128i *)(a3 + v8) = _mm_loadu_si128((const __m128i *)(a2 + v8));
        v8 += 16;
      }
      while ( v9 < v7 );
    }
  }
}

