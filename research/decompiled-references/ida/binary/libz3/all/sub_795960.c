void __fastcall sub_795960(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void ***v4; // rbx
  void ***v5; // r13
  void **v6; // r12
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  void *v16; // rdi

  *a1 = &off_1C611F0;
  v2 = (void *)a1[14];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[11];
  if ( v3 )
    sub_186B220(v3);
  v4 = (void ***)a1[10];
  *a1 = qword_1C6A598;
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 == v5 )
      goto LABEL_13;
    do
    {
      v6 = *v4;
      if ( *v4 )
      {
        if ( *v6 )
          sub_186B220(*v6);
        sub_186B220(v6);
      }
      ++v4;
    }
    while ( v5 != v4 );
    v5 = (void ***)a1[10];
    if ( v5 )
LABEL_13:
      sub_186B220(v5 - 1);
  }
  v7 = (__int64 *)a1[9];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[8];
          v11 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_21;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_21:
    v7 = (__int64 *)a1[9];
    if ( v7 )
LABEL_22:
      sub_186B220(v7 - 1);
  }
  v12 = (__int64 *)a1[7];
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = a1[6];
          v11 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_30;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_30:
    v12 = (__int64 *)a1[7];
    if ( v12 )
LABEL_31:
      sub_186B220(v12 - 1);
  }
  v16 = (void *)a1[3];
  if ( v16 )
    sub_186B220(v16);
  operator delete(a1, 0x88u);
}

