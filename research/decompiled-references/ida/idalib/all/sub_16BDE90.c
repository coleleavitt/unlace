__int64 __fastcall sub_16BDE90(__int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v4; // rsi
  unsigned int v5; // r13d
  bool v6; // al
  int v7; // edx
  __int64 result; // rax
  bool v9; // al
  int v10; // eax
  char v11; // dl
  int v12; // edx

  v2 = (__int64 *)(a1 + 16);
  v4 = a1 + 16;
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( (int)sub_2205DB0(a1, v4) > 0 )
      goto LABEL_3;
  }
  else if ( (int)sub_2205E20(a1, v4) > 0 )
  {
LABEL_3:
    v5 = *(_DWORD *)(a2 + 8);
    if ( v5 <= 0x40 )
    {
      if ( *(_QWORD *)a2 )
      {
        result = 72;
        if ( !v5 )
          return result;
        v6 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v5) == *(_QWORD *)a2;
        goto LABEL_6;
      }
    }
    else if ( v5 != (unsigned int)sub_2206780(a2) )
    {
      v6 = v5 == (unsigned int)sub_2206980(a2);
LABEL_6:
      if ( v6 )
        return 72;
      if ( *(_BYTE *)(a2 + 12) )
      {
        v7 = sub_2205DB0(a2, a1);
        result = 64;
        if ( v7 >= 0 )
          return result;
        v9 = (int)sub_2205DB0(a2, v2) <= 0;
        return !v9 ? 32 : 64;
      }
      v12 = sub_2205E20(a2, a1);
      result = 64;
      if ( v12 < 0 )
      {
        v9 = (int)sub_2205E20(a2, v2) <= 0;
        return !v9 ? 32 : 64;
      }
      return result;
    }
    return 66;
  }
  v10 = sub_98E2D0((__int64 *)a2, (__int64 *)a1);
  if ( v10 )
  {
    if ( v10 == 1 )
      return dword_26403F8[(unsigned int)sub_98E2D0((__int64 *)a2, v2) + 1];
    else
      return 35;
  }
  if ( *(_DWORD *)(a1 + 8) <= 0x40u )
    v11 = *(_QWORD *)a1 == *(_QWORD *)(a1 + 16);
  else
    v11 = sub_2205D70(a1, v2);
  result = 90;
  if ( !v11 )
    return 66;
  return result;
}
