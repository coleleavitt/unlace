void __fastcall sub_8DF0C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  _QWORD *v4; // rax
  __int64 v5; // r12
  _QWORD *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 *v17; // r13
  __int64 *v18; // rbp
  __int64 v19; // rsi
  __int64 *v20; // rbp
  __int64 *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v26; // [rsp+28h] [rbp-40h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = (_QWORD *)sub_A1A5A0(v3, 24);
  v5 = *v4;
  v6 = v4;
  v10 = sub_2575D20(v3, 24, v7);
  if ( v5 == v10 )
    sub_257D000(&v23, v6, v8, v9);
  else
    sub_2576960(&v23, v6);
  sub_A1A5E0(v3, 24);
  v11 = *(_QWORD *)(a1 + 568);
  v14 = (_QWORD *)sub_A1A5A0(v11, 24);
  if ( v10 == *v14 )
    sub_257D000(&v25, v14, v12, v13);
  else
    sub_2576960(&v25, v14);
  sub_A1A5E0(v11, 24);
  v15 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v23 == v10 )
    sub_257CF50(v15, &v23);
  else
    sub_25768A0(v15, &v23);
  v16 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v25 == v10 )
    sub_257CF50(v16, &v25);
  else
    sub_25768A0(v16, &v25);
  if ( v25 == v10 )
  {
    v17 = v26;
    if ( v26 )
    {
      v18 = &v26[3 * *(v26 - 1)];
      if ( v26 == v18 )
      {
        v19 = 0;
      }
      else
      {
        do
        {
          v18 -= 3;
          sub_5FF3B0(v18);
        }
        while ( v17 != v18 );
        v19 = 24 * *(v17 - 1);
      }
      operator delete[](v17 - 1, v19 + 8);
    }
    v26 = nullptr;
    if ( v23 != v10 )
      goto LABEL_11;
  }
  else
  {
    sub_25769A0(&v25);
    if ( v23 != v10 )
    {
LABEL_11:
      sub_25769A0(&v23);
      return;
    }
  }
  v20 = v24;
  if ( v24 )
  {
    v21 = &v24[3 * *(v24 - 1)];
    if ( v24 == v21 )
    {
      v22 = 0;
    }
    else
    {
      do
      {
        v21 -= 3;
        sub_5FF3B0(v21);
      }
      while ( v20 != v21 );
      v22 = 24 * *(v20 - 1);
    }
    operator delete[](v20 - 1, v22 + 8);
  }
}

