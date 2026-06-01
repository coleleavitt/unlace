__int64 __fastcall sub_59FDE0(_QWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r12
  unsigned int *v8; // r15
  unsigned int *v10; // rax
  _DWORD *v11; // rsi
  unsigned int v12; // eax
  char v13; // r13
  unsigned __int64 v14; // rdx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int *v19; // rax
  __int64 v20; // rax

  v4 = a3;
  v5 = (__int64)a1;
  v8 = sub_4EE820((__int64)(a1 + 203), a3);
  if ( v4 < *(_DWORD *)a2 || v4 >= *(_DWORD *)(a2 + 4) )
  {
    if ( v8 && (unsigned int *)a2 != v8 && *(_DWORD *)a2 != v8[4] )
      return 0;
    if ( (int)sub_5AEEA0(a1, a2, v4) < 0 )
    {
      v18 = sub_5B2CA0(a1, a2, v4);
      v4 = v18;
      if ( v18 == -1 )
        return 0;
      v19 = sub_4EE820((__int64)(a1 + 203), v18);
      v8 = v19;
      if ( v19 )
      {
        if ( (unsigned int *)a2 != v19 && v19[4] != *(_DWORD *)a2 )
          return 0;
      }
    }
  }
  if ( !a4 )
  {
    sub_5A00E0(a1, a2, v4);
    return 1;
  }
  v10 = sub_59ED40(a1, a2, v4);
  v11 = v10;
  if ( !v10 )
  {
    if ( *(_QWORD *)(a2 + 48) )
    {
      a1 = (_QWORD *)a2;
      v11 = (_DWORD *)sub_59CC20(a2, 0);
      if ( !v11 )
        return 0;
    }
    else
    {
      a1 = &qword_20;
      v20 = qcalloc(32, 8);
      *(_QWORD *)(a2 + 48) = v20;
      v11 = (_DWORD *)v20;
      if ( !v20 )
        sub_3B74D0((int)"add_stkpnt");
      *(_DWORD *)(a2 + 40) = 1;
    }
    v11[1] = 0;
    v13 = 1;
    goto LABEL_14;
  }
  if ( *v10 != v4 )
  {
    a1 = (_QWORD *)a2;
    v17 = sub_59CC20(a2, (__int64)v10);
    if ( v17 )
    {
      v11 = (_DWORD *)(v17 + 8);
      v13 = 1;
      goto LABEL_14;
    }
    return 0;
  }
  v12 = v10[1];
  if ( *(_DWORD **)(a2 + 48) != v11 )
    v12 -= *(v11 - 1);
  v13 = 0;
  a4 -= v12;
  if ( !a4 )
    return 1;
LABEL_14:
  *v11 = v4;
  v14 = ((__int64)v11 - *(_QWORD *)(a2 + 48)) >> 3;
  if ( v14 < *(unsigned int *)(a2 + 40) )
  {
    v15 = &v11[-2 * v14];
    do
      v15[2 * v14++ + 1] += a4;
    while ( v14 < *(unsigned int *)(a2 + 40) );
  }
  if ( *(_DWORD *)a2 >= v4 )
  {
    v11 = (_DWORD *)a2;
    a1 = (_QWORD *)v5;
    sub_5A0050(v5, a2);
  }
  if ( (get_merge_state(a1, v11) & 2) != 0 )
  {
    sub_5B5740(v5, a2, 1);
    return 1;
  }
  v16 = 0xFFFFFFFFLL;
  if ( v8 )
    v16 = v8[1];
  sub_5B18C0(v5, a2, v4, v16, 0);
  return sub_59FD50(v5, a2, v13);
}

