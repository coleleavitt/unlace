__int64 __fastcall sub_C4F2A0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbx
  __int64 v8; // rdi
  void *v9; // r14
  void *v10; // rdi
  char v11; // al
  bool v12; // r12
  int v13; // eax
  void *v14; // [rsp+0h] [rbp-D0h]
  __int64 v15; // [rsp+10h] [rbp-C0h]
  unsigned int v16; // [rsp+20h] [rbp-B0h]
  int v18; // [rsp+3Ch] [rbp-94h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-90h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-80h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-70h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-60h] BYREF
  int v23; // [rsp+80h] [rbp-50h] BYREF
  char v24; // [rsp+84h] [rbp-4Ch]
  __int64 v25; // [rsp+88h] [rbp-48h]
  int v26; // [rsp+90h] [rbp-40h] BYREF
  char v27; // [rsp+94h] [rbp-3Ch]
  __int64 v28; // [rsp+98h] [rbp-38h]

  v6 = a3;
  if ( a2 )
  {
    v19[0] = 0;
    v19[1] = 0;
    v20[0] = 1;
    v20[1] = 0;
    v15 = a1 + 24;
    if ( (unsigned __int8)sub_1673B50((int)a1 + 24, a3, (unsigned int)v19, (unsigned int)&v18, a5, a6)
      && ((v21[0] = 2,
           v21[1] = 0,
           v22[0] = 1,
           v16 = v18 - 1,
           v22[1] = 0,
           sub_182CBA0(qword_1C7F2C0, v22),
           BYTE4(v22[0]) &= ~1u,
           v24 &= 0xFCu,
           v27 &= 0xFCu,
           LODWORD(v22[0]) = 1,
           v23 = 0,
           v25 = 0,
           v26 = 1,
           v28 = 0,
           sub_184BE60(qword_1C7F2C0, v21, v16, &v23),
           v10 = qword_1C7F2C0,
           (v20[0] & 0x100000000LL) != 0)
       || LODWORD(v20[0]) != 1
       || (v27 & 1) != 0
       || v26 != 1
        ? (v11 = sub_1848D40(qword_1C7F2C0, v19, &v23), v10 = qword_1C7F2C0, v12 = v11)
        : (v19[0] & 0x100000000LL) != 0 || (v24 & 1) != 0
        ? (v13 = sub_182C7B0(qword_1C7F2C0, v19, &v23), v10 = qword_1C7F2C0, v12 = v13 < 0)
        : (v12 = SLODWORD(v19[0]) < v23),
          sub_182CBA0(v10, &v23),
          sub_182CBA0(v10, &v26),
          v14 = qword_1C7F2C0,
          sub_182CBA0(qword_1C7F2C0, v21),
          sub_182CBA0(v14, v22),
          v12) )
    {
      v6 = sub_1674520(v15, v19, (unsigned int)(a2 + v18));
    }
    else
    {
      v23 = a2;
      v21[0] = v6;
      v8 = *(_QWORD *)(a1 + 32);
      LOBYTE(v25) = 0;
      v6 = sub_15DCAD0(v8, (int)v21, 0);
      sub_15D0DF0(&v23);
    }
    v9 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v19);
    sub_182CBA0(v9, v20);
  }
  return v6;
}

