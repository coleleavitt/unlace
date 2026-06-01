void __fastcall sub_F7A940(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  char *v6; // r14
  __int64 v7; // r12
  __int64 *v8; // r15
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 v11; // r13
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rcx
  bool v16; // al
  __int64 *v17; // [rsp+0h] [rbp-78h]
  __int64 *v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+10h] [rbp-68h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]

  v17 = a1;
  if ( !a5 )
    return;
  v5 = a4;
  if ( !a4 )
    return;
  v6 = a2;
  v7 = a5;
  if ( a5 + a4 == 2 )
  {
    v12 = a1;
    v10 = (__int64 *)a2;
    goto LABEL_16;
  }
  while ( 2 )
  {
    if ( v7 < v5 )
    {
      v8 = &v17[v5 / 2];
      v21 = v5 / 2;
      v9 = (a3 - (__int64)v6) >> 3;
      if ( a3 - (__int64)v6 > 0 )
      {
        v10 = (__int64 *)v6;
        while ( 1 )
        {
          v19 = v9;
          v11 = v9 >> 1;
          v18 = &v10[v9 >> 1];
          if ( sub_F79CB0(*v18, *v8) )
          {
            v10 = v18 + 1;
            v11 = v19 - v11 - 1;
            if ( v11 <= 0 )
              goto LABEL_11;
          }
          else if ( !v11 )
          {
LABEL_11:
            v12 = (__int64 *)((char *)v8 + (char *)v10 - v6);
            v22 = ((char *)v10 - v6) >> 3;
            v7 -= v22;
            goto LABEL_12;
          }
          v9 = v11;
        }
      }
      v22 = 0;
      v12 = &v17[v5 / 2];
      v10 = (__int64 *)v6;
LABEL_12:
      v5 -= v5 / 2;
      goto LABEL_13;
    }
    v8 = v17;
    v22 = v7 / 2;
    v23 = v7 / 2;
    v10 = (__int64 *)&v6[v23 * 8];
    v14 = (v6 - (char *)v17) >> 3;
    if ( v6 - (char *)v17 <= 0 )
    {
      v21 = 0;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v20 = v14 >> 1;
      v16 = sub_F79CB0(*v10, v8[v14 >> 1]);
      v15 = v14 >> 1;
      if ( v16 )
        break;
      v15 = v14 - v20 - 1;
      v8 += (v14 >> 1) + 1;
      if ( v15 <= 0 )
        goto LABEL_25;
LABEL_22:
      v14 = v15;
    }
    if ( v20 )
      goto LABEL_22;
LABEL_25:
    v21 = v8 - v17;
    v5 -= v21;
LABEL_26:
    v7 -= v7 / 2;
    v12 = &v8[v23];
LABEL_13:
    sub_F7A080((char *)v8, v6, (char *)v10);
    sub_F7A940(v17, v8, v12, v21, v22);
    if ( v5 && v7 )
    {
      v6 = (char *)v10;
      v17 = v12;
      if ( v7 + v5 == 2 )
      {
LABEL_16:
        if ( sub_F79CB0(*v10, *v12) )
        {
          v13 = *v12;
          *v12 = *v10;
          *v10 = v13;
        }
        return;
      }
      continue;
    }
    break;
  }
}
