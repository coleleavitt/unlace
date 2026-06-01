__int64 __fastcall sub_6CC3B0(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rax

  result = a1[175];
  if ( !result )
  {
    v2 = sub_6C4160((__int64)a1, a1[2311]);
    result = sub_6BAD90(a1, v2, "__builtin_ms_va_list", 0x14u);
    a1[175] = result;
  }
  return result;
}

