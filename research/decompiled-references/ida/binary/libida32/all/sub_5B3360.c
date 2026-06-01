__int64 __fastcall sub_5B3360(__int64 *a1, __int64 a2, unsigned int *a3, char a4, double a5, double a6, double a7)
{
  unsigned int v11; // r14d
  unsigned int *v12; // r12
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int *v17; // rsi
  unsigned int v18; // r15d
  __int64 *v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rdx
  const void *v22; // rsi
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // [rsp+0h] [rbp-40h]

  if ( !a3 )
    return 0;
  v11 = *a3;
  v12 = sub_4EE820((__int64)(a1 + 203), *a3);
  if ( (int)sub_4EC9B0((__int64)(a1 + 203), v12) > 0 )
    return 0;
  lock_func_range(a2, 1);
  sub_396090(0x28u, a2, a3);
  v14 = *(_DWORD *)(a2 + 104);
  v15 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a2 + 8) &= ~0x400uLL;
  *(_DWORD *)(a2 + 104) = --v14;
  memmove(a3, a3 + 2, v15 + 8LL * v14 - (_QWORD)a3);
  if ( 8LL * *(int *)(a2 + 104) < (unsigned __int64)*(int *)(a2 + 104) )
    v16 = 0;
  else
    v16 = qrealloc(*(_QWORD *)(a2 + 112));
  *(_QWORD *)(a2 + 112) = v16;
  sub_5AD0D0(a1, a2, 1);
  if ( !v12 )
    sub_365330();
  v17 = v12;
  v18 = v12[1];
  v25 = *v12;
  v19 = (__int64 *)sub_5B0550((__int64)a1, (__int64)v12, *(_DWORD *)a2);
  v20 = v19;
  if ( v19 )
  {
    v21 = *((_QWORD *)v12 + 3);
    v22 = (char *)v19 + 4;
    v23 = v12[5] - 1;
    v12[5] = v23;
    memmove(v20, v22, v21 + 4LL * v23 - (_QWORD)v20);
    if ( 4LL * (int)v12[5] < (unsigned __int64)(int)v12[5] )
      v24 = 0;
    else
      v24 = qrealloc(*((_QWORD *)v12 + 3));
    *((_QWORD *)v12 + 3) = v24;
    v17 = v12;
    v20 = a1;
    sub_5ADA10(a1, (__int64)v12, 1);
  }
  if ( a4 )
  {
    if ( (get_merge_state(v20, v17) & 2) != 0 )
      sub_5B31C0((__int64)a1, (_DWORD *)a2, v12, 0, a5, a6, a7);
    else
      sub_5B31C0((__int64)a1, (_DWORD *)a2, v12, 1, a5, a6, a7);
    sub_5A0860(a1, a2, v25, v18);
    if ( (get_merge_state(a1, a2) & 2) == 0 )
      sub_5AEEF0((int)a1);
  }
  else
  {
    sub_5B31C0((__int64)a1, (_DWORD *)a2, v12, 0, a5, a6, a7);
  }
  sub_396090(0x29u, a2, v11);
  lock_func_range(a2, 0);
  return 1;
}

