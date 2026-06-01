__int64 __fastcall sub_410B60(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r15d
  __int64 *v6; // rdi
  int v8; // r12d
  __int64 v9; // rbx
  char v10; // cl
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  const char *v16; // rdx
  int v18; // eax
  int v19; // r9d
  _BYTE v20[8]; // [rsp+20h] [rbp-68h] BYREF
  int v21; // [rsp+28h] [rbp-60h] BYREF
  int v22; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]

  v5 = 0;
  v6 = *(__int64 **)(a1 + 8);
  v21 = 0;
  if ( a3 <= 1 || (a3 & 1) != 0 )
  {
    sub_458930(a2, 0, a4, "clock format clockval ?-format string? ?-gmt boolean? ?-locale LOCALE? ?-timezone ZONE?");
    v16 = "wrongNumArgs";
    goto LABEL_20;
  }
  v8 = 2;
  v23 = v6[1];
  v24 = v6[3];
  v25 = *v6;
  if ( a3 <= 2 )
  {
LABEL_13:
    v11 = sub_47C250(a2, *(_QWORD *)(a4 + 8), v20);
    v12 = 1;
    if ( v11 )
      return v12;
    if ( (v5 & 2) == 0 || (v5 & 8) == 0 )
    {
      if ( v21 )
        v25 = v6[10];
      v13 = sub_46EEB0(3, &v23);
      sub_48AFD0(a2, v13);
      return 0;
    }
    sub_48AFD0(a2, v6[4]);
    v16 = "gmtWithTimezone";
LABEL_20:
    sub_48BC40(a2, (unsigned int)"CLOCK", (_DWORD)v16, 0, v14, v15);
    return 1;
  }
  while ( 1 )
  {
    v9 = v8;
    if ( (unsigned int)sub_4584C0(
                         a2,
                         *(_QWORD *)(a4 + 8LL * v8),
                         (unsigned int)off_653E60,
                         8,
                         (unsigned int)"switch",
                         0,
                         (__int64)&v22) )
      break;
    v10 = v22;
    if ( v22 == 1 )
    {
      if ( (unsigned int)sub_47BB80(a2, *(_QWORD *)(a4 + 8LL * v8 + 8), &v21) )
        return 1;
      v10 = v22;
LABEL_7:
      v8 += 2;
      v5 |= 1 << v10;
      if ( v8 >= a3 )
        goto LABEL_13;
    }
    else
    {
      if ( v22 <= 1 )
      {
        if ( !v22 )
          v23 = *(_QWORD *)(a4 + 8LL * v8 + 8);
        goto LABEL_7;
      }
      if ( v22 != 2 )
      {
        if ( v22 == 3 )
          v25 = *(_QWORD *)(a4 + 8LL * v8 + 8);
        goto LABEL_7;
      }
      v8 += 2;
      v24 = *(_QWORD *)(a4 + 8 * v9 + 8);
      v5 |= 4u;
      if ( v8 >= a3 )
        goto LABEL_13;
    }
  }
  v18 = sub_47B3B0(*(_QWORD *)(a4 + 8LL * v8));
  sub_48BC40(a2, (unsigned int)"CLOCK", (unsigned int)"badSwitch", v18, 0, v19);
  return 1;
}

