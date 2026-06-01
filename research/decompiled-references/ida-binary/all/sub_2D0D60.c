double __fastcall sub_2D0D60(__int64 a1, const char *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  double result; // xmm0_8
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 j; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 k; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi

  v2 = *((_QWORD *)a2 + 9);
  if ( v2 )
  {
    v3 = *((_QWORD *)a2 + 10);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        v6 = v5[4];
        if ( v6 )
        {
          v5[5] = 0;
          qfree(v6, a2);
        }
        v7 = v5[1];
        if ( v7 )
        {
          v5[2] = 0;
          qfree(v7, a2);
        }
        v2 = *((_QWORD *)a2 + 9);
      }
    }
    *((_QWORD *)a2 + 10) = 0;
    result = qfree(v2, a2);
  }
  v9 = *((_QWORD *)a2 + 6);
  if ( v9 )
  {
    *((_QWORD *)a2 + 7) = 0;
    result = qfree(v9, a2);
  }
  v10 = *((_QWORD *)a2 + 3);
  if ( v10 )
  {
    v11 = *((_QWORD *)a2 + 4);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (__int64 *)(v10 + 24 * j);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14, a2);
          v10 = *((_QWORD *)a2 + 3);
        }
      }
    }
    *((_QWORD *)a2 + 4) = 0;
    result = qfree(v10, a2);
  }
  v15 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    v16 = *((_QWORD *)a2 + 1);
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = (__int64 *)(v15 + 24 * k);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19, a2);
          v15 = *(_QWORD *)a2;
        }
      }
    }
    *((_QWORD *)a2 + 1) = 0;
    return qfree(v15, a2);
  }
  return result;
}
