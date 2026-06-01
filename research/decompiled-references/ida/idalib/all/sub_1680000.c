const char *__fastcall sub_1680000(__int64 a1, __int64 a2)
{
  const char *result; // rax
  bool v3; // r9
  char v4; // cl
  bool v5; // r8
  char *v6; // r11
  char v7; // r10
  bool v8; // r8
  bool v9; // r10
  bool v10; // r8
  bool v11; // r10
  char v12; // bp
  bool v13; // r10
  bool v14; // bp
  char v15; // r8
  bool v16; // si
  char v17; // r10

  result = (const char *)a1;
  if ( a2 != 3 )
  {
    v3 = a2 != 4;
    if ( a2 == 5 )
    {
      if ( *(_DWORD *)a1 == 1868783981 && *(_BYTE *)(a1 + 4) == 115 )
      {
        v5 = 1;
        v4 = 1;
        v6 = "macOS";
LABEL_6:
        v7 = v4 | v5;
        v8 = a2 != 17;
        if ( v7 )
          goto LABEL_7;
        goto LABEL_28;
      }
      v4 = 0;
      v5 = 1;
LABEL_5:
      v6 = "iOS";
      goto LABEL_6;
    }
    goto LABEL_3;
  }
  v3 = 1;
  if ( *(_WORD *)a1 != 28521 || (v4 = 1, *(_BYTE *)(a1 + 2) != 115) )
LABEL_3:
    v4 = 0;
  v5 = a2 != 7;
  if ( (unsigned __int8)v4 | v3 )
    goto LABEL_5;
  if ( *(_DWORD *)a1 == 1936684660 )
  {
    v4 = 1;
    v8 = a2 != 17;
    v6 = "tvOS";
    goto LABEL_7;
  }
  v17 = v4 | v5;
  v6 = "iOS";
  v8 = a2 != 17;
  if ( !v17 )
  {
LABEL_28:
    if ( *(_DWORD *)a1 == 1668571511 && *(_WORD *)(a1 + 4) == 28520 && *(_BYTE *)(a1 + 6) == 115 )
    {
      v4 = 1;
      v9 = a2 != 19;
      v6 = "watchOS";
      goto LABEL_8;
    }
  }
LABEL_7:
  v9 = a2 != 19;
  if ( !((unsigned __int8)v4 | v8)
    && !(*(_QWORD *)a1 ^ 0x5F7070615F736F69LL | *(_QWORD *)(a1 + 8) ^ 0x6F69736E65747865LL)
    && *(_BYTE *)(a1 + 16) == 110 )
  {
    v4 = 1;
    v10 = a2 != 18;
    v6 = "iOSApplicationExtension";
    goto LABEL_9;
  }
LABEL_8:
  v10 = a2 != 18;
  if ( !((unsigned __int8)v4 | v9)
    && !(*(_QWORD *)a1 ^ 0x70615F736F63616DLL | *(_QWORD *)(a1 + 8) ^ 0x736E657478655F70LL)
    && *(_WORD *)(a1 + 16) == 28521
    && *(_BYTE *)(a1 + 18) == 110 )
  {
    v4 = 1;
    v11 = a2 != 21;
    v6 = "macOSApplicationExtension";
    goto LABEL_10;
  }
LABEL_9:
  v11 = a2 != 21;
  if ( !((unsigned __int8)v4 | v10)
    && !(*(_QWORD *)a1 ^ 0x7070615F736F7674LL | *(_QWORD *)(a1 + 8) ^ 0x69736E657478655FLL)
    && *(_WORD *)(a1 + 16) == 28271 )
  {
    v4 = 1;
    v13 = a2 != 11;
    v6 = "tvOSApplicationExtension";
    goto LABEL_11;
  }
LABEL_10:
  v12 = v4 | v11;
  v13 = a2 != 11;
  if ( !v12
    && !(*(_QWORD *)a1 ^ 0x5F736F6863746177LL | *(_QWORD *)(a1 + 8) ^ 0x657478655F707061LL)
    && *(_DWORD *)(a1 + 16) == 1869181806
    && *(_BYTE *)(a1 + 20) == 110 )
  {
    v4 = 1;
    v14 = a2 != 25;
    v6 = "watchOSApplicationExtension";
    goto LABEL_12;
  }
LABEL_11:
  v14 = a2 != 25;
  if ( !((unsigned __int8)v4 | v13)
    && *(_QWORD *)a1 == 0x6C6174616363616DLL
    && *(_WORD *)(a1 + 8) == 29561
    && *(_BYTE *)(a1 + 10) == 116 )
  {
    v6 = "macCatalyst";
    v4 = 1;
    goto LABEL_13;
  }
LABEL_12:
  if ( !((unsigned __int8)v4 | v14)
    && !(*(_QWORD *)a1 ^ 0x6C6174616363616DLL | *(_QWORD *)(a1 + 8) ^ 0x5F7070615F747379LL)
    && *(_QWORD *)(a1 + 16) == 0x6F69736E65747865LL
    && *(_BYTE *)(a1 + 24) == 110 )
  {
    v6 = "macCatalystApplicationExtension";
    v4 = 1;
    goto LABEL_14;
  }
LABEL_13:
  if ( (unsigned __int8)v4 | v3 )
  {
LABEL_14:
    v15 = v4 | v10;
    goto LABEL_15;
  }
  v15 = v4 | v10;
  if ( *(_DWORD *)a1 == 1936683640 )
  {
    v4 = 1;
    v16 = a2 != 3;
    v6 = "visionOS";
    goto LABEL_16;
  }
LABEL_15:
  v16 = a2 != 3;
  if ( !v15
    && !(*(_QWORD *)a1 ^ 0x7070615F736F7278LL | *(_QWORD *)(a1 + 8) ^ 0x69736E657478655FLL)
    && *(_WORD *)(a1 + 16) == 28271 )
  {
    return "visionOSApplicationExtension";
  }
LABEL_16:
  if ( !((unsigned __int8)v4 | v16) && *(_WORD *)a1 == 28538 && *(_BYTE *)(a1 + 2) == 115 )
    return "z/OS";
  if ( (unsigned __int8)v4 | v13 )
  {
    if ( v4 )
      return v6;
  }
  else if ( *(_QWORD *)a1 == 0x6F6D726564616873LL && *(_WORD *)(a1 + 8) == 25956 )
  {
    v6 = "ShaderModel";
    if ( *(_BYTE *)(a1 + 10) == 108 )
      return v6;
  }
  return result;
}
