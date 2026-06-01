void __fastcall sub_B7DBA0(__int64 a1)
{
  void *v2; // r12
  int v3; // edx
  char v4; // cl
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // si
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // r15
  __int64 v18; // r15
  int v19; // eax
  void *v20; // r15
  __int64 v21; // r14
  __int64 v22; // r14
  int v23; // eax
  void *v24; // r15
  void *v25; // rdi
  void *v26; // r15
  void *v27; // r15
  void *v28; // r15
  void *v29; // r14
  __int64 v30; // r14
  void *v31; // r15
  void *v32; // [rsp+20h] [rbp-158h]
  void *v33; // [rsp+20h] [rbp-158h]
  __int64 v34; // [rsp+30h] [rbp-148h]
  void *v35; // [rsp+38h] [rbp-140h]
  void *v36; // [rsp+38h] [rbp-140h]
  void *v37; // [rsp+38h] [rbp-140h]
  _QWORD v38[2]; // [rsp+40h] [rbp-138h] BYREF
  _QWORD v39[2]; // [rsp+50h] [rbp-128h] BYREF
  int v40; // [rsp+60h] [rbp-118h] BYREF
  char v41; // [rsp+64h] [rbp-114h]
  __int64 v42; // [rsp+68h] [rbp-110h]
  int v43; // [rsp+70h] [rbp-108h] BYREF
  char v44; // [rsp+74h] [rbp-104h]
  __int64 v45; // [rsp+78h] [rbp-100h]
  int v46; // [rsp+80h] [rbp-F8h] BYREF
  char v47; // [rsp+84h] [rbp-F4h]
  __int64 v48; // [rsp+88h] [rbp-F0h]
  int v49; // [rsp+90h] [rbp-E8h] BYREF
  char v50; // [rsp+94h] [rbp-E4h]
  __int64 v51; // [rsp+98h] [rbp-E0h]
  _BYTE v52[16]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v53[16]; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD v54[2]; // [rsp+C0h] [rbp-B8h] BYREF
  _QWORD v55[2]; // [rsp+D0h] [rbp-A8h] BYREF
  _BYTE v56[16]; // [rsp+E0h] [rbp-98h] BYREF
  _BYTE v57[16]; // [rsp+F0h] [rbp-88h] BYREF
  _QWORD v58[2]; // [rsp+100h] [rbp-78h] BYREF
  _BYTE v59[16]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v60; // [rsp+120h] [rbp-58h] BYREF
  __int64 v61; // [rsp+128h] [rbp-50h]
  __int64 v62; // [rsp+130h] [rbp-48h] BYREF
  __int64 v63; // [rsp+138h] [rbp-40h]

  v60 = 1;
  v2 = qword_1C7F2C0;
  v61 = 0;
  v62 = 4;
  v63 = 0;
  v58[0] = 0;
  v58[1] = 0;
  sub_1832C70(qword_1C7F2C0, &v60, &v62, v58);
  if ( (v58[0] & 0x100000000LL) == 0 && LODWORD(v58[0]) == 1 )
  {
    sub_182CBA0(v2, v58);
  }
  else
  {
    sub_1833EB0(v2, &v60, v58, &v60);
    sub_1833EB0(v2, &v62, v58, &v62);
    sub_182CBA0(v2, v58);
  }
  v3 = v60;
  v4 = BYTE4(v60);
  LODWORD(v60) = *(_DWORD *)(a1 + 1584);
  v5 = *(_QWORD *)(a1 + 1592);
  *(_DWORD *)(a1 + 1584) = v3;
  v6 = v61;
  v61 = v5;
  LOBYTE(v5) = *(_BYTE *)(a1 + 1588);
  *(_QWORD *)(a1 + 1592) = v6;
  LOBYTE(v6) = v4;
  v4 &= ~2u;
  v7 = v5 & 0xFD;
  BYTE4(v60) = v5 & 1 | v4 & 0xFE | v5 & 2;
  LODWORD(v5) = *(_DWORD *)(a1 + 1600);
  *(_BYTE *)(a1 + 1588) = v4 & 1 | v7 & 0xFE | v6 & 2;
  LODWORD(v6) = v62;
  LODWORD(v62) = v5;
  v8 = *(_QWORD *)(a1 + 1608);
  v9 = BYTE4(v62);
  *(_DWORD *)(a1 + 1600) = v6;
  v10 = v63;
  v63 = v8;
  LOBYTE(v8) = *(_BYTE *)(a1 + 1604);
  *(_QWORD *)(a1 + 1608) = v10;
  LOBYTE(v10) = v9;
  v9 &= ~2u;
  BYTE4(v62) = v8 & 1 | v9 & 0xFE | v8 & 2;
  *(_BYTE *)(a1 + 1604) = v9 & 1 | v8 & 0xFC | v10 & 2;
  sub_25A130((char *)&v60);
  v11 = *(_QWORD *)(a1 + 1000);
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    if ( (_DWORD)v12 )
    {
      v13 = 0;
      v34 = 56 * v12;
      while ( 1 )
      {
        v30 = v13 + v11;
        if ( !*(_BYTE *)(v30 + 52) )
          goto LABEL_26;
        v38[0] = 0;
        v31 = qword_1C7F2C0;
        v38[1] = 0;
        v39[0] = 1;
        v39[1] = 0;
        if ( (*(_BYTE *)(v30 + 12) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v38, v30 + 8);
          if ( (*(_BYTE *)(v30 + 28) & 1) != 0 )
          {
LABEL_31:
            sub_182C690(v31, v39, v30 + 24);
            goto LABEL_9;
          }
        }
        else
        {
          LODWORD(v38[0]) = *(_DWORD *)(v30 + 8);
          if ( (*(_BYTE *)(v30 + 28) & 1) != 0 )
            goto LABEL_31;
        }
        v14 = *(_DWORD *)(v30 + 24);
        BYTE4(v39[0]) &= ~1u;
        LODWORD(v39[0]) = v14;
LABEL_9:
        v15 = *(_QWORD *)(a1 + 1000);
        v16 = qword_1C7F2C0;
        v40 = 0;
        v17 = *(unsigned int *)(v15 + v13 + 4);
        v41 &= 0xFCu;
        v44 &= 0xFCu;
        v18 = *(_QWORD *)(a1 + 984) + 32 * v17;
        v42 = 0;
        v43 = 1;
        v45 = 0;
        if ( (*(_BYTE *)(v18 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v40, v18);
        else
          v40 = *(_DWORD *)v18;
        if ( (*(_BYTE *)(v18 + 20) & 1) != 0 )
        {
          sub_182C690(v16, &v43, v18 + 16);
        }
        else
        {
          v19 = *(_DWORD *)(v18 + 16);
          v44 &= ~1u;
          v43 = v19;
        }
        v20 = qword_1C7F2C0;
        v21 = *(unsigned int *)(*(_QWORD *)(a1 + 1000) + v13);
        v47 &= 0xFCu;
        v50 &= 0xFCu;
        v46 = 0;
        v22 = *(_QWORD *)(a1 + 984) + 32 * v21;
        v48 = 0;
        v49 = 1;
        v51 = 0;
        if ( (*(_BYTE *)(v22 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v46, v22);
        else
          v46 = *(_DWORD *)v22;
        if ( (*(_BYTE *)(v22 + 20) & 1) != 0 )
        {
          sub_182C690(v20, &v49, v22 + 16);
        }
        else
        {
          v23 = *(_DWORD *)(v22 + 16);
          v50 &= ~1u;
          v49 = v23;
        }
        sub_3EBB80((__int64)&v60, (__int64)&v40, (__int64)&v46);
        sub_3EBB80((__int64)v52, (__int64)&v60, (__int64)v38);
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v60);
        sub_182CBA0(v24, &v62);
        v25 = qword_1C7F2C0;
        v54[0] = 0;
        v54[1] = 0;
        v55[0] = 1;
        v55[1] = 0;
        if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v54, &qword_1C7F2A0);
        else
          LODWORD(v54[0]) = qword_1C7F2A0;
        if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
        {
          sub_182C690(v25, v55, &qword_1C7F2B0);
        }
        else
        {
          BYTE4(v55[0]) &= ~1u;
          LODWORD(v55[0]) = qword_1C7F2B0;
        }
        if ( SLODWORD(v54[0]) > 0 )
        {
          sub_3EBD70((__int64)v56, (__int64)v52);
          v60 = 4;
          v61 = 0;
          v62 = 1;
          v63 = 0;
          sub_182CBA0(qword_1C7F2C0, &v62);
          BYTE4(v62) &= ~1u;
          LODWORD(v62) = 1;
          sub_3EBE30((__int64)v58, (__int64)&v60, (__int64)v54);
          v35 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v60);
          sub_182CBA0(v35, &v62);
          sub_27B620((__int64)&v60, (__int64)v56, (__int64)v58);
          v36 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v58);
          sub_182CBA0(v36, v59);
          if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v60, a1 + 1584) )
            sub_27B950((__int64)qword_1C7F2C0, a1 + 1584, (int *)&v60);
          v37 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v60);
          sub_182CBA0(v37, &v62);
          v32 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v56);
          sub_182CBA0(v32, v57);
        }
        v33 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v54);
        sub_182CBA0(v33, v55);
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v52);
        sub_182CBA0(v26, v53);
        v27 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v46);
        sub_182CBA0(v27, &v49);
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v40);
        sub_182CBA0(v28, &v43);
        v29 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v38);
        sub_182CBA0(v29, v39);
LABEL_26:
        v13 += 56;
        if ( v34 == v13 )
          return;
        v11 = *(_QWORD *)(a1 + 1000);
      }
    }
  }
}

