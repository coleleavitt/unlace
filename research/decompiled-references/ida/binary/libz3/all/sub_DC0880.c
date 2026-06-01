__int64 *__fastcall sub_DC0880(_QWORD *a1)
{
  __int64 *v1; // rbp
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 *v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // rdi

  v1 = (__int64 *)a1[208];
  if ( v1 )
    return v1;
  v4 = sub_186B270(0x10u);
  v5 = *a1;
  v1 = (__int64 *)v4;
  v6 = *(_QWORD *)(*a1 + 320LL);
  if ( !v6 )
  {
    v6 = sub_186B270(0x210u);
    sub_17F71C0(v6);
    *(_QWORD *)(v5 + 320) = v6;
  }
  v7 = (__int64 *)a1[208];
  *v1 = v6;
  v1[1] = 0;
  if ( v1 == v7 )
    return v1;
  if ( v7 )
  {
    v8 = v7[1];
    if ( v8 )
    {
      v9 = v8 + 8LL * *(unsigned int *)(v8 - 4);
      if ( v8 >= v9 )
        goto LABEL_14;
      do
      {
        v10 = *v7;
        if ( (*(_DWORD *)(*(_QWORD *)v8 + 4LL))-- == 1 )
          sub_17F9000(v10);
        v8 += 8LL;
      }
      while ( v8 < v9 );
      v8 = v7[1];
      if ( v8 )
LABEL_14:
        sub_186B220((void *)(v8 - 8));
    }
    sub_186B220(v7);
  }
  a1[208] = v1;
  return v1;
}

