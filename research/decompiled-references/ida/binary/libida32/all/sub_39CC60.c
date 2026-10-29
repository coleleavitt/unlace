__int64 __fastcall sub_39CC60(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  char v6; // r13
  int v7; // eax
  char v8; // al
  int v9; // edx
  int v10; // eax
  int v11; // edx
  const char *v12; // rcx
  char v14; // al
  const char *v15; // rsi
  __int64 v16; // rax
  char v17; // [rsp+0h] [rbp-28h]

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 1344);
  v6 = *(_BYTE *)(v5 + 108);
  if ( v6 == (unsigned __int8)sub_615160(v4, 44, 4) )
  {
    if ( !*(_BYTE *)(v5 + 108) )
      return 0;
    v7 = *(_DWORD *)(v5 + 100);
    if ( v7 == *(_DWORD *)(v5 + 12)
      && *(_DWORD *)(v5 + 104) == *(_DWORD *)(v5 + 8)
      && (v7 != -1 || *(_BYTE *)(v5 + 109) == (unsigned __int8)sub_615160(*a1, 2, 1)) )
    {
      return 0;
    }
  }
  v8 = sub_615160(*a1, 44, 4);
  v9 = *(_DWORD *)(v5 + 8);
  *(_BYTE *)(v5 + 108) = v8;
  v10 = *(_DWORD *)(v5 + 12);
  *(_DWORD *)(v5 + 104) = v9;
  *(_DWORD *)(v5 + 100) = v10;
  *(_DWORD *)a2 = v10;
  *(_BYTE *)(a2 + 8) = 0;
  if ( *(_BYTE *)(v5 + 108) )
  {
    if ( *(_DWORD *)(v5 + 100) == -1 || !(unsigned __int8)sub_615160(*a1, 2, 1) )
    {
      v14 = sub_615160(*a1, 2, 1);
      v15 = "AU:disabled";
      *(_BYTE *)(v5 + 109) = v14;
      if ( v14 )
        v15 = "AU:  idle  ";
      qstrncpy(a2 + 8, v15, 64);
    }
    else
    {
      v11 = *(_DWORD *)(v5 + 104);
      v12 = " @";
      if ( v11 )
      {
        v16 = 0;
        while ( v11 != dword_2389780[v16] )
        {
          if ( ++v16 == 14 )
          {
            if ( !under_debugger )
              interr(44);
            BUG();
          }
        }
        v12 = (const char *)*(&off_2AFCC40 + (unsigned int)v16);
      }
      qsnprintf(a2 + 8, 64, (int)"%s:%0*a", (int)v12, *(_DWORD *)(a2 + 4), *(_DWORD *)(v5 + 100), v17);
    }
  }
  return 1;
}

