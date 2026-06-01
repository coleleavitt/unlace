__int64 sub_293760(__int64 a1, __int64 a2, ...)
{
  __int64 (__fastcall *v2)(_QWORD, __int64, __va_list_tag *); // rcx
  __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(_QWORD, __int64, __va_list_tag *))(a1 + 56);
  result = 0;
  if ( v2 )
    return v2(*(_QWORD *)(a1 + 64), a2, va);
  return result;
}
