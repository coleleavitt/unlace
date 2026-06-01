_DWORD *__fastcall sub_1E0240(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _DWORD *result; // rax
  int v4; // r8d
  int v5; // edx
  __int64 v6; // r10
  int v7; // ecx
  __int64 v8; // rsi
  _DWORD *v9; // rsi

  v2 = *(_QWORD *)(a1 + 8);
  result = *(_DWORD **)a1;
  v4 = a2;
  v5 = a2;
  v6 = a2 >> 32;
  v7 = HIDWORD(a2);
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((v2 - *(_QWORD *)a1) >> 3);
  if ( v8 >> 2 <= 0 )
  {
LABEL_17:
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        if ( v8 != 1 )
          return *(_DWORD **)(a1 + 8);
        goto LABEL_20;
      }
      if ( v4 == *result && result[1] == (_DWORD)v6 )
        return result;
      result += 14;
    }
    if ( v4 == *result && result[1] == (_DWORD)v6 )
      return result;
    result += 14;
LABEL_20:
    if ( v4 == *result )
    {
      if ( result[1] != (_DWORD)v6 )
        return *(_DWORD **)(a1 + 8);
      return result;
    }
    return *(_DWORD **)(a1 + 8);
  }
  v9 = &result[56 * (v8 >> 2)];
  while ( v5 != *result || result[1] != v7 )
  {
    if ( v5 == result[14] && result[15] == v7 )
    {
      result += 14;
      return result;
    }
    if ( v5 == result[28] && result[29] == v7 )
    {
      result += 28;
      return result;
    }
    if ( v5 == result[42] && result[43] == v7 )
    {
      result += 42;
      return result;
    }
    result += 56;
    if ( result == v9 )
    {
      v8 = 0x6DB6DB6DB6DB6DB7LL * ((v2 - (__int64)result) >> 3);
      goto LABEL_17;
    }
  }
  return result;
}
