__int64 __fastcall sub_2264550(
        __int64 a1,
        const char **a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // r11
  unsigned int v9; // ebx
  char v11; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-10h] BYREF

  v8 = *a4;
  *a4 = 0;
  v12 = v8;
  v9 = sub_2263D00(
         a1,
         a2,
         a3,
         &v12,
         a5,
         a6,
         a7,
         a8,
         (void (__fastcall *)(void **, __int64, __m128i *))sub_2263960,
         (__int64)&v11);
  if ( v12 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 8LL))(v12);
  return v9;
}
