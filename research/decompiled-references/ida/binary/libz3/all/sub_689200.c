void __fastcall sub_689200(char *a1)
{
  char *v2; // rdi
  void (__fastcall ***v3)(void *); // rbp
  bool v4; // zf
  __int64 *v5; // rbp
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  void (__fastcall ***v14)(void *); // rbp
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi

  v2 = a1 + 168;
  *((_QWORD *)v2 - 21) = &off_1C69460;
  *((_QWORD *)v2 - 12) = off_1C69610;
  sub_1474080();
  sub_14B63F0(a1 + 152);
  v3 = *((void (__fastcall ****)(void *))a1 + 18);
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 12))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v5 = *((__int64 **)a1 + 17);
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *((_QWORD *)a1 + 16);
          v4 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_11;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_11:
    v5 = *((__int64 **)a1 + 17);
    if ( v5 )
LABEL_12:
      sub_186B220(v5 - 1);
  }
  v9 = *((_QWORD *)a1 + 14);
  *(_QWORD *)a1 = qword_1C75FB0;
  *((_QWORD *)a1 + 9) = qword_1C76160;
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *((__int64 **)a1 + 13);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_23;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = *((_QWORD *)a1 + 12);
          v4 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_22;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_22:
    v10 = *((__int64 **)a1 + 13);
    if ( v10 )
LABEL_23:
      sub_186B220(v10 - 1);
  }
  *((_QWORD *)a1 + 9) = qword_1C77178;
  *(_QWORD *)a1 = qword_1C76FE8;
  sub_18572D0(a1 + 80);
  v14 = *((void (__fastcall ****)(void *))a1 + 7);
  *(_QWORD *)a1 = qword_1C63FB0;
  if ( v14 )
  {
    v4 = (*((_DWORD *)v14 + 2))-- == 1;
    if ( v4 )
    {
      (**v14)(v14);
      sub_186B220(v14);
    }
  }
  v15 = *((_QWORD *)a1 + 4);
  if ( v15 )
  {
    v16 = *((_QWORD *)a1 + 5);
    v4 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v16, v15);
  }
  v17 = *((__int64 **)a1 + 3);
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = *((_QWORD *)a1 + 2);
          v4 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_37;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_37:
    v17 = *((__int64 **)a1 + 3);
    if ( v17 )
LABEL_38:
      sub_186B220(v17 - 1);
  }
  operator delete(a1, 0xB0u);
}

