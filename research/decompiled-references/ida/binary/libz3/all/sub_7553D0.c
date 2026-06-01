__int64 __fastcall sub_7553D0(__int64 a1, __int64 a2)
{
  char v4; // r12
  unsigned int v5; // r15d
  void *v6; // r13
  void *v7; // rdi
  void *v8; // rdi
  int v9; // ecx
  char v10; // al
  int v11; // edx
  __int64 v12; // rdx
  char v13; // si
  char v14; // di
  char v15; // r9
  char v16; // si
  __int64 v17; // rdx
  char v18; // si
  char v19; // di
  char v20; // r9
  char v21; // si
  __int64 v22; // rdx
  char v23; // si
  char v24; // r9
  __int64 v25; // rdx
  char v26; // cl
  char v27; // al
  void *v28; // r12
  char v29; // si
  void *v30; // rdi
  void *v31; // r12
  void *v32; // rbp
  void *v33; // rbx
  __int64 result; // rax
  char v35; // dl
  char v36; // al
  unsigned int v37; // r12d
  void *v38; // rdi
  int v39; // eax
  void *v40; // r15
  void *v41; // r15
  void *v42; // r15
  void *v43; // r15
  void *v44; // r12
  bool v45; // al
  bool v46; // r13
  void *v47; // r12
  void *v48; // rbx
  void *v49; // r12
  unsigned int v51; // r12d
  unsigned int v52; // [rsp+8h] [rbp-100h]
  int v53; // [rsp+20h] [rbp-E8h] BYREF
  char v54; // [rsp+24h] [rbp-E4h]
  __int64 v55; // [rsp+28h] [rbp-E0h]
  int v56; // [rsp+30h] [rbp-D8h] BYREF
  char v57; // [rsp+34h] [rbp-D4h]
  __int64 v58; // [rsp+38h] [rbp-D0h]
  int v59; // [rsp+40h] [rbp-C8h] BYREF
  char v60; // [rsp+44h] [rbp-C4h]
  __int64 v61; // [rsp+48h] [rbp-C0h]
  int v62; // [rsp+50h] [rbp-B8h] BYREF
  char v63; // [rsp+54h] [rbp-B4h]
  __int64 v64; // [rsp+58h] [rbp-B0h]
  _QWORD v65[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v66[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v67; // [rsp+80h] [rbp-88h] BYREF
  __int64 v68; // [rsp+88h] [rbp-80h]
  __int64 v69; // [rsp+90h] [rbp-78h] BYREF
  __int64 v70; // [rsp+98h] [rbp-70h]
  __int64 v71; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-60h]
  __int64 v73; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-50h]
  unsigned int v75; // [rsp+C0h] [rbp-48h]
  char v76; // [rsp+C4h] [rbp-44h]

  v4 = *(_BYTE *)(a1 + 68);
  if ( !v4 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    sub_17F6290(&v67, v5);
    sub_7542A0((__int64)v65, (__int64)&v67, 1u);
    v6 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v67);
    sub_182CBA0(v6, &v69);
    v60 &= 0xFCu;
    v63 &= 0xFCu;
    v59 = 0;
    v61 = 0;
    v62 = 1;
    v64 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v59, &qword_1C7F2A0);
    v67 = 0;
    v7 = qword_1C7F2C0;
    v68 = 0;
    v69 = 1;
    v70 = 0;
    if ( (v60 & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v67, &v59);
      if ( (v63 & 1) == 0 )
        goto LABEL_4;
    }
    else
    {
      LODWORD(v67) = v59;
      if ( (v63 & 1) == 0 )
      {
LABEL_4:
        BYTE4(v69) &= ~1u;
        LODWORD(v69) = v62;
LABEL_5:
        v71 = 0;
        v8 = qword_1C7F2C0;
        v72 = 0;
        v73 = 1;
        v74 = 0;
        if ( (v65[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v71, v65);
        else
          LODWORD(v71) = v65[0];
        if ( (v66[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v8, &v73, v66);
          v10 = BYTE4(v73);
          v9 = v73;
          v4 = BYTE4(v73) & 1;
        }
        else
        {
          v9 = v66[0];
          v10 = BYTE4(v73);
        }
        v11 = *(_DWORD *)a2;
        v75 = v5;
        v76 = 1;
        *(_DWORD *)a2 = v67;
        LODWORD(v67) = v11;
        v12 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v68;
        v13 = *(_BYTE *)(a2 + 4);
        v68 = v12;
        v14 = v13 & 0xFD;
        v15 = v13 & 0xFD | BYTE4(v67) & 2;
        v16 = BYTE4(v67) & 0xFC | v13 & 2;
        *(_BYTE *)(a2 + 4) = v15 & 0xFE | BYTE4(v67) & 1;
        BYTE4(v67) = v14 & 1 | v16;
        LODWORD(v12) = *(_DWORD *)(a2 + 16);
        *(_DWORD *)(a2 + 16) = v69;
        LODWORD(v69) = v12;
        v17 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 24) = v70;
        v18 = *(_BYTE *)(a2 + 20);
        v70 = v17;
        v19 = v18 & 0xFD;
        v20 = v18 & 0xFD | BYTE4(v69) & 2;
        v21 = BYTE4(v69) & 0xFC | v18 & 2;
        *(_BYTE *)(a2 + 20) = v20 & 0xFE | BYTE4(v69) & 1;
        BYTE4(v69) = v19 & 1 | v21;
        LODWORD(v17) = *(_DWORD *)(a2 + 32);
        *(_DWORD *)(a2 + 32) = v71;
        LODWORD(v71) = v17;
        v22 = *(_QWORD *)(a2 + 40);
        *(_QWORD *)(a2 + 40) = v72;
        v23 = *(_BYTE *)(a2 + 36);
        v72 = v22;
        LOBYTE(v22) = BYTE4(v71);
        *(_DWORD *)(a2 + 64) = v5;
        v24 = v22;
        LOBYTE(v22) = v22 & 0xFD;
        *(_BYTE *)(a2 + 68) = 1;
        *(_BYTE *)(a2 + 36) = v23 & 0xFC | v24 & 2 | v22 & 1;
        BYTE4(v71) = v23 & 1 | v22 & 0xFE | v23 & 2;
        LODWORD(v22) = *(_DWORD *)(a2 + 48);
        *(_DWORD *)(a2 + 48) = v9;
        LODWORD(v73) = v22;
        v25 = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(a2 + 56) = v74;
        v74 = v25;
        v26 = v10 & 0xFC;
        v27 = v4 & 3 | v10 & 2;
        v28 = qword_1C7F2C0;
        v29 = *(_BYTE *)(a2 + 52);
        v30 = qword_1C7F2C0;
        BYTE4(v73) = v26 | v29 & 3;
        *(_BYTE *)(a2 + 52) = v29 & 0xFC | v27;
        sub_182CBA0(v30, &v71);
        sub_182CBA0(v28, &v73);
        v31 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v67);
        sub_182CBA0(v31, &v69);
        v32 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v59);
        sub_182CBA0(v32, &v62);
        v33 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v65);
        sub_182CBA0(v33, v66);
        return 1;
      }
    }
    sub_182C690(v7, &v69, &v62);
    goto LABEL_5;
  }
  v35 = sub_755190(a1);
  result = 0;
  if ( !v35 )
  {
    if ( (unsigned __int8)sub_753DF0(a1, 0) )
    {
      sub_754510((__int64)&v67, *(unsigned int *)(a1 + 64));
      v44 = qword_1C7F2C0;
      if ( (v67 & 0x100000000LL) != 0 || (*(_BYTE *)(a1 + 36) & 1) != 0 )
        v45 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v67, a1 + 32) == 0;
      else
        v45 = (_DWORD)v67 == *(_DWORD *)(a1 + 32);
      if ( v45
        && ((v69 & 0x100000000LL) != 0 || (*(_BYTE *)(a1 + 52) & 1) != 0
          ? (unsigned int)sub_182C7B0(v44, &v69, a1 + 48) == 0
          : (_DWORD)v69 == *(_DWORD *)(a1 + 48)) )
      {
        sub_25A130((char *)&v67);
        v51 = *(_DWORD *)(a1 + 64);
        sub_754510((__int64)v65, v51);
        v60 &= 0xFCu;
        v63 &= 0xFCu;
        v59 = 0;
        v61 = 0;
        v62 = 1;
        v64 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v59, &qword_1C7F2A0);
        v67 = 0;
        v68 = 0;
        v69 = 1;
        v70 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v67, &v59);
        v71 = 0;
        v72 = 0;
        v73 = 1;
        v74 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v71, (int *)v65);
        v75 = v51;
        v76 = 0;
        sub_751900((int *)a2, (int *)&v67);
        sub_25A130((char *)&v71);
        sub_25A130((char *)&v67);
        sub_25A130((char *)&v59);
        sub_25A130((char *)v65);
        return 1;
      }
      sub_25A130((char *)&v67);
    }
    v36 = sub_753DF0(a1, 0);
    v37 = *(_DWORD *)(a1 + 64);
    if ( v36 )
    {
      sub_754510((__int64)&v59, v37);
      v65[0] = 1;
      v65[1] = 0;
      v66[0] = 1;
      v66[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v66);
      BYTE4(v66[0]) &= ~1u;
      v38 = qword_1C7F2C0;
      LODWORD(v66[0]) = 1;
      v67 = 0;
      v68 = 0;
      v69 = 1;
      v70 = 0;
      if ( (*(_BYTE *)(a1 + 36) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v67, a1 + 32);
      else
        LODWORD(v67) = *(_DWORD *)(a1 + 32);
      if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
      {
        sub_182C690(v38, &v69, a1 + 48);
      }
      else
      {
        v39 = *(_DWORD *)(a1 + 48);
        BYTE4(v69) &= ~1u;
        LODWORD(v69) = v39;
      }
      v40 = qword_1C7F2C0;
      if ( LODWORD(v65[0]) )
      {
        if ( (_DWORD)v67 )
        {
          if ( (v69 & 0x100000000LL) != 0 || (_DWORD)v69 != 1 || (v66[0] & 0x100000000LL) != 0 || LODWORD(v66[0]) != 1 )
          {
            sub_1851D20(qword_1C7F2C0, &v67, v65, &v67);
          }
          else
          {
            sub_1831A80(qword_1C7F2C0, &v67, v65, &v67);
            sub_182CBA0(v40, &v69);
            BYTE4(v69) &= ~1u;
            LODWORD(v69) = 1;
          }
        }
        else
        {
          if ( (v65[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v67, v65);
          }
          else
          {
            LODWORD(v67) = v65[0];
            BYTE4(v67) &= ~1u;
          }
          if ( (v66[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v40, &v69, v66);
          }
          else
          {
            BYTE4(v69) &= ~1u;
            LODWORD(v69) = v66[0];
          }
        }
      }
      else
      {
        if ( (v67 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v67, &v67);
        else
          BYTE4(v67) &= ~1u;
        if ( (v69 & 0x100000000LL) != 0 )
          sub_182C690(v40, &v69, &v69);
        else
          BYTE4(v69) &= ~1u;
      }
      v54 &= 0xFCu;
      v41 = qword_1C7F2C0;
      v57 &= 0xFCu;
      v53 = 0;
      v55 = 0;
      v56 = 1;
      v58 = 0;
      if ( (v67 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v53, &v67);
      else
        v53 = v67;
      if ( (v69 & 0x100000000LL) != 0 )
      {
        sub_182C690(v41, &v56, &v69);
      }
      else
      {
        v57 &= ~1u;
        v56 = v69;
      }
      v42 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v67);
      sub_182CBA0(v42, &v69);
      v43 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v65);
      sub_182CBA0(v43, v66);
      v67 = 0;
      v68 = 0;
      v69 = 1;
      v70 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v67, &v53);
      v71 = 0;
      v72 = 0;
      v73 = 1;
      v74 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v71, &v59);
      v75 = v37;
      v76 = 0;
      sub_751900((int *)a2, (int *)&v67);
      sub_25A130((char *)&v71);
      sub_25A130((char *)&v67);
      sub_25A130((char *)&v53);
      sub_25A130((char *)&v59);
      return 1;
    }
    sub_754510((__int64)&v67, v37);
    v46 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v67, a1 + 32);
    sub_25A130((char *)&v67);
    v52 = *(_DWORD *)(a1 + 64);
    if ( v46 )
    {
      sub_7542A0((__int64)v65, a1, 1u);
      v60 &= 0xFCu;
      v63 &= 0xFCu;
      v59 = 0;
      v61 = 0;
      v62 = 1;
      v64 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v59, &qword_1C7F2A0);
      v67 = 0;
      v49 = qword_1C7F2C0;
      v68 = 0;
      v69 = 1;
      v70 = 0;
      if ( (v60 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v67, &v59);
      else
        LODWORD(v67) = v59;
      if ( (v63 & 1) != 0 )
      {
        sub_182C690(v49, &v69, &v62);
      }
      else
      {
        BYTE4(v69) &= ~1u;
        LODWORD(v69) = v62;
      }
      v71 = 0;
      v48 = qword_1C7F2C0;
      v72 = 0;
      v73 = 1;
      v74 = 0;
      if ( (v65[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v71, v65);
      else
        LODWORD(v71) = v65[0];
      if ( (v66[0] & 0x100000000LL) == 0 )
        goto LABEL_46;
    }
    else
    {
      sub_7542A0((__int64)v65, a1, 1u);
      sub_753F00((__int64)&v59, a1 + 32, 1u);
      v67 = 0;
      v47 = qword_1C7F2C0;
      v68 = 0;
      v69 = 1;
      v70 = 0;
      if ( (v60 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v67, &v59);
      else
        LODWORD(v67) = v59;
      if ( (v63 & 1) != 0 )
      {
        sub_182C690(v47, &v69, &v62);
      }
      else
      {
        BYTE4(v69) &= ~1u;
        LODWORD(v69) = v62;
      }
      v71 = 0;
      v48 = qword_1C7F2C0;
      v72 = 0;
      v73 = 1;
      v74 = 0;
      if ( (v65[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v71, v65);
      else
        LODWORD(v71) = v65[0];
      if ( (v66[0] & 0x100000000LL) == 0 )
      {
LABEL_46:
        BYTE4(v73) &= ~1u;
        LODWORD(v73) = v66[0];
LABEL_47:
        v76 = 0;
        v75 = v52;
        sub_751900((int *)a2, (int *)&v67);
        sub_25A130((char *)&v71);
        sub_25A130((char *)&v67);
        sub_25A130((char *)&v59);
        sub_25A130((char *)v65);
        return 1;
      }
    }
    sub_182C690(v48, &v73, v66);
    goto LABEL_47;
  }
  return result;
}

