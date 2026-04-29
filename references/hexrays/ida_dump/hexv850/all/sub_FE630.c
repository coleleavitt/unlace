__int64 __fastcall sub_FE630(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // rbp
  _QWORD *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 j; // rbp
  _QWORD *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 k; // rbp
  _QWORD *v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 m; // rbp
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 n; // rbp
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 ii; // rbp
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 jj; // rbp
  __int64 v39; // rax

  *a1 = &off_4B0C58;
  a1[40] = 0;
  v2 = a1[41];
  if ( v2 )
  {
    a1[42] = 0;
    qfree(v2);
  }
  qfree(a1[36]);
  v3 = a1[33];
  if ( v3 )
  {
    a1[34] = 0;
    qfree(v3);
  }
  result = qfree(a1[31]);
  v5 = a1[28];
  if ( v5 )
  {
    v6 = a1[29];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (_QWORD *)(v5 + 40 * i);
        v9 = v8[2];
        if ( v9 )
        {
          v8[3] = 0;
          qfree(v9);
        }
        qfree(*v8);
        v5 = a1[28];
      }
    }
    a1[29] = 0;
    result = qfree(v5);
  }
  v10 = a1[25];
  if ( v10 )
  {
    v11 = a1[26];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (_QWORD *)(v10 + 40 * j);
        v14 = v13[2];
        if ( v14 )
        {
          v13[3] = 0;
          qfree(v14);
        }
        qfree(*v13);
        v10 = a1[25];
      }
    }
    a1[26] = 0;
    result = qfree(v10);
  }
  v15 = a1[22];
  if ( v15 )
  {
    v16 = a1[23];
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = (_QWORD *)(v15 + 40 * k);
        v19 = v18[2];
        if ( v19 )
        {
          v18[3] = 0;
          qfree(v19);
        }
        qfree(*v18);
        v15 = a1[22];
      }
    }
    a1[23] = 0;
    result = qfree(v15);
  }
  v20 = a1[19];
  if ( v20 )
  {
    v21 = a1[20];
    if ( v21 )
    {
      for ( m = 0; m != v21; ++m )
      {
        v23 = m;
        qfree(*(_QWORD *)(v20 + 16 * v23));
        v20 = a1[19];
      }
    }
    a1[20] = 0;
    result = qfree(v20);
  }
  v24 = a1[16];
  if ( v24 )
  {
    a1[17] = 0;
    result = qfree(v24);
  }
  v25 = a1[13];
  if ( v25 )
  {
    a1[14] = 0;
    result = qfree(v25);
  }
  v26 = a1[10];
  if ( v26 )
  {
    v27 = a1[11];
    if ( v27 )
    {
      for ( n = 0; n != v27; ++n )
      {
        v29 = (__int64 *)(v26 + 24 * n);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30);
          v26 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree(v26);
  }
  v31 = a1[7];
  if ( v31 )
  {
    a1[8] = 0;
    result = qfree(v31);
  }
  v32 = a1[4];
  if ( v32 )
  {
    v33 = a1[5];
    if ( v33 )
    {
      for ( ii = 0; ii != v33; ++ii )
      {
        v35 = 3 * ii;
        qfree(*(_QWORD *)(v32 + 8 * v35));
        v32 = a1[4];
      }
    }
    a1[5] = 0;
    result = qfree(v32);
  }
  v36 = a1[1];
  if ( v36 )
  {
    v37 = a1[2];
    if ( v37 )
    {
      for ( jj = 0; jj != v37; ++jj )
      {
        v39 = 3 * jj;
        qfree(*(_QWORD *)(v36 + 8 * v39));
        v36 = a1[1];
      }
    }
    a1[2] = 0;
    return qfree(v36);
  }
  return result;
}
