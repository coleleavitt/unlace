__int64 __fastcall sub_4ECAE0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5, int a6)
{
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  void *v13; // r14
  int v14; // edx
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // si
  __int64 v19; // rax
  void *v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // si
  __int64 v25; // rax
  void *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  char v29; // si
  __int64 v30; // rax
  void *v31; // rbx
  unsigned __int64 v32; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+8h] [rbp-50h] BYREF
  __int64 v34; // [rsp+10h] [rbp-48h] BYREF
  __int64 v35; // [rsp+18h] [rbp-40h]
  __int64 v36; // [rsp+20h] [rbp-38h] BYREF
  __int64 v37; // [rsp+28h] [rbp-30h]

  v8 = sub_1673B50((int)a1 + 48, a2, a3, (_DWORD)a4, a5, a6);
  if ( (_BYTE)v8 )
    return 1;
  v9 = v8;
  v10 = *(_QWORD *)(a1 + 40);
  if ( a2 == *(_QWORD *)(v10 + 856) )
  {
    v34 = 1;
    v35 = 0;
    v36 = 1;
    v37 = 0;
    sub_182CBA0(qword_1C7F2C0, &v36);
    LODWORD(v34) = *(_DWORD *)a3;
    v27 = *(_QWORD *)(a3 + 8);
    *(_DWORD *)a3 = 1;
    v28 = v35;
    v35 = v27;
    LOBYTE(v27) = *(_BYTE *)(a3 + 4);
    *(_QWORD *)(a3 + 8) = v28;
    LOBYTE(v28) = v27 & 0xFC;
    v29 = *(_BYTE *)(a3 + 20);
    BYTE4(v34) = v27 & 3;
    LODWORD(v27) = *(_DWORD *)(a3 + 16);
    *(_BYTE *)(a3 + 4) = v28;
    LODWORD(v36) = v27;
    v30 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 24) = v37;
    v37 = v30;
    LOBYTE(v30) = BYTE4(v36);
    *(_DWORD *)(a3 + 16) = 1;
    *(_BYTE *)(a3 + 20) = v29 & 0xFC | v30 & 2;
    v31 = qword_1C7F2C0;
    BYTE4(v36) = v29 & 1 | v29 & 2 | v30 & 0xFC;
    sub_182CBA0(qword_1C7F2C0, &v34);
    sub_182CBA0(v31, &v36);
    *a4 = 1;
    return 1;
  }
  if ( a2 == *(_QWORD *)(v10 + 864) )
  {
    v34 = 0;
    v35 = 0;
    v36 = 1;
    v37 = 0;
    sub_182CBA0(qword_1C7F2C0, &v36);
    LODWORD(v34) = *(_DWORD *)a3;
    v22 = *(_QWORD *)(a3 + 8);
    *(_DWORD *)a3 = 0;
    v23 = v35;
    v35 = v22;
    LOBYTE(v22) = *(_BYTE *)(a3 + 4);
    *(_QWORD *)(a3 + 8) = v23;
    LOBYTE(v23) = v22 & 0xFC;
    v24 = *(_BYTE *)(a3 + 20);
    BYTE4(v34) = v22 & 3;
    LODWORD(v22) = *(_DWORD *)(a3 + 16);
    *(_BYTE *)(a3 + 4) = v23;
    LODWORD(v36) = v22;
    v25 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 24) = v37;
    v37 = v25;
    LOBYTE(v25) = BYTE4(v36);
    *(_DWORD *)(a3 + 16) = 1;
    *(_BYTE *)(a3 + 20) = v24 & 0xFC | v25 & 2;
    v26 = qword_1C7F2C0;
    BYTE4(v36) = v24 & 1 | v24 & 2 | v25 & 0xFC;
    sub_182CBA0(qword_1C7F2C0, &v34);
    sub_182CBA0(v26, &v36);
    *a4 = 1;
    return 1;
  }
  if ( (unsigned __int8)sub_16250C0(a1 + 72, a2, &v32) )
  {
    v11 = sub_15D1F10(a2);
    if ( (unsigned __int8)sub_16256D0(a1 + 72, v11, &v33) )
    {
      v12 = v33;
      *a4 = 0;
      if ( v12 )
      {
        v33 = 0;
        _BitScanReverse64(&v12, v12);
        *a4 = v12 + 1;
      }
      v34 = 0;
      v35 = 0;
      v36 = 1;
      v13 = qword_1C7F2C0;
      v37 = 0;
      if ( v32 > 0x7FFFFFFE )
        sub_182C550(qword_1C7F2C0, &v34);
      else
        LODWORD(v34) = v32;
      sub_182CBA0(v13, &v36);
      v14 = v34;
      v15 = BYTE4(v34);
      LODWORD(v34) = *(_DWORD *)a3;
      v16 = *(_QWORD *)(a3 + 8);
      *(_DWORD *)a3 = v14;
      v17 = v35;
      v35 = v16;
      LOBYTE(v16) = *(_BYTE *)(a3 + 4);
      *(_QWORD *)(a3 + 8) = v17;
      LOBYTE(v17) = v15;
      v15 &= ~2u;
      LOBYTE(v17) = v16 & 0xFC | v17 & 2;
      v18 = *(_BYTE *)(a3 + 20);
      BYTE4(v34) = v16 & 1 | v15 & 0xFE | v16 & 2;
      LODWORD(v16) = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a3 + 4) = v15 & 1 | v17;
      LODWORD(v36) = v16;
      v19 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)(a3 + 24) = v37;
      v37 = v19;
      LOBYTE(v19) = BYTE4(v36);
      *(_DWORD *)(a3 + 16) = 1;
      *(_BYTE *)(a3 + 20) = v18 & 0xFC | v19 & 2;
      v20 = qword_1C7F2C0;
      BYTE4(v36) = v18 & 1 | v18 & 2 | v19 & 0xFC;
      sub_182CBA0(qword_1C7F2C0, &v34);
      sub_182CBA0(v20, &v36);
      return 1;
    }
  }
  return v9;
}

