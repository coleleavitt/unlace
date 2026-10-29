void __fastcall sub_1C332F0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 *v8; // rdi
  __int64 v9; // r12
  __int64 *v10; // rbp
  __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rax
  signed __int64 v17; // rdx
  unsigned __int64 v18; // r10
  __int64 *v19; // [rsp+0h] [rbp-58h]
  __int64 v20; // [rsp+8h] [rbp-50h]

  v3 = (__int64)a2 - a1;
  v4 = 0xAAAAAAAAAAAAAAABLL * (((__int64)a2 - a1) >> 3);
  v19 = (__int64 *)((char *)a2 + (_QWORD)a3 - a1);
  if ( (__int64)a2 - a1 <= 144 )
  {
    sub_1C32FF0(a1, a2);
  }
  else
  {
    v20 = a1;
    do
    {
      sub_1C32FF0(a1, (__int64 *)(a1 + 168));
      a1 += 168;
    }
    while ( (__int64)a2 - a1 > 144 );
    sub_1C32FF0(a1, a2);
    if ( v3 > 168 )
    {
      v5 = 7;
      while ( 1 )
      {
        v6 = 2 * v5;
        if ( v4 < 2 * v5 )
        {
          v7 = (__int64)a3;
          v12 = v4;
          v10 = (__int64 *)v20;
        }
        else
        {
          v7 = (__int64)a3;
          v8 = (__int64 *)v20;
          v9 = 6 * v5;
          do
          {
            v11 = sub_1C32DB0(v8, &v8[3 * v5], &v8[3 * v5], &v8[v9], v7);
            v8 = (__int64 *)((char *)v8 + v9 * 8);
            v10 = v8;
            v7 = v11;
            v12 = 0xAAAAAAAAAAAAAAABLL * (a2 - v8);
          }
          while ( v6 <= v12 );
        }
        if ( v5 <= v12 )
          v12 = v5;
        v5 *= 4;
        sub_1C32DB0(v10, &v10[3 * v12], &v10[3 * v12], a2, v7);
        v13 = v20;
        if ( v4 < v5 )
          break;
        v14 = a3;
        v15 = 3 * v5;
        do
        {
          v16 = sub_1C32B90(v14, &v14[3 * v6], &v14[3 * v6], &v14[v15], v13);
          v14 = (__int64 *)((char *)v14 + v15 * 8);
          v13 = v16;
          v17 = 0xAAAAAAAAAAAAAAABLL * (v19 - v14);
        }
        while ( v5 <= v17 );
        v18 = v6;
        if ( v17 <= v6 )
          v18 = 0xAAAAAAAAAAAAAAABLL * (v19 - v14);
        sub_1C32B90(v14, &v14[3 * v18], &v14[3 * v18], v19, v16);
        if ( v4 <= v5 )
          return;
      }
      if ( v4 > v6 )
        v4 = v6;
      sub_1C32B90(a3, &a3[3 * v4], &a3[3 * v4], v19, v20);
    }
  }
}
