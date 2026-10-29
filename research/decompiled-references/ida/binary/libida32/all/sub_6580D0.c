void __fastcall sub_6580D0(__int64 *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  size_t v6; // rbx
  unsigned __int64 v7; // r12
  const void *v8; // r8
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  const void *v13; // [rsp+8h] [rbp-40h]
  const void *v14; // [rsp+8h] [rbp-40h]

  if ( a4 < a3 || a2[1] < a4 )
  {
    if ( !under_debugger )
      interr(1498);
    BUG();
  }
  v6 = a4 - a3;
  if ( a4 != a3 )
  {
    v7 = a1[1];
    v8 = (const void *)(a3 + *a2);
    v9 = v7 + v6;
    if ( __CFADD__(v7, v6) )
    {
      if ( v7 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v7 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_9:
        memcpy((void *)(v7 + *a1), v8, v6);
        if ( a2[4] )
          sub_658010(a1 + 3, (const void *)(a3 + a2[3]), v6);
        return;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v10 = *a1;
    v11 = a1[1];
    if ( a1[2] < v9 )
    {
      v14 = v8;
      v12 = qvector_reserve(a1, v10, v9, 1);
      v8 = v14;
      *a1 = v12;
      v10 = v12;
      v11 = a1[1];
    }
    v13 = v8;
    memset((void *)(v10 + v11), 0, v9 - v11);
    a1[1] = v9;
    v8 = v13;
    goto LABEL_9;
  }
}

