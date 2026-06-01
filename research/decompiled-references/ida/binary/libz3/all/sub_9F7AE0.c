__int64 __fastcall sub_9F7AE0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // r15
  int v5; // eax
  void *v6; // r15
  int v7; // eax
  void *v8; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  void *v13; // [rsp+8h] [rbp-A0h]
  void *v14; // [rsp+8h] [rbp-A0h]
  void *v15; // [rsp+8h] [rbp-A0h]
  _QWORD v16[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+60h] [rbp-48h] BYREF

  v16[0] = 0;
  v16[1] = 0;
  v4 = qword_1C7F2C0;
  v17[0] = 1;
  v17[1] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v16, a2);
  else
    LODWORD(v16[0]) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v4, v17, a2 + 16);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 16);
    BYTE4(v17[0]) &= ~1u;
    LODWORD(v17[0]) = v5;
  }
  v18[0] = 0;
  v6 = qword_1C7F2C0;
  v18[1] = 0;
  v19[0] = 1;
  v19[1] = 0;
  if ( (*(_BYTE *)(a2 + 36) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v18, a2 + 32);
  else
    LODWORD(v18[0]) = *(_DWORD *)(a2 + 32);
  if ( (*(_BYTE *)(a2 + 52) & 1) != 0 )
  {
    sub_182C690(v6, v19, a2 + 48);
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 48);
    BYTE4(v19[0]) &= ~1u;
    LODWORD(v19[0]) = v7;
  }
  v20[0] = 0;
  v8 = qword_1C7F2C0;
  v20[1] = 0;
  v21[0] = 1;
  v21[1] = 0;
  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v20, a2 + 64);
  else
    LODWORD(v20[0]) = *(_DWORD *)(a2 + 64);
  if ( (*(_BYTE *)(a2 + 84) & 1) != 0 )
  {
    sub_182C690(v8, v21, a2 + 80);
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 80);
    BYTE4(v21[0]) &= ~1u;
    LODWORD(v21[0]) = v9;
  }
  if ( (v17[0] & 0x100000000LL) != 0
    || LODWORD(v17[0]) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v16, a3);
  }
  else
  {
    v14 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v16, a3);
    sub_182CBA0(v14, v17);
    BYTE4(v17[0]) &= ~1u;
    LODWORD(v17[0]) = 1;
  }
  v10 = a3 + 32;
  if ( (v19[0] & 0x100000000LL) != 0
    || LODWORD(v19[0]) != 1
    || (*(_BYTE *)(a3 + 52) & 1) != 0
    || *(_DWORD *)(a3 + 48) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v18, v10);
  }
  else
  {
    v15 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v18, v10);
    sub_182CBA0(v15, v19);
    BYTE4(v19[0]) &= ~1u;
    LODWORD(v19[0]) = 1;
  }
  v11 = a3 + 64;
  if ( (v21[0] & 0x100000000LL) != 0
    || LODWORD(v21[0]) != 1
    || (*(_BYTE *)(a3 + 84) & 1) != 0
    || *(_DWORD *)(a3 + 80) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v20, v11);
  }
  else
  {
    v13 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v20, v11);
    sub_182CBA0(v13, v21);
    BYTE4(v21[0]) &= ~1u;
    LODWORD(v21[0]) = 1;
  }
  sub_8A6550(a1, (__int64)v16);
  sub_2A6060((__int64)v16);
  return a1;
}

