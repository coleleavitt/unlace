__int64 __fastcall sub_B79670(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  void *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  void *v9; // r13
  void *v10; // rbp
  _QWORD v12[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v13; // [rsp+20h] [rbp-78h] BYREF
  __int64 v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+30h] [rbp-68h] BYREF
  int v16; // [rsp+38h] [rbp-60h] BYREF
  char v17; // [rsp+3Ch] [rbp-5Ch]
  __int64 v18; // [rsp+40h] [rbp-58h]
  int v19; // [rsp+48h] [rbp-50h] BYREF
  char v20; // [rsp+4Ch] [rbp-4Ch]
  __int64 v21; // [rsp+50h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = v3 + 40 * v4;
      do
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3 + 8);
        v7 = v3 + 24;
        v3 += 40;
        sub_182CBA0(v6, v7);
      }
      while ( v5 != v3 );
      v3 = *(_QWORD *)(a1 + 144);
    }
    *(_DWORD *)(v3 - 4) = 0;
  }
  v12[0] = 1;
  v13 = 1;
  v14 = 0;
  sub_182CBA0(qword_1C7F2C0, &v13);
  LODWORD(v13) = 1;
  v16 = 1;
  v15 = a2;
  BYTE4(v13) &= ~1u;
  v19 = 1;
  v17 &= 0xFCu;
  v12[1] = 0;
  v18 = 0;
  v20 = v20 & 0xFC | BYTE4(v13) & 2;
  v8 = v14;
  v14 = 0;
  v21 = v8;
  sub_B75F20((__int64 **)(a1 + 144), (__int64)&v15);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v16);
  sub_182CBA0(v9, &v19);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v10, &v13);
  return sub_B78650(a1);
}

