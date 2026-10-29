__int64 __fastcall sub_B28190(__int64 a1)
{
  void *v2; // rbp
  __int64 result; // rax
  void *v4; // r13
  void *v5; // r14
  void *v6; // r14
  int v7; // ecx
  char v8; // si
  void *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // di
  __int64 v13; // rdx
  char v14; // si
  __int64 v15; // rcx
  void *v16; // rbx
  _QWORD v17[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v18[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  __int64 v20; // [rsp+38h] [rbp-70h]
  int v21; // [rsp+40h] [rbp-68h] BYREF
  char v22; // [rsp+44h] [rbp-64h]
  __int64 v23; // [rsp+48h] [rbp-60h]
  _QWORD v24[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v25[9]; // [rsp+60h] [rbp-48h] BYREF

  v2 = qword_1C7F2C0;
  if ( *(_DWORD *)a1 == 1 )
  {
    v17[0] = 1;
    v17[1] = 0;
    v18[0] = 1;
    v18[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v18);
    BYTE4(v18[0]) &= ~1u;
    LODWORD(v18[0]) = 1;
    v24[1] = 0;
    v25[0] = 1;
    v25[1] = 0;
    v24[0] = 1;
    if ( (v18[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v25, v18);
    }
    else
    {
      BYTE4(v25[0]) &= ~1u;
      LODWORD(v25[0]) = v18[0];
    }
    v4 = qword_1C7F2C0;
    if ( LODWORD(v24[0])
      && ((*(_BYTE *)(a1 + 12) & 1) != 0
       || *(_DWORD *)(a1 + 8) != 1
       || (*(_BYTE *)(a1 + 28) & 1) != 0
       || *(_DWORD *)(a1 + 24) != 1) )
    {
      sub_1831650(qword_1C7F2C0, v24, a1 + 24);
      sub_1831650(v4, v25, a1 + 8);
      if ( SLODWORD(v25[0]) < 0 )
      {
        sub_1831620(v4, v24);
        sub_1831620(v4, v25);
      }
      v19 = 0;
      v20 = 0;
      sub_1832C70(v4, v24, v25, &v19);
      if ( (v19 & 0x100000000LL) != 0 || (_DWORD)v19 != 1 )
      {
        sub_1833EB0(v4, v24, &v19, v24);
        sub_1833EB0(v4, v25, &v19, v25);
      }
      sub_182CBA0(v4, &v19);
    }
    else
    {
      if ( (v24[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v24, v24);
      else
        BYTE4(v24[0]) &= ~1u;
      if ( (v25[0] & 0x100000000LL) != 0 )
        sub_182C690(v4, v25, v25);
      else
        BYTE4(v25[0]) &= ~1u;
    }
    BYTE4(v19) &= 0xFCu;
    v5 = qword_1C7F2C0;
    v22 &= 0xFCu;
    LODWORD(v19) = 0;
    v20 = 0;
    v21 = 1;
    v23 = 0;
    if ( (v24[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v19, v24);
    else
      LODWORD(v19) = v24[0];
    if ( (v25[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v5, &v21, v25);
    }
    else
    {
      v22 &= ~1u;
      v21 = v25[0];
    }
    v6 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v24);
    sub_182CBA0(v6, v25);
    v7 = v19;
    v8 = BYTE4(v19);
    v9 = qword_1C7F2C0;
    LODWORD(v19) = *(_DWORD *)(a1 + 8);
    v10 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 8) = v7;
    v11 = v20;
    v20 = v10;
    LOBYTE(v10) = *(_BYTE *)(a1 + 12);
    *(_QWORD *)(a1 + 16) = v11;
    LOBYTE(v11) = v8;
    v8 &= ~2u;
    v12 = v10 & 0xFD;
    BYTE4(v19) = v10 & 1 | v8 & 0xFE | v10 & 2;
    LODWORD(v10) = *(_DWORD *)(a1 + 24);
    *(_BYTE *)(a1 + 12) = v8 & 1 | v12 & 0xFE | v11 & 2;
    LODWORD(v11) = v21;
    v21 = v10;
    v13 = *(_QWORD *)(a1 + 32);
    v14 = v22;
    *(_DWORD *)(a1 + 24) = v11;
    v15 = v23;
    v23 = v13;
    LOBYTE(v13) = *(_BYTE *)(a1 + 28);
    *(_QWORD *)(a1 + 32) = v15;
    LOBYTE(v15) = v14;
    v14 &= ~2u;
    v22 = v13 & 1 | v14 & 0xFE | v13 & 2;
    *(_BYTE *)(a1 + 28) = v14 & 1 | v13 & 0xFC | v15 & 2;
    sub_182CBA0(v9, &v19);
    sub_182CBA0(v9, &v21);
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v17);
    return sub_182CBA0(v16, v18);
  }
  else
  {
    *(_DWORD *)a1 = 1;
    sub_182CEF0(v2, a1 + 8);
    result = sub_182CBA0(v2, a1 + 24);
    *(_BYTE *)(a1 + 28) &= ~1u;
    *(_DWORD *)(a1 + 24) = 1;
  }
  return result;
}

