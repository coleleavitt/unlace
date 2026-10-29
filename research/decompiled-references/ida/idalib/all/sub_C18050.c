__int64 __fastcall sub_C18050(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // edx
  __int64 result; // rax
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+10h] [rbp-58h] BYREF
  __int64 v29; // [rsp+18h] [rbp-50h]

  v8 = sub_A62D20(*(_QWORD **)(a1 + 16), a4);
  v9 = sub_21F90D0();
  v10 = v9;
  if ( v8 == v9 )
  {
    sub_21FFCB0(&v28, v9, 1);
    v11 = v28;
    if ( *a5 != v10 )
    {
LABEL_3:
      if ( v11 != v10 )
      {
        sub_21F9590(a5, &v28);
        goto LABEL_5;
      }
LABEL_14:
      sub_9955A0(a5);
      if ( v10 == v28 )
        goto LABEL_31;
      sub_21F97D0(a5, &v28);
      if ( v28 != v10 )
        goto LABEL_6;
      goto LABEL_16;
    }
  }
  else
  {
    sub_21FAF40(&v28, v8, 1);
    v11 = v28;
    if ( *a5 != v10 )
      goto LABEL_3;
  }
  if ( v11 != v10 )
    goto LABEL_14;
  v18 = a5[1];
  if ( !v18 )
    goto LABEL_31;
  v19 = 24LL * *(_QWORD *)(v18 - 8);
  v20 = v18 + v19;
  if ( v18 == v18 + v19 )
  {
    v25 = a5[1];
    goto LABEL_30;
  }
  while ( 1 )
  {
    v25 = v20 - 24;
    v27 = v20;
    v22 = v20 - 24;
    if ( v10 == *(_QWORD *)(v20 - 24) )
      break;
    sub_21F9830(v22);
    v21 = v27;
    if ( v25 == a5[1] )
      goto LABEL_29;
LABEL_26:
    v20 = v25;
  }
  sub_A4F010(v22);
  v21 = v27;
  if ( a5[1] != v25 )
    goto LABEL_26;
LABEL_29:
  v19 = 24LL * *(_QWORD *)(v21 - 32);
LABEL_30:
  operator delete[]((void *)(v25 - 8), v19 + 8);
LABEL_31:
  sub_21FFED0(a5, &v28);
LABEL_5:
  if ( v28 != v10 )
  {
LABEL_6:
    sub_21F9830(&v28);
    goto LABEL_7;
  }
LABEL_16:
  if ( !v29 )
    goto LABEL_7;
  v16 = 24LL * *(_QWORD *)(v29 - 8);
  v17 = v29 + v16;
  if ( v29 == v29 + v16 )
  {
    operator delete[]((void *)(v29 - 8), v16 + 8);
    goto LABEL_7;
  }
  while ( 2 )
  {
    v23 = v17 - 24;
    v24 = v17 - 24;
    if ( v10 != *(_QWORD *)(v17 - 24) )
    {
      sub_21F9830(v24);
      if ( v23 == v29 )
        break;
      goto LABEL_33;
    }
    sub_A4F010(v24);
    if ( v29 != v23 )
    {
LABEL_33:
      v17 -= 24;
      continue;
    }
    break;
  }
  operator delete[]((void *)(v17 - 32), 24LL * *(_QWORD *)(v17 - 32) + 8);
LABEL_7:
  v12 = ((unsigned int)sub_BFE5A0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2320LL)) >> 3) & 7;
  if ( (_BYTE)v12 == 7 )
    v12 = 1;
  v13 = *(_BYTE *)(a3 + 12) ^ 1u;
  if ( *a5 == v10 )
    v14 = sub_2201FE0(a5, a3, v13, v12);
  else
    v14 = sub_21FB140(a5, a3, v13, v12);
  result = *(unsigned __int8 *)(a1 + 8);
  if ( !(_BYTE)result )
    return sub_C104C0(a1, a2, v14);
  return result;
}
