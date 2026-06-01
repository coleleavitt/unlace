void __fastcall sub_8BCDF0(__int64 a1, __int64 a2, __int64 a3, size_t a4)
{
  size_t v4; // rax
  __int64 v5; // rbp
  size_t v6; // rax
  size_t v7; // r13
  char *v8; // rax
  size_t v9; // rbx
  char *v10; // rbp
  __int64 v11; // r14
  __int64 v12; // r15
  size_t v13; // rbx
  unsigned int v14; // esi
  char *v15; // rax
  char *v16; // rsi
  int v17; // ecx
  __int64 v18; // r14
  __int64 v19; // rax
  size_t v20; // r13
  size_t i; // rbp
  size_t v22; // rcx
  size_t v23; // r15
  char *v24; // rbx
  char *v25; // rax
  size_t n; // [rsp+0h] [rbp-58h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+10h] [rbp-48h]
  size_t v30; // [rsp+18h] [rbp-40h]

  v27 = a2;
  n = a4;
  if ( a2 >= a3 )
  {
    if ( a2 != a3 )
    {
      v17 = *(_DWORD *)(a1 + 8);
      v28 = (__int64)(n + a2) >> v17;
      v18 = (__int64)(a3 + n) >> v17;
      v19 = *(_QWORD *)a1 - 1LL;
      v20 = v19 & (n + a2);
      for ( i = v19 & (a3 + n); n; n -= v23 )
      {
        if ( !i )
        {
          i = *(_QWORD *)a1;
          LODWORD(v18) = v18 - 1;
        }
        if ( !v20 )
        {
          LODWORD(v28) = v28 - 1;
          v20 = *(_QWORD *)a1;
        }
        v22 = n;
        if ( i <= n )
          v22 = i;
        v23 = v22;
        if ( v22 > v20 )
          v23 = v20;
        v24 = (char *)sub_8BCA60((size_t *)a1, v18, 1);
        i -= v23;
        v20 -= v23;
        v25 = (char *)sub_8BCA60((size_t *)a1, v28, 1);
        *(v25 - 2) = 1;
        memmove(&v25[v20], &v24[i], v23);
      }
    }
  }
  else
  {
    v29 = a3 >> *(_DWORD *)(a1 + 8);
    v4 = *(_QWORD *)a1;
    v5 = a3 & (*(_QWORD *)a1 - 1LL);
    if ( a4 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = v4 - v5;
          if ( v6 > n )
            v6 = n;
          v30 = v6;
          v7 = v6;
          v8 = (char *)sub_8BCA60((size_t *)a1, v29, 1);
          v9 = *(_QWORD *)a1;
          v10 = &v8[v5];
          v11 = v27 >> *(_DWORD *)(a1 + 8);
          v12 = v27 & (*(_QWORD *)a1 - 1LL);
          v4 = *(_QWORD *)a1;
          if ( v7 )
            break;
          LODWORD(v29) = v29 + 1;
          v5 = 0;
        }
        while ( 1 )
        {
          v13 = v9 - v12;
          v14 = v11;
          if ( v13 > v7 )
            v13 = v7;
          LODWORD(v11) = v11 + 1;
          v15 = (char *)sub_8BCA60((size_t *)a1, v14, 1);
          v16 = v10;
          *(v15 - 2) = 1;
          v10 += v13;
          memmove(&v15[v12], v16, v13);
          v7 -= v13;
          if ( !v7 )
            break;
          v9 = *(_QWORD *)a1;
          v12 = 0;
        }
        LODWORD(v29) = v29 + 1;
        v27 += v30;
        n -= v30;
        if ( !n )
          break;
        v4 = *(_QWORD *)a1;
        v5 = 0;
      }
    }
  }
}
