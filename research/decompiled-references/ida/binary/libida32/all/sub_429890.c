__int64 __fastcall sub_429890(__int64 *a1, const char *a2, int a3)
{
  _QWORD *v4; // rbx
  volatile signed __int32 *v5; // rdi
  void (__fastcall *v6)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v7; // rax
  void *v8; // rdi
  volatile signed __int32 *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // eax
  size_t v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  void (__fastcall *v17)(__int64, __int64, __int64); // rax
  __int64 v18; // rax
  int v19; // edx
  void *v20; // rax

  switch ( a3 )
  {
    case 1:
      *a1 = *(_QWORD *)a2;
      break;
    case 2:
      v10 = *(_QWORD *)a2;
      v11 = operator new(0x80u);
      *(_QWORD *)v11 = *(_QWORD *)v10;
      *(_QWORD *)(v11 + 8) = *(_QWORD *)(v10 + 8);
      v12 = *(_QWORD *)(v10 + 16);
      *(_QWORD *)(v11 + 16) = v12;
      if ( v12 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
        else
          ++*(_DWORD *)(v12 + 8);
      }
      *(_QWORD *)(v11 + 24) = *(_QWORD *)(v10 + 24);
      v13 = *(_DWORD *)(v10 + 32);
      *(_QWORD *)(v11 + 40) = 0;
      *(_DWORD *)(v11 + 32) = v13;
      *(_OWORD *)(v11 + 48) = 0;
      v14 = *(_QWORD *)(v10 + 48);
      if ( v14 )
      {
        v20 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 48), a2);
        *(_QWORD *)(v11 + 40) = v20;
        *(_QWORD *)(v11 + 56) = v14;
        memcpy(v20, *(const void **)(v10 + 40), v14);
        *(_QWORD *)(v11 + 48) = v14;
      }
      v15 = *(_QWORD *)(v10 + 64);
      if ( *(int *)(v15 - 8) < 0 )
      {
        v15 = std::string::_Rep::_M_clone();
      }
      else if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v15 - 8), 1u);
        else
          ++*(_DWORD *)(v15 - 8);
      }
      *(_QWORD *)(v11 + 64) = v15;
      v16 = *(_QWORD *)(v10 + 72);
      *(_QWORD *)(v11 + 96) = 0;
      *(_QWORD *)(v11 + 72) = v16;
      v17 = *(void (__fastcall **)(__int64, __int64, __int64))(v10 + 96);
      *(_QWORD *)(v11 + 104) = 0;
      *(_OWORD *)(v11 + 80) = 0;
      if ( v17 )
      {
        v17(v11 + 80, v10 + 80, 2);
        *(__m128i *)(v11 + 96) = _mm_loadu_si128((const __m128i *)(v10 + 96));
      }
      *(_QWORD *)(v11 + 112) = *(_QWORD *)(v10 + 112);
      v18 = *(_QWORD *)(v10 + 120);
      *(_QWORD *)(v11 + 120) = v18;
      if ( v18 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
        else
          ++*(_DWORD *)(v18 + 8);
      }
      *a1 = v11;
      break;
    case 3:
      v4 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v5 = (volatile signed __int32 *)v4[15];
        if ( v5 )
          sub_4204D0(v5);
        v6 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v4[12];
        if ( v6 )
          v6(v4 + 10, v4 + 10, 3);
        v7 = v4[8];
        if ( (_UNKNOWN *)(v7 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 8), 0xFFFFFFFF);
          }
          else
          {
            v19 = *(_DWORD *)(v7 - 8);
            *(_DWORD *)(v7 - 8) = v19 - 1;
          }
          if ( v19 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        v8 = (void *)v4[5];
        if ( v8 )
        {
          v4[6] = 0;
          qfree(v8);
        }
        v9 = (volatile signed __int32 *)v4[2];
        if ( v9 )
          sub_4204D0(v9);
        operator delete(v4, 0x80u);
      }
      break;
    case 0:
      *a1 = 0;
      break;
  }
  return 0;
}

