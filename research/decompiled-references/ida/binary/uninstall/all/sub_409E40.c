__int64 __fastcall sub_409E40(__int64 a1, int a2, int a3, _QWORD *a4)
{
  const char *v6; // rbx
  unsigned __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  const char *v11; // rsi
  __int64 v12; // rax

  v6 = (const char *)sub_47B3B0(*a4);
  v7 = (unsigned __int64)&v6[strlen(v6)];
  while ( (unsigned __int64)(v6 + 1) < v7 )
  {
    if ( *(_BYTE *)--v7 == 58 && *(_BYTE *)(v7 - 1) == 58 )
    {
      LODWORD(v6) = v7 + 1;
      break;
    }
  }
  v11 = "few";
  if ( a3 >= a2 )
    v11 = "many";
  v12 = sub_48F930((unsigned int)"too %s arguments for math function \"%s\"", (_DWORD)v11, (_DWORD)v6, v8, v9, v10);
  return sub_48AFD0(a1, v12);
}

