__int64 __fastcall sub_438160(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  unsigned __int8 (__fastcall **v3[3])(_QWORD, __int64 *); // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v3[1] = (unsigned __int8 (__fastcall **)(_QWORD, __int64 *))__readfsqword(0x28u);
  if ( ((v1 - 63) & 0xFFFFFFFD) != 0 )
  {
    result = 0;
    if ( v1 == 66 )
      return sub_44B530(a1);
  }
  else
  {
    v3[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64 *))scan_and_commit_action_t___vtable;
    return sub_438030(v3, (char *)a1, 1u);
  }
  return result;
}
