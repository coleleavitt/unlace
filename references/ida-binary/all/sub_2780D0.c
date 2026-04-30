__int64 __fastcall sub_2780D0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx

  v3 = *(_QWORD *)(a1 + 112);
  v4 = a2;
  if ( !v3 )
    return -1;
  v5 = *(_QWORD *)(v3 + 104);
  result = -1;
  if ( !v5 )
    return result;
  v7 = 0;
  if ( (a3 & 3) != 0 )
    v7 = 2 * ((a3 & 3) == 1) - 1;
  if ( (a3 & 0x10) == 0 )
  {
    result = a2 + v7;
    if ( result < 0 || result >= v5 )
      return -1;
    return result;
  }
  v8 = v7;
  v9 = v4 + v7;
  if ( (a3 & 0x20) == 0 )
    v4 = v9;
  result = v4;
  if ( v4 < 0 || v4 >= v5 )
    return -1;
  v10 = v4 + v8;
  while ( *(_DWORD *)(*(_QWORD *)(v3 + 96) + 32 * v4 + 24) != 3 )
  {
    v4 = v10;
    result += v8;
    if ( result < 0 || v10 >= v5 )
      return -1;
    v10 += v8;
  }
  if ( result >= v5 )
    return -1;
  return result;
}
