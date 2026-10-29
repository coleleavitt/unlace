__int64 __fastcall sub_2330B0(_QWORD *a1, double a2)
{
  int v2; // r13d
  char v3; // r12
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r12
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE *v19; // rdi
  unsigned int v20; // ebp
  char v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx

  v2 = 0;
  v3 = 1;
  while ( 1 )
  {
    v5 = 0xFFFFFFFFLL;
    qsem_wait(a1[10], 0xFFFFFFFFLL);
    if ( !a1[25] )
      break;
    v6 = a1[25];
    v7 = *(_QWORD *)(v6 + 8);
    a1[25] = 0;
    v8 = v7 & 4;
    v9 = (**(__int64 (__fastcall ***)(__int64))v6)(v6);
    if ( !qword_8CC600 )
      return (unsigned int)-1;
    if ( !v8 )
      *(_QWORD *)(v6 + 8) = v9;
    sub_232FB0((__int64)a1, 30, a2);
    v5 = 0xFFFFFFFFLL;
    qsem_wait(a1[10], 0xFFFFFFFFLL);
    v10 = a1[33];
    qmutex_lock(v10);
    v13 = a1[31];
    if ( !v13 )
      goto LABEL_24;
    v14 = (int *)a1[30];
    v2 = *v14;
    v3 = *((_BYTE *)v14 + 4);
    if ( ((8 * v13) >> 3) - 2 >= 0 )
    {
      memmove(v14, v14 + 2, 8 * v13 - 8);
      v13 = a1[31];
    }
    a1[31] = v13 - 1;
    qmutex_unlock(v10);
    if ( !v3 )
      qsnprintf(&unk_8CC610, 16, "%d", v2);
  }
  v15 = a1[33];
  qmutex_lock(v15);
  v18 = a1[31];
  if ( !v18 )
    goto LABEL_22;
  v19 = (_BYTE *)a1[30];
  v20 = *(_DWORD *)v19;
  v21 = v19[4];
  v5 = (__int64)(v19 + 8);
  if ( ((8 * v18) >> 3) - 2 >= 0 )
  {
    memmove(v19, (const void *)v5, 8 * v18 - 8);
    v18 = a1[31];
  }
  a1[31] = v18 - 1;
  qmutex_unlock(v15);
  if ( !v21 )
  {
    v5 = 16;
    qsnprintf(&unk_8CC610, 16, "%d", v20);
    if ( v3 )
      return v20;
    goto LABEL_20;
  }
  if ( v3 )
  {
LABEL_20:
    if ( under_debugger )
      goto LABEL_26;
    interr(40245, v5, v22, v23, a2);
LABEL_22:
    if ( !under_debugger )
    {
      interr(40244, v5, v16, v17, a2);
LABEL_24:
      if ( !under_debugger )
        interr(40244, v5, v11, v12, a2);
    }
LABEL_26:
    BUG();
  }
  v20 = v2;
  qsnprintf(&unk_8CC610, 16, "%d", v2);
  return v20;
}
