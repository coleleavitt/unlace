void __fastcall sub_31CD60(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi
  void (__fastcall ***v4)(void *); // rbx
  bool v5; // zf
  void *v6; // r12
  void *v7; // rbx
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi

  v2 = a1 + 152;
  *((_QWORD *)v2 - 19) = qword_1C64158;
  sub_18572D0(v2);
  v3 = *((_QWORD *)a1 + 18);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *((void (__fastcall ****)(void *))a1 + 17);
  if ( v4 )
  {
    v5 = (*((_DWORD *)v4 + 4))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 104);
  sub_182CBA0(v6, a1 + 120);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 72);
  sub_182CBA0(v7, a1 + 88);
  v8 = *((__int64 **)a1 + 8);
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *((_QWORD *)a1 + 7);
          v5 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_13;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_13:
    v8 = *((__int64 **)a1 + 8);
    if ( v8 )
LABEL_14:
      sub_186B220(v8 - 1);
  }
  v12 = *((__int64 **)a1 + 6);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_23;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = *((_QWORD *)a1 + 5);
          v5 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_22;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_22:
    v12 = *((__int64 **)a1 + 6);
    if ( v12 )
LABEL_23:
      sub_186B220(v12 - 1);
  }
  operator delete(a1, 0xA0u);
}

