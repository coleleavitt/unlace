void __fastcall sub_E1FA60(_QWORD **a1)
{
  _QWORD *v1; // rbp
  void *v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  void *v6; // r12
  __int64 v7; // rsi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  void (__fastcall ***v13)(void *); // rbx
  void *v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 *v19; // rbx
  __int64 *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi

  v1 = *a1;
  if ( !*a1 )
    return;
  v2 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v1 + 13);
  sub_182CBA0(v2, v1 + 15);
  v3 = v1[12];
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = v3 + 32 * v4;
      do
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3);
        v7 = v3 + 16;
        v3 += 32;
        sub_182CBA0(v6, v7);
      }
      while ( v3 != v5 );
      v3 = v1[12];
    }
    sub_186B220((void *)(v3 - 8));
  }
  v8 = (__int64 *)v1[11];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = v1[10];
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_15;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_15:
    v8 = (__int64 *)v1[11];
    if ( v8 )
LABEL_16:
      sub_186B220(v8 - 1);
  }
  v13 = (void (__fastcall ***)(void *))v1[9];
  if ( !v13 || (v12 = *((_DWORD *)v13 + 4) == 1, --*((_DWORD *)v13 + 4), !v12) )
  {
    v14 = (void *)v1[6];
    if ( !v14 )
      goto LABEL_21;
    goto LABEL_20;
  }
  (**v13)(v13);
  sub_186B220(v13);
  v14 = (void *)v1[6];
  if ( v14 )
LABEL_20:
    sub_186B220(v14);
LABEL_21:
  v15 = (__int64 *)v1[5];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = v1[4];
          v12 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_28;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_28:
    v15 = (__int64 *)v1[5];
    if ( v15 )
LABEL_29:
      sub_186B220(v15 - 1);
  }
  v19 = (__int64 *)v1[3];
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    if ( v19 >= v20 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = v1[2];
          v12 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_37;
      }
      sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( v19 < v20 );
LABEL_37:
    v19 = (__int64 *)v1[3];
    if ( v19 )
LABEL_38:
      sub_186B220(v19 - 1);
  }
  sub_186B220(v1);
}

