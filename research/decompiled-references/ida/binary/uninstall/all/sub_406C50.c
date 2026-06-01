__int64 __fastcall sub_406C50(__int64 a1, __int64 a2, const char *a3)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  const char *v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r13
  int v11; // r9d
  __int64 v12; // r13
  _DWORD *v13; // rax
  bool v14; // zf
  int v15; // [rsp+4h] [rbp-24h] BYREF

  result = 1;
  if ( (*(_BYTE *)(a1 + 424) & 1) == 0 )
  {
    if ( strstr(a3, "::") )
    {
      v8 = "cannot use namespace qualifiers in hidden command token (rename)";
LABEL_4:
      sub_48B710(a1, (_DWORD)v8, 0, v5, v6, v7);
      return 1;
    }
    v9 = sub_474D60(a1, a2, 0, 513);
    result = 1;
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(a1 + 40) )
      {
        v8 = "can only hide global namespace commands (use rename then hide)";
        goto LABEL_4;
      }
      v10 = *(_QWORD *)(a1 + 48);
      if ( !v10 )
      {
        v10 = sub_40FB00(88);
        sub_457B90(v10, 0);
        *(_QWORD *)(a1 + 48) = v10;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, const char *, int *))(v10 + 72))(v10, a3, &v15);
      if ( v15 )
      {
        if ( *(_QWORD *)v9 )
        {
          sub_457BC0(*(_QWORD *)v9);
          ++*(_DWORD *)(v9 + 20);
        }
        v13 = *(_DWORD **)(v9 + 8);
        if ( v13[88] )
          ++v13[98];
        if ( v13[104] )
          ++v13[90];
        v14 = *(_QWORD *)(v9 + 24) == 0;
        *(_QWORD *)v9 = v12;
        *(_QWORD *)(v12 + 24) = v9;
        if ( !v14 )
          ++*(_DWORD *)(a1 + 392);
        return 0;
      }
      else
      {
        sub_48B710(a1, (unsigned int)"hidden command named \"", (_DWORD)a3, (unsigned int)"\" already exists", 0, v11);
        return 1;
      }
    }
  }
  return result;
}

