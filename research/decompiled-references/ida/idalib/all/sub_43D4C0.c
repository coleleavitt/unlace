__int64 __fastcall sub_43D4C0(_QWORD *a1, _QWORD *a2, int a3)
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
  void (__fastcall *v18)(__int64, __int64, __int64); // rax
  __int64 v19; // rax
  int v20; // edx
  void *v21; // rax
  char v22; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 1:
      *a1 = *a2;
      break;
    case 2:
      v11 = *a2;
      v12 = operator new(0x78u);
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
        v21 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 48));
        *(_QWORD *)(v12 + 40) = v21;
        *(_QWORD *)(v12 + 56) = v15;
        memcpy(v21, *(const void **)(v11 + 40), v15);
        *(_QWORD *)(v12 + 48) = v15;
      }
      v16 = *(_QWORD *)(v11 + 64);
      v17 = (void *)(v16 - 24);
      if ( *(int *)(v16 - 8) < 0 )
      {
        v16 = std::string::_Rep::_M_clone(v17, &v22, 0);
      }
      else if ( v17 != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v16 - 8), 1u);
        else
          ++*(_DWORD *)(v16 - 8);
      }
      *(_QWORD *)(v12 + 64) = v16;
      v18 = *(void (__fastcall **)(__int64, __int64, __int64))(v11 + 88);
      *(_QWORD *)(v12 + 88) = 0;
      *(_QWORD *)(v12 + 96) = 0;
      *(_OWORD *)(v12 + 72) = 0;
      if ( v18 )
      {
        v18(v12 + 72, v11 + 72, 2);
        *(__m128i *)(v12 + 88) = _mm_loadu_si128((const __m128i *)(v11 + 88));
      }
      *(_QWORD *)(v12 + 104) = *(_QWORD *)(v11 + 104);
      v19 = *(_QWORD *)(v11 + 112);
      *(_QWORD *)(v12 + 112) = v19;
      if ( v19 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
        else
          ++*(_DWORD *)(v19 + 8);
      }
      *a1 = v12;
      break;
    case 3:
      v5 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v6 = (volatile signed __int32 *)v5[14];
        if ( v6 )
          sub_4343A0(v6);
        v7 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v5[11];
        if ( v7 )
          v7(v5 + 9, v5 + 9, 3);
        v8 = v5[8];
        if ( (_UNKNOWN *)(v8 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 - 8), 0xFFFFFFFF);
          }
          else
          {
            v20 = *(_DWORD *)(v8 - 8);
            *(_DWORD *)(v8 - 8) = v20 - 1;
          }
          if ( v20 <= 0 )
            std::string::_Rep::_M_destroy(v8 - 24, &v22);
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
        operator delete(v5, 0x78u);
      }
      break;
    case 0:
      *a1 = 0;
      break;
  }
  return 0;
}
