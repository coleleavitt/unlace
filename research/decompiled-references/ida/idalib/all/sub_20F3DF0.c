__int64 __fastcall sub_20F3DF0(__int64 a1, __int64 a2)
{
  bool v2; // cl
  __int64 result; // rax

  if ( a2 == 7 )
  {
    if ( *(_DWORD *)a1 == 1635151465 && *(_WORD *)(a1 + 4) == 26988 )
    {
      v2 = *(_BYTE *)(a1 + 6) == 100;
      goto LABEL_4;
    }
LABEL_3:
    v2 = 0;
LABEL_4:
    result = 0;
    goto LABEL_17;
  }
  if ( a2 != 9 )
  {
    if ( a2 == 6 )
    {
      if ( *(_DWORD *)a1 != 1769366884 || (v2 = 1, result = 2, *(_WORD *)(a1 + 4) != 25955) )
      {
        v2 = 0;
        result = 0;
      }
      goto LABEL_9;
    }
    if ( a2 == 13 )
    {
      if ( *(_QWORD *)a1 == 0x645F746567726174LL && *(_DWORD *)(a1 + 8) == 1667855973 && *(_BYTE *)(a1 + 12) == 101 )
        return 3;
      return 0;
    }
    goto LABEL_3;
  }
  if ( *(_QWORD *)a1 != 0x63757274736E6F63LL || (v2 = 1, result = 1, *(_BYTE *)(a1 + 8) != 116) )
  {
    v2 = 0;
    result = 1;
  }
LABEL_17:
  if ( !v2 && a2 == 14 )
  {
    if ( *(_QWORD *)a1 == 0x6E656D656C706D69LL && *(_DWORD *)(a1 + 8) == 1769234804 && *(_WORD *)(a1 + 12) == 28271 )
      return 4;
LABEL_20:
    if ( v2 )
      return result;
    return 0;
  }
LABEL_9:
  if ( a2 != 4 )
    goto LABEL_20;
  if ( !v2 )
    return 5 * (unsigned int)(*(_DWORD *)a1 == 1919251317);
  return result;
}
