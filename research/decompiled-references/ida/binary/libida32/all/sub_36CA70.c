__int64 __fastcall sub_36CA70(char *a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  vars0[0] = 0;
  v2 = sub_36C270((__int64)vars0, a1, 0);
  if ( !v2 )
    *(_DWORD *)(a2 + 8) = get_tinfo_size(0, vars0[0], 0);
  clear_tinfo_t(vars0);
  return v2;
}

