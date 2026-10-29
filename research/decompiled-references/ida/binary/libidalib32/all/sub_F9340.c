unsigned __int64 sub_F9340(__int64 a1, ...)
{
  __int64 v1; // rax
  __int64 v2; // r9
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v5 = __readfsqword(0x28u);
  v1 = itext();
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 2, v1, va, &callui, v2);
  return v5 - __readfsqword(0x28u);
}

