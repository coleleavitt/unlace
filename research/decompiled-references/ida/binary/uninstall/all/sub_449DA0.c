__int64 __fastcall sub_449DA0(__int64 a1, unsigned __int8 *a2, __int64 a3, int a4, int a5, int a6)
{
  char *v7; // rbp
  unsigned __int8 v9; // al
  _UNKNOWN **v10; // rdx
  const char *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r9d
  int v17; // [rsp+Ch] [rbp-2Ch] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h] BYREF
  int v19[7]; // [rsp+1Ch] [rbp-1Ch] BYREF

  v7 = "unknown";
  v9 = *a2;
  if ( *a2 == 99 )
  {
    v7 = "**";
LABEL_3:
    v10 = *(_UNKNOWN ***)(a3 + 24);
    if ( v10 != &off_6560E0 )
      goto LABEL_4;
LABEL_14:
    v19[0] = 1;
LABEL_15:
    v18 = a3 + 32;
    goto LABEL_9;
  }
  if ( v9 > 0x3Du )
    goto LABEL_3;
  v7 = (&off_64EEA0)[v9];
  v10 = *(_UNKNOWN ***)(a3 + 24);
  if ( v10 == &off_6560E0 )
    goto LABEL_14;
LABEL_4:
  if ( v10 == &off_656120 )
  {
    v19[0] = 5 - (isnan(*(double *)(a3 + 32)) == 0);
    goto LABEL_15;
  }
  if ( v10 )
  {
    if ( *(_QWORD *)(a3 + 8) && !*(_DWORD *)(a3 + 16) )
      goto LABEL_18;
  }
  else if ( !*(_QWORD *)(a3 + 8) || !*(_DWORD *)(a3 + 16) )
  {
    goto LABEL_18;
  }
  if ( !(unsigned int)sub_47CE30(0, a3, &v18, v19) )
  {
LABEL_9:
    v11 = "non-numeric floating-point value";
    if ( v19[0] != 5 )
    {
      v11 = "floating-point value";
      if ( v19[0] != 4 )
        v11 = "(big) integer";
    }
    goto LABEL_19;
  }
LABEL_18:
  v12 = a3;
  v11 = "empty string";
  v13 = sub_47ACD0(v12, &v17);
  if ( v17 )
  {
    v11 = "invalid octal number";
    if ( !(unsigned int)sub_49F9F0(0, v13) )
      v11 = "non-numeric string";
  }
LABEL_19:
  v14 = sub_48F930((unsigned int)"can't use %s as operand of \"%s\"", (_DWORD)v11, (_DWORD)v7, a4, a5, a6);
  sub_48AFD0(a1, v14);
  return sub_48BC40(a1, (unsigned int)"ARITH", (unsigned int)"DOMAIN", (_DWORD)v11, 0, v15);
}

