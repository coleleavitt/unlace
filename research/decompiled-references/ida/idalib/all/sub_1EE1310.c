unsigned __int64 __fastcall sub_1EE1310(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  _DWORD *v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7[6]; // [rsp+8h] [rbp-30h] BYREF

  result = a3;
  v7[0] = a3;
  if ( a3 > 0x13 )
  {
    v4 = (_DWORD *)a2;
    v5 = HIDWORD(a3);
    v6 = (unsigned int)sub_B8F2E0((__int64)v7);
    if ( *(_QWORD *)(a2 + 856) )
      sub_1EDF870(a1, a2);
    if ( v5 )
      v4 = *(_DWORD **)(*(_QWORD *)(a2 + 3320) + 8LL * (unsigned int)(v5 - 1));
    else
      v6 = (unsigned int)(v6 - 20);
    return v6 | ((unsigned __int64)(unsigned int)(*v4 + 1) << 32);
  }
  return result;
}
