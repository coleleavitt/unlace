__int64 __fastcall sub_64BE30(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  _DWORD *v5; // rsi
  __int64 result; // rax
  int v7; // ecx
  _DWORD *v8; // rax
  unsigned int v9; // [rsp+0h] [rbp-Ch]

  if ( !a2 )
    a2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 64);
  if ( !v3 || (*(_BYTE *)(v3 + 8) & 2) == 0 )
    return 0;
  v4 = *(_DWORD *)(v3 + 48);
  if ( a3 >= v4 )
    return 0;
  v5 = *(_DWORD **)(v3 + 40);
  if ( !v5 )
  {
    v9 = a3;
    v8 = sub_64AEC0(v3, 0);
    a3 = v9;
    v5 = v8;
  }
  result = a3;
  while ( 1 )
  {
    v7 = v5[(unsigned int)result];
    if ( v7 + 0x80000000 > 0x7FFFFFFE )
      break;
    result = v7 & 0x7FFFFFFF;
    if ( (v7 & 0x7FFFFFFF) == 0 || (unsigned int)result >= v4 )
    {
      if ( !under_debugger )
        interr(144);
      BUG();
    }
  }
  return result;
}
