__int64 __fastcall sub_DCB870(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rax
  int v14; // ebp
  int i; // eax
  __int64 v16; // rax
  int v17; // eax
  _QWORD *exception; // rbx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rsi
  __int64 v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // [rsp+0h] [rbp-58h]
  int v30; // [rsp+8h] [rbp-50h]
  unsigned int v31; // [rsp+Ch] [rbp-4Ch]
  int v32[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v33; // [rsp+18h] [rbp-40h]

  sub_DBF660((__int64)a1, "invalid datatype declaration, '(' expected");
  if ( a1[244] != a1[6] )
  {
    if ( a2 )
    {
      v10 = *a1;
      v11 = *(_QWORD *)(*a1 + 312LL);
      if ( !v11 )
      {
        sub_DFBCB0(*a1);
        v11 = *(_QWORD *)(v10 + 312);
      }
      v12 = sub_DE17C0(v11, 0, a2);
      sub_DFAB80(v10, v12 + 24, v12);
    }
    sub_DC8C80((__int64)a1, a3, v6, v7, v8, v9);
    return sub_DBF8C0((__int64)a1, "invalid datatype declaration, ')' expected");
  }
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v14 = 0;
  sub_DCADA0((__int64)(a1 + 190));
  sub_DBF660((__int64)a1, "invalid sort declaration, parameters missing");
  for ( i = *((_DWORD *)a1 + 356); i != 2; *((_DWORD *)a1 + 356) = i )
  {
    if ( i != 4
      || (v16 = a1[6], v16 == a1[254])
      || v16 == a1[220]
      || (*(_QWORD *)v32 = a1[6],
          LODWORD(v33) = v14,
          ++v14,
          sub_DCB4E0((__int64)(a1 + 190), (__int64)v32),
          v17 = *((_DWORD *)a1 + 356),
          v17 == 9) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid sort parameter, symbol or ')' expected");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( v17 == 1 )
    {
      v19 = a1[176];
      ++*((_DWORD *)a1 + 524);
      if ( !v19 )
        goto LABEL_29;
    }
    else
    {
      if ( v17 == 2 )
        --*((_DWORD *)a1 + 524);
      v19 = a1[176];
      if ( !v19 )
      {
LABEL_29:
        v20 = 0;
        goto LABEL_21;
      }
    }
    v20 = *(_DWORD *)(v19 - 4);
LABEL_21:
    *((_DWORD *)a1 + 517) = v20;
    i = sub_DDB0A0((int)a1 + 16, v29, v30, v32[0], v33);
  }
  sub_DC0980(a1);
  sub_DBF660((__int64)a1, "invalid constructor declaration after par, '(' expected");
  v25 = *((unsigned int *)a1 + 383);
  if ( (_DWORD)v25 && a2 )
  {
    v26 = *a1;
    v27 = *(_QWORD *)(*a1 + 312LL);
    if ( !v27 )
    {
      v31 = *((_DWORD *)a1 + 383);
      sub_DFBCB0(*a1);
      v27 = *(_QWORD *)(v26 + 312);
      v25 = v31;
    }
    v28 = sub_DE17C0(v27, v25, a2);
    sub_DFAB80(v26, v28 + 24, v28);
  }
  sub_DC8C80((__int64)a1, a3, v21, v22, v23, v24);
  sub_DBF8C0((__int64)a1, "invalid datatype declaration, ')' expected");
  return sub_DBF8C0((__int64)a1, "invalid datatype declaration, ')' expected");
}

