__int64 __fastcall sub_1F6F20(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  char v3; // dl
  _BOOL4 v4; // eax
  int v5; // eax
  unsigned __int8 *v6; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v1 = dword_8BA4F4;
  v8 = __readfsqword(0x28u);
  if ( dword_8BA4F4 < 0 )
  {
    v6 = nullptr;
    v7 = 0;
    v3 = qgetenv("IDA_CIM_INHIBIT_MOUSE_DURING_PANNING", &v6);
    v4 = 1;
    if ( v3 && (_QWORD)v7 )
    {
      v5 = *v6 - 48;
      if ( *v6 == 48 )
        v5 = v6[1];
      v4 = v5 != 0;
    }
    dword_8BA4F4 = v4;
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree(v6, (const char *)&v6);
    }
    v1 = dword_8BA4F4;
  }
  result = 0;
  if ( v1 > 0 )
    return *(_DWORD *)(a1 + 568) & 1;
  return result;
}
