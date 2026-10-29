__int64 __fastcall sub_B79830(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r12
  void *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  void *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // r15
  void *v14; // rbx
  __int64 **v16; // [rsp+0h] [rbp-A8h]
  void *v18; // [rsp+18h] [rbp-90h]
  __int64 v19; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-70h]
  __int64 v23; // [rsp+40h] [rbp-68h] BYREF
  int v24; // [rsp+48h] [rbp-60h] BYREF
  char v25; // [rsp+4Ch] [rbp-5Ch]
  __int64 v26; // [rsp+50h] [rbp-58h]
  int v27; // [rsp+58h] [rbp-50h] BYREF
  char v28; // [rsp+5Ch] [rbp-4Ch]
  __int64 v29; // [rsp+60h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 144);
  v16 = (__int64 **)(a1 + 144);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 40 * v5;
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4 + 8);
        v8 = v4 + 24;
        v4 += 40;
        sub_182CBA0(v7, v8);
      }
      while ( v4 != v6 );
      v4 = *(_QWORD *)(a1 + 144);
    }
    *(_DWORD *)(v4 - 4) = 0;
  }
  v19 = 1;
  v21 = 1;
  v22 = 0;
  sub_182CBA0(qword_1C7F2C0, &v21);
  LODWORD(v21) = 1;
  v24 = 1;
  v23 = a2;
  BYTE4(v21) &= ~1u;
  v27 = 1;
  v25 &= 0xFCu;
  v20 = 0;
  v26 = 0;
  v28 = v28 & 0xFC | BYTE4(v21) & 2;
  v9 = v22;
  v22 = 0;
  v29 = v9;
  sub_B75F20(v16, (__int64)&v23);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  sub_182CBA0(v10, &v27);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v19);
  sub_182CBA0(v18, &v21);
  v19 = 0xFFFFFFFFLL;
  v20 = 0;
  v21 = 1;
  v22 = 0;
  sub_182CBA0(qword_1C7F2C0, &v21);
  LODWORD(v21) = 1;
  v24 = v19;
  v27 = 1;
  BYTE4(v21) &= ~1u;
  v23 = a3;
  v25 = BYTE4(v19) & 3 | v25 & 0xFC;
  v11 = v20;
  v20 = 0;
  v26 = v11;
  v28 = v28 & 0xFC | BYTE4(v21) & 2;
  v12 = v22;
  v22 = 0;
  v29 = v12;
  sub_B75F20(v16, (__int64)&v23);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  sub_182CBA0(v13, &v27);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v19);
  sub_182CBA0(v14, &v21);
  return sub_B78650(a1);
}

