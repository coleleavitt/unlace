unsigned __int64 sub_5A690(__int64 a1, ...)
{
  const char *v2; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v3; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-C0h]
  __int64 v6; // [rsp+48h] [rbp-B0h]
  __int64 v7; // [rsp+50h] [rbp-A8h]
  __int64 v8; // [rsp+58h] [rbp-A0h]
  __int64 v9; // [rsp+60h] [rbp-98h]
  __int64 v10; // [rsp+68h] [rbp-90h]

  va_start(va, a1);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v5 = __readfsqword(0x28u);
  v2 = nullptr;
  v3 = 0;
  sub_20090((__int64 *)&v2, a1, (const __m128i *)va, v8, v9, v10);
  sub_1D740((__int64)"%s", v2);
  sub_16F70();
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree(v2);
  }
  return v5 - __readfsqword(0x28u);
}
