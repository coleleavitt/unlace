void __fastcall sub_9748A0(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  void **v5; // r12
  void **v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  void **v9; // r12
  void **v10; // rbp
  __int64 v11; // rbp
  void *v12; // rdi
  __int64 v13; // r12
  void *v14; // rdi
  void **v15; // r12
  void **v16; // rbp
  void **v17; // r12
  void **v18; // rbp
  void **v19; // r12
  void **v20; // rbp
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  void **v25; // r12
  void **v26; // rbp
  void **v27; // r12
  void **v28; // rbp
  void **v29; // r12
  void **v30; // rbp
  void **v31; // r12
  void **v32; // rbp
  void **v33; // r12
  void **v34; // rbp

  v2 = a1 + 105;
  v3 = (_QWORD *)a1[103];
  if ( v3 != v2 )
    operator delete(v3);
  v4 = (_QWORD *)a1[98];
  if ( v4 != a1 + 100 )
    operator delete(v4);
  v5 = (void **)a1[96];
  v6 = (void **)a1[95];
  if ( v5 != v6 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 4;
        if ( v5 == v6 )
          goto LABEL_8;
      }
      v6 += 4;
    }
    while ( v5 != v6 );
LABEL_8:
    v6 = (void **)a1[95];
  }
  if ( v6 )
    operator delete(v6);
  v7 = (_QWORD *)a1[88];
  if ( v7 != a1 + 90 )
    operator delete(v7);
  v8 = (_QWORD *)a1[84];
  if ( v8 != a1 + 86 )
    operator delete(v8);
  v9 = (void **)a1[82];
  v10 = (void **)a1[81];
  if ( v9 != v10 )
  {
    do
    {
      while ( *v10 != v10 + 2 )
      {
        operator delete(*v10);
        v10 += 7;
        if ( v9 == v10 )
          goto LABEL_18;
      }
      v10 += 7;
    }
    while ( v9 != v10 );
LABEL_18:
    v10 = (void **)a1[81];
  }
  if ( v10 )
    operator delete(v10);
  v11 = a1[77];
  if ( v11 )
  {
    while ( 1 )
    {
      sub_974820((__int64)(a1 + 75), *(_QWORD **)(v11 + 24));
      v12 = *(void **)(v11 + 64);
      v13 = *(_QWORD *)(v11 + 16);
      if ( v12 != (void *)(v11 + 80) )
        operator delete(v12);
      v14 = *(void **)(v11 + 32);
      if ( v14 == (void *)(v11 + 48) )
      {
        operator delete((void *)v11);
        if ( !v13 )
          break;
      }
      else
      {
        operator delete(v14);
        operator delete((void *)v11);
        if ( !v13 )
          break;
      }
      v11 = v13;
    }
  }
  v15 = (void **)a1[73];
  v16 = (void **)a1[72];
  if ( v15 != v16 )
  {
    do
    {
      while ( *v16 != v16 + 2 )
      {
        operator delete(*v16);
        v16 += 4;
        if ( v16 == v15 )
          goto LABEL_31;
      }
      v16 += 4;
    }
    while ( v15 != v16 );
LABEL_31:
    v16 = (void **)a1[72];
  }
  if ( v16 )
    operator delete(v16);
  v17 = (void **)a1[69];
  v18 = (void **)a1[68];
  if ( v17 != v18 )
  {
    do
    {
      while ( *v18 != v18 + 2 )
      {
        operator delete(*v18);
        v18 += 4;
        if ( v18 == v17 )
          goto LABEL_37;
      }
      v18 += 4;
    }
    while ( v17 != v18 );
LABEL_37:
    v18 = (void **)a1[68];
  }
  if ( v18 )
    operator delete(v18);
  v19 = (void **)a1[66];
  v20 = (void **)a1[65];
  if ( v19 != v20 )
  {
    do
    {
      while ( *v20 != v20 + 2 )
      {
        operator delete(*v20);
        v20 += 4;
        if ( v19 == v20 )
          goto LABEL_43;
      }
      v20 += 4;
    }
    while ( v19 != v20 );
LABEL_43:
    v20 = (void **)a1[65];
  }
  if ( v20 )
    operator delete(v20);
  v21 = (_QWORD *)a1[61];
  if ( v21 != a1 + 63 )
    operator delete(v21);
  v22 = (_QWORD *)a1[57];
  if ( v22 != a1 + 59 )
    operator delete(v22);
  v23 = (_QWORD *)a1[53];
  if ( v23 != a1 + 55 )
    operator delete(v23);
  v24 = (_QWORD *)a1[49];
  if ( v24 != a1 + 51 )
    operator delete(v24);
  v25 = (void **)a1[44];
  v26 = (void **)a1[43];
  if ( v25 != v26 )
  {
    do
    {
      while ( *v26 != v26 + 2 )
      {
        operator delete(*v26);
        v26 += 4;
        if ( v25 == v26 )
          goto LABEL_57;
      }
      v26 += 4;
    }
    while ( v25 != v26 );
LABEL_57:
    v26 = (void **)a1[43];
  }
  if ( v26 )
    operator delete(v26);
  v27 = (void **)a1[41];
  v28 = (void **)a1[40];
  if ( v27 != v28 )
  {
    do
    {
      while ( *v28 != v28 + 2 )
      {
        operator delete(*v28);
        v28 += 4;
        if ( v27 == v28 )
          goto LABEL_63;
      }
      v28 += 4;
    }
    while ( v27 != v28 );
LABEL_63:
    v28 = (void **)a1[40];
  }
  if ( v28 )
    operator delete(v28);
  v29 = (void **)a1[38];
  v30 = (void **)a1[37];
  if ( v29 != v30 )
  {
    do
    {
      while ( *v30 != v30 + 2 )
      {
        operator delete(*v30);
        v30 += 4;
        if ( v30 == v29 )
          goto LABEL_69;
      }
      v30 += 4;
    }
    while ( v29 != v30 );
LABEL_69:
    v30 = (void **)a1[37];
  }
  if ( v30 )
    operator delete(v30);
  v31 = (void **)a1[35];
  v32 = (void **)a1[34];
  if ( v31 != v32 )
  {
    do
    {
      while ( *v32 != v32 + 2 )
      {
        operator delete(*v32);
        v32 += 4;
        if ( v31 == v32 )
          goto LABEL_75;
      }
      v32 += 4;
    }
    while ( v31 != v32 );
LABEL_75:
    v32 = (void **)a1[34];
  }
  if ( v32 )
    operator delete(v32);
  v33 = (void **)a1[32];
  v34 = (void **)a1[31];
  if ( v33 != v34 )
  {
    do
    {
      while ( *v34 != v34 + 2 )
      {
        operator delete(*v34);
        v34 += 4;
        if ( v34 == v33 )
          goto LABEL_81;
      }
      v34 += 4;
    }
    while ( v33 != v34 );
LABEL_81:
    v34 = (void **)a1[31];
  }
  if ( v34 )
    operator delete(v34);
}

