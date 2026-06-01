__int64 __fastcall sub_4161B0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbp
  int v17; // eax
  int v18; // r9d
  int v19[5]; // [rsp+4h] [rbp-14h] BYREF

  if ( a3 != 1 )
  {
    if ( a3 != 2 )
    {
      sub_458930(a2, 1, a4, "?number?");
      return 1;
    }
    if ( (unsigned int)sub_47C180(a2, *(_QWORD *)(a4 + 8), v19) )
      return 1;
    v13 = v19[0];
    if ( v19[0] <= 0 )
    {
      v14 = *(_QWORD *)(a2 + 952);
      if ( !v14 )
        goto LABEL_15;
      v13 = *(_DWORD *)(v14 + 4) + v19[0];
      v19[0] = v13;
    }
    else
    {
      v14 = *(_QWORD *)(a2 + 952);
    }
    if ( v14 )
    {
      while ( *(_DWORD *)(v14 + 4) != v13 )
      {
        v14 = *(_QWORD *)(v14 + 32);
        if ( !v14 )
          goto LABEL_15;
      }
      v9 = sub_415900(a2, (int *)v14, 1, v10, v11, v12);
      goto LABEL_8;
    }
LABEL_15:
    v15 = *(_QWORD *)(a4 + 8);
    v16 = *(_QWORD *)(v15 + 8);
    if ( !v16 )
      LODWORD(v16) = sub_47B3B0(v15);
    v17 = sub_48B5D0(a2);
    sub_48F000(v17, (unsigned int)"bad level \"", v16, (unsigned int)"\"", 0, v18);
    return 1;
  }
  v7 = *(_QWORD *)(a2 + 952);
  v8 = 0;
  if ( v7 )
    v8 = *(unsigned int *)(v7 + 4);
  v9 = sub_47BD00(v8);
LABEL_8:
  sub_48AFD0(a2, v9);
  return 0;
}

