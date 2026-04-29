__int64 (__fastcall **__fastcall sub_155B0(__int64 a1, __int64 a2))()
{
  __int64 (__fastcall **result)(); // rax
  bool v3; // zf

  result = &off_8B970;
  v3 = *(_BYTE *)(a1 + 8) == 0;
  *(_QWORD *)a1 = &off_8B970;
  if ( !v3 )
  {
    result = (__int64 (__fastcall **)())get_hexdsp(a1, a2);
    if ( result )
      result = (__int64 (__fastcall **)())((__int64 (__fastcall *)(__int64, _QWORD, __int64))result)(575, sub_14200, a1);
    *(_BYTE *)(a1 + 8) = 0;
  }
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return (__int64 (__fastcall **)())qfree(*(_QWORD *)(a1 + 16));
  }
  return result;
}
