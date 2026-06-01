__int64 __fastcall sub_8FE240(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rbx
  void **v11; // rsi
  void **v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // rax
  void *v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned int v24; // ebx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v31; // [rsp+10h] [rbp-D8h]
  __int64 v32; // [rsp+18h] [rbp-D0h]
  void *v33; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+28h] [rbp-C0h]
  void *v35; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-B0h]
  char v37; // [rsp+3Ch] [rbp-ACh]
  void *v38; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-A0h]
  char v40; // [rsp+4Ch] [rbp-9Ch]
  void *v41; // [rsp+50h] [rbp-98h] BYREF
  __int64 v42; // [rsp+58h] [rbp-90h]
  __int64 v43[4]; // [rsp+70h] [rbp-78h] BYREF
  void *v44; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v45; // [rsp+98h] [rbp-50h]

  v7 = *(_QWORD *)(a1 + 184);
  v8 = sub_A1A5A0(v7, 16);
  v9 = *(_DWORD *)(v8 + 8);
  *(_DWORD *)(v8 + 8) = 0;
  v34 = v9;
  v33 = *(void **)v8;
  sub_A1A5E0(v7, 16);
  sub_2587D60(&v44, &v33);
  v37 = 1;
  v36 = v45;
  v35 = v44;
  v10 = sub_2575CF0();
  sub_2582F80(&v44, 0.0);
  v11 = &v44;
  sub_257EDC0(&v41, &v44, v10);
  v12 = &v44;
  sub_25769A0(&v44);
  v14 = (a4 >> 3) & 7;
  if ( (_BYTE)v14 == 7 )
    v14 = 1;
  v39 = v36;
  if ( v36 > 0x40 )
  {
    v11 = &v35;
    v12 = &v38;
    sub_2585B30(&v38);
  }
  else
  {
    v38 = v35;
  }
  v40 = v37;
  v15 = sub_2575D20(v12, v11, v13);
  v16 = (void *)v15;
  if ( a3 == v15 )
    sub_257CDE0(v43, v15);
  else
    sub_2579610(v43);
  v17 = (unsigned __int8)v40 ^ 1u;
  if ( (void *)v43[0] == v16 )
    v18 = sub_25814C0(v43, &v38, v17, v14);
  else
    v18 = sub_2578400(v43, &v38, v17, v14);
  if ( (void *)v43[0] == v16 )
    sub_257CF50(&v44, v43);
  else
    sub_25768A0(&v44, v43);
  if ( v41 != v16 )
  {
    if ( v44 != v16 )
    {
      sub_2576350(&v41, &v44, v19, v20);
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  if ( v44 != v16 )
  {
LABEL_15:
    sub_5FF3B0((__int64 *)&v41);
    if ( v16 == v44 )
      sub_257D000(&v41, &v44, v21, v22);
    else
      sub_2576960(&v41, &v44);
    goto LABEL_17;
  }
  v26 = v42;
  if ( v42 )
  {
    v27 = v42 + 24LL * *(_QWORD *)(v42 - 8);
    if ( v42 == v27 )
    {
      v28 = 0;
    }
    else
    {
      do
      {
        v32 = v26;
        v31 = v27 - 24;
        sub_5FF3B0((__int64 *)(v27 - 24));
        v27 = v31;
        v26 = v32;
      }
      while ( v32 != v31 );
      v28 = 24LL * *(_QWORD *)(v32 - 8);
    }
    operator delete[]((void *)(v26 - 8), v28 + 8);
  }
  v42 = 0;
  sub_257D000(&v41, &v44, v26, v20);
LABEL_17:
  sub_5FF3B0((__int64 *)&v44);
  sub_5FF3B0(v43);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  v23 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v16 == v41 )
    sub_257CF50(v23, &v41);
  else
    sub_25768A0(v23, &v41);
  v24 = sub_9DBAE0(a1, a2, &v41, v18, a4);
  sub_5FF3B0((__int64 *)&v41);
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  return v24;
}

