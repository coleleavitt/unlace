void __fastcall sub_EB7270(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 *v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 *v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 *v15; // r13
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rbx
  __int64 v22; // r12
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 *src; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+28h] [rbp-40h]
  __int64 v31; // [rsp+28h] [rbp-40h]

  v6 = (char *)a2 - (char *)a1;
  v7 = a2 - a1;
  v26 = (__int64)a3 + (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 48 )
  {
    sub_EB6B30(a1, a2, a4, (__int64)a4, a5, a6);
  }
  else
  {
    v8 = a4;
    src = a1;
    do
    {
      sub_EB6B30(a1, a1 + 7, v8, (__int64)a4, a5, a6);
      a1 += 7;
    }
    while ( (char *)a2 - (char *)a1 > 48 );
    sub_EB6B30(a1, a2, v8, (__int64)a4, a5, a6);
    if ( v6 > 56 )
    {
      v9 = 7;
      while ( 1 )
      {
        v10 = 2 * v9;
        if ( v7 < 2 * v9 )
        {
          v11 = (__int64)a3;
          v17 = v7;
          v15 = src;
        }
        else
        {
          v11 = (__int64)a3;
          v12 = src;
          v30 = v9;
          v13 = -8 * v9;
          v14 = 2 * v9;
          v29 = v13;
          do
          {
            v16 = sub_EB6650(
                    v12,
                    (__int64 *)((char *)&v12[v14] + v29),
                    (__int64 *)((char *)&v12[v14] + v29),
                    (__int64)&v12[v14],
                    v11,
                    (__int64)v8);
            v12 = (__int64 *)((char *)v12 + v14 * 8);
            v15 = v12;
            v11 = (__int64)v16;
            v17 = a2 - v12;
          }
          while ( v10 <= v17 );
          v9 = v30;
        }
        if ( v9 <= v17 )
          v17 = v9;
        v9 *= 4;
        sub_EB6650(v15, &v15[v17], &v15[v17], (__int64)a2, v11, (__int64)v8);
        if ( v7 < v9 )
          break;
        v18 = (__int64)src;
        v19 = a3;
        v31 = v10;
        v20 = 8 * v10;
        v21 = (__int64)v8;
        v22 = v9;
        do
        {
          v23 = sub_EB6650(
                  v19,
                  (__int64 *)((char *)&v19[v22] + v20 - 8 * v9),
                  (__int64 *)((char *)&v19[v22] + v20 - 8 * v9),
                  (__int64)&v19[v22],
                  v18,
                  v21);
          v19 = (__int64 *)((char *)v19 + v22 * 8);
          v18 = (__int64)v23;
          v24 = (v26 - (__int64)v19) >> 3;
        }
        while ( v9 <= v24 );
        v8 = (__int64 *)v21;
        v25 = v31;
        if ( v24 <= v31 )
          v25 = (v26 - (__int64)v19) >> 3;
        sub_EB6650(v19, &v19[v25], &v19[v25], v26, (__int64)v23, (__int64)v8);
        if ( v7 <= v9 )
          return;
      }
      if ( v7 <= v10 )
        v10 = v7;
      sub_EB6650(a3, &a3[v10], &a3[v10], v26, (__int64)src, (__int64)v8);
    }
  }
}

