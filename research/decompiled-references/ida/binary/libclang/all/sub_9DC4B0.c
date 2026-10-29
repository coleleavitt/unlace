__int64 __fastcall sub_9DC4B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 v16; // r13
  unsigned int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r13d
  __int64 v26; // rdi
  unsigned int v27; // r12d
  __int64 *v29; // rbp
  __int64 *v30; // rbx
  __int64 v31; // rsi
  __int64 *v32; // rdx
  __int64 *v33; // rax
  __int64 v34; // rsi
  __int64 *v36; // [rsp+18h] [rbp-D0h]
  __int64 *v37; // [rsp+18h] [rbp-D0h]
  __int64 *v39; // [rsp+28h] [rbp-C0h]
  __int64 v40[4]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v41[4]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v42; // [rsp+70h] [rbp-78h] BYREF
  __int64 *v43; // [rsp+78h] [rbp-70h]
  __int64 v44; // [rsp+90h] [rbp-58h] BYREF
  __int64 *v45; // [rsp+98h] [rbp-50h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v7 = v5;
  v11 = sub_2575D20(v4, 24, v8);
  if ( v6 == v11 )
    sub_257D000(v40, v7, v9, v10);
  else
    sub_2576960(v40, v7);
  sub_A1A5E0(v4, 24);
  v12 = *(_QWORD *)(a1 + 184);
  v15 = (_QWORD *)sub_A1A5A0(v12, 24);
  if ( v11 == *v15 )
    sub_257D000(v41, v15, v13, v14);
  else
    sub_2576960(v41, v15);
  sub_A1A5E0(v12, 24);
  v16 = sub_2575CF0();
  sub_2582F80(&v44, 0.0);
  sub_257EDC0(&v42, &v44, v16);
  sub_25769A0(&v44);
  v17 = (a3 >> 3) & 7;
  if ( ((a3 >> 3) & 7) == 7 )
    v17 = 1;
  if ( v11 == v41[0] )
    sub_257CF50(&v44, v41);
  else
    sub_25768A0(&v44, v41);
  if ( v11 != v42 )
  {
    if ( v44 != v11 )
    {
      sub_2576350(&v42, &v44, v18, v19);
      if ( v11 == v44 )
        goto LABEL_12;
LABEL_21:
      sub_25769A0(&v44);
      goto LABEL_22;
    }
    goto LABEL_18;
  }
  if ( v44 != v11 )
  {
LABEL_18:
    sub_5FF3B0(&v42);
    if ( v11 == v44 )
      sub_257D000(&v42, &v44, v23, v24);
    else
      sub_2576960(&v42, &v44);
    goto LABEL_20;
  }
  v32 = v43;
  if ( v43 )
  {
    v33 = &v43[3 * *(v43 - 1)];
    if ( v43 == v33 )
    {
      v34 = 0;
    }
    else
    {
      do
      {
        v39 = v32;
        v37 = v33 - 3;
        sub_5FF3B0(v33 - 3);
        v33 = v37;
        v32 = v39;
      }
      while ( v39 != v37 );
      v34 = 24 * *(v39 - 1);
    }
    operator delete[](v32 - 1, v34 + 8);
  }
  v43 = nullptr;
  sub_257D000(&v42, &v44, v32, v19);
LABEL_20:
  if ( v11 != v44 )
    goto LABEL_21;
LABEL_12:
  v20 = v45;
  if ( v45 )
  {
    v21 = &v45[3 * *(v45 - 1)];
    if ( v45 == v21 )
    {
      v22 = 0;
    }
    else
    {
      do
      {
        v21 -= 3;
        v36 = v20;
        sub_5FF3B0(v21);
        v20 = v36;
      }
      while ( v36 != v21 );
      v22 = 24 * *(v36 - 1);
    }
    operator delete[](v20 - 1, v22 + 8);
  }
LABEL_22:
  if ( v11 == v42 )
    v25 = sub_257DC20(&v42, v40, v17);
  else
    v25 = sub_257BF20(&v42, v40, v17);
  v26 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v11 == v42 )
    sub_257CF50(v26, &v42);
  else
    sub_25768A0(v26, &v42);
  v27 = sub_9DBAE0(a1, a2, &v42, v25, a3);
  if ( v11 == v42 )
  {
    v29 = v43;
    if ( v43 )
    {
      v30 = &v43[3 * *(v43 - 1)];
      if ( v43 == v30 )
      {
        v31 = 0;
      }
      else
      {
        do
        {
          v30 -= 3;
          sub_5FF3B0(v30);
        }
        while ( v29 != v30 );
        v31 = 24 * *(v29 - 1);
      }
      operator delete[](v29 - 1, v31 + 8);
    }
    v43 = nullptr;
  }
  else
  {
    sub_25769A0(&v42);
  }
  sub_5FF3B0(v41);
  sub_5FF3B0(v40);
  return v27;
}

