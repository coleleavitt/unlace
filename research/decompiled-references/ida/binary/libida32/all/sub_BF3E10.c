__int64 __fastcall sub_BF3E10(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 vars0; // [rsp+8h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+10h] [rbp+8h]

  v3 = sub_A3EFE0(*(_QWORD **)(a1 + 16), *(_QWORD *)(a3 + 8));
  v4 = sub_21D5390();
  v5 = v4;
  if ( v3 == v4 )
    sub_21DBF00(&vars0, v4, 0);
  else
    sub_21D94B0(&vars0, v3, 0);
  if ( vars0 == v5 )
  {
    sub_21DC510(&vars0, 0);
    v6 = *a2;
    v7 = vars0;
    if ( **a2 != v5 )
      goto LABEL_5;
  }
  else
  {
    sub_21D7C60(&vars0, 0);
    v6 = *a2;
    v7 = vars0;
    if ( **a2 != v5 )
    {
LABEL_5:
      if ( v7 != v5 )
      {
        sub_21D5850(v6, &vars0);
        goto LABEL_7;
      }
      if ( v6 == &vars0 )
        goto LABEL_13;
      goto LABEL_11;
    }
  }
  if ( v7 != v5 )
  {
    if ( v6 == &vars0 )
      goto LABEL_8;
LABEL_11:
    sub_971860(v6);
    if ( v5 != vars0 )
    {
      sub_21D5A90(v6, &vars0);
      if ( vars0 != v5 )
        goto LABEL_8;
      goto LABEL_13;
    }
    goto LABEL_37;
  }
  if ( v6 == &vars0 )
    goto LABEL_13;
  v13 = v6[1];
  if ( v13 )
  {
    v14 = 24LL * *(_QWORD *)(v13 - 8);
    v15 = v13 + v14;
    if ( v13 != v13 + v14 )
    {
      while ( 1 )
      {
        v13 = v15 - 24;
        v16 = v15 - 24;
        if ( v5 == *(_QWORD *)(v15 - 24) )
        {
          sub_A2B2D0(v16);
          if ( v6[1] == v13 )
          {
LABEL_35:
            v14 = 24LL * *(_QWORD *)(v15 - 32);
            break;
          }
        }
        else
        {
          sub_21D5AF0(v16);
          if ( v13 == v6[1] )
            goto LABEL_35;
        }
        v15 -= 24;
      }
    }
    operator delete[]((void *)(v13 - 8), v14 + 8);
  }
LABEL_37:
  sub_21DC190(v6, &vars0);
LABEL_7:
  if ( vars0 != v5 )
  {
LABEL_8:
    sub_21D5AF0(&vars0);
    return 1;
  }
LABEL_13:
  if ( vars8 )
  {
    v9 = *(_QWORD *)(vars8 - 8);
    v10 = vars8 + 24 * v9;
    if ( -24 * v9 )
    {
      while ( 1 )
      {
        v11 = v10 - 24;
        v12 = v10 - 24;
        if ( v5 == *(_QWORD *)(v10 - 24) )
        {
          sub_A2B2D0(v12);
          if ( vars8 == v11 )
          {
LABEL_20:
            operator delete[]((void *)(v10 - 32), 24LL * *(_QWORD *)(v10 - 32) + 8);
            return 1;
          }
        }
        else
        {
          sub_21D5AF0(v12);
          if ( v11 == vars8 )
            goto LABEL_20;
        }
        v10 -= 24;
      }
    }
    operator delete[]((void *)(vars8 - 8), 24 * v9 + 8);
  }
  return 1;
}

