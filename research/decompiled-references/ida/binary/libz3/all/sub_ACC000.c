void __fastcall sub_ACC000(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  void ***v5; // rbx
  void **v6; // rbp
  void **v7; // r13
  __int64 *v8; // r15
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi

  v2 = a1[9];
  if ( v2 )
  {
    v3 = a1[10];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v2);
  }
  a1[9] = 0;
  v5 = (void ***)a1[15];
  if ( !v5 )
    return;
  v6 = *v5;
  if ( !*v5 )
    goto LABEL_32;
  v7 = &v6[*((unsigned int *)v6 - 1)];
  if ( v6 == v7 )
    goto LABEL_31;
  do
  {
    v8 = (__int64 *)*v6;
    if ( !*v6 )
      goto LABEL_28;
    v9 = (__int64 *)v8[1];
    v10 = &v9[2 * *((unsigned int *)v8 + 4)];
    if ( v9 != v10 )
    {
      while ( (unsigned __int64)*v9 <= 1 )
      {
        v9 += 2;
        if ( v10 == v9 )
          goto LABEL_21;
      }
      if ( v10 != v9 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          while ( 1 )
          {
            v13 = *v8;
            v4 = (*(_DWORD *)(v11 + 8))-- == 1;
            if ( !v4 )
              break;
            sub_15D7BC0(v13, v11);
            v12 = v9 + 2;
            if ( v10 == v9 + 2 )
              goto LABEL_21;
LABEL_17:
            while ( 1 )
            {
              v11 = *v12;
              v9 = v12;
              if ( (unsigned __int64)*v12 > 1 )
                break;
              v12 += 2;
              if ( v10 == v12 )
                goto LABEL_21;
            }
            if ( v10 == v12 )
              goto LABEL_21;
          }
        }
        v12 = v9 + 2;
        if ( v10 == v9 + 2 )
          goto LABEL_21;
        goto LABEL_17;
      }
    }
LABEL_21:
    v14 = (void *)v8[9];
    if ( v14 )
      sub_186B220(v14);
    v15 = (void *)v8[4];
    if ( v15 )
      sub_186B220(v15);
    v16 = (void *)v8[1];
    if ( v16 )
      sub_186B220(v16);
    sub_186B220(v8);
LABEL_28:
    ++v6;
  }
  while ( v7 != v6 );
  v5 = (void ***)a1[15];
  if ( v5 )
  {
    v6 = *v5;
    if ( *v5 )
LABEL_31:
      sub_186B220(v6 - 1);
LABEL_32:
    sub_186B220(v5);
  }
  a1[15] = 0;
}

