__int64 __fastcall sub_183280(_BYTE *a1)
{
  _BYTE *v1; // rax
  __int64 result; // rax
  _DWORD *v3; // rdi
  char *v4; // rdi
  __int64 v5; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  v1 = sub_121C40(a1, 0);
  if ( *v1 != 4 )
    return 0;
  v3 = *((_DWORD **)v1 + 1);
  if ( *v3 != 20 )
    return 0;
  v4 = (char *)sub_11C2E0((__int64)v3, &v5);
  if ( !v4 )
    return 0;
  if ( !(unsigned __int8)sub_11F7C0(v4, v6, 0) )
    return 0;
  result = v5;
  if ( v6[0] != 3 )
    return 0;
  return result;
}
