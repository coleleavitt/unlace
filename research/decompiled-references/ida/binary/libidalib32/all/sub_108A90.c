__int64 sub_108A90(__int64 a1, ...)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v6 = __readfsqword(0x28u);
  v1 = itext();
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(23, v1, va, &callui, v2, v3);
}

