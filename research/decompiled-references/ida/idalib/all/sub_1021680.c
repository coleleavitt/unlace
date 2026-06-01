__int64 __fastcall sub_1021680(__int64 a1, int a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _DWORD *v6; // rax
  _BYTE v7[25]; // [rsp+Fh] [rbp-19h] BYREF

  v7[0] = 0;
  v2 = sub_10214C0(a1, a2);
  v3 = sub_101FA50(a1, v2, v7);
  if ( v7[0] )
    return 0;
  v4 = v3;
  result = 0;
  if ( v4 && *(char *)(v4 + 3) >= 0 )
  {
    if ( *(char *)(v4 + 15) < 0 && (v6 = sub_101F540(*(_QWORD *)(a1 + 488), v2, HIDWORD(v2))) != nullptr )
      return (unsigned int)v6[3];
    else
      return *(_QWORD *)(v4 + 16) & 7LL;
  }
  return result;
}
