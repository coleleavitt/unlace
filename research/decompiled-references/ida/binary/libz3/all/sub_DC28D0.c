__int64 *__fastcall sub_DC28D0(_QWORD *a1)
{
  __int64 *v1; // rbp
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 *v6; // r13
  __int64 *v7; // r12
  __int64 *v8; // r14
  __int64 v9; // rsi

  v1 = (__int64 *)a1[200];
  if ( v1 )
    return v1;
  v3 = sub_186B270(0x10u);
  v4 = *a1;
  v1 = (__int64 *)v3;
  v5 = *(_QWORD *)(*a1 + 312LL);
  if ( !v5 )
  {
    sub_DFBCB0(*a1);
    v5 = *(_QWORD *)(v4 + 312);
  }
  v6 = (__int64 *)a1[200];
  *v1 = v5;
  v1[1] = 0;
  if ( v1 == v6 )
    return v1;
  if ( v6 )
  {
    v7 = (__int64 *)v6[1];
    if ( v7 )
    {
      v8 = &v7[*((unsigned int *)v7 - 1)];
      if ( v7 >= v8 )
        goto LABEL_11;
      do
      {
        v9 = *v7++;
        sub_DC2790(*v6, v9);
      }
      while ( v7 < v8 );
      v7 = (__int64 *)v6[1];
      if ( v7 )
LABEL_11:
        sub_186B220(v7 - 1);
    }
    sub_186B220(v6);
  }
  a1[200] = v1;
  return v1;
}

