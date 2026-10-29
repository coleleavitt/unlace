__int64 __fastcall Z3_mk_atleast(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v6; // bp
  __int64 v7; // r15
  __int64 v8; // r12
  void *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r14
  void *v17; // r15
  __int64 v18; // rsi
  _BYTE v20[8]; // [rsp+18h] [rbp-90h] BYREF
  std::locale *v21; // [rsp+20h] [rbp-88h] BYREF
  int v22; // [rsp+28h] [rbp-80h]
  int v23[2]; // [rsp+30h] [rbp-78h] BYREF
  std::ios_base *v24; // [rsp+38h] [rbp-70h]
  int v25[4]; // [rsp+40h] [rbp-68h]
  int v26[2]; // [rsp+50h] [rbp-58h] BYREF
  int v27[2]; // [rsp+58h] [rbp-50h]
  int v28[2]; // [rsp+60h] [rbp-48h] BYREF
  char v29[8]; // [rsp+68h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_299C70(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = *(_QWORD *)(a1 + 232);
  LODWORD(v21) = a4;
  LOBYTE(v22) = 0;
  *(_QWORD *)v23 = v7;
  sub_180C5A0(v20, "pb");
  LODWORD(v24) = sub_15DA4C0(v7 + 560, v20);
  *(_QWORD *)v26 = 0;
  *(_QWORD *)v27 = 0;
  *(_QWORD *)v28 = 1;
  *(_QWORD *)v29 = 0;
  *(_OWORD *)v25 = 0;
  v8 = sub_168DA70(v23, a2, a3, a4);
  sub_251FD0(a1, v8);
  sub_24FE40(a1, v8);
  if ( v6 )
    sub_2BB620(v8);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v26);
  sub_182CBA0(v9, v28);
  v10 = *(_QWORD *)&v25[2];
  if ( *(_QWORD *)&v25[2] )
  {
    v11 = *(unsigned int *)(*(_QWORD *)&v25[2] - 4LL);
    if ( (_DWORD)v11 )
    {
      v12 = *(_QWORD *)&v25[2] + 16 * v11;
      do
      {
        v13 = v10;
        v10 += 16;
        sub_15D0DF0(v13);
      }
      while ( v10 != v12 );
      v10 = *(_QWORD *)&v25[2];
    }
    sub_186B220((void *)(v10 - 8));
  }
  v14 = *(_QWORD *)v25;
  if ( *(_QWORD *)v25 )
  {
    v15 = *(unsigned int *)(*(_QWORD *)v25 - 4LL);
    if ( (_DWORD)v15 )
    {
      v16 = *(_QWORD *)v25 + 32 * v15;
      do
      {
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v14);
        v18 = v14 + 16;
        v14 += 32;
        sub_182CBA0(v17, v18);
      }
      while ( v16 != v14 );
      v14 = *(_QWORD *)v25;
    }
    sub_186B220((void *)(v14 - 8));
  }
  sub_15D0DF0(&v21);
  if ( v6 )
    byte_1C7EBA0 = 1;
  return v8;
}

