void __fastcall sub_834AF0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 *v18; // r14
  __int64 *v19; // r12
  __int64 v20; // rsi
  _QWORD *v21; // rcx
  _QWORD *v22; // r15
  __int64 *v23; // rdx
  __int64 *v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 *v27; // [rsp+0h] [rbp-68h]
  _QWORD *v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v30; // [rsp+18h] [rbp-50h]

  v3 = *(_QWORD **)(*a1 + 16LL);
  v4 = sub_6BF060(v3, a2);
  v6 = sub_2575D20(v3, a2, v5);
  v7 = v6;
  if ( v4 != v6 )
  {
    sub_2579AA0(&v29, v4, 0);
    if ( v29 != v7 )
      goto LABEL_3;
LABEL_19:
    sub_257D590(&v29, 0);
    v10 = (__int64 *)a1[1];
    v11 = v29;
    if ( *v10 != v7 )
      goto LABEL_4;
    goto LABEL_20;
  }
  sub_257CE40(&v29, v6, 0);
  if ( v29 == v7 )
    goto LABEL_19;
LABEL_3:
  sub_25795C0(&v29, 0);
  v10 = (__int64 *)a1[1];
  v11 = v29;
  if ( *v10 != v7 )
  {
LABEL_4:
    if ( v7 != v11 )
    {
      sub_2576350(v10, &v29, v8, v9);
      goto LABEL_6;
    }
    if ( v10 == &v29 )
      goto LABEL_13;
    sub_25769A0(v10);
    v14 = v29;
    goto LABEL_11;
  }
LABEL_20:
  if ( v7 == v11 )
  {
    if ( v10 == &v29 )
      goto LABEL_13;
    v21 = (_QWORD *)v10[1];
    v28 = v21;
    if ( v21 )
    {
      v22 = &v21[3 * *(v21 - 1)];
      if ( v21 == v22 )
      {
        v26 = 0;
      }
      else
      {
        do
        {
          v22 -= 3;
          if ( *v22 == v11 )
          {
            v23 = (__int64 *)v22[1];
            if ( v23 )
            {
              v24 = &v23[3 * *(v23 - 1)];
              if ( v23 == v24 )
              {
                v25 = 0;
              }
              else
              {
                do
                {
                  v24 -= 3;
                  v27 = v23;
                  sub_5FF3B0(v24);
                  v23 = v27;
                }
                while ( v27 != v24 );
                v25 = 24 * *(v27 - 1);
              }
              operator delete[](v23 - 1, v25 + 8);
            }
            v22[1] = 0;
          }
          else
          {
            sub_25769A0(v22);
          }
        }
        while ( v28 != v22 );
        v26 = 24LL * *(v28 - 1);
      }
      operator delete[](v28 - 1, v26 + 8);
    }
    v10[1] = 0;
    sub_257D000(v10, &v29, v8, v21);
    goto LABEL_6;
  }
  if ( v10 == &v29 )
    goto LABEL_7;
  v18 = (__int64 *)v10[1];
  if ( !v18 )
  {
LABEL_12:
    sub_2576960(v10, &v29);
    if ( v29 != v7 )
      goto LABEL_7;
    goto LABEL_13;
  }
  v19 = &v18[3 * *(v18 - 1)];
  if ( v19 == v18 )
  {
    v20 = 0;
  }
  else
  {
    do
    {
      v19 -= 3;
      sub_5FF3B0(v19);
    }
    while ( v19 != v18 );
    v20 = 24 * *(v18 - 1);
  }
  operator delete[](v18 - 1, v20 + 8);
  v10[1] = 0;
  v14 = v29;
LABEL_11:
  if ( v14 != v7 )
    goto LABEL_12;
  sub_257D000(v10, &v29, v12, v13);
LABEL_6:
  if ( v29 != v7 )
  {
LABEL_7:
    sub_25769A0(&v29);
    return;
  }
LABEL_13:
  v15 = v30;
  if ( v30 )
  {
    v16 = &v30[3 * *(v30 - 1)];
    if ( v30 == v16 )
    {
      v17 = 0;
    }
    else
    {
      do
      {
        v16 -= 3;
        sub_5FF3B0(v16);
      }
      while ( v15 != v16 );
      v17 = 24 * *(v15 - 1);
    }
    operator delete[](v15 - 1, v17 + 8);
  }
}

