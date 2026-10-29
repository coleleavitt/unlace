__int64 __fastcall sub_8DBC10(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // rax
  __int64 v3; // r14
  _QWORD *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 *v16; // rax
  __int64 *v17; // rbp
  __int64 v18; // rsi
  __int64 *v19; // [rsp+8h] [rbp-C0h]
  __int64 v20; // [rsp+10h] [rbp-B8h] BYREF
  __int64 *v21; // [rsp+18h] [rbp-B0h]
  __int64 v22[4]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v23[4]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v24[11]; // [rsp+70h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = (_QWORD *)sub_A1A5A0(v1, 24);
  v3 = *v2;
  v4 = v2;
  v8 = sub_2575D20(v1, 24, v5);
  if ( v3 == v8 )
    sub_257D000(v22, v4, v6, v7);
  else
    sub_2576960(v22, v4);
  sub_A1A5E0(v1, 24);
  v9 = sub_2575CF0();
  sub_2582F80(v24, 0.0);
  sub_257EDC0(&v20, v24, v9);
  sub_25769A0(v24);
  if ( v8 == v22[0] )
    sub_257CF50(v24, v22);
  else
    sub_25768A0(v24, v22);
  if ( v8 == v24[0] )
    sub_257D180(v24);
  else
    sub_2577530(v24);
  if ( v8 == v24[0] )
    sub_257CF50(v23, v24);
  else
    sub_25768A0(v23, v24);
  sub_5FF3B0(v24);
  if ( v8 != v20 )
  {
    if ( v8 != v23[0] )
    {
      sub_2576350(&v20, v23, v10, v11);
      goto LABEL_15;
    }
LABEL_13:
    sub_5FF3B0(&v20);
    if ( v8 == v23[0] )
      sub_257D000(&v20, v23, v12, v13);
    else
      sub_2576960(&v20, v23);
    goto LABEL_15;
  }
  if ( v8 != v23[0] )
    goto LABEL_13;
  v16 = v21;
  if ( v21 )
  {
    v17 = &v21[3 * *(v21 - 1)];
    if ( v21 == v17 )
    {
      v18 = 0;
    }
    else
    {
      do
      {
        v17 -= 3;
        v19 = v16;
        sub_5FF3B0(v17);
        v16 = v19;
      }
      while ( v19 != v17 );
      v18 = 24 * *(v19 - 1);
    }
    operator delete[](v16 - 1, v18 + 8);
  }
  v21 = nullptr;
  sub_257D000(&v20, v23, v10, v11);
LABEL_15:
  sub_5FF3B0(v23);
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v20 == v8 )
    sub_257CF50(v14, &v20);
  else
    sub_25768A0(v14, &v20);
  sub_5FF3B0(&v20);
  sub_5FF3B0(v22);
  return 1;
}

