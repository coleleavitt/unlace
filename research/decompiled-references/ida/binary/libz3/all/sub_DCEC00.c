__int64 __fastcall sub_DCEC00(_QWORD *a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // r13d
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 result; // rax
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // rdi
  __int64 v20; // rdx
  _QWORD *exception; // rbx
  _QWORD *ptr; // [rsp+8h] [rbp-50h]
  _QWORD *ptra; // [rsp+8h] [rbp-50h]
  __int64 *v24; // [rsp+10h] [rbp-48h]
  __int64 *v25; // [rsp+10h] [rbp-48h]
  int v26; // [rsp+10h] [rbp-48h]
  int v27; // [rsp+18h] [rbp-40h]
  __int64 *v28; // [rsp+18h] [rbp-40h]

  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v3 = sub_1875960(a1 + 180, 48, 0);
  v4 = sub_DC2710(a1)[1];
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = sub_DC07A0(a1)[1];
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    v8 = a1[206];
    if ( v8 )
      goto LABEL_7;
LABEL_19:
    v10 = a1[205];
    v9 = 0;
    if ( v10 )
      goto LABEL_8;
    goto LABEL_20;
  }
  v8 = a1[206];
  v7 = 0;
  if ( !v8 )
    goto LABEL_19;
LABEL_7:
  v9 = *(_DWORD *)(v8 - 4);
  v10 = a1[205];
  if ( v10 )
  {
LABEL_8:
    v11 = *(_QWORD *)(v10 + 8);
    goto LABEL_9;
  }
LABEL_20:
  v24 = (__int64 *)sub_186B270(0x10u);
  ptr = (_QWORD *)*a1;
  sub_DFBCB0(*a1);
  v17 = (__int64 *)a1[205];
  v18 = ptr[37];
  v24[1] = 0;
  *v24 = v18;
  if ( v24 == v17 )
    goto LABEL_27;
  if ( !v17 )
  {
    a1[205] = v24;
    goto LABEL_27;
  }
  sub_2334C0(v17);
  sub_186B220(v17);
  a1[205] = v24;
  v11 = v24[1];
LABEL_9:
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 - 4);
    goto LABEL_11;
  }
LABEL_27:
  v12 = 0;
LABEL_11:
  v13 = a1[204];
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 8);
  }
  else
  {
    v27 = v12;
    v25 = (__int64 *)sub_186B270(0x10u);
    ptra = (_QWORD *)*a1;
    sub_DFBCB0(*a1);
    v19 = (__int64 *)a1[204];
    v12 = v27;
    v20 = ptra[37];
    v25[1] = 0;
    *v25 = v20;
    if ( v25 == v19 )
      goto LABEL_29;
    if ( !v19 )
    {
      a1[204] = v25;
      goto LABEL_29;
    }
    v28 = v25;
    v26 = v12;
    sub_2334C0(v19);
    sub_186B220(v19);
    v12 = v26;
    a1[204] = v28;
    v14 = v28[1];
  }
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 - 4);
    goto LABEL_15;
  }
LABEL_29:
  v15 = 0;
LABEL_15:
  *(_DWORD *)(v3 + 4) = a2;
  *(_DWORD *)v3 = 4;
  *(_DWORD *)(v3 + 24) = 1;
  *(_DWORD *)(v3 + 28) = v15;
  *(_DWORD *)(v3 + 32) = v12;
  *(_DWORD *)(v3 + 36) = v9;
  *(_DWORD *)(v3 + 40) = v7;
  *(_DWORD *)(v3 + 44) = v5;
  *(_OWORD *)(v3 + 8) = 0;
  ++*((_DWORD *)a1 + 406);
  result = sub_DCE5D0(a1);
  if ( !(_DWORD)result )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid quantifier, list of sorted variables is empty");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  return result;
}

