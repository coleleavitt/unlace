__int64 __fastcall sub_4293E0(__int64 *a1, const char *a2, int a3)
{
  _QWORD *v4; // rbx
  volatile signed __int32 *v5; // rdi
  void *v6; // rdi
  volatile signed __int32 *v7; // rdi
  void (__fastcall *v8)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  void (__fastcall *v12)(__int64, __int64, __int64); // rax
  __int64 v13; // rax
  size_t v14; // r13
  __int64 v15; // rax
  int v16; // eax
  void *v17; // rax

  switch ( a3 )
  {
    case 1:
      *a1 = *(_QWORD *)a2;
      break;
    case 2:
      v9 = *(_QWORD *)a2;
      v10 = operator new(0x70u);
      *(_QWORD *)(v10 + 16) = 0;
      v11 = v10;
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)v10 = 0;
      v12 = *(void (__fastcall **)(__int64, __int64, __int64))(v9 + 16);
      if ( v12 )
      {
        a2 = (const char *)v9;
        v12(v11, v9, 2);
        *(__m128i *)(v11 + 16) = _mm_loadu_si128((const __m128i *)(v9 + 16));
      }
      *(_QWORD *)(v11 + 32) = *(_QWORD *)(v9 + 32);
      v13 = *(_QWORD *)(v9 + 40);
      *(_QWORD *)(v11 + 40) = v13;
      if ( v13 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
        else
          ++*(_DWORD *)(v13 + 8);
      }
      *(_QWORD *)(v11 + 48) = 0;
      *(_OWORD *)(v11 + 56) = 0;
      v14 = *(_QWORD *)(v9 + 56);
      if ( v14 )
      {
        v17 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 56), a2);
        *(_QWORD *)(v11 + 48) = v17;
        *(_QWORD *)(v11 + 64) = v14;
        memcpy(v17, *(const void **)(v9 + 48), v14);
        *(_QWORD *)(v11 + 56) = v14;
      }
      *(_QWORD *)(v11 + 72) = *(_QWORD *)(v9 + 72);
      v15 = *(_QWORD *)(v9 + 80);
      *(_QWORD *)(v11 + 80) = v15;
      if ( v15 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
        else
          ++*(_DWORD *)(v15 + 8);
      }
      *(_QWORD *)(v11 + 88) = *(_QWORD *)(v9 + 88);
      *(_QWORD *)(v11 + 96) = *(_QWORD *)(v9 + 96);
      v16 = *(_DWORD *)(v9 + 104);
      *a1 = v11;
      *(_DWORD *)(v11 + 104) = v16;
      break;
    case 3:
      v4 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v5 = (volatile signed __int32 *)v4[10];
        if ( v5 )
          sub_4204D0(v5);
        v6 = (void *)v4[6];
        if ( v6 )
        {
          v4[7] = 0;
          qfree(v6);
        }
        v7 = (volatile signed __int32 *)v4[5];
        if ( v7 )
          sub_4204D0(v7);
        v8 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v4[2];
        if ( v8 )
          v8(v4, v4, 3);
        operator delete(v4, 0x70u);
      }
      break;
    case 0:
      *a1 = 0;
      break;
  }
  return 0;
}

