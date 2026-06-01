char __fastcall sub_1BD2B60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  char result; // al
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  int v7; // edx
  _BYTE *v8; // rdi
  unsigned __int16 v9; // dx
  __int16 v10; // cx

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v3 + 16) != 13 )
    return result;
  v5 = *(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v5;
  if ( *(_BYTE *)(*(_QWORD *)v5 + 16LL) != 13 )
    return result;
  v7 = (*(_WORD *)(v3 + 18) >> 3) & 0x1FF;
  if ( v7 == 481 )
  {
    result = 1;
    v10 = (*(_WORD *)(v6 + 18) >> 3) & 0x1FF;
    if ( v10 == 482 )
      return result;
    v8 = *(_BYTE **)(a1 + 232);
    if ( (v8[1] & 8) != 0 )
      return 0;
LABEL_13:
    result = v10 == 483 || ((v10 + 26) & 0x1FFu) <= 1;
    if ( result )
      return result;
    goto LABEL_6;
  }
  v8 = *(_BYTE **)(a1 + 232);
  if ( (v8[1] & 8) == 0 && v7 == 482 )
  {
    v10 = (*(_WORD *)(v6 + 18) >> 3) & 0x1FF;
    goto LABEL_13;
  }
LABEL_6:
  if ( (v8[89] & 1) != 0 )
  {
    result = 0;
    if ( v7 == 480 )
    {
      result = 1;
      v9 = (*(_WORD *)(v6 + 18) >> 3) & 0x1FF;
      if ( (unsigned int)v9 - 481 > 1 )
      {
        if ( (v8[60] & 4) == 0 )
          return v9 == 481;
        return 0;
      }
    }
  }
  else
  {
    result = (v7 == 480) & ((v8[60] >> 2) ^ 1);
    if ( result )
    {
      v9 = (*(_WORD *)(v6 + 18) >> 3) & 0x1FF;
      return v9 == 481;
    }
  }
  return result;
}
