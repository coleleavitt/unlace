__int64 *__fastcall sub_394700(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v4; // rax
  __int64 *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // edi
  __int64 *v11; // rcx
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *result; // rax
  __int64 v17; // rdx
  _QWORD *exception; // rbx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  void *v21; // r14
  bool v22; // zf
  __int64 v23; // r15
  __int64 v24; // r12
  unsigned int v25; // eax
  __int64 v26; // r13
  __int64 v27; // r13
  unsigned int v28; // eax
  _QWORD *v29; // r14
  _QWORD *v30; // rdi
  _QWORD *v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-58h]
  char v33[8]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v34[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *(_DWORD **)(a3 + 24);
  *(_QWORD *)(a1 + 64) = a3;
  if ( v4 && *v4 != -1 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "Invalid query argument, expected uninterpreted function name, but argument is interpreted");
    goto LABEL_42;
  }
  v5 = *(__int64 **)(a1 + 56);
  v6 = v5[4];
  sub_DFBCB0(v6);
  v7 = *(_QWORD *)(v6 + 296);
  v8 = v5[10];
  if ( v8 )
    goto LABEL_45;
  v19 = sub_186B270(0xBD8u);
  v20 = (_QWORD *)*v5;
  v8 = v19;
  if ( !*v5 )
  {
    v34[0] = 0;
    v32 = sub_186B270(0x2F8u);
    sub_2527E0(v32, (__int64)v34);
    v29 = (_QWORD *)*v5;
    if ( v32 != *v5 )
    {
      if ( v29 )
      {
        v30 = (_QWORD *)v29[17];
        if ( v30 != v29 + 19 )
          operator delete(v30, v29[19] + 1LL);
        v31 = (_QWORD *)v29[13];
        if ( v31 != v29 + 15 )
          operator delete(v31, v29[15] + 1LL);
        sub_186B220(v29);
      }
      *v5 = v32;
    }
    sub_18572D0(v34);
    v20 = (_QWORD *)*v5;
  }
  sub_64C8D0(v8, v7, v5 + 5, v20, v5 + 1);
  v21 = (void *)v5[10];
  if ( (void *)v8 == v21 )
  {
LABEL_45:
    if ( v5[9] )
      goto LABEL_5;
    goto LABEL_27;
  }
  if ( v21 )
  {
    sub_64D370(v5[10]);
    sub_186B220(v21);
  }
  v22 = v5[9] == 0;
  v5[10] = v8;
  if ( v22 )
  {
LABEL_27:
    v23 = v7 + 560;
    sub_180C5A0(v33, "datalog_relation");
    if ( (unsigned __int8)sub_15D1480(v7 + 560, v33) && (v25 = sub_15D1320(v7 + 560, v33), sub_15D2690(v7, v25)) )
    {
      v26 = v5[4];
      sub_DFBCB0(v26);
      v27 = *(_QWORD *)(v26 + 296);
      v28 = sub_15DA4C0(v23, v33);
      v5[9] = sub_15D2690(v27, v28);
    }
    else
    {
      v24 = sub_186B270(0xA0u);
      sub_1624E10(v24);
      v5[9] = v24;
      sub_180C5A0(v34, "datalog_relation");
      sub_15DA890(v7, v34, v24);
    }
    v8 = v5[10];
  }
LABEL_5:
  v9 = *(unsigned int *)(v8 + 2296);
  v10 = *(_DWORD *)(a3 + 12);
  v11 = *(__int64 **)(v8 + 2288);
  v12 = v9 - 1;
  v9 *= 8;
  v13 = (__int64 *)((char *)v11 + v9);
  v14 = 8LL * (v10 & v12);
  v15 = &v11[(unsigned __int64)v14 / 8];
  if ( v14 == v9 )
  {
LABEL_14:
    while ( v15 != v11 )
    {
      result = (__int64 *)*v11;
      if ( (unsigned __int64)*v11 > 1 )
      {
        if ( *((_DWORD *)result + 3) == v10 && result == (__int64 *)a3 )
          return result;
      }
      else if ( !result )
      {
        break;
      }
      ++v11;
    }
LABEL_12:
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "Invalid query argument, expected a predicate registered as a relation");
LABEL_42:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  result = &v11[(unsigned __int64)v14 / 8];
  while ( 1 )
  {
    v17 = *result;
    if ( (unsigned __int64)*result > 1 )
      break;
    if ( !v17 )
      goto LABEL_12;
LABEL_9:
    if ( v13 == ++result )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v17 + 12) != v10 || v17 != a3 )
    goto LABEL_9;
  return result;
}

