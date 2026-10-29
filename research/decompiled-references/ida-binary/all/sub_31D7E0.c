__int64 __fastcall sub_31D7E0(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rsi
  unsigned int v10; // ebx
  const char *v12; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]
  unsigned __int64 v14; // [rsp+18h] [rbp-10h]

  v9 = nullptr;
  v14 = __readfsqword(0x28u);
  sub_319840((__int64)&v12, 0, 0, (__int64)"Import script from file", a2, a3, a4, a5, a6, a7, a8, a9);
  if ( v13 <= 1 )
  {
    v10 = 0;
  }
  else
  {
    sub_31D450(a1, 1);
    v9 = &s1;
    if ( v13 )
      v9 = v12;
    (*(void (__fastcall **)(_QWORD, const char *))(*(_QWORD *)*a1 + 80LL))(*a1, v9);
    sub_31D200(a1);
    v10 = 1;
  }
  if ( v12 )
  {
    v13 = 0;
    qfree(v12, v9);
  }
  return v10;
}
