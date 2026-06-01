void __fastcall sub_6736C0(char *a1)
{
  char *v2; // rdi
  void (__fastcall ***v3)(void *); // rbx
  bool v4; // zf
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  void (__fastcall ***v10)(void *); // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi

  v2 = a1 + 136;
  *((_QWORD *)v2 - 17) = &off_1C68EE0;
  *((_QWORD *)v2 - 8) = off_1C69090;
  sub_14CD160();
  v3 = *((void (__fastcall ****)(void *))a1 + 16);
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 12))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v5 = *((_QWORD *)a1 + 14);
  *(_QWORD *)a1 = qword_1C75FB0;
  *((_QWORD *)a1 + 9) = qword_1C76160;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *((__int64 **)a1 + 13);
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = *((_QWORD *)a1 + 12);
          v4 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_13;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_13:
    v6 = *((__int64 **)a1 + 13);
    if ( v6 )
LABEL_14:
      sub_186B220(v6 - 1);
  }
  *((_QWORD *)a1 + 9) = qword_1C77178;
  *(_QWORD *)a1 = qword_1C76FE8;
  sub_18572D0(a1 + 80);
  v10 = *((void (__fastcall ****)(void *))a1 + 7);
  *(_QWORD *)a1 = qword_1C63FB0;
  if ( v10 )
  {
    v4 = (*((_DWORD *)v10 + 2))-- == 1;
    if ( v4 )
    {
      (**v10)(v10);
      sub_186B220(v10);
    }
  }
  v11 = *((_QWORD *)a1 + 4);
  if ( v11 )
  {
    v12 = *((_QWORD *)a1 + 5);
    v4 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v12, v11);
  }
  v13 = *((__int64 **)a1 + 3);
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = *((_QWORD *)a1 + 2);
          v4 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_28;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_28:
    v13 = *((__int64 **)a1 + 3);
    if ( v13 )
LABEL_29:
      sub_186B220(v13 - 1);
  }
  operator delete(a1, 0x90u);
}

