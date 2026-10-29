__int64 __fastcall sub_652780(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // r12d
  __int64 v8; // r15
  char *v9; // rax
  unsigned int *v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rbx
  char *v15; // [rsp+8h] [rbp-40h]
  unsigned int *v16; // [rsp+8h] [rbp-40h]

  v5 = a2;
  if ( !a2 )
    v5 = a1[1];
  if ( !a4 )
    return 0;
  v6 = sub_64BE30((__int64)a1, v5, a4);
  v7 = v6;
  if ( !v6 )
    return 0;
  if ( a3 == v6 )
    return 0;
  if ( (int)a3 <= 0 )
    return 0;
  v8 = *(_QWORD *)(v5 + 64);
  if ( a3 >= *(_DWORD *)(v8 + 48) )
    return 0;
  v9 = *(char **)(v8 + 40);
  if ( !v9 )
    v9 = (char *)sub_64AEC0(*(_QWORD *)(v5 + 64), 0);
  v10 = (unsigned int *)&v9[4 * a3];
  if ( *v10 == -1 )
    goto LABEL_15;
  if ( (*v10 & 0x80000000) != 0 )
    return 0;
  v11 = v5;
  if ( !v5 )
    v11 = a1[1];
  v15 = &v9[4 * a3];
  sub_651240(a1, v11, a3, 0);
  v10 = (unsigned int *)v15;
  if ( *(_DWORD *)v15 != -1 )
  {
    if ( !under_debugger )
      interr(143);
    BUG();
  }
LABEL_15:
  v16 = v10;
  sub_64A0C0(*a1, (__int64 *)v8, a3, -1, v7);
  *v16 = v7 | 0x80000000;
  *(_DWORD *)(v5 + 32) |= 0x40u;
  v12 = *(_QWORD *)(*a1 + 1672);
  if ( (*(_DWORD *)(v12 + 2608))++ == -1 )
    *(_DWORD *)(v12 + 2608) = 1;
  mark_builtin_widgets(1024, 0, 1);
  sub_6B8D40(v12);
  sub_39ADA0(0x48u, 4, a3, 0);
  sub_52CCE0(0, 1, a3);
  return 1;
}
