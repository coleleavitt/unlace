__int64 __fastcall sub_6A6FE0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  void (__fastcall ***v3)(void *); // rbp
  bool v4; // zf
  void (__fastcall ***v5)(void *); // rbp
  __int64 *v6; // rbp
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rbp
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rbp
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  __int64 *v31; // rbp
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  void (__fastcall ***v37)(void *); // rbp
  __int64 result; // rax
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 *v41; // rbp
  __int64 *v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rdi

  *a1 = &off_1C69A08;
  a1[9] = off_1C69BF0;
  v2 = (_QWORD *)a1[589];
  if ( v2 != a1 + 591 )
    operator delete(v2, a1[591] + 1LL);
  v3 = (void (__fastcall ***)(void *))a1[588];
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 2))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v5 = (void (__fastcall ***)(void *))a1[587];
  if ( v5 )
  {
    v4 = (*((_DWORD *)v5 + 2))-- == 1;
    if ( v4 )
    {
      (**v5)(v5);
      sub_186B220(v5);
    }
  }
  sub_16234F0(a1 + 581);
  v6 = (__int64 *)a1[580];
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[579];
          v4 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_16;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_16:
    v6 = (__int64 *)a1[580];
    if ( v6 )
LABEL_17:
      sub_186B220(v6 - 1);
  }
  v10 = (__int64 *)a1[578];
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = a1[577];
          v4 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_25;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_25:
    v10 = (__int64 *)a1[578];
    if ( v10 )
LABEL_26:
      sub_186B220(v10 - 1);
  }
  v14 = (__int64 *)a1[576];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[575];
          v4 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_34;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_34:
    v14 = (__int64 *)a1[576];
    if ( v14 )
LABEL_35:
      sub_186B220(v14 - 1);
  }
  v18 = (__int64 *)a1[574];
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_44;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = a1[573];
          v4 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_43;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_43:
    v18 = (__int64 *)a1[574];
    if ( v18 )
LABEL_44:
      sub_186B220(v18 - 1);
  }
  v22 = (__int64 *)a1[572];
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_53;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[571];
          v4 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_52;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_52:
    v22 = (__int64 *)a1[572];
    if ( v22 )
LABEL_53:
      sub_186B220(v22 - 1);
  }
  sub_786740(a1 + 568);
  v26 = a1[567];
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = a1[566];
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = (void *)a1[563];
  if ( v28 )
    sub_186B220(v28);
  v29 = (void *)a1[560];
  if ( v29 )
    sub_186B220(v29);
  v30 = (void *)a1[557];
  if ( v30 )
    sub_186B220(v30);
  v31 = (__int64 *)a1[556];
  if ( v31 )
  {
    v32 = &v31[*((unsigned int *)v31 - 1)];
    if ( v31 >= v32 )
      goto LABEL_72;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = a1[555];
          v4 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v31 >= v32 )
          goto LABEL_71;
      }
      sub_15D7BC0(v34, v33);
      ++v31;
    }
    while ( v31 < v32 );
LABEL_71:
    v31 = (__int64 *)a1[556];
    if ( v31 )
LABEL_72:
      sub_186B220(v31 - 1);
  }
  sub_180C0E0(a1 + 548);
  v35 = a1[547];
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = a1[546];
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  sub_18572D0(a1 + 545);
  sub_11C05E0(a1 + 12);
  a1[9] = qword_1C77178;
  *a1 = qword_1C76FE8;
  sub_18572D0(a1 + 10);
  v37 = (void (__fastcall ***)(void *))a1[7];
  result = (__int64)qword_1C63FB0;
  *a1 = qword_1C63FB0;
  if ( v37 )
  {
    v4 = (*((_DWORD *)v37 + 2))-- == 1;
    if ( v4 )
    {
      (**v37)(v37);
      result = sub_186B220(v37);
    }
  }
  v39 = a1[4];
  if ( v39 )
  {
    v40 = a1[5];
    v4 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v4 )
      result = sub_15D7BC0(v40, v39);
  }
  v41 = (__int64 *)a1[3];
  if ( v41 )
  {
    result = *((unsigned int *)v41 - 1);
    v42 = &v41[result];
    if ( v41 >= v42 )
      return sub_186B220(v41 - 1);
    do
    {
      while ( 1 )
      {
        v43 = *v41;
        if ( *v41 )
        {
          v44 = a1[2];
          v4 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v41 >= v42 )
          goto LABEL_90;
      }
      result = sub_15D7BC0(v44, v43);
      ++v41;
    }
    while ( v41 < v42 );
LABEL_90:
    v41 = (__int64 *)a1[3];
    if ( v41 )
      return sub_186B220(v41 - 1);
  }
  return result;
}

