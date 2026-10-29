__int64 __fastcall sub_688FB0(_QWORD *a1)
{
  _QWORD *v2; // rdi
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
  __int64 result; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rbp
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi

  v2 = a1 + 12;
  *(v2 - 21) = &off_1C69460;
  *(v2 - 12) = off_1C69610;
  sub_1474080();
  sub_14B63F0(a1 + 10);
  v3 = (void (__fastcall ***)(void *))a1[9];
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 12))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v5 = (__int64 *)a1[8];
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
          v8 = a1[7];
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
    v5 = (__int64 *)a1[8];
    if ( v5 )
LABEL_12:
      sub_186B220(v5 - 1);
  }
  v9 = a1[5];
  *(a1 - 9) = qword_1C75FB0;
  *a1 = qword_1C76160;
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = (__int64 *)a1[4];
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
          v13 = a1[3];
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
    v10 = (__int64 *)a1[4];
    if ( v10 )
LABEL_23:
      sub_186B220(v10 - 1);
  }
  *a1 = qword_1C77178;
  *(a1 - 9) = qword_1C76FE8;
  sub_18572D0(a1 + 1);
  v14 = (void (__fastcall ***)(void *))*(a1 - 2);
  result = (__int64)qword_1C63FB0;
  *(a1 - 9) = qword_1C63FB0;
  if ( v14 )
  {
    v4 = (*((_DWORD *)v14 + 2))-- == 1;
    if ( v4 )
    {
      (**v14)(v14);
      result = sub_186B220(v14);
    }
  }
  v16 = *(a1 - 5);
  if ( v16 )
  {
    v17 = *(a1 - 4);
    v4 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v4 )
      result = sub_15D7BC0(v17, v16);
  }
  v18 = (__int64 *)*(a1 - 6);
  if ( v18 )
  {
    result = *((unsigned int *)v18 - 1);
    v19 = &v18[result];
    if ( v18 >= v19 )
      return sub_186B220(v18 - 1);
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = *(a1 - 7);
          v4 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_37;
      }
      result = sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_37:
    v18 = (__int64 *)*(a1 - 6);
    if ( v18 )
      return sub_186B220(v18 - 1);
  }
  return result;
}

