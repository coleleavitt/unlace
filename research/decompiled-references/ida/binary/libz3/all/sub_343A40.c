void __fastcall sub_343A40(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  void (__fastcall ***v9)(void *); // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi

  v2 = a1 - 9;
  *(a1 - 9) = qword_1C75FB0;
  *a1 = qword_1C76160;
  v3 = a1[5];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (__int64 *)a1[4];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[3];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_10;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_10:
    v4 = (__int64 *)a1[4];
    if ( v4 )
LABEL_11:
      sub_186B220(v4 - 1);
  }
  *a1 = qword_1C77178;
  *(a1 - 9) = qword_1C76FE8;
  sub_18572D0(a1 + 1);
  v9 = (void (__fastcall ***)(void *))*(a1 - 2);
  *(a1 - 9) = qword_1C63FB0;
  if ( v9 )
  {
    v8 = (*((_DWORD *)v9 + 2))-- == 1;
    if ( v8 )
    {
      (**v9)(v9);
      sub_186B220(v9);
    }
  }
  v10 = *(a1 - 5);
  if ( v10 )
  {
    v11 = *(a1 - 4);
    v8 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v11, v10);
  }
  v12 = (__int64 *)*(a1 - 6);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = *(a1 - 7);
          v8 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_25;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_25:
    v12 = (__int64 *)*(a1 - 6);
    if ( v12 )
LABEL_26:
      sub_186B220(v12 - 1);
  }
  operator delete(v2, 0x78u);
}

