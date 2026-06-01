__int64 __fastcall sub_DD5FE0(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v2; // r12d
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rdx
  _QWORD *exception; // rbx
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // r14d
  int v13; // esi
  __int64 *v14; // r13
  __int64 result; // rax
  __int64 *v16; // rbp
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 *v23; // r14
  __int64 v24; // rax
  __int64 *v25; // r15

  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v1 = sub_DC2710(a1)[1];
  if ( v1 )
    v2 = *(_DWORD *)(v1 - 4);
  else
    v2 = 0;
  sub_DBF660((__int64)a1, "invalid check-sat-assuming command, '(', expected");
  while ( *((_DWORD *)a1 + 356) != 2 )
  {
    while ( 1 )
    {
      sub_DD2CA0(a1);
      v3 = *a1;
      sub_DFBCB0(*a1);
      v4 = a1[202];
      v5 = *(_QWORD *)(v3 + 296);
      if ( v4 )
      {
        v6 = *(_QWORD *)(v4 + 8);
      }
      else
      {
        v21 = sub_186B270(0x10u);
        v22 = *a1;
        v23 = (__int64 *)v21;
        sub_DFBCB0(*a1);
        v24 = *(_QWORD *)(v22 + 296);
        v25 = (__int64 *)a1[202];
        v23[1] = 0;
        *v23 = v24;
        if ( v23 == v25 )
          goto LABEL_13;
        if ( !v25 )
        {
          a1[202] = v23;
          goto LABEL_13;
        }
        sub_2334C0(v25);
        sub_186B220(v25);
        a1[202] = v23;
        v6 = v23[1];
      }
      if ( v6 )
        break;
LABEL_13:
      if ( !(unsigned __int8)sub_15D2CB0(v5, MEMORY[0x7FFFFFFF8]) )
        goto LABEL_11;
      if ( *((_DWORD *)a1 + 356) == 2 )
        goto LABEL_15;
    }
    if ( !(unsigned __int8)sub_15D2CB0(v5, *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(v6 - 4) - 1))) )
    {
LABEL_11:
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid check-sat command, argument must be a Boolean literal");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
  }
LABEL_15:
  sub_DBF8C0((__int64)a1, "invalid check-sat-assuming command, ')', expected");
  v8 = *a1;
  v9 = 8LL * v2;
  v10 = sub_DC2710(a1)[1];
  v11 = sub_DC2710(a1)[1];
  v12 = v9 + v10;
  if ( v11 )
    v13 = *(_DWORD *)(v11 - 4);
  else
    v13 = 0;
  sub_E09F90(v8, v13 - v2, v12);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v14 = sub_DC2710(a1);
  result = v14[1];
  if ( result )
  {
    v16 = (__int64 *)(result + v9);
    v17 = result + 8LL * *(unsigned int *)(result - 4);
    if ( (unsigned __int64)v16 >= v17 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = *v14;
          if ( (*(_DWORD *)(v18 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v16 >= v17 )
          goto LABEL_26;
      }
      sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( (unsigned __int64)v16 < v17 );
LABEL_26:
    result = v14[1];
    if ( result )
LABEL_27:
      *(_DWORD *)(result - 4) = v2;
  }
  return result;
}

