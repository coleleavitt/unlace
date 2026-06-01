__int64 __fastcall sub_B7C980(__int64 a1, __int64 a2, char a3, char a4, int *a5)
{
  void *v7; // rdi
  void *v8; // r12
  void *v9; // rbp
  _QWORD v11[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-78h] BYREF
  int v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h]
  int v18; // [rsp+50h] [rbp-38h]

  v7 = qword_1C7F2C0;
  if ( a4 )
  {
    if ( a3 )
    {
      v14 = 0;
      v15 = 0;
      v16 = 1;
      v17 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v14, (int *)(a2 + 56));
      v18 = *(_DWORD *)(a2 + 88);
    }
    else
    {
      v14 = 1;
      v15 = 0;
      v16 = 1;
      v17 = 0;
      sub_182CBA0(qword_1C7F2C0, &v16);
      BYTE4(v16) &= ~1u;
      LODWORD(v16) = 1;
      v18 = 0;
    }
    v11[0] = 0;
    v11[1] = 0;
    v12[0] = 1;
    v12[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v11, a5);
    v13 = 0;
    sub_89AA40(a1, (__int64)v11, (__int64)&v14);
    v8 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v11);
    sub_182CBA0(v8, v12);
    v9 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v14);
    sub_182CBA0(v9, &v16);
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
    *(_DWORD *)(a1 + 32) = 0;
    return a1;
  }
}

