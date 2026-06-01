__int64 __fastcall sub_320520(_QWORD *a1)
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
  __int64 result; // rax
  __int64 *v17; // rbp
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rbp
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi

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
  result = sub_182CBA0(v15, a1 + 11);
  v17 = (__int64 *)a1[8];
  if ( v17 )
  {
    result = *((unsigned int *)v17 - 1);
    v18 = &v17[result];
    if ( v17 >= v18 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = a1[7];
          v3 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_34;
      }
      result = sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_34:
    v17 = (__int64 *)a1[8];
    if ( v17 )
LABEL_35:
      result = sub_186B220(v17 - 1);
  }
  v21 = (__int64 *)a1[6];
  if ( v21 )
  {
    result = *((unsigned int *)v21 - 1);
    v22 = &v21[result];
    if ( v21 >= v22 )
      return sub_186B220(v21 - 1);
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = a1[5];
          v3 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_43;
      }
      result = sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_43:
    v21 = (__int64 *)a1[6];
    if ( v21 )
      return sub_186B220(v21 - 1);
  }
  return result;
}

