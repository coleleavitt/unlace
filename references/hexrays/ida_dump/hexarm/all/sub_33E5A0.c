__int64 sub_33E5A0(__int64 a1, unsigned int a2, ...)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rdi
  __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-D0h]

  v7 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 120);
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    v4 = v3[2];
    va_start(va, a2);
    result = ((__int64 (__fastcall *)(__int64, _QWORD, __va_list_tag *))v3[1])(v4, a2, va);
    if ( result )
      return result;
  }
  return 0;
}
