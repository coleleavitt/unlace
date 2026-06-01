__int64 __fastcall sub_833810(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  bool v7; // cc
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rdi

  if ( *(_DWORD *)a2 != 6 )
  {
    *(_BYTE *)a1 = 1;
    v5 = a1 + 8;
    v6 = a2 + 8;
    if ( *(_DWORD *)(a1 + 16) <= 0x40u && *(_DWORD *)(a2 + 16) <= 0x40u )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    }
    else
    {
      sub_2585EA0(v5, v6);
    }
    v7 = *(_DWORD *)(a1 + 32) <= 0x40u;
    *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 20);
    if ( v7 && *(_DWORD *)(a2 + 32) <= 0x40u )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
    }
    else
    {
      sub_2585EA0(a1 + 24, a2 + 24);
    }
    result = *(unsigned __int8 *)(a2 + 36);
    *(_BYTE *)(a1 + 36) = result;
    return result;
  }
  *(_BYTE *)a1 = 0;
  v9 = *(_QWORD *)(a1 + 40);
  v10 = a1 + 40;
  v11 = sub_2575D20(a1, a2, a3);
  v12 = *(_QWORD *)(a2 + 8);
  if ( v9 == v11 )
  {
    if ( v12 == v11 )
    {
      sub_257D030(a1 + 40, a2 + 8);
      goto LABEL_13;
    }
LABEL_17:
    if ( a2 + 8 != v10 )
    {
      sub_5FF3B0((__int64 *)(a1 + 40));
      v13 = a2 + 8;
      if ( v11 == *(_QWORD *)(a2 + 8) )
        sub_257CF50(v10, v13);
      else
        sub_25768A0(v10, v13);
    }
    goto LABEL_13;
  }
  if ( v12 == v11 )
    goto LABEL_17;
  sub_2576220(a1 + 40, a2 + 8);
LABEL_13:
  result = *(_QWORD *)(a2 + 32);
  if ( *(_QWORD *)(a1 + 64) == v11 )
  {
    if ( result == v11 )
      return sub_257D030(a1 + 64, a2 + 32);
  }
  else if ( result != v11 )
  {
    return sub_2576220(a1 + 64, a2 + 32);
  }
  if ( a1 + 64 != a2 + 32 )
  {
    sub_5FF3B0((__int64 *)(a1 + 64));
    v14 = a2 + 32;
    v15 = a1 + 64;
    if ( v11 == *(_QWORD *)(a2 + 32) )
      return sub_257CF50(v15, v14);
    else
      return sub_25768A0(v15, v14);
  }
  return result;
}

