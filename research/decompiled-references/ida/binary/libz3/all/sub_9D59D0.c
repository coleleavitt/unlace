__int64 __fastcall sub_9D59D0(__int64 a1, unsigned int *a2)
{
  int v2; // eax
  void *v3; // r14
  void *v4; // r14
  void *v5; // r14
  int v6; // edx
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // si
  __int64 v11; // rax
  char v12; // cl
  __int64 v13; // rdx
  char v14; // si
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // si
  char v18; // cl
  __int64 v19; // rax
  __int64 v20; // rdx
  char v21; // si
  __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rdx
  char v25; // si
  __int64 v26; // rdx
  char v27; // cl
  _QWORD v29[2]; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v30[2]; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD v31[2]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-98h] BYREF
  int v35; // [rsp+60h] [rbp-88h] BYREF
  char v36; // [rsp+64h] [rbp-84h]
  __int64 v37; // [rsp+68h] [rbp-80h]
  int v38; // [rsp+70h] [rbp-78h]
  char v39; // [rsp+74h] [rbp-74h]
  __int64 v40; // [rsp+78h] [rbp-70h]
  int v41; // [rsp+80h] [rbp-68h] BYREF
  char v42; // [rsp+84h] [rbp-64h]
  __int64 v43; // [rsp+88h] [rbp-60h]
  int v44; // [rsp+90h] [rbp-58h]
  char v45; // [rsp+94h] [rbp-54h]
  __int64 v46; // [rsp+98h] [rbp-50h]
  int v47; // [rsp+A0h] [rbp-48h] BYREF
  char v48; // [rsp+A4h] [rbp-44h]
  __int64 v49; // [rsp+A8h] [rbp-40h]
  int v50; // [rsp+B0h] [rbp-38h]
  char v51; // [rsp+B4h] [rbp-34h]
  __int64 v52; // [rsp+B8h] [rbp-30h]

  *(_DWORD *)(*(_QWORD *)(a1 + 400) + 20LL) = 0;
  v2 = 0x7FFFFFFF;
  if ( a2 )
    v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8832LL) + 4LL * *a2);
  *(_DWORD *)(a1 + 1536) = v2;
  v29[0] = 0;
  v29[1] = 0;
  v3 = qword_1C7F2C0;
  v30[0] = 1;
  v30[1] = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v29, &qword_1C7F280);
    if ( (qword_1C7F290 & 0x100000000LL) == 0 )
      goto LABEL_5;
  }
  else
  {
    LODWORD(v29[0]) = qword_1C7F280;
    if ( (qword_1C7F290 & 0x100000000LL) == 0 )
    {
LABEL_5:
      BYTE4(v30[0]) &= ~1u;
      LODWORD(v30[0]) = qword_1C7F290;
      goto LABEL_6;
    }
  }
  sub_182C690(v3, v30, &qword_1C7F290);
