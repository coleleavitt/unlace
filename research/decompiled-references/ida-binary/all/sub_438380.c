__int64 __fastcall sub_438380(__int64 a1)
{
  bool v1; // zf
  unsigned __int8 (__fastcall **v3[3])(_QWORD, __int64 *); // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 8) == 66;
  v3[1] = (unsigned __int8 (__fastcall **)(_QWORD, __int64 *))__readfsqword(0x28u);
  if ( v1 )
    return sub_44BBE0(a1);
  v3[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64 *))revert_action_t___vtable;
  return sub_438030(v3, (char *)a1, 1u);
}
