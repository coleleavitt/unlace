void __fastcall sub_21A2CC0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  _QWORD *v6; // r12
  _QWORD *v7; // rbp
  void *v8; // rdi
  void *v9; // rdi
  _QWORD *v10; // r12
  _QWORD *v11; // rbp
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbp
  void *v21; // rdi
  _QWORD *v22; // r12
  _QWORD *v23; // rbp
  _QWORD *v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbp
  void *v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rbp
  void *v30; // rdi
  __int64 v31; // r12
  __int64 v32; // rbp
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  _QWORD *v38; // r12
  _QWORD *v39; // rbp
  void *v40; // rdi

  *a1 = &off_2C74840;
  v2 = (void *)a1[81];
  if ( v2 )
    operator delete(v2);
  v3 = (void *)a1[78];
  if ( v3 )
    operator delete(v3);
  v4 = (void *)a1[73];
  if ( v4 )
    operator delete(v4);
  v5 = (void *)a1[70];
  if ( v5 )
    operator delete(v5);
  v6 = (_QWORD *)a1[68];
  v7 = (_QWORD *)a1[67];
  if ( v6 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v8 = (void *)v7[1];
        if ( !v8 )
          break;
        operator delete(v8);
        v7 += 16;
        if ( v6 == v7 )
          goto LABEL_12;
      }
      v7 += 16;
    }
    while ( v6 != v7 );
LABEL_12:
    v7 = (_QWORD *)a1[67];
  }
  if ( v7 )
    operator delete(v7);
  v9 = (void *)a1[62];
  if ( v9 )
    operator delete(v9);
  v10 = (_QWORD *)a1[60];
  v11 = (_QWORD *)a1[59];
  if ( v10 != v11 )
  {
    do
    {
      while ( 1 )
      {
        v12 = (void *)v11[7];
        if ( !v12 )
          break;
        operator delete(v12);
        v11 += 10;
        if ( v10 == v11 )
          goto LABEL_20;
      }
      v11 += 10;
    }
    while ( v10 != v11 );
LABEL_20:
    v11 = (_QWORD *)a1[59];
  }
  if ( v11 )
    operator delete(v11);
  v13 = (void *)a1[56];
  if ( v13 )
    operator delete(v13);
  v14 = (void *)a1[53];
  if ( v14 )
    operator delete(v14);
  v15 = (void *)a1[50];
  if ( v15 )
    operator delete(v15);
  v16 = (void *)a1[47];
  if ( v16 )
    operator delete(v16);
  v17 = (void *)a1[44];
  if ( v17 )
    operator delete(v17);
  v18 = (void *)a1[41];
  if ( v18 )
    operator delete(v18);
  v19 = a1[39];
  v20 = a1[38];
  if ( v19 != v20 )
  {
    do
    {
      while ( 1 )
      {
        v21 = *(void **)(v20 + 24);
        if ( v21 != (void *)(v20 + 40) )
          free(v21);
        if ( *(_QWORD *)v20 == v20 + 16 )
          break;
        free(*(void **)v20);
        v20 += 64;
        if ( v19 == v20 )
          goto LABEL_40;
      }
      v20 += 64;
    }
    while ( v19 != v20 );
LABEL_40:
    v20 = a1[38];
  }
  if ( v20 )
    operator delete((void *)v20);
  v22 = (_QWORD *)a1[36];
  v23 = (_QWORD *)a1[35];
  if ( v22 != v23 )
  {
    do
    {
      while ( 1 )
      {
        v24 = (_QWORD *)v23[1];
        if ( v24 == v23 + 3 )
          break;
        operator delete(v24);
        v23 += 5;
        if ( v23 == v22 )
          goto LABEL_46;
      }
      v23 += 5;
    }
    while ( v22 != v23 );
LABEL_46:
    v23 = (_QWORD *)a1[35];
  }
  if ( v23 )
    operator delete(v23);
  v25 = a1[33];
  v26 = a1[32];
  if ( v25 != v26 )
  {
    do
    {
      while ( 1 )
      {
        v27 = *(void **)(v26 + 32);
        if ( v27 != (void *)(v26 + 48) )
          operator delete(v27);
        if ( *(_QWORD *)v26 == v26 + 16 )
          break;
        operator delete(*(void **)v26);
        v26 += 64;
        if ( v26 == v25 )
          goto LABEL_54;
      }
      v26 += 64;
    }
    while ( v25 != v26 );
LABEL_54:
    v26 = a1[32];
  }
  if ( v26 )
    operator delete((void *)v26);
  v28 = a1[30];
  v29 = a1[29];
  if ( v28 != v29 )
  {
    do
    {
      while ( 1 )
      {
        v30 = *(void **)(v29 + 32);
        if ( v30 != (void *)(v29 + 48) )
          operator delete(v30);
        if ( *(_QWORD *)v29 == v29 + 16 )
          break;
        operator delete(*(void **)v29);
        v29 += 64;
        if ( v28 == v29 )
          goto LABEL_62;
      }
      v29 += 64;
    }
    while ( v28 != v29 );
LABEL_62:
    v29 = a1[29];
  }
  if ( v29 )
    operator delete((void *)v29);
  v31 = a1[27];
  v32 = a1[26];
  if ( v31 != v32 )
  {
    do
    {
      while ( 1 )
      {
        v33 = *(void **)(v32 + 32);
        if ( v33 != (void *)(v32 + 48) )
          operator delete(v33);
        if ( *(_QWORD *)v32 == v32 + 16 )
          break;
        operator delete(*(void **)v32);
        v32 += 64;
        if ( v31 == v32 )
          goto LABEL_70;
      }
      v32 += 64;
    }
    while ( v31 != v32 );
LABEL_70:
    v32 = a1[26];
  }
  if ( v32 )
    operator delete((void *)v32);
  v34 = (void *)a1[23];
  if ( v34 )
    operator delete(v34);
  v35 = (void *)a1[20];
  if ( v35 )
    operator delete(v35);
  v36 = (void *)a1[17];
  if ( v36 )
    operator delete(v36);
  v37 = (void *)a1[14];
  if ( v37 )
    operator delete(v37);
  v38 = (_QWORD *)a1[10];
  v39 = (_QWORD *)a1[9];
  if ( v38 != v39 )
  {
    do
    {
      while ( 1 )
      {
        v40 = (void *)v39[6];
        if ( !v40 )
          break;
        operator delete(v40);
        v39 += 10;
        if ( v38 == v39 )
          goto LABEL_84;
      }
      v39 += 10;
    }
    while ( v38 != v39 );
LABEL_84:
    v39 = (_QWORD *)a1[9];
  }
  if ( v39 )
    operator delete(v39);
  *a1 = &unk_2C74610;
  sub_21A25E0(a1);
}
