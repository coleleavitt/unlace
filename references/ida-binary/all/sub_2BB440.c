__int64 sub_2BB440(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  __int64 result; // rax
  __int64 (__fastcall *v4)(_QWORD, _QWORD, __va_list_tag *); // rcx
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-C0h]

  va_start(va, a3);
  v6 = __readfsqword(0x28u);
  result = 0;
  if ( a2 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __va_list_tag *))(a2 + 56);
    if ( v4 )
      return v4(*(_QWORD *)(a2 + 64), a3, va);
  }
  return result;
}
