__int64 __fastcall sub_7EE690(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  _QWORD v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v10[0] = a2;
  v2 = sub_B03EA0(v10);
  if ( !v2 )
  {
    v7 = sub_B03E80(v10);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 > 7 )
        return sub_7EE440(a1, v8 & 0xFFFFFFFFFFFFFFF8LL);
    }
    return 1;
  }
  v3 = *(_QWORD *)(v2 + 8);
  v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v3 <= 7 )
    return 1;
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 <= 7 || (result = sub_7EE440(a1, v5 & 0xFFFFFFFFFFFFFFF8LL), (_BYTE)result) )
  {
    if ( (unsigned int)sub_A7AE10(v4) - 3 > 1 )
      return 1;
    v9 = 0;
    if ( ((*(__int64 *)(v4 + 8) >> 1) & 3uLL) - 2 <= 1 )
      v9 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    return sub_7EDF40(a1, v9);
  }
  return result;
}

