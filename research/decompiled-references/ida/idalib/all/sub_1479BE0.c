const char *__fastcall sub_1479BE0(_BYTE *s1, __int64 a2)
{
  _BYTE *v2; // r15
  char v4; // al
  bool v5; // bp
  char *v6; // rcx
  bool v7; // al
  bool v8; // al
  bool v9; // si
  bool v10; // dl
  bool v11; // dl
  bool v12; // al
  bool v13; // dl
  bool v14; // al
  bool v15; // dl
  bool v16; // dl
  bool v17; // r13
  bool v18; // si
  bool v19; // r9
  bool v20; // al
  bool v21; // dl
  bool v22; // al
  bool v23; // si
  char v24; // dl
  bool v25; // al
  bool v26; // al
  int v28; // eax
  char *v29; // [rsp+8h] [rbp-50h]
  bool v30; // [rsp+8h] [rbp-50h]
  bool v31; // [rsp+1Fh] [rbp-39h]

  v2 = s1;
  if ( a2 == 3 )
  {
    v4 = 1;
    if ( *(_WORD *)s1 == 20329 )
    {
      v5 = s1[2] == 83;
      goto LABEL_4;
    }
LABEL_3:
    v5 = 0;
LABEL_4:
    v4 |= v5;
    goto LABEL_5;
  }
  v4 = a2 != 6;
  if ( a2 != 5 )
    goto LABEL_3;
  if ( *(_DWORD *)s1 == 1331913069 && s1[4] == 83 )
  {
    v5 = 1;
    v6 = "macos";
    goto LABEL_6;
  }
  v5 = 0;
LABEL_5:
  v6 = "ios";
  if ( v4 )
  {
LABEL_6:
    v7 = a2 != 4;
LABEL_7:
    v8 = v5 || v7;
    goto LABEL_8;
  }
  v7 = a2 != 4;
  if ( *(_DWORD *)s1 == 1331913069 && *((_WORD *)s1 + 2) == 22611 )
  {
    v5 = 1;
    v6 = "macos";
    goto LABEL_7;
  }
  if ( *(_DWORD *)s1 == 1868783981 && *((_WORD *)s1 + 2) == 30835 )
  {
    v5 = 1;
    v10 = a2 != 7;
    v6 = "macos";
    goto LABEL_9;
  }
  v8 = v5 || v7;
  v6 = "ios";
LABEL_8:
  v9 = a2 != 7;
  v10 = v9;
  if ( v8 )
  {
LABEL_9:
    v11 = v5 || v10;
    goto LABEL_10;
  }
  v11 = v5 || v9;
  if ( *(_DWORD *)s1 == 1397716596 )
  {
    v5 = 1;
    v12 = a2 != 23;
    v6 = "tvos";
    goto LABEL_11;
  }
LABEL_10:
  v12 = a2 != 23;
  if ( !v11 && *(_DWORD *)s1 == 1668571511 && *((_WORD *)s1 + 2) == 20328 && s1[6] == 83 )
  {
    v5 = 1;
    v13 = a2 != 25;
    v6 = "watchos";
    goto LABEL_12;
  }
LABEL_11:
  v13 = a2 != 25;
  if ( !v5
    && !v12
    && !(*(_QWORD *)s1 ^ 0x696C707041534F69LL | *((_QWORD *)s1 + 1) ^ 0x78456E6F69746163LL)
    && *((_DWORD *)s1 + 4) == 1936614772
    && *((_WORD *)s1 + 10) == 28521
    && s1[22] == 110 )
  {
    v5 = 1;
    v6 = "ios_app_extension";
    v14 = a2 != 24;
    goto LABEL_13;
  }
LABEL_12:
  v14 = a2 != 24;
  if ( !v5
    && !v13
    && !(*(_QWORD *)s1 ^ 0x707041534F63616DLL | *((_QWORD *)s1 + 1) ^ 0x6E6F69746163696CLL)
    && *((_QWORD *)s1 + 2) == 0x6F69736E65747845LL
    && s1[24] == 110 )
  {
    v5 = 1;
    v15 = a2 != 27;
    v6 = "macos_app_extension";
    goto LABEL_14;
  }
LABEL_13:
  v15 = a2 != 27;
  if ( !v5
    && !v14
    && !(*(_QWORD *)s1 ^ 0x6C707041534F7674LL | *((_QWORD *)s1 + 1) ^ 0x456E6F6974616369LL)
    && *((_QWORD *)s1 + 2) == 0x6E6F69736E657478LL )
  {
    v5 = 1;
    v17 = a2 != 11;
    v6 = "tvos_app_extension";
    v18 = a2 != 31;
    goto LABEL_16;
  }
LABEL_14:
  v16 = v5 || v15;
  v17 = a2 != 11;
  v18 = a2 != 31;
  if ( !v16 )
  {
    if ( !(*(_QWORD *)s1 ^ 0x41534F6863746177LL | *((_QWORD *)s1 + 1) ^ 0x69746163696C7070LL)
      && *((_QWORD *)s1 + 2) == 0x736E657478456E6FLL
      && *((_WORD *)s1 + 12) == 28521
      && s1[26] == 110 )
    {
      v5 = 1;
      v20 = a2 != 8;
      v6 = "watchos_app_extension";
      goto LABEL_17;
    }
LABEL_16:
    v19 = a2 != 8;
    v20 = a2 != 8;
    if ( v5 || v18 )
      goto LABEL_17;
    goto LABEL_39;
  }
  if ( v5 || v17 )
    goto LABEL_16;
  if ( *(_QWORD *)s1 == 0x6C6174614363616DLL && *((_WORD *)s1 + 4) == 29561 && s1[10] == 116 )
  {
    v30 = v16;
    j__strlen("maccatalyst");
    v6 = "maccatalyst";
    v20 = a2 != 8;
    v17 = 0;
    v5 = v30;
    goto LABEL_17;
  }
  v17 = 0;
  v5 = 0;
  v19 = a2 != 8;
  v20 = a2 != 8;
  if ( a2 != 31 )
  {
LABEL_17:
    v21 = v5 || v20;
    goto LABEL_18;
  }
LABEL_39:
  v31 = v19;
  v29 = v6;
  v28 = memcmp(s1, "macCatalystApplicationExtension", 0x1Fu);
  v6 = v29;
  v21 = v5 || v31;
  if ( !v28 )
  {
    v5 = 1;
    v23 = a2 != 28;
    v6 = "maccatalyst_app_extension";
    goto LABEL_19;
  }
LABEL_18:
  v22 = a2 != 28;
  v23 = a2 != 28;
  if ( !v21 )
  {
    if ( *(_QWORD *)s1 == 0x534F6E6F69736976LL )
    {
      v5 = 1;
      v25 = a2 != 22;
      v6 = "xros";
      goto LABEL_28;
    }
    v24 = v5 || v22;
    if ( v5 || v22 )
    {
      v25 = a2 != 22;
      goto LABEL_23;
    }
    goto LABEL_21;
  }
LABEL_19:
  if ( v23 || (v24 = 1, v5) )
  {
    v25 = a2 != 22;
    goto LABEL_28;
  }
LABEL_21:
  if ( !(*(_QWORD *)s1 ^ 0x534F6E6F69736976LL | *((_QWORD *)s1 + 1) ^ 0x746163696C707041LL)
    && *((_QWORD *)s1 + 2) == 0x6E657478456E6F69LL
    && *((_DWORD *)s1 + 6) == 1852795251 )
  {
    v5 = 1;
    v25 = a2 != 22;
    v6 = "xros_app_extension";
    goto LABEL_28;
  }
  v25 = a2 != 22;
  if ( v24 )
  {
LABEL_28:
    v26 = v5 || v25;
    goto LABEL_29;
  }
LABEL_23:
  v26 = v5 || v25;
  if ( *(_QWORD *)s1 == 0x736F6E6F69736976LL )
    return "xros";
LABEL_29:
  if ( !v26
    && !(*(_QWORD *)s1 ^ 0x736F6E6F69736976LL | *((_QWORD *)s1 + 1) ^ 0x7478655F7070615FLL)
    && *((_DWORD *)s1 + 4) == 1769172581
    && *((_WORD *)s1 + 10) == 28271 )
  {
    return "xros_app_extension";
  }
  if ( v5 || v17 )
  {
    if ( !v5 )
      return v2;
    return v6;
  }
  if ( *(_QWORD *)s1 == 0x6F4D726564616853LL && *((_WORD *)s1 + 4) == 25956 )
  {
    v6 = "shadermodel";
    if ( s1[10] == 108 )
      return v6;
  }
  return v2;
}
