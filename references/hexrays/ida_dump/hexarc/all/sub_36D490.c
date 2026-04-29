__int64 __fastcall sub_36D490(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  result = 0;
  if ( *(char *)(a1 + 16) < 0 )
  {
    v3[0] = -1;
    v2 = calc_thunk_func_target(a1, v3);
    result = is_spec_ea(v2);
    if ( !(_BYTE)result )
      return is_spec_ea(v3[0]);
  }
  return result;
}
