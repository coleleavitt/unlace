void __fastcall sub_B08230(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rax
  void *v4; // rdi
  _DWORD *v5; // rdx
  int v6; // edx
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // si
  __int64 v11; // rax
  char v12; // cl
  __int64 v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-C8h]
  void *v15; // [rsp+8h] [rbp-C0h]
  void *v16[2]; // [rsp+10h] [rbp-B8h] BYREF
  void *v17[2]; // [rsp+20h] [rbp-A8h] BYREF
  int v18; // [rsp+30h] [rbp-98h] BYREF
  char v19; // [rsp+34h] [rbp-94h]
  __int64 v20; // [rsp+38h] [rbp-90h]
  int v21; // [rsp+40h] [rbp-88h]
  char v22; // [rsp+44h] [rbp-84h]
  __int64 v23; // [rsp+48h] [rbp-80h]
  int v24; // [rsp+50h] [rbp-78h] BYREF
  char v25; // [rsp+54h] [rbp-74h]
  __int64 v26; // [rsp+58h] [rbp-70h]
  int v27; // [rsp+60h] [rbp-68h]
  char v28; // [rsp+64h] [rbp-64h]
  __int64 v29; // [rsp+68h] [rbp-60h]
  __int64 v30; // [rsp+70h] [rbp-58h] BYREF
  __int64 v31; // [rsp+78h] [rbp-50h]
  __int64 v32; // [rsp+80h] [rbp-48h] BYREF
  __int64 v33; // [rsp+88h] [rbp-40h]

  v1 = 0;
  v16[0] = nullptr;
  v16[1] = nullptr;
  v17[0] = &dword_0 + 1;
  v17[1] = nullptr;
  sub_182CBA0(qword_1C7F2C0, v17);
  v3 = *(_QWORD *)a1;
  BYTE4(v17[0]) &= ~1u;
  LODWORD(v17[0]) = (_DWORD)&dword_0 + 1;
  if ( v3 )
  {
    do
    {
      v4 = qword_1C7F2C0;
      if ( v1 >= *(_DWORD *)(v3 - 4) )
        break;
      v5 = (_DWORD *)(v3 + 40LL * v1);
      *v5 ^= 1u;
      sub_2FC4A0((__int64)v4, (__int64)v16, (__int64)(v5 + 2), (__int64)v16);
      v3 = *(_QWORD *)a1;
      ++v1;
    }
    while ( *(_QWORD *)a1 );
  }
  v14 = a1 + 8;
  v30 = 0;
  v31 = 0;
  v32 = 1;
  v33 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v30, (int *)v16);
  if ( (v32 & 0x100000000LL) != 0 || (_DWORD)v32 != 1 || (*(_BYTE *)(a1 + 28) & 1) != 0 || *(_DWORD *)(a1 + 24) != 1 )
  {
    sub_1852000(qword_1C7F2C0, &v30, v14);
  }
  else
  {
    v15 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, &v30, v14);
    sub_182CBA0(v15, &v32);
    BYTE4(v32) &= ~1u;
    LODWORD(v32) = 1;
  }
  v19 &= 0xFCu;
  v22 &= 0xFCu;
  v18 = 0;
  v20 = 0;
  v21 = 1;
  v23 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v18, (int *)&v30);
  sub_25A130((char *)&v30);
  v30 = 0;
  v31 = 0;
  v32 = 1;
  v33 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v30, &v18);
  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v30, (__int64)&qword_1C7F280, (__int64)&v30);
  v25 &= 0xFCu;
  v28 &= 0xFCu;
  v24 = 0;
  v26 = 0;
  v27 = 1;
  v29 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v24, (int *)&v30);
  sub_25A130((char *)&v30);
  v6 = v24;
  v7 = v25;
  v24 = *(_DWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = v6;
  v9 = v26;
  v26 = v8;
  LOBYTE(v8) = *(_BYTE *)(a1 + 12);
  *(_QWORD *)(a1 + 16) = v9;
  LOBYTE(v9) = v7;
  v7 &= ~2u;
  v10 = v8 & 0xFD;
  v25 = v8 & 1 | v7 & 0xFE | v8 & 2;
  LODWORD(v8) = *(_DWORD *)(a1 + 24);
  *(_BYTE *)(a1 + 12) = v7 & 1 | v10 & 0xFE | v9 & 2;
  LODWORD(v9) = v27;
  v27 = v8;
  v11 = *(_QWORD *)(a1 + 32);
  v12 = v28;
  *(_DWORD *)(a1 + 24) = v9;
  v13 = v29;
  v29 = v11;
  LOBYTE(v11) = *(_BYTE *)(a1 + 28);
  *(_QWORD *)(a1 + 32) = v13;
  LOBYTE(v13) = v12;
  v12 &= ~2u;
  v28 = v11 & 1 | v12 & 0xFE | v11 & 2;
  *(_BYTE *)(a1 + 28) = v12 & 1 | v11 & 0xFC | v13 & 2;
  sub_25A130((char *)&v24);
  sub_25A130((char *)&v18);
  if ( (unsigned int)sub_B067F0((__int64 *)a1, v14, 0) )
  {
    sub_1872CE0("");
    sub_1873130(114, 99);
  }
  sub_25A130((char *)v16);
}

