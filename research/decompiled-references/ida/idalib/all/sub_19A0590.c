void __fastcall sub_19A0590(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 *v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 *v8; // r8
  __int64 *v9; // rdi
  __int64 v10; // r11
  __int64 *v11; // r14
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 *v15; // r8
  __int64 *v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // rdx
  void *v19; // [rsp+0h] [rbp-58h]
  __int64 *src; // [rsp+8h] [rbp-50h]

  v3 = (char *)a2 - (char *)a1;
  v4 = (__int64 *)((char *)a3 + (char *)a2 - (char *)a1);
  v5 = a2 - a1;
  if ( (char *)a2 - (char *)a1 <= 48 )
  {
    sub_19A03C0(a1, a2);
  }
  else
  {
    src = a1;
    do
    {
      sub_19A03C0(a1, a1 + 7);
      a1 += 7;
    }
    while ( (char *)a2 - (char *)a1 > 48 );
    sub_19A03C0(a1, a2);
    if ( v3 > 56 )
    {
      v6 = 7;
      while ( 1 )
      {
        v7 = 2 * v6;
        if ( v5 < 2 * v6 )
        {
          v8 = a3;
          v13 = v5;
          v11 = src;
        }
        else
        {
          v8 = a3;
          v9 = src;
          v10 = 16 * v6;
          do
          {
            v11 = (__int64 *)((char *)v9 + v10);
            v19 = (void *)v10;
            v12 = sub_19A0280(
                    v9,
                    (__int64 *)((char *)v9 + v10 + -8 * v6),
                    (__int64 *)((char *)v9 + v10 + -8 * v6),
                    (__int64 *)((char *)v9 + v10),
                    v8);
            v9 = v11;
            v10 = (__int64)v19;
            v8 = (__int64 *)v12;
            v13 = a2 - v11;
          }
          while ( v7 <= v13 );
        }
        if ( v6 <= v13 )
          v13 = v6;
        v6 *= 4;
        sub_19A0280(v11, &v11[v13], &v11[v13], a2, v8);
        if ( v5 < v6 )
          break;
        v14 = v6;
        v15 = src;
        v16 = a3;
        do
        {
          v17 = (__int64 *)sub_19A0280(
                             v16,
                             (__int64 *)((char *)&v16[v14] + 8 * v7 - 8 * v6),
                             (__int64 *)((char *)&v16[v14] + 8 * v7 - 8 * v6),
                             &v16[v14],
                             v15);
          v15 = v17;
          v16 = (__int64 *)((char *)v16 + v14 * 8);
          v18 = v4 - v16;
        }
        while ( v6 <= v18 );
        if ( v18 <= v7 )
          v7 = v4 - v16;
        sub_19A0280(v16, &v16[v7], &v16[v7], v4, v17);
        if ( v5 <= v6 )
          return;
      }
      if ( v5 <= v7 )
        v7 = v5;
      sub_19A0280(a3, &a3[v7], &a3[v7], v4, src);
    }
  }
}
