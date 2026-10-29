void __fastcall sub_1F995C0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  _BYTE *v5; // rbp
  unsigned __int64 v6; // rax
  _BYTE *v7; // r12
  __int64 *v8; // rbp
  __int64 v9; // rsi
  __int64 *v10; // r12
  __int64 v11; // rsi
  _BYTE *v12; // rax
  unsigned __int64 v13; // rbp
  __int64 *v14; // rax
  unsigned __int64 v15; // rbp
  __int64 *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r13
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // rax
  _BYTE *v25; // rbp
  _BYTE *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  unsigned __int8 v32; // al
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-50h] BYREF
  __int64 v38[9]; // [rsp+10h] [rbp-48h] BYREF

  v37 = a2;
  v3 = (unsigned int)sub_F22B40(&v37);
  sub_9B9C90(a1[2], v3);
  switch ( v3 )
  {
    case 0LL:
      v6 = sub_F22BD0(&v37, 0);
      sub_1F952B0((__int64)a1, v6);
      return;
    case 1LL:
      v7 = sub_F22E60(&v37);
      v8 = (__int64 *)(v7 + 8);
      v9 = *((_WORD *)v7 + 1) >> 1;
      sub_9B9C90(a1[2], v9);
      v10 = (__int64 *)&v7[8 * (unsigned __int16)v9 + 8];
      while ( v10 != v8 )
      {
        v11 = *v8++;
        sub_1F952B0((__int64)a1, v11);
      }
      return;
    case 2LL:
      v12 = sub_F22E90(&v37);
      sub_1F952D0(a1, *((_QWORD *)v12 + 1));
      return;
    case 3LL:
      v13 = sub_F22F50(&v37);
      sub_1F98300(a1, *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      sub_9B9C90(a1[2], (*(__int64 *)(v13 + 8) >> 2) & 1);
      sub_1F995C0(a1, *(_QWORD *)(v13 + 16));
      return;
    case 4LL:
      v14 = (__int64 *)sub_F22F70(&v37);
      v15 = v14[1];
      v16 = v14;
      sub_1F98300(a1, *v14 & 0xFFFFFFFFFFFFFFF8LL);
      v21 = -(__int64)v15;
      if ( v15 > 0xFFFFFFFFFFFFFFD2LL )
      {
        v33 = a1[2];
        v34 = sub_1F80CA0(a1[1], 0, v17, v18, v19, v20);
        v35 = v33;
        v15 = 0;
        sub_9B9C90(v35, v34);
        if ( v21 < 0x2E )
          v15 = v21;
      }
      else
      {
        v22 = a1[1];
        v23 = a1[2];
        if ( v15 )
        {
          v24 = sub_1F80CA0(v22, v15, v17, v18, v19, v20);
          sub_9B9C90(v23, v24);
          goto LABEL_14;
        }
        v36 = sub_1F80CA0(v22, 0, v17, v18, v19, v20);
        sub_9B9C90(v23, v36);
      }
      sub_9B9C90(a1[2], v15);
LABEL_14:
      sub_9B9C90(a1[2], (*v16 >> 2) & 1);
      return;
    case 5LL:
      v25 = sub_F22ED0(&v37);
      sub_1F995C0(a1, *((_QWORD *)v25 + 2));
      sub_1F952B0((__int64)a1, *((_QWORD *)v25 + 3));
      sub_9B9C90(a1[2], (*(_DWORD *)v25 >> 3) & 0x3FFF);
      sub_9B9C90(a1[2], (unsigned __int64)(*((_WORD *)v25 + 1) >> 1) << 49 >> 50);
      sub_9B9C90(a1[2], (*((_WORD *)v25 + 1) >> 1) & 1);
      return;
    case 6LL:
      v26 = sub_F22F10(&v37);
      sub_F22160((__int64)v38, (__int64)v26);
      sub_1F992F0(a1, (__int64)v26, v27, v28, v29, v30, v38[0], (void *)v38[1], v38[2]);
      v31 = sub_F22790((__int64)v26);
      sub_1F952B0((__int64)a1, v31);
      sub_9B9C90(a1[2], (*(_DWORD *)v26 >> 3) & 0x3FFF);
      v32 = sub_F227A0((__int64)v26);
      sub_9B9C90(a1[2], v32);
      return;
    case 7LL:
      v4 = sub_F22F90(&v37);
      sub_1F952B0((__int64)a1, v4);
      return;
    case 8LL:
      v5 = sub_F23230(&v37);
      sub_1F995C0(a1, *((_QWORD *)v5 + 2));
      sub_9B9C90(a1[2], (*(_DWORD *)v5 >> 3) & 0x3FFF);
      sub_1F99560(a1, (__int64)(v5 + 24), *((_WORD *)v5 + 1) >> 1);
      return;
  }
}
