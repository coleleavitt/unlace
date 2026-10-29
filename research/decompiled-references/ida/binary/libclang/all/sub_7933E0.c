char *__fastcall sub_7933E0(__int64 a1, __int64 a2)
{
  char *v2; // r11
  bool v4; // r8
  bool v5; // r10
  char v6; // cl
  bool v7; // si
  bool v8; // r9
  char v9; // bl
  char v10; // si
  char v11; // r10
  char v12; // r9

  v4 = a2 != 4;
  v5 = a2 != 5;
  switch ( a2 )
  {
    case 7LL:
      if ( *(_DWORD *)a1 != 1919184481 || (v6 = 1, v2 = "Android", *(_DWORD *)(a1 + 3) != 1684631410) )
      {
        if ( *(_DWORD *)a1 != 1751348582 || (v6 = 1, v2 = "Fuchsia", *(_DWORD *)(a1 + 3) != 1634300776) )
        {
          if ( *(_DWORD *)a1 == 1668571511 && *(_DWORD *)(a1 + 3) == 1936681059 )
          {
            v6 = 1;
            v7 = 1;
            v2 = "watchOS";
            goto LABEL_12;
          }
          v6 = 0;
          goto LABEL_11;
        }
        goto LABEL_27;
      }
LABEL_9:
      if ( !((unsigned __int8)v6 | (a2 != 9)) )
      {
LABEL_10:
        if ( *(_QWORD *)a1 == 0x696B726576697264LL && *(_BYTE *)(a1 + 8) == 116 )
        {
          v6 = 1;
          v7 = a2 != 18;
          v2 = "DriverKit";
          goto LABEL_13;
        }
        goto LABEL_11;
      }
      goto LABEL_27;
    case 3LL:
      if ( *(_WORD *)a1 == 28521 )
      {
        v6 = 1;
        v2 = "iOS";
        if ( *(_BYTE *)(a1 + 2) == 115 )
          goto LABEL_27;
      }
      v6 = 0;
      v2 = "iOS";
      goto LABEL_9;
    case 5LL:
      if ( *(_DWORD *)a1 == 1868783981 )
      {
        v6 = 1;
        v2 = "macOS";
        if ( *(_BYTE *)(a1 + 4) == 115 )
          goto LABEL_11;
      }
      break;
    case 4LL:
      if ( *(_DWORD *)a1 == 1936684660 )
      {
        v6 = 1;
        v2 = "tvOS";
        goto LABEL_11;
      }
      v6 = 0;
      goto LABEL_27;
  }
  v6 = 0;
  if ( a2 == 9 )
    goto LABEL_10;
LABEL_27:
  if ( !((unsigned __int8)v6 | (a2 != 17)) )
  {
    v7 = a2 != 18;
    if ( !(*(_QWORD *)(a1 + 8) ^ 0x6F69736E65747865LL | *(_QWORD *)a1 ^ 0x5F7070615F736F69LL)
      && *(_BYTE *)(a1 + 16) == 110 )
    {
      v6 = 1;
      v8 = a2 != 11;
      v2 = "iOS (App Extension)";
      goto LABEL_14;
    }
    goto LABEL_12;
  }
LABEL_11:
  v7 = a2 != 18;
  if ( !((unsigned __int8)v6 | (a2 != 19)) )
  {
    if ( !(*(_QWORD *)(a1 + 8) ^ 0x736E657478655F70LL | *(_QWORD *)a1 ^ 0x70615F736F63616DLL)
      && *(_DWORD *)(a1 + 15) == 1852795251 )
    {
      v6 = 1;
      v8 = a2 != 11;
      v2 = "macOS (App Extension)";
      goto LABEL_15;
    }
    goto LABEL_13;
  }
LABEL_12:
  if ( !((unsigned __int8)v6 | v7) )
  {
    v8 = a2 != 11;
    if ( !(*(_QWORD *)(a1 + 8) ^ 0x69736E657478655FLL | *(_QWORD *)a1 ^ 0x7070615F736F7674LL)
      && *(_WORD *)(a1 + 16) == 28271 )
    {
      v6 = 1;
      v2 = "tvOS (App Extension)";
      goto LABEL_20;
    }
    goto LABEL_14;
  }
LABEL_13:
  v8 = a2 != 11;
  if ( !((unsigned __int8)v6 | (a2 != 21)) )
  {
    if ( !(*(_QWORD *)(a1 + 8) ^ 0x657478655F707061LL | *(_QWORD *)a1 ^ 0x5F736F6863746177LL)
      && *(_QWORD *)(a1 + 13) == 0x6E6F69736E657478LL )
    {
      return "watchOS (App Extension)";
    }
    goto LABEL_15;
  }
LABEL_14:
  if ( !((unsigned __int8)v6 | v8) )
  {
    if ( *(_QWORD *)a1 == 0x6C6174616363616DLL && *(_DWORD *)(a1 + 7) == 1953724780 )
      return "macCatalyst";
    v9 = v6 | v4;
    goto LABEL_16;
  }
LABEL_15:
  v9 = v6 | v4;
  if ( !((unsigned __int8)v6 | (a2 != 25)) )
  {
    if ( !(*(_QWORD *)(a1 + 8) ^ 0x5F7070615F747379LL | *(_QWORD *)a1 ^ 0x6C6174616363616DLL)
      && !(*(_QWORD *)(a1 + 17) ^ 0x6E6F69736E657478LL | *(_QWORD *)(a1 + 9) ^ 0x655F7070615F7473LL) )
    {
      return "macCatalyst (App Extension)";
    }
    v10 = v6 | v7;
    goto LABEL_17;
  }
LABEL_16:
  v10 = v6 | v7;
  if ( !v9 )
  {
    if ( *(_DWORD *)a1 == 1936683640 )
      return "visionOS";
    v11 = v6 | v5;
    goto LABEL_18;
  }
LABEL_17:
  v11 = v6 | v5;
  if ( !v10 )
  {
    if ( !(*(_QWORD *)(a1 + 8) ^ 0x69736E657478655FLL | *(_QWORD *)a1 ^ 0x7070615F736F7278LL)
      && *(_WORD *)(a1 + 16) == 28271 )
    {
      return "visionOS (App Extension)";
    }
    v12 = v6 | v8;
    goto LABEL_19;
  }
LABEL_18:
  v12 = v6 | v8;
  if ( !v11 )
  {
    if ( *(_DWORD *)a1 == 1718187891 && *(_BYTE *)(a1 + 4) == 116 )
      return "Swift";
    goto LABEL_20;
  }
LABEL_19:
  if ( !v12 )
  {
    if ( *(_QWORD *)a1 == 0x6F6D726564616873LL && *(_DWORD *)(a1 + 7) == 1818584175 )
      return "Shader Model";
    goto LABEL_37;
  }
LABEL_20:
  if ( (unsigned __int8)v6 | v4 )
  {
LABEL_37:
    if ( v6 )
      return v2;
    return nullptr;
  }
  v2 = "OpenHarmony OS";
  if ( *(_DWORD *)a1 != 1936681071 )
    return nullptr;
  return v2;
}

