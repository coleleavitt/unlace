char __fastcall sub_41670(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v7; // r12d
  bool v8; // dl
  char result; // al
  const char *v10; // r14
  int v11; // eax
  __int64 v12; // rdi
  bool (__fastcall *v13)(__int64, __int64); // r9
  __int64 v14; // rax
  char v15; // cl
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-30h]
  __int64 v20; // [rsp+8h] [rbp-30h]

  v7 = *(_DWORD *)(a3 + 4);
  if ( !*(_QWORD *)(a3 + 32) )
  {
    if ( !*(_WORD *)(a2 + 566) )
      return 0;
    v8 = v7 == 1 || v7 == 8;
    if ( v7 == 1 )
    {
      v15 = *(_BYTE *)(a2 + 248);
      result = v15;
      if ( !v15 )
        return result;
      result = 0;
      if ( !*(_QWORD *)(a2 + 120) || *(_WORD *)(a2 + 520) != 1 )
        return result;
      if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
      {
        if ( a4 + 1 >= *(_DWORD *)(a2 + 568) )
        {
          if ( *(_QWORD *)(a5 + 8) )
            goto LABEL_11;
          goto LABEL_30;
        }
LABEL_9:
        if ( *(_QWORD *)(a3 + 16) == *(_QWORD *)(a3 + 80) && *(_WORD *)(a2 + 520) != 1 )
          return 0;
        goto LABEL_10;
      }
      v18 = *(_QWORD *)(a3 + 16);
      if ( v18 )
      {
        if ( a4 + 1 < *(_DWORD *)(a2 + 568) && *(_QWORD *)(a3 + 80) == v18 )
          goto LABEL_22;
LABEL_10:
        if ( *(_QWORD *)(a5 + 8) )
        {
LABEL_11:
          v10 = *(const char **)a5;
          v19 = a5;
          if ( !strcmp(*(const char **)a5, ".got") )
            return 0;
          if ( !strcmp(v10, ".got.plt") )
            return 0;
          v11 = strcmp(v10, ".plt");
          a5 = v19;
          if ( !v11 )
            return 0;
          if ( v7 == 1 )
            goto LABEL_29;
LABEL_16:
          v12 = *(_QWORD *)(a1 + 240);
          v13 = *(bool (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 144LL);
          result = 1;
          if ( v13 != sub_D180 )
            return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))v13)(v12, a3, a4, a5);
          return result;
        }
        if ( v7 != 1 )
          goto LABEL_16;
LABEL_30:
        v12 = *(_QWORD *)(a1 + 240);
        v13 = *(bool (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 144LL);
        if ( v13 == sub_D180 )
          return (*(_WORD *)(a3 + 8) & 0x407) != 0;
        return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))v13)(v12, a3, a4, a5);
      }
    }
    else
    {
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v14 = *(_QWORD *)(a3 + 16);
        if ( v14 )
        {
          if ( a4 + 1 >= *(_DWORD *)(a2 + 568) || v14 != *(_QWORD *)(a3 + 80) )
            goto LABEL_25;
          v15 = *(_BYTE *)(a2 + 248);
LABEL_22:
          result = v15;
          if ( !v15 )
            return result;
          result = 0;
          if ( !*(_QWORD *)(a2 + 120) || *(_WORD *)(a2 + 520) != 1 )
            return result;
LABEL_25:
          if ( !v8 )
            goto LABEL_16;
          goto LABEL_10;
        }
      }
      result = *(_BYTE *)(a2 + 248);
      if ( !result )
        return result;
    }
    result = 0;
    if ( !*(_QWORD *)(a2 + 120) )
      return result;
    result = v8 && *(_WORD *)(a2 + 520) == 1;
    if ( !result )
      return result;
    if ( a4 + 1 >= *(_DWORD *)(a2 + 568) )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v7 != 1 )
    goto LABEL_16;
  if ( !*(_QWORD *)(a5 + 8) )
    goto LABEL_30;
  v10 = *(const char **)a5;
LABEL_29:
  v20 = a5;
  v16 = strcmp(v10, ".interp");
  a5 = v20;
  v17 = v16;
  result = 0;
  if ( v17 )
    goto LABEL_30;
  return result;
}

