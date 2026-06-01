void __fastcall sub_B7E630(__int64 a1)
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
  void *v14; // r15
  void *v15; // r15
  void *v16; // r15
  void *v17; // r15
  void *v18; // r15
  void *v19; // r15
  void *v20; // r14
  __int64 v21; // r14
  void *v22; // r15
  int v23; // eax
  int v24; // eax
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  int *v29; // r15
  int v30; // eax
  int v31; // eax
  void *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  int *v36; // r14
  int v37; // eax
  void *v38; // r15
  __int64 v39; // [rsp+30h] [rbp-1A8h]
  void *v40; // [rsp+48h] [rbp-190h]
  void *v41; // [rsp+48h] [rbp-190h]
  int v42; // [rsp+50h] [rbp-188h] BYREF
  char v43; // [rsp+54h] [rbp-184h]
  __int64 v44; // [rsp+58h] [rbp-180h]
  int v45; // [rsp+60h] [rbp-178h] BYREF
  char v46; // [rsp+64h] [rbp-174h]
  __int64 v47; // [rsp+68h] [rbp-170h]
  _BYTE v48[16]; // [rsp+70h] [rbp-168h] BYREF
  _BYTE v49[16]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v50[16]; // [rsp+90h] [rbp-148h] BYREF
  _BYTE v51[16]; // [rsp+A0h] [rbp-138h] BYREF
  _QWORD v52[2]; // [rsp+B0h] [rbp-128h] BYREF
  _QWORD v53[2]; // [rsp+C0h] [rbp-118h] BYREF
  int v54; // [rsp+D0h] [rbp-108h]
  int v55; // [rsp+E0h] [rbp-F8h] BYREF
  char v56; // [rsp+E4h] [rbp-F4h]
  __int64 v57; // [rsp+E8h] [rbp-F0h]
  int v58; // [rsp+F0h] [rbp-E8h] BYREF
  char v59; // [rsp+F4h] [rbp-E4h]
  __int64 v60; // [rsp+F8h] [rbp-E0h]
  int v61; // [rsp+100h] [rbp-D8h]
  int v62; // [rsp+110h] [rbp-C8h] BYREF
  char v63; // [rsp+114h] [rbp-C4h]
  __int64 v64; // [rsp+118h] [rbp-C0h]
  int v65; // [rsp+120h] [rbp-B8h] BYREF
  char v66; // [rsp+124h] [rbp-B4h]
  __int64 v67; // [rsp+128h] [rbp-B0h]
  int v68; // [rsp+130h] [rbp-A8h]
  _QWORD v69[2]; // [rsp+140h] [rbp-98h] BYREF
  _BYTE v70[16]; // [rsp+150h] [rbp-88h] BYREF
  int v71; // [rsp+160h] [rbp-78h]
  __int64 v72; // [rsp+170h] [rbp-68h] BYREF
  __int64 v73; // [rsp+178h] [rbp-60h]
  __int64 v74; // [rsp+180h] [rbp-58h] BYREF
  __int64 v75; // [rsp+188h] [rbp-50h]

  v72 = 1;
  v2 = qword_1C7F2C0;
  v73 = 0;
  v74 = 4;
  v75 = 0;
  v69[0] = 0;
  v69[1] = 0;
  sub_1832C70(qword_1C7F2C0, &v72, &v74, v69);
  if ( (v69[0] & 0x100000000LL) == 0 && LODWORD(v69[0]) == 1 )
  {
    sub_182CBA0(v2, v69);
  }
  else
  {
    sub_1833EB0(v2, &v72, v69, &v72);
    sub_1833EB0(v2, &v74, v69, &v74);
    sub_182CBA0(v2, v69);
  }
  v3 = v72;
  v4 = BYTE4(v72);
  LODWORD(v72) = *(_DWORD *)(a1 + 1592);
  v5 = *(_QWORD *)(a1 + 1600);
  *(_DWORD *)(a1 + 1592) = v3;
  v6 = v73;
  v73 = v5;
  LOBYTE(v5) = *(_BYTE *)(a1 + 1596);
  *(_QWORD *)(a1 + 1600) = v6;
  LOBYTE(v6) = v4;
  v4 &= ~2u;
  v7 = v5 & 0xFD;
  BYTE4(v72) = v5 & 1 | v4 & 0xFE | v5 & 2;
  LODWORD(v5) = *(_DWORD *)(a1 + 1608);
  *(_BYTE *)(a1 + 1596) = v4 & 1 | v7 & 0xFE | v6 & 2;
  LODWORD(v6) = v74;
  LODWORD(v74) = v5;
  v8 = *(_QWORD *)(a1 + 1616);
  v9 = BYTE4(v74);
  *(_DWORD *)(a1 + 1608) = v6;
  v10 = v75;
  v75 = v8;
  LOBYTE(v8) = *(_BYTE *)(a1 + 1612);
  *(_QWORD *)(a1 + 1616) = v10;
  LOBYTE(v10) = v9;
  v9 &= ~2u;
  BYTE4(v74) = v8 & 1 | v9 & 0xFE | v8 & 2;
  *(_BYTE *)(a1 + 1612) = v9 & 1 | v8 & 0xFC | v10 & 2;
  sub_25A130((char *)&v72);
  v11 = *(_QWORD *)(a1 + 1008);
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    if ( (_DWORD)v12 )
    {
      v13 = 0;
      v39 = v12 << 6;
      while ( 1 )
      {
        v21 = v13 + v11;
        if ( *(_BYTE *)(v21 + 60) )
        {
          v52[0] = 0;
          v22 = qword_1C7F2C0;
          v52[1] = 0;
          v53[0] = 1;
          v53[1] = 0;
          if ( (*(_BYTE *)(v21 + 12) & 1) != 0 )
            sub_182C690(qword_1C7F2C0, v52, v21 + 8);
          else
            LODWORD(v52[0]) = *(_DWORD *)(v21 + 8);
          if ( (*(_BYTE *)(v21 + 28) & 1) != 0 )
          {
            sub_182C690(v22, v53, v21 + 24);
          }
          else
          {
            v23 = *(_DWORD *)(v21 + 24);
            BYTE4(v53[0]) &= ~1u;
            LODWORD(v53[0]) = v23;
          }
          v24 = *(_DWORD *)(v21 + 40);
          v25 = qword_1C7F2C0;
          v55 = 0;
          v54 = v24;
          v26 = *(unsigned int *)(*(_QWORD *)(a1 + 1008) + v13 + 4);
          v56 &= 0xFCu;
          v59 &= 0xFCu;
          v57 = 0;
          v27 = 5 * v26;
          v28 = *(_QWORD *)(a1 + 992);
          v58 = 1;
          v60 = 0;
          v29 = (int *)(v28 + 8 * v27);
          if ( (v29[1] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v55, v28 + 8 * v27);
          else
            v55 = *v29;
          if ( (v29[5] & 1) != 0 )
          {
            sub_182C690(v25, &v58, v29 + 4);
          }
          else
          {
            v30 = v29[4];
            v59 &= ~1u;
            v58 = v30;
          }
          v31 = v29[8];
          v32 = qword_1C7F2C0;
          v61 = v31;
          v33 = *(unsigned int *)(*(_QWORD *)(a1 + 1008) + v13);
          v63 &= 0xFCu;
          v66 &= 0xFCu;
          v62 = 0;
          v34 = 5 * v33;
          v35 = *(_QWORD *)(a1 + 992);
          v64 = 0;
          v65 = 1;
          v36 = (int *)(v35 + 8 * v34);
          v67 = 0;
          if ( (v36[1] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v62, v35 + 8 * v34);
          else
            v62 = *v36;
          if ( (v36[5] & 1) != 0 )
          {
            sub_182C690(v32, &v65, v36 + 4);
          }
          else
          {
            v37 = v36[4];
            v66 &= ~1u;
            v65 = v37;
          }
          v68 = v36[8];
          sub_89AC50((__int64)&v72, (__int64)&v55, (__int64)&v62);
          sub_89AC50((__int64)v69, (__int64)&v72, (__int64)v52);
          v38 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v72);
          sub_182CBA0(v38, &v74);
          v44 = 0;
          v43 &= 0xFCu;
          v42 = v71;
          v46 &= 0xFCu;
          v45 = 1;
          v47 = 0;
          sub_182CBA0(qword_1C7F2C0, &v45);
          v46 &= ~1u;
          v45 = 1;
          if ( v42 > 0 )
          {
            sub_3EBD70((__int64)v48, (__int64)v69);
            v72 = 4;
            v73 = 0;
            v74 = 1;
            v75 = 0;
            sub_182CBA0(qword_1C7F2C0, &v74);
            BYTE4(v74) &= ~1u;
            LODWORD(v74) = 1;
            sub_3EBE30((__int64)v50, (__int64)&v72, (__int64)&v42);
            v40 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v72);
            sub_182CBA0(v40, &v74);
            sub_27B620((__int64)&v72, (__int64)v48, (__int64)v50);
            v41 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v50);
            sub_182CBA0(v41, v51);
            if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v72, a1 + 1592) )
              sub_27B950((__int64)qword_1C7F2C0, a1 + 1592, (int *)&v72);
            v14 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v72);
            sub_182CBA0(v14, &v74);
            v15 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v48);
            sub_182CBA0(v15, v49);
          }
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v42);
          sub_182CBA0(v16, &v45);
          v17 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v69);
          sub_182CBA0(v17, v70);
          v18 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v62);
          sub_182CBA0(v18, &v65);
          v19 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v55);
          sub_182CBA0(v19, &v58);
          v20 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v52);
          sub_182CBA0(v20, v53);
        }
        v13 += 64;
        if ( v39 == v13 )
          break;
        v11 = *(_QWORD *)(a1 + 1008);
      }
    }
  }
}

