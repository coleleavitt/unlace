bool __fastcall sub_5791C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rsi
  bool result; // al
  __int64 v7; // rsi
  __int64 v8; // rax

  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a3 + 32);
  if ( !v3 )
  {
    if ( v4 )
      return *(_DWORD *)(v4 - 4) == 0;
    return 1;
  }
  v5 = *(unsigned int *)(v3 - 4);
  if ( !v4 )
    return (_DWORD)v5 == 0;
  result = 0;
  if ( (_DWORD)v5 != *(_DWORD *)(v4 - 4) )
    return result;
  if ( !(_DWORD)v5 )
    return 1;
  v7 = 8 * v5;
  v8 = 0;
  while ( *(_DWORD *)(*(_QWORD *)(v4 + v8) + 24LL) == *(_DWORD *)(*(_QWORD *)(v3 + v8) + 24LL) )
  {
    v8 += 8;
    if ( v8 == v7 )
      return 1;
  }
  return 0;
}

