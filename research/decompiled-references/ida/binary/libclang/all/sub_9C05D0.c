void __fastcall sub_9C05D0(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  __int64 v4; // r12
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 *v16; // r13
  __int64 *v17; // rbp
  __int64 v18; // rsi
  __int64 *v19; // rbp
  __int64 *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v25; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v6 = v3;
  v9 = sub_2575D20(v2, 24, v5);
  if ( v4 == v9 )
    sub_257D000(&v24, v6, v7, v8);
  else
    sub_2576960(&v24, v6);
  sub_A1A5E0(v2, 24);
  v10 = *(_QWORD *)(a1 + 184);
  v13 = (_QWORD *)sub_A1A5A0(v10, 24);
  if ( v9 == *v13 )
    sub_257D000(&v22, v13, v11, v12);
  else
    sub_2576960(&v22, v13);
  sub_A1A5E0(v10, 24);
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v24 == v9 )
    sub_257CF50(v14, &v24);
  else
    sub_25768A0(v14, &v24);
  v15 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v22 == v9 )
    sub_257CF50(v15, &v22);
  else
    sub_25768A0(v15, &v22);
  if ( v22 == v9 )
  {
    v16 = v23;
    if ( v23 )
    {
      v17 = &v23[3 * *(v23 - 1)];
      if ( v23 == v17 )
      {
        v18 = 0;
      }
      else
      {
        do
        {
          v17 -= 3;
          sub_5FF3B0(v17);
        }
        while ( v16 != v17 );
        v18 = 24 * *(v16 - 1);
      }
      operator delete[](v16 - 1, v18 + 8);
    }
    v23 = nullptr;
    if ( v24 != v9 )
      goto LABEL_11;
  }
  else
  {
    sub_25769A0(&v22);
    if ( v24 != v9 )
    {
LABEL_11:
      sub_25769A0(&v24);
      return;
    }
  }
  v19 = v25;
  if ( v25 )
  {
    v20 = &v25[3 * *(v25 - 1)];
    if ( v25 == v20 )
    {
      v21 = 0;
    }
    else
    {
      do
      {
        v20 -= 3;
        sub_5FF3B0(v20);
      }
      while ( v19 != v20 );
      v21 = 24 * *(v19 - 1);
    }
    operator delete[](v19 - 1, v21 + 8);
  }
}

