void __fastcall sub_3207A0(_QWORD *a1)
{
  void (__fastcall ***v1)(void *); // rbp
  bool v3; // zf
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  void (__fastcall ***v13)(void *); // rbp
  void *v14; // r12
  void *v15; // rbp
  __int64 *v16; // rbp
  __int64 *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // rbp
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi

  v1 = (void (__fastcall ***)(void *))a1[28];
  *a1 = &off_1C64408;
  if ( v1 )
  {
    v3 = (*((_DWORD *)v1 + 2))-- == 1;
    if ( v3 )
    {
      (**v1)(v1);
      sub_186B220(v1);
    }
  }
  v4 = (__int64 *)a1[27];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[26];
          v3 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_11;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_11:
    v4 = (__int64 *)a1[27];
    if ( v4 )
LABEL_12:
      sub_186B220(v4 - 1);
  }
  v8 = (__int64 *)a1[25];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[24];
          v3 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_20;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_20:
    v8 = (__int64 *)a1[25];
    if ( v8 )
LABEL_21:
      sub_186B220(v8 - 1);
  }
  *a1 = qword_1C64158;
  sub_18572D0(a1 + 19);
  v12 = a1[18];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = (void (__fastcall ***)(void *))a1[17];
  if ( v13 )
  {
    v3 = (*((_DWORD *)v13 + 4))-- == 1;
    if ( v3 )
    {
      (**v13)(v13);
      sub_186B220(v13);
    }
  }
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 13);
  sub_182CBA0(v14, a1 + 15);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 9);
  sub_182CBA0(v15, a1 + 11);
  v16 = (__int64 *)a1[8];
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 >= v17 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = a1[7];
          v3 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_34;
      }
      sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_34:
    v16 = (__int64 *)a1[8];
    if ( v16 )
LABEL_35:
      sub_186B220(v16 - 1);
  }
  v20 = (__int64 *)a1[6];
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    if ( v20 >= v21 )
      goto LABEL_44;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = a1[5];
          v3 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_43;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_43:
    v20 = (__int64 *)a1[6];
    if ( v20 )
LABEL_44:
      sub_186B220(v20 - 1);
  }
  operator delete(a1, 0xE8u);
}

