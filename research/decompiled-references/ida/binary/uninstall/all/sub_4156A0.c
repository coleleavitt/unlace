__int64 __fastcall sub_4156A0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rdi
  const char *v9; // rbp
  __int64 v10; // rax
  int v11; // r9d
  __int64 *i; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax

  if ( a3 != 4 )
  {
    sub_458930(a2, 1, a4, "procname arg varname");
    return 1;
  }
  v6 = a4[1];
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 )
    v7 = sub_47B3B0(v6);
  v8 = a4[2];
  v9 = *(const char **)(v8 + 8);
  if ( !v9 )
    v9 = (const char *)sub_47B3B0(v8);
  v10 = sub_488820(a2, v7);
  if ( !v10 )
  {
    sub_48B710(a2, (unsigned int)"\"", v7, (unsigned int)"\" isn't a procedure", 0, v11);
    return 1;
  }
  for ( i = *(__int64 **)(v10 + 40); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      sub_48B710(
        a2,
        (unsigned int)"procedure \"",
        v7,
        (unsigned int)"\" doesn't have an argument \"",
        (_DWORD)v9,
        (unsigned int)"\"");
      return 1;
    }
    if ( (*((_BYTE *)i + 17) & 1) != 0 && !strcmp(v9, (const char *)i + 40) )
      break;
  }
  v14 = i[3];
  if ( v14 )
  {
    v16 = 1;
    if ( !sub_4A4160(a2, a4[3], 0, v14, 0) )
    {
LABEL_17:
      v17 = a4[3];
      v18 = *(_QWORD *)(v17 + 8);
      if ( !v18 )
        LODWORD(v18) = sub_47B3B0(v17);
      sub_48B710(a2, (unsigned int)"couldn't store default value in variable \"", v18, (unsigned int)"\"", 0, v15);
      return 1;
    }
  }
  else
  {
    v19 = sub_47B0B0(v9, i + 5, v13);
    if ( !sub_4A4160(a2, a4[3], 0, v19, 0) )
      goto LABEL_17;
    v16 = 0;
  }
  v20 = sub_47BD00(v16);
  sub_48AFD0(a2, v20);
  return 0;
}

