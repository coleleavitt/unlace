unsigned __int64 __fastcall sub_1EE1230(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  int v6; // eax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  int v9; // edi
  unsigned __int64 v10; // rax
  _QWORD v11[4]; // [rsp+8h] [rbp-20h] BYREF

  result = a3;
  v11[0] = a3;
  if ( a3 <= 0x13 )
    return result;
  if ( *(_QWORD *)(a2 + 856) && (sub_1EDF870(a1, a2), HIDWORD(result) = HIDWORD(v11[0]), v11[0] <= 0x13u) )
  {
    v4 = 0;
    v5 = (unsigned int)sub_B8F2E0((__int64)v11);
  }
  else
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL * (unsigned int)(HIDWORD(result) - 1));
    v5 = (unsigned int)sub_B8F2E0((__int64)v11);
    result = v5 + 20;
    if ( a2 == v4 )
      return result;
  }
  v6 = *(_DWORD *)(a2 + 3328);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD **)(a2 + 3320);
  v8 = 0;
  if ( *v7 != v4 )
  {
    while ( 1 )
    {
      v9 = v8;
      if ( v6 - 1 == v8 )
        break;
      if ( v7[++v8] == v4 )
      {
        if ( v9 == -2 )
          return 0;
        v10 = (unsigned __int64)(unsigned int)(v9 + 2) << 32;
        return v5 | v10;
      }
    }
    return 0;
  }
  v10 = 0x100000000LL;
  return v5 | v10;
}
