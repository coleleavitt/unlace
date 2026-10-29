__int64 __fastcall sub_9C1530(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // rax
  __int64 v3; // r14
  __int64 v4; // rdx
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 *v16; // r14
  __int64 *v17; // rbp
  __int64 v18; // rsi
  __int64 *v19; // rbp
  __int64 *v20; // rbx
  __int64 v21; // rsi
  __int64 *v22; // r12
  __int64 *v23; // rbp
  __int64 v24; // rsi
  __int64 *v25; // rax
  __int64 *v26; // rbp
  __int64 v27; // rsi
  __int64 *v28; // [rsp+8h] [rbp-C0h]
  __int64 v29; // [rsp+10h] [rbp-B8h] BYREF
  __int64 *v30; // [rsp+18h] [rbp-B0h]
  __int64 v31; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-90h]
  __int64 v33[4]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v34; // [rsp+70h] [rbp-58h] BYREF
  __int64 *v35; // [rsp+78h] [rbp-50h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = (_QWORD *)sub_A1A5A0(v1, 24);
  v3 = *v2;
  v5 = v2;
  v8 = sub_2575D20(v1, 24, v4);
  if ( v3 == v8 )
    sub_257D000(&v31, v5, v6, v7);
  else
    sub_2576960(&v31, v5);
  sub_A1A5E0(v1, 24);
  v9 = sub_2575CF0();
  sub_2582F80(&v34, 0.0);
  sub_257EDC0(&v29, &v34, v9);
  sub_25769A0(&v34);
  if ( v8 == v31 )
    sub_257CF50(&v34, &v31);
  else
    sub_25768A0(&v34, &v31);
  if ( v8 == v34 )
    sub_257D180(&v34);
  else
    sub_2577530(&v34);
  if ( v8 == v34 )
    sub_257CF50(v33, &v34);
  else
    sub_25768A0(v33, &v34);
  if ( v8 == v34 )
  {
    v16 = v35;
    if ( v35 )
    {
      v17 = &v35[3 * *(v35 - 1)];
      if ( v35 == v17 )
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
  }
  else
  {
    sub_25769A0(&v34);
  }
  if ( v8 != v29 )
  {
    if ( v8 != v33[0] )
    {
      sub_2576350(&v29, v33, v10, v11);
      goto LABEL_17;
    }
LABEL_15:
    sub_5FF3B0(&v29);
    if ( v8 == v33[0] )
      sub_257D000(&v29, v33, v12, v13);
    else
      sub_2576960(&v29, v33);
    goto LABEL_17;
  }
  if ( v8 != v33[0] )
    goto LABEL_15;
  v25 = v30;
  if ( v30 )
  {
    v26 = &v30[3 * *(v30 - 1)];
    if ( v30 == v26 )
    {
      v27 = 0;
    }
    else
    {
      do
      {
        v26 -= 3;
        v28 = v25;
        sub_5FF3B0(v26);
        v25 = v28;
      }
      while ( v28 != v26 );
      v27 = 24 * *(v28 - 1);
    }
    operator delete[](v25 - 1, v27 + 8);
  }
  v30 = nullptr;
  sub_257D000(&v29, v33, v10, v11);
LABEL_17:
  sub_5FF3B0(v33);
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v29 == v8 )
    sub_257CF50(v14, &v29);
  else
    sub_25768A0(v14, &v29);
  if ( v29 == v8 )
  {
    v22 = v30;
    if ( v30 )
    {
      v23 = &v30[3 * *(v30 - 1)];
      if ( v30 == v23 )
      {
        v24 = 0;
      }
      else
      {
        do
        {
          v23 -= 3;
          sub_5FF3B0(v23);
        }
        while ( v22 != v23 );
        v24 = 24 * *(v22 - 1);
      }
      operator delete[](v22 - 1, v24 + 8);
    }
    v30 = nullptr;
  }
  else
  {
    sub_25769A0(&v29);
  }
  if ( v31 == v8 )
  {
    v19 = v32;
    if ( v32 )
    {
      v20 = &v32[3 * *(v32 - 1)];
      if ( v32 == v20 )
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
  else
  {
    sub_25769A0(&v31);
  }
  return 1;
}

