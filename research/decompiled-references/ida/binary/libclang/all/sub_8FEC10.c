__int64 __fastcall sub_8FEC10(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // eax
  void *v10; // rdx
  __int64 v11; // rbx
  void **v12; // rsi
  void **v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rbx
  _BOOL8 v18; // rdx
  unsigned int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned int v25; // ebx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v32; // [rsp+10h] [rbp-E8h]
  __int64 v33; // [rsp+18h] [rbp-E0h]
  void *v34; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v35; // [rsp+28h] [rbp-D0h]
  bool v36; // [rsp+2Ch] [rbp-CCh]
  void *v37; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-C0h]
  bool v39; // [rsp+3Ch] [rbp-BCh]
  void *v40; // [rsp+40h] [rbp-B8h]
  unsigned int v41; // [rsp+48h] [rbp-B0h]
  char v42; // [rsp+4Ch] [rbp-ACh]
  int v43; // [rsp+50h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-98h] BYREF
  __int64 v45; // [rsp+68h] [rbp-90h]
  __int64 v46[4]; // [rsp+80h] [rbp-78h] BYREF
  void *v47; // [rsp+A0h] [rbp-58h] BYREF
  unsigned int v48; // [rsp+A8h] [rbp-50h]

  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 24);
  v8 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = 0;
  v41 = v8;
  v40 = *(void **)v7;
  LOBYTE(v8) = *(_BYTE *)(v7 + 12);
  LODWORD(v7) = *(_DWORD *)(v7 + 16);
  v42 = v8;
  v43 = v7;
  sub_A1A5E0(v6, 24);
  v9 = v41;
  v48 = v41;
  if ( v41 > 0x40 )
  {
    sub_2585B30(&v47);
    v9 = v48;
    v10 = v47;
  }
  else
  {
    v10 = v40;
  }
  v34 = v10;
  v36 = (v43 & 0x20000000) == 0;
  v35 = v9;
  v11 = sub_2575CF0();
  sub_2582F80(&v47, 0.0);
  v12 = &v47;
  sub_257EDC0(&v44, &v47, v11);
  v13 = &v47;
  sub_25769A0(&v47);
  v15 = (a4 >> 3) & 7;
  if ( ((a4 >> 3) & 7) == 7 )
    v15 = 1;
  v38 = v35;
  if ( v35 > 0x40 )
  {
    v12 = &v34;
    v13 = &v37;
    sub_2585B30(&v37);
  }
  else
  {
    v37 = v34;
  }
  v39 = v36;
  v16 = sub_2575D20(v13, v12, v14);
  v17 = v16;
  if ( a3 == v16 )
    sub_257CDE0(v46, v16);
  else
    sub_2579610(v46);
  v18 = !v39;
  if ( v46[0] == v17 )
    v19 = sub_25814C0(v46, &v37, v18, v15);
  else
    v19 = sub_2578400(v46, &v37, v18, v15);
  if ( v46[0] == v17 )
    sub_257CF50(&v47, v46);
  else
    sub_25768A0(&v47, v46);
  if ( v44 != v17 )
  {
    if ( v47 != (void *)v17 )
    {
      sub_2576350(&v44, &v47, v20, v21);
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  if ( v47 != (void *)v17 )
  {
LABEL_17:
    sub_5FF3B0(&v44);
    if ( (void *)v17 == v47 )
      sub_257D000(&v44, &v47, v22, v23);
    else
      sub_2576960(&v44, &v47);
    goto LABEL_19;
  }
  v27 = v45;
  if ( v45 )
  {
    v28 = v45 + 24LL * *(_QWORD *)(v45 - 8);
    if ( v45 == v28 )
    {
      v29 = 0;
    }
    else
    {
      do
      {
        v33 = v27;
        v32 = v28 - 24;
        sub_5FF3B0((__int64 *)(v28 - 24));
        v28 = v32;
        v27 = v33;
      }
      while ( v33 != v32 );
      v29 = 24LL * *(_QWORD *)(v33 - 8);
    }
    operator delete[]((void *)(v27 - 8), v29 + 8);
  }
  v45 = 0;
  sub_257D000(&v44, &v47, v27, v21);
LABEL_19:
  sub_5FF3B0((__int64 *)&v47);
  sub_5FF3B0(v46);
  if ( v38 > 0x40 && v37 )
    operator delete[](v37);
  v24 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v17 == v44 )
    sub_257CF50(v24, &v44);
  else
    sub_25768A0(v24, &v44);
  v25 = sub_9DBAE0(a1, a2, &v44, v19, a4);
  sub_5FF3B0(&v44);
  if ( v35 > 0x40 && v34 )
    operator delete[](v34);
  if ( v41 > 0x40 && v40 )
    operator delete[](v40);
  return v25;
}

