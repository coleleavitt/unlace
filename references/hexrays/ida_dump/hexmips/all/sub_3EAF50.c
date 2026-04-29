__int64 __fastcall sub_3EAF50(__int64 a1, __int64 a2, int a3, double a4)
{
  int v5; // edx
  unsigned __int16 v6; // ax
  __int64 result; // rax
  __int64 v8; // [rsp-10h] [rbp-28h]
  __int64 v9; // [rsp-10h] [rbp-28h]

  v5 = *(unsigned __int16 *)(a1 + 890);
  if ( (((_WORD)v5 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCA7u, a2, a4);
LABEL_25:
    BUG();
  }
  v6 = *(_WORD *)(a1 + 48);
  if ( v6 == 524 )
  {
    result = *(_QWORD *)(a1 + 832);
    if ( *(_DWORD *)(result + 80) != 4 || (a3 & 1) == 0 )
    {
      sub_3EAB70(a1, 4u, v5, (int)a2, 0x3BEA45E214ADDC55LL, v5 + a3, 0);
      return v9;
    }
  }
  else
  {
    if ( v6 > 0x20Cu )
    {
      if ( v6 == 542 )
        goto LABEL_15;
      if ( v6 != 543 )
        goto LABEL_21;
    }
    else if ( v6 != 57 )
    {
      if ( v6 == 521 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 4 && (a3 & 1) != 0 )
          return sub_3EAB70(a1, 0x3Du, v5, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, (int)a2, 0);
        else
          return sub_3EAB70(a1, 4u, v5, v5 + a3, 0x3BEA45E214ADDC55LL, (int)a2, 0);
      }
      if ( v6 == 54 )
      {
LABEL_15:
        sub_3EAB70(a1, 4u, v5, a3, 0x3BEA45E214ADDC55LL, (int)a2, 0);
        return v8;
      }
LABEL_21:
      if ( !under_debugger )
        sub_37E160(0xCC64u, a2, a4);
      goto LABEL_25;
    }
    result = sub_3EAB70(a1, 4u, v5, (int)a2, 0x3BEA45E214ADDC55LL, a3, 0);
    if ( *(_WORD *)(a1 + 890) == 4 )
    {
      result = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(result + 80) == 8 )
        return sub_1D1F50(a1, 0x3Du, 4, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, a3 + 4, 0);
    }
  }
  return result;
}
