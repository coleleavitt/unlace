void __fastcall sub_123D2C0(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        const char **a4,
        _DWORD *a5,
        _QWORD *a6,
        __m128 a7,
        __m128i a8,
        __m128i a9,
        __m128i a10)
{
  int v14; // eax
  int v15; // r8d
  char *v16; // r12
  size_t v18; // rcx

  v14 = a5[2];
  v15 = *(_DWORD *)(a3 + 12);
  if ( v14 && *(_DWORD *)(*(_QWORD *)a5 + 24LL) == 60 && v15 == 58 )
  {
    sub_1238FC0((__int64)a2, a4, (__int64)a5, a6, a3, a1, a7, a8);
  }
  else if ( v15 == 64 )
  {
    v16 = (char *)*a4;
    v18 = 0;
    if ( *a4 )
      v18 = strlen(*a4);
    sub_1236660((__int64)a2, a3, v16, v18, (__int64)a5, a6, a7, a8, a1);
  }
  else if ( v15 == 44 )
  {
    sub_123CD60(a1, (__int64)a2, a3, (__int64)a5, (__int64 *)a4, (__int64)a6, a7, a8, a9, a10);
  }
  else if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1792LL) - 49) > 2 )
  {
    sub_123BD50(a1, a2, a3, (__int64)a5, (char **)a4, a6, *(double *)a7.m128_u64, a8, a9, a10);
  }
  else
  {
    sub_123D1D0(a1, (__int64)a2, a3, (__int64)a5, (__int64 *)a4, (__int64)a6, a7, a8, a9, a10);
  }
}
