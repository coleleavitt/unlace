void __fastcall sub_6738B0(_QWORD *a1)
{
  _QWORD *v1; // r12
  _QWORD *v3; // rdi
  void (__fastcall ***v4)(void *); // rbx
  bool v5; // zf
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  void (__fastcall ***v11)(void *); // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi

  v1 = a1 - 9;
  v3 = a1 + 8;
  *(v3 - 17) = &off_1C68EE0;
  *(v3 - 8) = off_1C69090;
  sub_14CD160();
  v4 = (void (__fastcall ***)(void *))a1[7];
  if ( v4 )
  {
    v5 = (*((_DWORD *)v4 + 12))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  v6 = a1[5];
  *(a1 - 9) = qword_1C75FB0;
  *a1 = qword_1C76160;
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = (__int64 *)a1[4];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[3];
          v5 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_13;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_13:
    v7 = (__int64 *)a1[4];
    if ( v7 )
LABEL_14:
      sub_186B220(v7 - 1);
  }
  *a1 = qword_1C77178;
  *(a1 - 9) = qword_1C76FE8;
  sub_18572D0(a1 + 1);
  v11 = (void (__fastcall ***)(void *))*(a1 - 2);
  *(a1 - 9) = qword_1C63FB0;
  if ( v11 )
  {
    v5 = (*((_DWORD *)v11 + 2))-- == 1;
    if ( v5 )
    {
      (**v11)(v11);
      sub_186B220(v11);
    }
  }
  v12 = *(a1 - 5);
  if ( v12 )
  {
    v13 = *(a1 - 4);
    v5 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v13, v12);
  }
  v14 = (__int64 *)*(a1 - 6);
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = *(a1 - 7);
          v5 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_28;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_28:
    v14 = (__int64 *)*(a1 - 6);
    if ( v14 )
LABEL_29:
      sub_186B220(v14 - 1);
  }
  operator delete(v1, 0x90u);
}

