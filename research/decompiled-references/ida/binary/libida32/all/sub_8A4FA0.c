__int64 sub_8A4FA0(__int64 a1, ...)
{
  __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  v3 = __readfsqword(0x28u);
  result = 0;
  if ( unk_2CAD3D0 )
  {
    va_start(va, a1);
    return ((__int64 (__fastcall *)(__int64, __va_list_tag *))sub_7A47C0)(a1, va);
  }
  return result;
}

