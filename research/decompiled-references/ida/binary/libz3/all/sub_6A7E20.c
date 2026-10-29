void __fastcall sub_6A7E20(_QWORD *a1)
{
  _QWORD *v1; // r12
  _QWORD *v3; // rdi
  void (__fastcall ***v4)(void *); // rbp
  bool v5; // zf
  void (__fastcall ***v6)(void *); // rbp
  __int64 *v7; // rbp
  __int64 *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rbp
  __int64 *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 *v19; // rbp
  __int64 *v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 *v23; // rbp
  __int64 *v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  __int64 *v32; // rbp
  __int64 *v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  void (__fastcall ***v38)(void *); // rbp
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 *v41; // rbp
  __int64 *v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rdi

  v1 = a1 - 9;
  *(a1 - 9) = &off_1C69A08;
  *a1 = off_1C69BF0;
  v3 = (_QWORD *)a1[580];
  if ( v3 != a1 + 582 )
    operator delete(v3, a1[582] + 1LL);
  v4 = (void (__fastcall ***)(void *))a1[579];
  if ( v4 )
  {
    v5 = (*((_DWORD *)v4 + 2))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  v6 = (void (__fastcall ***)(void *))a1[578];
  if ( v6 )
  {
    v5 = (*((_DWORD *)v6 + 2))-- == 1;
    if ( v5 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  sub_16234F0(a1 + 572);
  v7 = (__int64 *)a1[571];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[570];
          v5 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_16;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_16:
    v7 = (__int64 *)a1[571];
    if ( v7 )
LABEL_17:
      sub_186B220(v7 - 1);
  }
  v11 = (__int64 *)a1[569];
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
          v14 = a1[568];
          v5 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v5 )
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
    v11 = (__int64 *)a1[569];
    if ( v11 )
LABEL_26:
      sub_186B220(v11 - 1);
  }
  v15 = (__int64 *)a1[567];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = a1[566];
          v5 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_34;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_34:
    v15 = (__int64 *)a1[567];
    if ( v15 )
LABEL_35:
      sub_186B220(v15 - 1);
  }
  v19 = (__int64 *)a1[565];
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    if ( v19 >= v20 )
      goto LABEL_44;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = a1[564];
          v5 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_43;
      }
      sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( v19 < v20 );
LABEL_43:
    v19 = (__int64 *)a1[565];
    if ( v19 )
LABEL_44:
      sub_186B220(v19 - 1);
  }
  v23 = (__int64 *)a1[563];
  if ( v23 )
  {
    v24 = &v23[*((unsigned int *)v23 - 1)];
    if ( v23 >= v24 )
      goto LABEL_53;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = a1[562];
          v5 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v23 >= v24 )
          goto LABEL_52;
      }
      sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( v23 < v24 );
LABEL_52:
    v23 = (__int64 *)a1[563];
    if ( v23 )
LABEL_53:
      sub_186B220(v23 - 1);
  }
  sub_786740(a1 + 559);
  v27 = a1[558];
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = a1[557];
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = (void *)a1[554];
  if ( v29 )
    sub_186B220(v29);
  v30 = (void *)a1[551];
  if ( v30 )
    sub_186B220(v30);
  v31 = (void *)a1[548];
  if ( v31 )
    sub_186B220(v31);
  v32 = (__int64 *)a1[547];
  if ( v32 )
  {
    v33 = &v32[*((unsigned int *)v32 - 1)];
    if ( v32 >= v33 )
      goto LABEL_72;
    do
    {
      while ( 1 )
      {
        v34 = *v32;
        if ( *v32 )
        {
          v35 = a1[546];
          v5 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v32 >= v33 )
          goto LABEL_71;
      }
      sub_15D7BC0(v35, v34);
      ++v32;
    }
    while ( v32 < v33 );
LABEL_71:
    v32 = (__int64 *)a1[547];
    if ( v32 )
LABEL_72:
      sub_186B220(v32 - 1);
  }
  sub_180C0E0(a1 + 539);
  v36 = a1[538];
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = a1[537];
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  sub_18572D0(a1 + 536);
  sub_11C05E0(a1 + 3);
  *a1 = qword_1C77178;
  *(a1 - 9) = qword_1C76FE8;
  sub_18572D0(a1 + 1);
  v38 = (void (__fastcall ***)(void *))*(a1 - 2);
  *(a1 - 9) = qword_1C63FB0;
  if ( v38 )
  {
    v5 = (*((_DWORD *)v38 + 2))-- == 1;
    if ( v5 )
    {
      (**v38)(v38);
      sub_186B220(v38);
    }
  }
  v39 = *(a1 - 5);
  if ( v39 )
  {
    v40 = *(a1 - 4);
    v5 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v40, v39);
  }
  v41 = (__int64 *)*(a1 - 6);
  if ( v41 )
  {
    v42 = &v41[*((unsigned int *)v41 - 1)];
    if ( v41 >= v42 )
      goto LABEL_91;
    do
    {
      while ( 1 )
      {
        v43 = *v41;
        if ( *v41 )
        {
          v44 = *(a1 - 7);
          v5 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v41 >= v42 )
          goto LABEL_90;
      }
      sub_15D7BC0(v44, v43);
      ++v41;
    }
    while ( v41 < v42 );
LABEL_90:
    v41 = (__int64 *)*(a1 - 6);
    if ( v41 )
LABEL_91:
      sub_186B220(v41 - 1);
  }
  operator delete(v1, 0x1290u);
}

