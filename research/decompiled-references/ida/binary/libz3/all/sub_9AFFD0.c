__int64 __fastcall sub_9AFFD0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // r15
  int v5; // edx
  char v6; // cl
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // si
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rdx
  void *v13; // rbx
  void *v14; // rbx
  void *v15; // rbx
  __int64 result; // rax
  _BYTE v17[16]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v18[16]; // [rsp+20h] [rbp-88h] BYREF
  int v19; // [rsp+30h] [rbp-78h] BYREF
  char v20; // [rsp+34h] [rbp-74h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  int v22; // [rsp+40h] [rbp-68h] BYREF
  char v23; // [rsp+44h] [rbp-64h]
  __int64 v24; // [rsp+48h] [rbp-60h]
  int v25; // [rsp+50h] [rbp-58h] BYREF
  char v26; // [rsp+54h] [rbp-54h]
  __int64 v27; // [rsp+58h] [rbp-50h]
  int v28; // [rsp+60h] [rbp-48h] BYREF
  char v29; // [rsp+64h] [rbp-44h]
  __int64 v30; // [rsp+68h] [rbp-40h]

  if ( ((*(_BYTE *)(a2 + 4) & 1) != 0
     || *(_DWORD *)a2 != -1
     || (*(_BYTE *)(a2 + 20) & 1) != 0
     || *(_DWORD *)(a2 + 16) != 1)
    && ((*(_BYTE *)(a3 + 4) & 1) != 0
     || *(_DWORD *)a3 != -1
     || (*(_BYTE *)(a3 + 20) & 1) != 0
     || *(_DWORD *)(a3 + 16) != 1) )
  {
    sub_27B620((__int64)v17, a3, a2);
    v20 &= 0xFCu;
    v23 &= 0xFCu;
    v19 = 0;
    v4 = qword_1C7F2C0;
    v21 = 0;
    v22 = 1;
    v24 = 0;
    sub_18495B0(qword_1C7F2C0, v17, &v19);
    sub_182CBA0(v4, &v22);
    v23 &= ~1u;
    v22 = 1;
    sub_3EBE30((__int64)&v25, (__int64)&v19, a2);
    v5 = v25;
    v6 = v26;
    v25 = *(_DWORD *)a3;
    v7 = *(_QWORD *)(a3 + 8);
    *(_DWORD *)a3 = v5;
    v8 = v27;
    v27 = v7;
    LOBYTE(v7) = *(_BYTE *)(a3 + 4);
    *(_QWORD *)(a3 + 8) = v8;
    LOBYTE(v8) = v6;
    v6 &= ~2u;
    v9 = v7 & 0xFD;
    v26 = v7 & 1 | v6 & 0xFE | v7 & 2;
    LODWORD(v7) = *(_DWORD *)(a3 + 16);
    *(_BYTE *)(a3 + 4) = v6 & 1 | v9 & 0xFE | v8 & 2;
    LODWORD(v8) = v28;
    v28 = v7;
    v10 = *(_QWORD *)(a3 + 24);
    v11 = v29;
    *(_DWORD *)(a3 + 16) = v8;
    v12 = v30;
    v30 = v10;
    LOBYTE(v10) = *(_BYTE *)(a3 + 20);
    *(_QWORD *)(a3 + 24) = v12;
    LOBYTE(v12) = v11;
    v11 &= ~2u;
    v29 = v10 & 1 | v11 & 0xFE | v10 & 2;
    *(_BYTE *)(a3 + 20) = v11 & 1 | v10 & 0xFC | v12 & 2;
    v13 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v25);
    sub_182CBA0(v13, &v28);
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v19);
    sub_182CBA0(v14, &v22);
    v15 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v17);
    return sub_182CBA0(v15, v18);
  }
  return result;
}

