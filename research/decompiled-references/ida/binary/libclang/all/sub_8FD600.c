__int64 __fastcall sub_8FD600(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rbx
  unsigned int v8; // ebp
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
  void *v30; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-A0h]
  unsigned __int8 v32; // [rsp+3Ch] [rbp-9Ch]
  __int64 v33; // [rsp+40h] [rbp-98h] BYREF
  __int64 v34; // [rsp+48h] [rbp-90h]
  __int64 v35[4]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v36[11]; // [rsp+80h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 184);
  v8 = *(_DWORD *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  v9 = sub_2575CF0();
  sub_2582F80(v36, 0.0);
  sub_257EDC0(&v33, v36, v9);
  sub_25769A0(v36);
  v11 = (a4 >> 3) & 7;
  if ( (_BYTE)v11 == 7 )
    v11 = 1;
  v31 = 32;
  v30 = (void *)v8;
  v32 = 0;
  v12 = sub_2575D20(v36, v36, v10);
  v13 = v12;
  if ( a3 == v12 )
    sub_257CDE0(v35, v12);
  else
    sub_2579610(v35);
  v14 = v32 ^ 1u;
  if ( v35[0] == v13 )
    v15 = sub_25814C0(v35, &v30, v14, v11);
  else
    v15 = sub_2578400(v35, &v30, v14, v11);
  if ( v35[0] == v13 )
    sub_257CF50(v36, v35);
  else
    sub_25768A0(v36, v35);
  if ( v33 != v13 )
  {
    if ( v36[0] != v13 )
    {
      sub_2576350(&v33, v36, v16, v17);
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  if ( v36[0] != v13 )
  {
LABEL_13:
    sub_5FF3B0(&v33);
    if ( v13 == v36[0] )
      sub_257D000(&v33, v36, v18, v19);
    else
      sub_2576960(&v33, v36);
    goto LABEL_15;
  }
  v23 = v34;
  if ( v34 )
  {
    v24 = v34 + 24LL * *(_QWORD *)(v34 - 8);
    if ( v34 == v24 )
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
  v34 = 0;
  sub_257D000(&v33, v36, v23, v17);
LABEL_15:
  sub_5FF3B0(v36);
  sub_5FF3B0(v35);
  if ( v31 > 0x40 && v30 )
    operator delete[](v30);
  v20 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v13 == v33 )
    sub_257CF50(v20, &v33);
  else
    sub_25768A0(v20, &v33);
  v21 = sub_9DBAE0(a1, a2, &v33, v15, a4);
  sub_5FF3B0(&v33);
  return v21;
}

