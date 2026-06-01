void __fastcall sub_12440D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char **a4,
        _DWORD *a5,
        _QWORD *a6,
        __m128 a7,
        __m128i a8)
{
  int v12; // eax
  int v13; // r8d
  char *v14; // r13
  size_t v16; // rcx

  v12 = a5[2];
  v13 = *(_DWORD *)(a3 + 12);
  if ( v12 && *(_DWORD *)(*(_QWORD *)a5 + 24LL) == 60 && v13 == 58 )
  {
    sub_1238FC0(a2, a4, (__int64)a5, a6, a3, a1, a7, a8);
  }
  else if ( v13 == 64 )
  {
    v14 = (char *)*a4;
    v16 = 0;
    if ( *a4 )
      v16 = strlen(*a4);
    sub_1236660(a2, a3, v14, v16, (__int64)a5, a6, a7, a8, a1);
  }
  else
  {
    sub_1242CB0(a1, a2, a3, (__int64)a5, a4, (__int64)a6, a7, *(double *)a8.m128i_i64);
  }
}
