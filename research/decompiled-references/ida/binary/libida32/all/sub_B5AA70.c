_QWORD *__fastcall sub_B5AA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  _QWORD *result; // rax
  char v9; // bp

  if ( (*(_BYTE *)(a1 + 74) & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 40);
    if ( (v6 & 7) == 0 )
    {
      v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v7 )
      {
        if ( (*(_BYTE *)(v7 + 4) & 0x10) != 0 )
          sub_B68980();
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 59 > 2 )
  {
    result = (_QWORD *)a1;
    v9 = 0;
    while ( (*((_BYTE *)result + 74) & 1) == 0 )
    {
      if ( (result[12] & 3) != 0 )
      {
        if ( v9 )
          return nullptr;
        v9 = 1;
      }
      result = sub_6E4DB0(result + 12, (__int64)result, a3, a4, a5, a6);
      if ( (_QWORD *)a1 == result || !result )
        return nullptr;
    }
  }
  else
  {
    result = *(_QWORD **)(a1 + 128);
    if ( result )
      return (_QWORD *)result[11];
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
    result = *(_QWORD **)(a1 + 128);
    if ( result )
      return (_QWORD *)result[11];
  }
  return result;
}

