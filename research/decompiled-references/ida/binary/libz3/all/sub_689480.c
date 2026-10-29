void __fastcall sub_689480(_QWORD *a1)
{
  _QWORD *v1; // r12
  _QWORD *v3; // rdi
  void (__fastcall ***v4)(void *); // rbp
  bool v5; // zf
  __int64 *v6; // rbp
  __int64 *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 *v11; // rbp
  __int64 *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  void (__fastcall ***v15)(void *); // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rbp
  __int64 *v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rdi

  v1 = a1 - 9;
  v3 = a1 + 12;
  *(v3 - 21) = &off_1C69460;
  *(v3 - 12) = off_1C69610;
  sub_1474080();
  sub_14B63F0(a1 + 10);
  v4 = (void (__fastcall ***)(void *))a1[9];
  if ( v4 )
  {
    v5 = (*((_DWORD *)v4 + 12))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  v6 = (__int64 *)a1[8];
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[7];
          v5 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_11;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_11:
    v6 = (__int64 *)a1[8];
    if ( v6 )
LABEL_12:
      sub_186B220(v6 - 1);
  }
  v10 = a1[5];
  *(a1 - 9) = qword_1C75FB0;
  *a1 = qword_1C76160;
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (__int64 *)a1[4];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_23;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = a1[3];
          v5 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_22;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_22:
    v11 = (__int64 *)a1[4];
    if ( v11 )
LABEL_23:
      sub_186B220(v11 - 1);
  }
  *a1 = qword_1C77178;
  *(a1 - 9) = qword_1C76FE8;
  sub_18572D0(a1 + 1);
  v15 = (void (__fastcall ***)(void *))*(a1 - 2);
  *(a1 - 9) = qword_1C63FB0;
  if ( v15 )
  {
    v5 = (*((_DWORD *)v15 + 2))-- == 1;
    if ( v5 )
    {
      (**v15)(v15);
      sub_186B220(v15);
    }
  }
  v16 = *(a1 - 5);
  if ( v16 )
  {
    v17 = *(a1 - 4);
    v5 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v17, v16);
  }
  v18 = (__int64 *)*(a1 - 6);
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = *(a1 - 7);
          v5 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_37;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_37:
    v18 = (__int64 *)*(a1 - 6);
    if ( v18 )
LABEL_38:
      sub_186B220(v18 - 1);
  }
  operator delete(v1, 0xB0u);
}

