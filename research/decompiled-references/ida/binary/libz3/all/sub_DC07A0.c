__int64 *__fastcall sub_DC07A0(_QWORD *a1)
{
  __int64 *v1; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 *v7; // r13
  __int64 *v8; // r12
  __int64 *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi

  v1 = (__int64 *)a1[201];
  if ( v1 )
    return v1;
  v4 = sub_186B270(0x10u);
  v5 = *a1;
  v1 = (__int64 *)v4;
  sub_DFBCB0(*a1);
  v6 = *(_QWORD *)(v5 + 296);
  v7 = (__int64 *)a1[201];
  v1[1] = 0;
  *v1 = v6;
  if ( v1 == v7 )
    return v1;
  if ( v7 )
  {
    v8 = (__int64 *)v7[1];
    if ( v8 )
    {
      v9 = &v8[*((unsigned int *)v8 - 1)];
      if ( v8 >= v9 )
        goto LABEL_13;
      do
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *v7;
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            sub_15D7BC0(v11, v10);
        }
        ++v8;
      }
      while ( v8 < v9 );
      v8 = (__int64 *)v7[1];
      if ( v8 )
LABEL_13:
        sub_186B220(v8 - 1);
    }
    sub_186B220(v7);
  }
  a1[201] = v1;
  return v1;
}

