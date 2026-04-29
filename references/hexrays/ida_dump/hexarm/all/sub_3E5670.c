unsigned __int64 sub_3E5670(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-D0h]
  __int64 v8; // [rsp+30h] [rbp-B8h]
  __int64 v9; // [rsp+38h] [rbp-B0h]
  __int64 v10; // [rsp+40h] [rbp-A8h]
  __int64 v11; // [rsp+48h] [rbp-A0h]

  va_start(va, a2);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v2 = v9;
  v10 = va_arg(va, _QWORD);
  v3 = v10;
  v11 = va_arg(va, _QWORD);
  v4 = v11;
  va_end(va);
  va_start(va, a2);
  v7 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_6B1E0((__int64 *)a1, a2, (const __m128i *)va, v2, v3, v4);
  return v7 - __readfsqword(0x28u);
}
