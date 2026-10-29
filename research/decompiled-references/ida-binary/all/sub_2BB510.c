__int64 sub_2BB510(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 (__fastcall *v5)(_QWORD, __int64, __va_list_tag *); // rcx
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v7 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 440);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(v2 + 8);
  result = 0;
  if ( v3 )
  {
    v5 = *(__int64 (__fastcall **)(_QWORD, __int64, __va_list_tag *))(v3 + 56);
    if ( v5 )
      return v5(*(_QWORD *)(v3 + 64), a2, va);
  }
  return result;
}
