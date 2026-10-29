__int64 __fastcall sub_CCEF70(_QWORD *a1, __int64 a2, char a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 i; // rbp
  _DWORD *v8; // rax
  __int64 v9; // r10
  __int64 v10; // rax
  _QWORD *v11; // rdi
  int v12; // r13d
  __int64 v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // rax
  _DWORD *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rbp
  unsigned int v20; // r14d
  size_t v21; // rsi
  unsigned int *v22; // rax
  _DWORD *v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26[9]; // [rsp+0h] [rbp-48h] BYREF

  for ( i = a2; !*(_WORD *)(i + 4); a3 ^= 1u )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(i + 16) + 24LL);
    if ( !v8 )
      break;
    if ( *v8 )
      break;
    if ( v8[1] != 8 )
      break;
    if ( *(_DWORD *)(i + 24) != 1 )
      break;
    i = *(_QWORD *)(i + 32);
  }
  if ( !sub_CCE850((__int64)a1, i) && !sub_CCE850((__int64)a1, v9) )
  {
    if ( a3 )
      return 1;
    goto LABEL_14;
  }
  v10 = a1[7];
  if ( v10 )
  {
    v11 = (_QWORD *)a1[8];
    v12 = *(_DWORD *)(v10 - 4);
    if ( v11 )
      goto LABEL_8;
LABEL_30:
    v25 = (_QWORD *)sub_186B270(0x10u);
    v11 = v25 + 1;
    *v25 = 2;
    a1[8] = v25 + 1;
    v14 = v25 + 1;
LABEL_10:
    *v14 = v12;
    v15 = a1[2];
    ++*((_DWORD *)v11 - 1);
    if ( a3 )
    {
LABEL_11:
      sub_CCE960((__int64)a1, i, *(_QWORD *)(v15 + 864));
      return 1;
    }
    goto LABEL_28;
  }
  v11 = (_QWORD *)a1[8];
  v12 = 0;
  if ( !v11 )
    goto LABEL_30;
LABEL_8:
  v13 = *((unsigned int *)v11 - 1);
  if ( (_DWORD)v13 != *((_DWORD *)v11 - 2) )
  {
    v14 = (_DWORD *)v11 + v13;
    goto LABEL_10;
  }
  v20 = (unsigned int)(3 * v13 + 1) >> 1;
  v21 = 4 * v20 + 8;
  if ( 4 * (int)v13 + 8 >= (unsigned int)v21 || (unsigned int)v13 >= v20 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_163D96(v26, "Overflow encountered when expanding vector", v4);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v26);
    sub_233E40((__int64)v26);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v22 = (unsigned int *)sub_186B300(v11 - 1, v21);
  v23 = v22 + 2;
  *v22 = v20;
  v24 = v22[1];
  a1[8] = v23;
  v23[v24] = v12;
  v15 = a1[2];
  ++*(v23 - 1);
  if ( a3 )
    goto LABEL_11;
LABEL_28:
  sub_CCE960((__int64)a1, i, *(_QWORD *)(v15 + 856));
LABEL_14:
  if ( !*(_WORD *)(i + 4) )
  {
    v17 = *(_DWORD **)(*(_QWORD *)(i + 16) + 24LL);
    if ( v17 )
    {
      if ( !*v17 && v17[1] == 2 && *(_DWORD *)(i + 24) == 2 )
      {
        v18 = *(_QWORD *)(i + 32);
        v19 = *(_QWORD *)(i + 40);
        if ( (unsigned __int8)sub_15D26C0(a1[2], v19) )
        {
          sub_CCEE60((__int64)a1, v18, v19);
        }
        else if ( (unsigned __int8)sub_15D26C0(a1[2], v18) )
        {
          sub_CCEE60((__int64)a1, v19, v18);
        }
      }
    }
  }
  return 1;
}

