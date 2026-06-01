__int64 __fastcall sub_438B70(__int64 a1, __int64 a2)
{
  bool v2; // zf
  unsigned int v3; // ecx
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a2 + 8) == 66;
  v3 = 11;
  v5[1] = __readfsqword(0x28u);
  v5[0] = open_file_action_t___vtable;
  if ( v2 )
    v3 = 139;
  return sub_438700((__int64)v5, a1, (char *)a2, v3);
}
