__int64 __fastcall sub_14793D0(__int64 a1)
{
  _WORD *v1; // rax
  __int64 v2; // rdx
  unsigned int v3; // ecx
  bool v4; // si

  v1 = sub_1479360((_WORD *)(*(_QWORD *)(a1 + 16) + 16LL), **(unsigned int **)(a1 + 16));
  if ( v2 == 14 )
  {
    if ( *(_QWORD *)v1 != 0x6465726975716361LL || *((_DWORD *)v1 + 2) != 1952866655 || (v3 = 1, v1[6] != 29285) )
      v3 = 0;
    v4 = 1;
  }
  else
  {
    if ( v2 != 15 )
    {
      if ( v2 == 10 )
      {
        if ( *(_QWORD *)v1 != 0x5F6465746E756F63LL || v1[4] != 31074 )
        {
          if ( *(_QWORD *)v1 == 0x5F64656472617567LL && v1[4] == 31074 )
            return 1;
          v3 = 0;
          goto LABEL_14;
        }
      }
      else
      {
        v4 = v2 != 13;
        if ( v2 != 18 )
        {
          v3 = 0;
          goto LABEL_5;
        }
        if ( *(_QWORD *)v1 ^ 0x5F6465746E756F63LL | *((_QWORD *)v1 + 1) ^ 0x756E5F726F5F7962LL || v1[8] != 27756 )
        {
          v3 = 0;
          goto LABEL_6;
        }
      }
      v3 = 1;
      goto LABEL_6;
    }
    if ( *(_QWORD *)v1 != 0x6465726975716361LL
      || *((_DWORD *)v1 + 2) != 1717920351
      || v1[6] != 29295
      || (v4 = 1, v3 = 1, *((_BYTE *)v1 + 14) != 101) )
    {
      v4 = 1;
      v3 = 0;
    }
  }
LABEL_5:
  if ( !((unsigned __int8)v3 | v4) )
  {
    if ( *(_QWORD *)v1 == 0x64726175675F7470LL && *((_DWORD *)v1 + 2) == 1650418789 && *((_BYTE *)v1 + 12) == 121 )
      return 1;
    goto LABEL_14;
  }
LABEL_6:
  if ( !((unsigned __int8)v3 | (v2 != 8)) )
  {
    if ( *(_QWORD *)v1 == 0x79625F64657A6973LL )
      return 1;
    goto LABEL_15;
  }
LABEL_14:
  if ( !((unsigned __int8)v3 | (v2 != 16)) )
  {
    v3 = 0;
    if ( !(*(_QWORD *)v1 ^ 0x79625F64657A6973LL | *((_QWORD *)v1 + 1) ^ 0x6C6C756E5F726F5FLL) )
      return 1;
    return v3;
  }
LABEL_15:
  if ( (_BYTE)v3 )
    return 1;
  return v3;
}
