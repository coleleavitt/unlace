void __fastcall sub_835390(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r14
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 *v18; // r15
  __int64 *v19; // r13
  __int64 v20; // rsi
  _QWORD *v21; // rcx
  _QWORD *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+10h] [rbp-68h]
  _QWORD *v29; // [rsp+18h] [rbp-60h]
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v31; // [rsp+28h] [rbp-50h]

  v2 = (__int64 *)(a1 + 8);
  *(_BYTE *)(a1 + 4) &= ~1u;
  *(_DWORD *)a1 = 0;
  v3 = sub_2575D00();
  sub_2580BE0(&v30, 0.0);
  sub_257EDC0(a1 + 8, &v30, v3);
  sub_25769A0(&v30);
  *(_DWORD *)a1 = 3;
  v4 = *a2;
  v8 = sub_2575D20(&v30, &v30, v5);
  if ( v4 == v8 )
  {
    sub_257D000(&v30, a2, v6, v7);
    v11 = v30;
    if ( *(_QWORD *)(a1 + 8) != v8 )
      goto LABEL_3;
  }
  else
  {
    sub_2576960(&v30, a2);
    v11 = v30;
    if ( *(_QWORD *)(a1 + 8) != v8 )
    {
LABEL_3:
      if ( v8 != v11 )
      {
        sub_2576350(v2, &v30, v9, v10);
        goto LABEL_5;
      }
      if ( v2 == &v30 )
        goto LABEL_12;
      sub_25769A0(v2);
      v14 = v30;
      goto LABEL_10;
    }
  }
  if ( v8 == v11 )
  {
    if ( v2 == &v30 )
      goto LABEL_12;
    v21 = *(_QWORD **)(a1 + 16);
    v29 = v21;
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
            v23 = v22[1];
            if ( v23 )
            {
              v24 = v23 + 24LL * *(_QWORD *)(v23 - 8);
              if ( v23 == v24 )
              {
                v25 = 0;
              }
              else
              {
                do
                {
                  v28 = v23;
                  v27 = v24 - 24;
                  sub_5FF3B0((__int64 *)(v24 - 24));
                  v24 = v27;
                  v23 = v28;
                }
                while ( v28 != v27 );
                v25 = 24LL * *(_QWORD *)(v28 - 8);
              }
              operator delete[]((void *)(v23 - 8), v25 + 8);
            }
            v22[1] = 0;
          }
          else
          {
            sub_25769A0(v22);
          }
        }
        while ( v29 != v22 );
        v26 = 24LL * *(v29 - 1);
      }
      operator delete[](v29 - 1, v26 + 8);
    }
    *(_QWORD *)(a1 + 16) = 0;
    sub_257D000(v2, &v30, v9, v21);
    goto LABEL_5;
  }
  if ( v2 == &v30 )
    goto LABEL_6;
  v18 = *(__int64 **)(a1 + 16);
  if ( !v18 )
  {
LABEL_11:
    sub_2576960(v2, &v30);
    if ( v30 != v8 )
      goto LABEL_6;
    goto LABEL_12;
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
  *(_QWORD *)(a1 + 16) = 0;
  v14 = v30;
LABEL_10:
  if ( v8 != v14 )
    goto LABEL_11;
  sub_257D000(v2, &v30, v12, v13);
LABEL_5:
  if ( v30 != v8 )
  {
LABEL_6:
    sub_25769A0(&v30);
    return;
  }
LABEL_12:
  v15 = v31;
  if ( v31 )
  {
    v16 = &v31[3 * *(v31 - 1)];
    if ( v31 == v16 )
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

