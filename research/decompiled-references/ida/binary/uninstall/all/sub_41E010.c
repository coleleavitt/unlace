__int64 __fastcall sub_41E010(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  const char *v7; // rbp
  __int64 v8; // rdi
  void *v9; // rax
  __int64 v10; // rsi
  void *v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdi
  const char *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( a3 == 3 )
  {
    v14 = *(_QWORD *)(a4 + 16);
    v15 = *(const char **)(v14 + 8);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v14 + 16);
      v8 = *(_QWORD *)(a4 + 8);
      v7 = v15;
      v19 = v16;
      v9 = *(void **)(v8 + 8);
      if ( v9 )
        goto LABEL_6;
LABEL_10:
      v17 = sub_47ACD0(v8, &v18);
      v10 = v18;
      v11 = (void *)v17;
      goto LABEL_7;
    }
    v7 = (const char *)sub_47ACD0(v14, &v19);
  }
  else
  {
    if ( a3 != 2 )
    {
      sub_458930(a2, 1, a4, "string ?chars?");
      return 1;
    }
    v7 = " \t\n\r";
    v19 = strlen(" \t\n\r");
  }
  v8 = *(_QWORD *)(a4 + 8);
  v9 = *(void **)(v8 + 8);
  if ( !v9 )
    goto LABEL_10;
LABEL_6:
  v10 = *(unsigned int *)(v8 + 16);
  v11 = v9;
  v18 = *(_DWORD *)(v8 + 16);
LABEL_7:
  v12 = sub_49DEC0(v11, v10, v7, v19);
  v13 = sub_48DF10(v11, v18 - v12);
  sub_48AFD0(a2, v13);
  return 0;
}

