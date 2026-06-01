void __fastcall strings_chooser_t__::vfunc_9(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  char *v8; // r8
  unsigned __int64 v9; // rdi
  char *v10; // rsi
  __int64 v11; // rax
  char *v12; // r9
  __int64 i; // rax
  char *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 *v17; // rcx
  __int64 *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi

  v3 = *(_QWORD *)(a1 + 224);
  if ( *(_QWORD *)(v3 + 24) && a3[1] )
  {
    a2[1] = 0;
    v6 = a3[1];
    if ( a2[2] < v6 )
    {
      *a2 = qvector_reserve(a2, *a2, v6, 8);
      if ( !a3[1] )
        return;
    }
    else if ( !v6 )
    {
      return;
    }
    v7 = 0;
    do
    {
      v8 = *(char **)(v3 + 16);
      v9 = *(_QWORD *)(*a3 + 8 * v7);
      v10 = v8;
      v11 = 16LL * *(_QWORD *)(v3 + 24);
      v12 = &v8[v11];
      for ( i = v11 >> 4; i > 0; i >>= 1 )
      {
        while ( 1 )
        {
          v14 = &v10[16 * (i >> 1)];
          if ( *(_QWORD *)v14 >= v9 )
            break;
          v10 = v14 + 16;
          i = i - 1 - (i >> 1);
          if ( i <= 0 )
            goto LABEL_10;
        }
      }
LABEL_10:
      if ( v12 == v10 || v8 != v10 && v9 != *(_QWORD *)v10 )
        v10 -= 16;
      v15 = a2[1];
      v16 = (v10 - v8) >> 4;
      v17 = (__int64 *)(*a2 + 8 * v15);
      if ( (__int64 *)*a2 == v17 )
        goto LABEL_22;
      v18 = (__int64 *)*a2;
      while ( v16 != *v18 )
      {
        if ( v17 == ++v18 )
          goto LABEL_22;
      }
      if ( v18 == v17 )
      {
LABEL_22:
        v19 = v15 + 1;
        if ( a2[2] < v19 )
        {
          v20 = qvector_reserve(a2, *a2, v19, 8);
          v21 = a2[1];
          *a2 = v20;
          v17 = (__int64 *)(v20 + 8 * v21);
        }
        *v17 = v16;
        ++a2[1];
      }
      ++v7;
    }
    while ( v7 < a3[1] );
  }
  else
  {
    v22 = *a2;
    if ( *a2 )
    {
      a2[1] = 0;
      qfree(v22, (const char *)a2);
      *a2 = 0;
      a2[2] = 0;
    }
  }
}
