__int64 __fastcall sub_17F980(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  unsigned int v5; // r13d
  int v7; // edx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  bool v11; // zf
  int v12; // edx
  unsigned __int64 v13; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v14[7]; // [rsp+10h] [rbp-38h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 56 )
  {
    if ( !under_debugger )
      sub_37DDE0(51559);
    BUG();
  }
  if ( *(_BYTE *)(a2 + 64) != 8 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a2 + 72);
  v5 = *(_DWORD *)(v4 + 284);
  if ( v5 == 6 || v5 == 36 )
    return 0;
  if ( v5 != 5 && (v5 & 0xFFFFFFDF) != 2 )
    return 0xFFFFFFFFLL;
  if ( !(unsigned __int8)sub_11B8C0((char *)(*(_QWORD *)(v4 + 24) + 160LL), &v13, 0) )
    return 0xFFFFFFFFLL;
  result = (unsigned int)v13;
  if ( !(_DWORD)v13 )
    return 0xFFFFFFFFLL;
  if ( *(_BYTE *)(a2 + 64) != 8 || (v7 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + 284LL), v7 != 5) && v7 != 34 )
  {
    if ( a3 )
      return result;
    if ( (unsigned __int8)sub_11B8C0((char *)(*(_QWORD *)(v4 + 24) + 80LL), v14, 0)
      && ((unsigned __int8)(LOBYTE(v14[0]) - 32) <= 0x5Fu || (unsigned __int8)(LOBYTE(v14[0]) - 9) <= 1u) )
    {
      return (unsigned int)v13;
    }
    return 0xFFFFFFFFLL;
  }
  v8 = sub_32A730(a1, v5);
  v9 = *(_QWORD *)(v4 + 24);
  v10 = v8;
  result = v8 * v13;
  v11 = *(_BYTE *)(v9 + 80) == 3;
  v13 = result;
  if ( v11 )
  {
    v12 = sub_329E50(v9 + 80, v10);
    result = v13;
    if ( v12 != -1 && v12 < v13 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
