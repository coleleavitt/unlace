__int64 __fastcall sub_43D790(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v5; // rbx
  volatile signed __int32 *v6; // rdi
  void (__fastcall *v7)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v8; // rax
  void *v9; // rdi
  volatile signed __int32 *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // eax
  size_t v15; // r13
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // rax
  void (__fastcall *v19)(__int64, __int64, __int64); // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  char v23; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 1:
      *a1 = *a2;
      break;
    case 2:
      v11 = *a2;
      v12 = operator new(0x80u);
      *(_QWORD *)v12 = *(_QWORD *)v11;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      *(_QWORD *)(v12 + 16) = v13;
      if ( v13 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
        else
          ++*(_DWORD *)(v13 + 8);
      }
      *(_QWORD *)(v12 + 24) = *(_QWORD *)(v11 + 24);
      v14 = *(_DWORD *)(v11 + 32);
      *(_QWORD *)(v12 + 40) = 0;
      *(_DWORD *)(v12 + 32) = v14;
      *(_OWORD *)(v12 + 48) = 0;
      v15 = *(_QWORD *)(v11 + 48);
      if ( v15 )
      {
        v22 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 48));
        *(_QWORD *)(v12 + 40) = v22;
        *(_QWORD *)(v12 + 56) = v15;
        memcpy(v22, *(const void **)(v11 + 40), v15);
        *(_QWORD *)(v12 + 48) = v15;
      }
      v16 = *(_QWORD *)(v11 + 64);
      v17 = (void *)(v16 - 24);
      if ( *(int *)(v16 - 8) < 0 )
      {
        v16 = std::string::_Rep::_M_clone(v17, &v23, 0);
      }
      else if ( v17 != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v16 - 8), 1u);
        else
          ++*(_DWORD *)(v16 - 8);
      }
      *(_QWORD *)(v12 + 64) = v16;
      v18 = *(_QWORD *)(v11 + 72);
      *(_QWORD *)(v12 + 96) = 0;
      *(_QWORD *)(v12 + 72) = v18;
      v19 = *(void (__fastcall **)(__int64, __int64, __int64))(v11 + 96);
      *(_QWORD *)(v12 + 104) = 0;
      *(_OWORD *)(v12 + 80) = 0;
      if ( v19 )
      {
        v19(v12 + 80, v11 + 80, 2);
        *(__m128i *)(v12 + 96) = _mm_loadu_si128((const __m128i *)(v11 + 96));
      }
      *(_QWORD *)(v12 + 112) = *(_QWORD *)(v11 + 112);
      v20 = *(_QWORD *)(v11 + 120);
      *(_QWORD *)(v12 + 120) = v20;
      if ( v20 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
        else
          ++*(_DWORD *)(v20 + 8);
      }
      *a1 = v12;
      break;
    case 3:
      v5 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v6 = (volatile signed __int32 *)v5[15];
        if ( v6 )
          sub_4343A0(v6);
        v7 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v5[12];
        if ( v7 )
          v7(v5 + 10, v5 + 10, 3);
        v8 = v5[8];
        if ( (_UNKNOWN *)(v8 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 - 8), 0xFFFFFFFF);
          }
          else
          {
            v21 = *(_DWORD *)(v8 - 8);
            *(_DWORD *)(v8 - 8) = v21 - 1;
          }
          if ( v21 <= 0 )
            std::string::_Rep::_M_destroy(v8 - 24, &v23);
        }
        v9 = (void *)v5[5];
        if ( v9 )
        {
          v5[6] = 0;
          qfree(v9);
        }
        v10 = (volatile signed __int32 *)v5[2];
        if ( v10 )
          sub_4343A0(v10);
        operator delete(v5, 0x80u);
      }
      break;
    case 0:
      *a1 = 0;
      break;
  }
  return 0;
}