LABEL_6:
  v4 = qword_1C7F2C0;
  v31[0] = 0;
  v31[1] = 0;
  v32[0] = 1;
  v32[1] = 0;
  if ( (qword_1C7F200 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v31, &qword_1C7F200);
  else
    LODWORD(v31[0]) = qword_1C7F200;
  if ( (qword_1C7F210 & 0x100000000LL) != 0 )
  {
    sub_182C690(v4, v32, &qword_1C7F210);
  }
  else
  {
    BYTE4(v32[0]) &= ~1u;
    LODWORD(v32[0]) = qword_1C7F210;
  }
  v33[0] = 0;
  v5 = qword_1C7F2C0;
  v33[1] = 0;
  v34[0] = 1;
  v34[1] = 0;
  if ( (qword_1C7F220 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v33, &qword_1C7F220);
  else
    LODWORD(v33[0]) = qword_1C7F220;
  if ( (qword_1C7F230 & 0x100000000LL) != 0 )
  {
    sub_182C690(v5, v34, &qword_1C7F230);
  }
  else
  {
    BYTE4(v34[0]) &= ~1u;
    LODWORD(v34[0]) = qword_1C7F230;
  }
  sub_8A6550((__int64)&v35, (__int64)v29);
  sub_1831620(qword_1C7F2C0, &v35);
  sub_1831620(qword_1C7F2C0, &v41);
  sub_1831620(qword_1C7F2C0, &v47);
  v6 = v35;
  v7 = v36;
  v35 = *(_DWORD *)(a1 + 1544);
  v8 = *(_QWORD *)(a1 + 1552);
  *(_DWORD *)(a1 + 1544) = v6;
  v9 = v37;
  v37 = v8;
  LOBYTE(v8) = *(_BYTE *)(a1 + 1548);
  *(_QWORD *)(a1 + 1552) = v9;
  LOBYTE(v9) = v7;
  v7 &= ~2u;
  v10 = v8 & 0xFD;
  v36 = v8 & 1 | v7 & 0xFE | v8 & 2;
  LODWORD(v8) = *(_DWORD *)(a1 + 1560);
  *(_BYTE *)(a1 + 1548) = v7 & 1 | v10 & 0xFE | v9 & 2;
  LODWORD(v9) = v38;
  v38 = v8;
  v11 = *(_QWORD *)(a1 + 1568);
  v12 = v39;
  *(_DWORD *)(a1 + 1560) = v9;
  v13 = v40;
  v40 = v11;
  LOBYTE(v11) = *(_BYTE *)(a1 + 1564);
  *(_QWORD *)(a1 + 1568) = v13;
  LOBYTE(v13) = v12;
  v12 &= ~2u;
  v14 = v11 & 0xFD;
  v39 = v11 & 1 | v12 & 0xFE | v11 & 2;
  LODWORD(v11) = *(_DWORD *)(a1 + 1576);
  *(_BYTE *)(a1 + 1564) = v12 & 1 | v14 & 0xFE | v13 & 2;
  LODWORD(v13) = v41;
  v41 = v11;
  v15 = *(_QWORD *)(a1 + 1584);
  *(_DWORD *)(a1 + 1576) = v13;
  v16 = v43;
  v43 = v15;
  *(_QWORD *)(a1 + 1584) = v16;
  v17 = *(_BYTE *)(a1 + 1580);
  LOBYTE(v15) = v17 & 2;
  v17 &= ~2u;
  LOBYTE(v16) = v42 & 1 | v17 & 0xFE | v42 & 2;
  v18 = v45;
  v42 = v17 & 1 | v42 & 0xFC | v15 & 0xFE;
  LODWORD(v15) = *(_DWORD *)(a1 + 1592);
  *(_BYTE *)(a1 + 1580) = v16;
  LODWORD(v16) = v44;
  v44 = v15;
  v19 = *(_QWORD *)(a1 + 1600);
  *(_DWORD *)(a1 + 1592) = v16;
  v20 = v46;
  v46 = v19;
  LOBYTE(v19) = *(_BYTE *)(a1 + 1596);
  *(_QWORD *)(a1 + 1600) = v20;
  LOBYTE(v20) = v18;
  v18 &= ~2u;
  v21 = v19 & 0xFD;
  v45 = v19 & 1 | v18 & 0xFE | v19 & 2;
  LODWORD(v19) = *(_DWORD *)(a1 + 1608);
  *(_BYTE *)(a1 + 1596) = v18 & 1 | v21 & 0xFE | v20 & 2;
  LODWORD(v20) = v47;
  v47 = v19;
  v22 = *(_QWORD *)(a1 + 1616);
  v23 = v48;
  *(_DWORD *)(a1 + 1608) = v20;
  v24 = v49;
  v49 = v22;
  LOBYTE(v22) = *(_BYTE *)(a1 + 1612);
  *(_QWORD *)(a1 + 1616) = v24;
  LOBYTE(v24) = v23;
  v23 &= ~2u;
  v25 = v22 & 0xFD;
  v48 = v22 & 1 | v23 & 0xFE | v22 & 2;
  LODWORD(v22) = *(_DWORD *)(a1 + 1624);
  *(_BYTE *)(a1 + 1612) = v23 & 1 | v25 & 0xFE | v24 & 2;
  LODWORD(v24) = v50;
  v50 = v22;
  *(_DWORD *)(a1 + 1624) = v24;
  v26 = v52;
  v27 = v51;
  v52 = *(_QWORD *)(a1 + 1632);
  LOBYTE(v22) = *(_BYTE *)(a1 + 1628);
  *(_QWORD *)(a1 + 1632) = v26;
  LOBYTE(v26) = v22 & 0xFD | v27 & 2;
  v27 &= ~2u;
  *(_BYTE *)(a1 + 1628) = v27 & 1 | v26 & 0xFE;
  v51 = v22 & 1 | v27 & 0xFE | v22 & 2;
  sub_2A6060((__int64)&v35);
  return sub_2A6060((__int64)v29);
}

