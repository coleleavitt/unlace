__int64 *__fastcall sub_DC7120(_QWORD *a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r12
  __int64 *v17; // r12
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 *v22; // r12
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 *v26; // r14
  __int64 v27; // r12
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  _QWORD *exception; // rbx
  int v34[2]; // [rsp+0h] [rbp-30h] BYREF

  result = *(__int64 **)(a2 + 24);
  if ( !result )
    return result;
  if ( result == (__int64 *)a1[227] )
  {
    v13 = sub_DC2710(a1)[1];
    v14 = 0x7FFFFFFF8LL;
    if ( v13 )
      v14 = 8LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
    v15 = *(_QWORD *)(v13 + v14);
    if ( !v15 )
    {
      if ( !*((_BYTE *)a1 + 2065) )
      {
        exception = __cxa_allocate_exception(0x30u);
        sub_305660(exception, "invalid empty pattern");
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      goto LABEL_22;
    }
    v16 = *a1;
    sub_DFBCB0(*a1);
    if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(v16 + 296), v15) )
    {
      v17 = (__int64 *)a1[204];
      if ( v17
        || (v23 = sub_186B270(0x10u),
            v24 = *a1,
            v17 = (__int64 *)v23,
            sub_DFBCB0(*a1),
            v25 = *(_QWORD *)(v24 + 296),
            v26 = (__int64 *)a1[204],
            v17[1] = 0,
            *v17 = v25,
            v17 == v26) )
      {
        *(_QWORD *)v34 = v15;
      }
      else
      {
        if ( v26 )
          goto LABEL_31;
        a1[204] = v17;
        *(_QWORD *)v34 = v15;
      }
LABEL_19:
      ++*(_DWORD *)(v15 + 8);
LABEL_20:
      sub_DBF5A0(v17 + 1, v34);
LABEL_22:
      v18 = sub_DC2710(a1);
      return (__int64 *)sub_39BF70(v18);
    }
    v27 = *a1;
    sub_DFBCB0(*a1);
    v28 = *(_QWORD *)(v27 + 296);
    *(_QWORD *)v34 = v15;
    v29 = sub_15E1EC0(v28, 1, (int)v34);
    v17 = (__int64 *)a1[204];
    v15 = v29;
    if ( v17
      || (v30 = sub_186B270(0x10u),
          v31 = *a1,
          v17 = (__int64 *)v30,
          sub_DFBCB0(*a1),
          v32 = *(_QWORD *)(v31 + 296),
          v26 = (__int64 *)a1[204],
          v17[1] = 0,
          *v17 = v32,
          v17 == v26) )
    {
LABEL_33:
      *(_QWORD *)v34 = v15;
      if ( !v15 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( !v26 )
    {
LABEL_32:
      a1[204] = v17;
      goto LABEL_33;
    }
LABEL_31:
    sub_2334C0(v26);
    sub_186B220(v26);
    goto LABEL_32;
  }
  if ( result != (__int64 *)a1[228] )
  {
    sub_1872CE0("");
    sub_1873130(114, 1073);
  }
  v4 = (__int64 *)a1[205];
  if ( !v4 )
  {
    v19 = sub_186B270(0x10u);
    v20 = *a1;
    v4 = (__int64 *)v19;
    sub_DFBCB0(*a1);
    v21 = *(_QWORD *)(v20 + 296);
    v22 = (__int64 *)a1[205];
    v4[1] = 0;
    *v4 = v21;
    if ( v4 != v22 )
    {
      if ( v22 )
      {
        sub_2334C0(v22);
        sub_186B220(v22);
      }
      a1[205] = v4;
    }
  }
  v5 = sub_DC2710(a1)[1];
  v6 = 0x7FFFFFFF8LL;
  if ( v5 )
    v6 = 8LL * (unsigned int)(*(_DWORD *)(v5 - 4) - 1);
  v7 = *(_QWORD *)(v5 + v6);
  *(_QWORD *)v34 = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  sub_DBF5A0(v4 + 1, v34);
  result = sub_DC2710(a1);
  v8 = result[1];
  v9 = (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
  v10 = *(_QWORD *)(v8 + 8 * v9);
  *(_DWORD *)(v8 - 4) = v9;
  if ( v10 )
  {
    v11 = *result;
    if ( (*(_DWORD *)(v10 + 8))-- == 1 )
      return (__int64 *)sub_15D7BC0(v11, v10);
  }
  return result;
}

