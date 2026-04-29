__int64 __fastcall sub_3FD1A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int dword; // edx
  __int64 result; // rax
  unsigned int v8; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  v8 = -1;
  v2 = sub_CFF70(0xBBFu, &v8, v9, a2);
  if ( v2 == -1 )
    return v8;
  if ( v2 == 1 )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) == v9[0] )
      result = v8;
    *(_BYTE *)(a1 + 896) = 1;
  }
  else
  {
    v3 = sub_3FD0D0(a1, a2, (_QWORD *)(a2 + 40));
    dword = get_dword(v3, a2, v4, v5);
    result = 3;
    if ( dword != -1021043573 )
    {
      result = 1;
      if ( dword != -1021047669 )
        return v8;
    }
  }
  return result;
}
