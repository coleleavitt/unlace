__int64 __fastcall sub_41F680(__int64 *a1, const char *a2, int a3)
{
  _QWORD *v4; // rbx
  void *v5; // rdi
  void (__fastcall *v6)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbp
  void (__fastcall *v10)(__int64, __int64, __int64); // rax
  size_t v11; // r13
  int v12; // eax
  void *v13; // rax

  switch ( a3 )
  {
    case 1:
      *a1 = *(_QWORD *)a2;
      break;
    case 2:
      v7 = *(_QWORD *)a2;
      v8 = operator new(0x40u);
      *(_QWORD *)(v8 + 16) = 0;
      v9 = v8;
      *(_QWORD *)(v8 + 24) = 0;
      *(_OWORD *)v8 = 0;
      v10 = *(void (__fastcall **)(__int64, __int64, __int64))(v7 + 16);
      if ( v10 )
      {
        a2 = (const char *)v7;
        v10(v9, v7, 2);
        *(__m128i *)(v9 + 16) = _mm_loadu_si128((const __m128i *)(v7 + 16));
      }
      *(_QWORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 40) = 0;
      v11 = *(_QWORD *)(v7 + 40);
      if ( v11 )
      {
        v13 = (void *)qalloc_or_throw(*(_QWORD *)(v7 + 40), a2);
        *(_QWORD *)(v9 + 32) = v13;
        *(_QWORD *)(v9 + 48) = v11;
        memcpy(v13, *(const void **)(v7 + 32), v11);
        *(_QWORD *)(v9 + 40) = v11;
      }
      v12 = *(_DWORD *)(v7 + 56);
      *a1 = v9;
      *(_DWORD *)(v9 + 56) = v12;
      break;
    case 3:
      v4 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v5 = (void *)v4[4];
        if ( v5 )
        {
          v4[5] = 0;
          qfree(v5);
        }
        v6 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v4[2];
        if ( v6 )
          v6(v4, v4, 3);
        operator delete(v4, 0x40u);
      }
      break;
    case 0:
      *a1 = 0;
      break;
  }
  return 0;
}

