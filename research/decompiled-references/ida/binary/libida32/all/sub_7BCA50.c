void __fastcall sub_7BCA50(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbp
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi
  char *v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbp
  char *v11; // rax
  void *v12; // rdi
  void *v13; // rdi
  char *v14; // rdx
  __int64 v15; // r12
  __int64 k; // rbp
  char *v17; // rax
  void *v18; // rdi
  void *v19; // rdi
  char *v20; // rdx
  __int64 v21; // r12
  __int64 m; // rbp
  char *v23; // rax
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  char *v27; // rdx
  __int64 v28; // r12
  __int64 n; // rbp
  char *v30; // rax
  void *v31; // rdi
  void *v32; // rdi
  char *v33; // rdx
  __int64 v34; // r12
  __int64 ii; // rbp
  char *v36; // rax
  void *v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // rdi
  char *v42; // rdi
  __int64 v43; // r13
  __int64 jj; // rbp
  char *v45; // r12
  void *v46; // rdi
  void *v47; // rdi
  char *v48; // rdi
  __int64 v49; // r13
  __int64 kk; // r12
  char *v51; // rbp
  void *v52; // rdi
  void *v53; // rdi

  v2 = (char *)a1[53];
  *a1 = &off_2B119B0;
  if ( v2 )
  {
    v3 = a1[54];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v2 = (char *)a1[53];
        }
      }
    }
    a1[54] = 0;
    qfree(v2);
  }
  v7 = (void *)a1[50];
  if ( v7 )
  {
    a1[51] = 0;
    qfree(v7);
  }
  v8 = (char *)a1[47];
  if ( v8 )
  {
    v9 = a1[48];
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = &v8[24 * j];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          qfree(v12);
          v8 = (char *)a1[47];
        }
      }
    }
    a1[48] = 0;
    qfree(v8);
  }
  v13 = (void *)a1[44];
  if ( v13 )
  {
    a1[45] = 0;
    qfree(v13);
  }
  v14 = (char *)a1[41];
  if ( v14 )
  {
    v15 = a1[42];
    if ( v15 )
    {
      for ( k = 0; k != v15; ++k )
      {
        v17 = &v14[24 * k];
        v18 = *(void **)v17;
        if ( *(_QWORD *)v17 )
        {
          *((_QWORD *)v17 + 1) = 0;
          qfree(v18);
          v14 = (char *)a1[41];
        }
      }
    }
    a1[42] = 0;
    qfree(v14);
  }
  v19 = (void *)a1[38];
  if ( v19 )
  {
    a1[39] = 0;
    qfree(v19);
  }
  v20 = (char *)a1[35];
  if ( v20 )
  {
    v21 = a1[36];
    if ( v21 )
    {
      for ( m = 0; m != v21; ++m )
      {
        v23 = &v20[24 * m];
        v24 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *((_QWORD *)v23 + 1) = 0;
          qfree(v24);
          v20 = (char *)a1[35];
        }
      }
    }
    a1[36] = 0;
    qfree(v20);
  }
  v25 = (void *)a1[32];
  if ( v25 )
  {
    a1[33] = 0;
    qfree(v25);
  }
  v26 = (void *)a1[29];
  if ( v26 )
  {
    a1[30] = 0;
    qfree(v26);
  }
  v27 = (char *)a1[26];
  if ( v27 )
  {
    v28 = a1[27];
    if ( v28 )
    {
      for ( n = 0; n != v28; ++n )
      {
        v30 = &v27[24 * n];
        v31 = *(void **)v30;
        if ( *(_QWORD *)v30 )
        {
          *((_QWORD *)v30 + 1) = 0;
          qfree(v31);
          v27 = (char *)a1[26];
        }
      }
    }
    a1[27] = 0;
    qfree(v27);
  }
  v32 = (void *)a1[23];
  if ( v32 )
  {
    a1[24] = 0;
    qfree(v32);
  }
  v33 = (char *)a1[20];
  if ( v33 )
  {
    v34 = a1[21];
    if ( v34 )
    {
      for ( ii = 0; ii != v34; ++ii )
      {
        v36 = &v33[24 * ii];
        v37 = *(void **)v36;
        if ( *(_QWORD *)v36 )
        {
          *((_QWORD *)v36 + 1) = 0;
          qfree(v37);
          v33 = (char *)a1[20];
        }
      }
    }
    a1[21] = 0;
    qfree(v33);
  }
  v38 = (void *)a1[17];
  if ( v38 )
  {
    a1[18] = 0;
    qfree(v38);
  }
  v39 = (void *)a1[14];
  if ( v39 )
  {
    a1[15] = 0;
    qfree(v39);
  }
  v40 = (void *)a1[11];
  if ( v40 )
  {
    a1[12] = 0;
    qfree(v40);
  }
  v41 = (void *)a1[8];
  if ( v41 )
  {
    a1[9] = 0;
    qfree(v41);
  }
  v42 = (char *)a1[5];
  if ( v42 )
  {
    v43 = a1[6];
    if ( v43 )
    {
      for ( jj = 0; jj != v43; ++jj )
      {
        v45 = &v42[72 * jj];
        v46 = *((void **)v45 + 5);
        if ( v46 )
        {
          *((_QWORD *)v45 + 6) = 0;
          qfree(v46);
        }
        v47 = *((void **)v45 + 2);
        if ( v47 )
        {
          *((_QWORD *)v45 + 3) = 0;
          qfree(v47);
        }
        v42 = (char *)a1[5];
      }
    }
    a1[6] = 0;
    qfree(v42);
  }
  v48 = (char *)a1[2];
  if ( v48 )
  {
    v49 = a1[3];
    if ( v49 )
    {
      for ( kk = 0; kk != v49; ++kk )
      {
        v51 = &v48[80 * kk];
        v52 = *((void **)v51 + 5);
        if ( v52 )
        {
          *((_QWORD *)v51 + 6) = 0;
          qfree(v52);
        }
        v53 = *((void **)v51 + 2);
        if ( v53 )
        {
          *((_QWORD *)v51 + 3) = 0;
          qfree(v53);
        }
        v48 = (char *)a1[2];
      }
    }
    a1[3] = 0;
    qfree(v48);
  }
}

