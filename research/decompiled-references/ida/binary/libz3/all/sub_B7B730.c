__int64 __fastcall sub_B7B730(__int64 a1, __int64 a2, char a3, char a4, int *a5)
{
  void *v7; // rdi
  void *v8; // r12
  void *v9; // rbp
  _QWORD v11[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]

  v7 = qword_1C7F2C0;
  if ( a4 )
  {
    if ( a3 )
    {
      v13 = 0;
      v14 = 0;
      v15 = 1;
      v16 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v13, (int *)(a2 + 56));
    }
    else
    {
      v13 = 1;
      v14 = 0;
      v15 = 1;
      v16 = 0;
      sub_182CBA0(qword_1C7F2C0, &v15);
      BYTE4(v15) &= ~1u;
      LODWORD(v15) = 1;
    }
    v11[0] = 0;
    v11[1] = 0;
    v12[0] = 1;
    v12[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v11, a5);
    sub_27B340(a1, (__int64)v11, (int *)&v13);
    v8 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v11);
    sub_182CBA0(v8, v12);
    v9 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v13);
    sub_182CBA0(v9, &v15);
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 4) &= 0xFCu;
    *(_BYTE *)(a1 + 20) &= 0xFCu;
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 24) = 0;
    sub_27B950((__int64)v7, a1, a5);
    return a1;
  }
}

