__int64 __fastcall sub_41DDC0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  const char *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  int v12; // ebx
  void *v13; // rbp
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdi
  const char *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+4h] [rbp-24h] BYREF

  if ( a3 == 3 )
  {
    v16 = *(_QWORD *)(a4 + 16);
    v17 = *(const char **)(v16 + 8);
    if ( v17 )
    {
      v18 = *(_DWORD *)(v16 + 16);
      v8 = *(_QWORD *)(a4 + 8);
      v7 = v17;
      v21 = v18;
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 )
        goto LABEL_6;
LABEL_10:
      v19 = sub_47ACD0(v8, &v20);
      v10 = v20;
      v11 = v19;
      goto LABEL_7;
    }
    v7 = (const char *)sub_47ACD0(v16, &v21);
  }
  else
  {
    if ( a3 != 2 )
    {
      sub_458930(a2, 1, a4, "string ?chars?");
      return 1;
    }
    v7 = " \t\n\r";
    v21 = strlen(" \t\n\r");
  }
  v8 = *(_QWORD *)(a4 + 8);
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 )
    goto LABEL_10;
LABEL_6:
  v10 = *(unsigned int *)(v8 + 16);
  v11 = v9;
  v20 = *(_DWORD *)(v8 + 16);
LABEL_7:
  v12 = sub_49E010(v11, v10, v7, v21);
  v13 = (void *)(v12 + v11);
  v14 = sub_49DEC0(v13, v20 - v12, v7, v21);
  v15 = sub_48DF10(v13, v20 - v12 - v14);
  sub_48AFD0(a2, v15);
  return 0;
}

