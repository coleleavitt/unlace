void __fastcall sub_DCCA60(_QWORD *a1)
{
  _QWORD *exception; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // ebp
  int i; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  int v21; // [rsp+0h] [rbp-48h]
  int v22[2]; // [rsp+8h] [rbp-40h] BYREF
  int v23[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v24; // [rsp+18h] [rbp-30h]

  if ( *((_DWORD *)a1 + 356) == 9
    || (sub_DC0980(a1), *((_DWORD *)a1 + 356) != 4)
    || (v3 = a1[6], v3 == a1[254])
    || v3 == a1[220] )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid sort definition, symbol expected");
    goto LABEL_3;
  }
  v4 = *a1;
  *(_QWORD *)v22 = a1[6];
  if ( sub_DF89E0(v4, v22) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid sort definition, sort already declared/defined");
LABEL_3:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v5 = 0;
  sub_DCADA0((__int64)(a1 + 190));
  sub_DBF660((__int64)a1, "invalid sort declaration, parameters missing");
  for ( i = *((_DWORD *)a1 + 356); i != 2; *((_DWORD *)a1 + 356) = i )
  {
    if ( i != 4
      || (v7 = a1[6], v7 == a1[254])
      || v7 == a1[220]
      || (*(_QWORD *)v23 = a1[6],
          LODWORD(v24) = v5,
          ++v5,
          sub_DCB4E0((__int64)(a1 + 190), (__int64)v23),
          v8 = *((_DWORD *)a1 + 356),
          v8 == 9) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid sort parameter, symbol or ')' expected");
      goto LABEL_3;
    }
    if ( v8 == 1 )
    {
      v9 = a1[176];
      ++*((_DWORD *)a1 + 524);
      if ( !v9 )
        goto LABEL_32;
    }
    else
    {
      if ( v8 == 2 )
        --*((_DWORD *)a1 + 524);
      v9 = a1[176];
      if ( !v9 )
      {
LABEL_32:
        v10 = 0;
        goto LABEL_21;
      }
    }
    v10 = *(_DWORD *)(v9 - 4);
LABEL_21:
    *((_DWORD *)a1 + 517) = v10;
    i = sub_DDB0A0((int)a1 + 16, v21, v22[0], v23[0], v24);
  }
  sub_DC0980(a1);
  sub_DBFDB0(a1);
  v11 = *a1;
  v12 = *(_QWORD *)(*a1 + 312LL);
  if ( !v12 )
  {
    sub_DFBCB0(*a1);
    v12 = *(_QWORD *)(v11 + 312);
  }
  v13 = sub_DC28D0(a1)[1];
  v14 = 0x7FFFFFFF8LL;
  if ( v13 )
    v14 = 8LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
  v15 = sub_DE1720(v12, *((unsigned int *)a1 + 383), v22, *(_QWORD *)(v13 + v14));
  v16 = sub_DC28D0(a1);
  v17 = v16[1];
  v18 = *v16;
  v19 = (unsigned int)(*(_DWORD *)(v17 - 4) - 1);
  v20 = *(_QWORD *)(v17 + 8 * v19);
  *(_DWORD *)(v17 - 4) = v19;
  sub_DC2790(v18, v20);
  sub_DFAB80(*a1, v15 + 24, v15);
  sub_DBF590(*((unsigned int *)a1 + 356), (__int64)"invalid sort definition, ')' expected");
  if ( *(_BYTE *)(*a1 + 258LL) )
    sub_DBF4C0((_QWORD *)*a1);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
}

