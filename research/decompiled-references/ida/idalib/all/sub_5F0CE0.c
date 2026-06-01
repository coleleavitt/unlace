__int64 __fastcall sub_5F0CE0(__int64 a1, const char *a2, int a3, const char *a4)
{
  __int64 v7; // rdi

  sub_5EFDF0((__m128i *)(a1 + 632), a3, a4);
  v7 = *(_QWORD *)(a1 + 504);
  if ( v7 )
  {
    sub_391AE0(v7, (__int64)"\n/* %s:%d '%s'*/", a2, a3, a4);
    qflush(*(FILE **)(a1 + 504));
  }
  return 0;
}
