__int64 __fastcall sub_8FCFE0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rbp
  void *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned int v21; // ebx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v28; // [rsp+10h] [rbp-C8h]
  __int64 v29; // [rsp+18h] [rbp-C0h]
  void *v30; // [rsp+20h] [rbp-B8h]
  void *v31; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-A0h]
  unsigned __int8 v33; // [rsp+3Ch] [rbp-9Ch]
  __int64 v34; // [rsp+40h] [rbp-98h] BYREF
  __int64 v35; // [rsp+48h] [rbp-90h]
  __int64 v36[4]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v37[11]; // [rsp+80h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 184);
  v8 = (void *)*(unsigned __int16 *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  v30 = v8;
  v9 = sub_2575CF0();
  sub_2582F80(v37, 0.0);
  sub_257EDC0(&v34, v37, v9);
  sub_25769A0(v37);
  v11 = (a4 >> 3) & 7;
  if ( (_BYTE)v11 == 7 )
    v11 = 1;
  v32 = 16;
  v31 = v30;
  v33 = 0;
  v12 = sub_2575D20(v37, v37, v10);
  v13 = v12;
  if ( a3 == v12 )
    sub_257CDE0(v36, v12);
  else
    sub_2579610(v36);
  v14 = v33 ^ 1u;
  if ( v36[0] == v13 )
    v15 = sub_25814C0(v36, &v31, v14, v11);
  else
    v15 = sub_2578400(v36, &v31, v14, v11);
  if ( v36[0] == v13 )
    sub_257CF50(v37, v36);
  else
    sub_25768A0(v37, v36);
  if ( v34 != v13 )
  {
    if ( v37[0] != v13 )
    {
      sub_2576350(&v34, v37, v16, v17);
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  if ( v37[0] != v13 )
  {
LABEL_13:
    sub_5FF3B0(&v34);
    if ( v13 == v37[0] )
      sub_257D000(&v34, v37, v18, v19);
    else
      sub_2576960(&v34, v37);
    goto LABEL_15;
  }
  v23 = v35;
  if ( v35 )
  {
    v24 = v35 + 24LL * *(_QWORD *)(v35 - 8);
    if ( v35 == v24 )
    {
      v25 = 0;
    }
    else
    {
      do
      {
        v29 = v23;
        v28 = v24 - 24;
        sub_5FF3B0((__int64 *)(v24 - 24));
        v24 = v28;
        v23 = v29;
      }
      while ( v29 != v28 );
      v25 = 24LL * *(_QWORD *)(v29 - 8);
    }
    operator delete[]((void *)(v23 - 8), v25 + 8);
  }
  v35 = 0;
  sub_257D000(&v34, v37, v23, v17);
LABEL_15:
  sub_5FF3B0(v37);
  sub_5FF3B0(v36);
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  v20 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v13 == v34 )
    sub_257CF50(v20, &v34);
  else
    sub_25768A0(v20, &v34);
  v21 = sub_9DBAE0(a1, a2, &v34, v15, a4);
  sub_5FF3B0(&v34);
  return v21;
}

