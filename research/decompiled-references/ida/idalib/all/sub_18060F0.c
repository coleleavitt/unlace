__int64 __fastcall sub_18060F0(__int64 a1, __int64 a2)
{
  bool v2; // dl
  __int64 result; // rax
  char v4; // r9
  bool v5; // cl

  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 28521 )
    {
      v2 = 1;
      if ( *(_BYTE *)(a1 + 2) == 115 )
        goto LABEL_4;
    }
    goto LABEL_3;
  }
  if ( a2 != 5 )
  {
    if ( a2 == 11 )
    {
      if ( *(_QWORD *)a1 != 0x6C6174616363616DLL
        || *(_WORD *)(a1 + 8) != 29561
        || (result = 5, v2 = 1, *(_BYTE *)(a1 + 10) != 116) )
      {
        v2 = 0;
        result = 5;
      }
LABEL_9:
      if ( a2 == 8 && !v2 )
      {
        v4 = 1;
        if ( *(_QWORD *)a1 == 0x736F656764697262LL )
        {
          result = 29;
          v2 = 1;
          v5 = 1;
          goto LABEL_20;
        }
        goto LABEL_19;
      }
      goto LABEL_17;
    }
    if ( a2 == 4 )
    {
      result = 27;
      if ( *(_DWORD *)a1 != 1936684660 )
        result = 5;
      v2 = *(_DWORD *)a1 == 1936684660;
LABEL_17:
      if ( !v2 && a2 == 17 )
      {
        if ( !(*(_QWORD *)a1 ^ 0x5F7070615F736F69LL | *(_QWORD *)(a1 + 8) ^ 0x6F69736E65747865LL)
          && *(_BYTE *)(a1 + 16) == 110 )
        {
          v2 = 1;
          result = 5;
          v5 = a2 != 18;
        }
        else
        {
          v5 = a2 != 18;
          if ( !v2 && a2 == 19 )
            goto LABEL_40;
        }
        goto LABEL_21;
      }
      goto LABEL_18;
    }
LABEL_3:
    v2 = 0;
LABEL_4:
    result = 5;
    goto LABEL_30;
  }
  if ( *(_DWORD *)a1 != 1868783981 || (v2 = 1, result = 9, *(_BYTE *)(a1 + 4) != 115) )
  {
    v2 = 0;
    result = 9;
  }
LABEL_30:
  if ( v2 || a2 != 7 )
    goto LABEL_9;
  if ( *(_DWORD *)a1 != 1668571511 || *(_WORD *)(a1 + 4) != 28520 || *(_BYTE *)(a1 + 6) != 115 )
    goto LABEL_17;
  v2 = 1;
  result = 28;
LABEL_18:
  v4 = v2 || a2 != 25;
LABEL_19:
  v5 = a2 != 18;
  if ( v4 )
  {
LABEL_20:
    if ( v2 || a2 != 19 )
      goto LABEL_21;
LABEL_40:
    if ( !(*(_QWORD *)a1 ^ 0x70615F736F63616DLL | *(_QWORD *)(a1 + 8) ^ 0x736E657478655F70LL)
      && *(_WORD *)(a1 + 16) == 28521
      && *(_BYTE *)(a1 + 18) == 110 )
    {
      result = 9;
      v2 = 1;
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  if ( !(*(_QWORD *)a1 ^ 0x6C6174616363616DLL | *(_QWORD *)(a1 + 8) ^ 0x5F7070615F747379LL)
    && *(_QWORD *)(a1 + 16) == 0x6F69736E65747865LL
    && *(_BYTE *)(a1 + 24) == 110 )
  {
    v2 = 1;
    result = 5;
LABEL_22:
    if ( !v2 && a2 == 21 )
    {
      if ( !(*(_QWORD *)a1 ^ 0x5F736F6863746177LL | *(_QWORD *)(a1 + 8) ^ 0x657478655F707061LL)
        && *(_DWORD *)(a1 + 16) == 1869181806
        && *(_BYTE *)(a1 + 20) == 110 )
      {
        return 28;
      }
      goto LABEL_24;
    }
    goto LABEL_23;
  }
LABEL_21:
  if ( v5 || v2 )
    goto LABEL_22;
  if ( !(*(_QWORD *)a1 ^ 0x7070615F736F7674LL | *(_QWORD *)(a1 + 8) ^ 0x69736E657478655FLL)
    && *(_WORD *)(a1 + 16) == 28271 )
  {
    v2 = 1;
    result = 27;
    goto LABEL_24;
  }
LABEL_23:
  if ( v2 || a2 != 4 )
  {
LABEL_24:
    if ( v2 || v5 )
      goto LABEL_25;
    if ( *(_QWORD *)a1 ^ 0x7070615F736F7278LL | *(_QWORD *)(a1 + 8) ^ 0x69736E657478655FLL
      || *(_WORD *)(a1 + 16) != 28271 )
    {
      return 0;
    }
    return 31;
  }
  if ( *(_DWORD *)a1 == 1936683640 )
    return 31;
LABEL_25:
  if ( !v2 )
    return 0;
  return result;
}
