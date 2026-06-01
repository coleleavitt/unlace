void __fastcall sub_3438A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  void (__fastcall ***v8)(void *); // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi

  *a1 = qword_1C75FB0;
  a1[9] = qword_1C76160;
  v2 = a1[14];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (__int64 *)a1[13];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[12];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = (__int64 *)a1[13];
    if ( v3 )
LABEL_11:
      sub_186B220(v3 - 1);
  }
  a1[9] = qword_1C77178;
  *a1 = qword_1C76FE8;
  sub_18572D0(a1 + 10);
  v8 = (void (__fastcall ***)(void *))a1[7];
  *a1 = qword_1C63FB0;
  if ( v8 )
  {
    v7 = (*((_DWORD *)v8 + 2))-- == 1;
    if ( v7 )
    {
      (**v8)(v8);
      sub_186B220(v8);
    }
  }
  v9 = a1[4];
  if ( v9 )
  {
    v10 = a1[5];
    v7 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v10, v9);
  }
  v11 = (__int64 *)a1[3];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = a1[2];
          v7 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_25;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_25:
    v11 = (__int64 *)a1[3];
    if ( v11 )
LABEL_26:
      sub_186B220(v11 - 1);
  }
  operator delete(a1, 0x78u);
}

