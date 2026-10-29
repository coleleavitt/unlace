__int64 __fastcall sub_414220(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // ebx
  const char *v13; // rsi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( a3 != 5 )
  {
    sub_458930(a2, 1, a4, "start test next command");
    return 1;
  }
  v7 = sub_40B720(a2, a4[1], 0, *(_QWORD **)(a2 + 952), 1u);
  v12 = v7;
  if ( !v7 )
  {
    while ( 1 )
    {
      sub_48B350(a2);
      v12 = sub_40A660(a2, a4[2], (__int64)&v24);
      if ( v12 )
        return v12;
      if ( !v24 )
        goto LABEL_14;
      v12 = sub_40B720(a2, a4[4], 0, *(_QWORD **)(a2 + 952), 4u);
      if ( v12 != 4 && v12 != 0 )
      {
        if ( v12 == 1 )
        {
          LOBYTE(v14) = 1;
          v19 = sub_48F930((unsigned int)"\n    (\"for\" body line %d)", *(_DWORD *)(a2 + 16), v14, v15, v16, v17);
          sub_40ABA0(a2, v19, v20, v21, v22, v23);
          return 1;
        }
        if ( v12 == 3 || !v12 )
        {
LABEL_14:
          sub_48B350(a2);
          return 0;
        }
        return v12;
      }
      v18 = sub_40B720(a2, a4[3], 0, *(_QWORD **)(a2 + 952), 3u);
      v12 = v18;
      if ( v18 == 3 )
        goto LABEL_14;
      if ( v18 )
      {
        if ( v18 != 1 )
          return v12;
        v13 = "\n    (\"for\" loop-end command)";
        goto LABEL_13;
      }
    }
  }
  v13 = "\n    (\"for\" initial command)";
  if ( v7 != 1 )
    return v12;
LABEL_13:
  sub_40BD40(a2, (__int64)v13, v8, v9, v10, v11);
  return v12;
}

