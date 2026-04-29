__int64 __fastcall sub_3E7E10(__int64 a1, double a2)
{
  const char *v2; // rax
  __int64 v3; // rbp
  const char *v4; // r12
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v9; // eax
  int v10; // edx

  v2 = "HEXRV64";
  v3 = *(_QWORD *)(a1 + 96);
  if ( !*(_BYTE *)(v3 + 144) )
    v2 = "HEXRV";
  *(_QWORD *)(a1 + 24) = v2;
  if ( !*(_QWORD *)(v3 + 168) )
    return 0;
  v4 = *(const char **)(v3 + 160);
  v5 = strcmp(v4, "ilp32");
  if ( !v5 )
  {
    v6 = 0;
    goto LABEL_6;
  }
  if ( !strcmp(v4, "ilp32f") )
  {
    v6 = 1;
    v5 = 4;
    goto LABEL_6;
  }
  if ( !strcmp(v4, "ilp32d") )
  {
    v6 = 2;
    v5 = 8;
LABEL_6:
    *(_DWORD *)(a1 + 688) = v6;
    *(_DWORD *)(a1 + 692) = 8;
    *(_QWORD *)(a1 + 80) = 0x400000004LL;
    *(_DWORD *)(a1 + 696) = v5;
    if ( *(_DWORD *)(*(_QWORD *)(v3 + 24) + 24LL) == 4 )
    {
      *(_QWORD *)(a1 + 88) = 0x1000000008LL;
      v7 = *(_DWORD *)(a1 + 48);
      LOBYTE(v7) = v7 | 0x80;
LABEL_8:
      *(_DWORD *)(a1 + 48) = v7;
      sub_3E70A0(a1, a2);
      return 1;
    }
    return 0;
  }
  v9 = strcmp(v4, "lp64");
  if ( v9 )
  {
    if ( !strcmp(v4, "lp64f") )
    {
      v10 = 5;
      v9 = 4;
    }
    else
    {
      if ( strcmp(v4, "lp64d") )
        return 0;
      v10 = 6;
      v9 = 8;
    }
  }
  else
  {
    v10 = 4;
  }
  *(_DWORD *)(a1 + 688) = v10;
  *(_DWORD *)(a1 + 692) = 8;
  *(_QWORD *)(a1 + 80) = 0x800000008LL;
  *(_DWORD *)(a1 + 696) = v9;
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 24) + 24LL) == 8 )
  {
    *(_QWORD *)(a1 + 88) = 0x2000000010LL;
    v7 = *(_DWORD *)(a1 + 48) | 0x80100;
    goto LABEL_8;
  }
  return 0;
}
