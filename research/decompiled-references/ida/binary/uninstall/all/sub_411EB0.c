__int64 __fastcall sub_411EB0(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v5; // r13
  __int64 v6; // r14
  int v7; // ebx
  unsigned int v8; // r12d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  const char *v24; // rsi
  __int64 v25; // rax

  v5 = 0;
  v6 = 0;
  v7 = a2;
  if ( (unsigned int)(a3 - 2) > 2 )
  {
    sub_458930(a2, 1, a4, "script ?resultVarName? ?optionVarName?");
    return 1;
  }
  else
  {
    if ( a3 > 2 )
    {
      v5 = a4[2];
      if ( a3 == 4 )
        v6 = a4[3];
    }
    v8 = sub_40B720(a2, a4[1], 0, *(_QWORD **)(a2 + 952), 1u);
    if ( (unsigned int)sub_45ACC0(a2) )
    {
      v15 = sub_48F930((unsigned int)"\n    (\"catch\" body line %d)", *(_DWORD *)(a2 + 16), v9, v10, v11, v12);
      sub_40ABA0(a2, v15, v16, v17, v18, v19);
      return 1;
    }
    else
    {
      if ( a3 <= 2 || (v20 = sub_48B5D0(a2), sub_4A4160(a2, v5, 0, v20, 0)) )
      {
        if ( a3 != 4 || (v25 = sub_48C5F0(a2, v8), sub_4A4160(a2, v6, 0, v25, 0)) )
        {
          sub_48B350(a2);
          v13 = sub_47BD00(v8);
          sub_48AFD0(a2, v13);
          return 0;
        }
        sub_48B350(a2);
        v24 = "couldn't save return options in variable";
      }
      else
      {
        sub_48B350(a2);
        v24 = "couldn't save command result in variable";
      }
      sub_48B710(v7, (_DWORD)v24, 0, v21, v22, v23);
      return 1;
    }
  }
}

