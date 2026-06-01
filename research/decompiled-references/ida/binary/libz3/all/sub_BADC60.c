void __fastcall sub_BADC60(_QWORD *a1)
{
  void ***v2; // rbx
  void ***v3; // r13
  void **v4; // r12
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  void *v14; // rdi

  v2 = (void ***)a1[10];
  *a1 = qword_1C6A598;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
      goto LABEL_9;
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        if ( *v4 )
          sub_186B220(*v4);
        sub_186B220(v4);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (void ***)a1[10];
    if ( v3 )
LABEL_9:
      sub_186B220(v3 - 1);
  }
  v5 = (__int64 *)a1[9];
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a1[8];
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_17;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_17:
    v5 = (__int64 *)a1[9];
    if ( v5 )
LABEL_18:
      sub_186B220(v5 - 1);
  }
  v10 = (__int64 *)a1[7];
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = a1[6];
          v9 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_26;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_26:
    v10 = (__int64 *)a1[7];
    if ( v10 )
LABEL_27:
      sub_186B220(v10 - 1);
  }
  v14 = (void *)a1[3];
  if ( v14 )
    sub_186B220(v14);
  operator delete(a1, 0x60u);
}

