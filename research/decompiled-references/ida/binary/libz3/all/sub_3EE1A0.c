__int64 __fastcall sub_3EE1A0(__int64 *a1, __int64 a2, char a3, double a4)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned int v11; // r15d
  int *v12; // r14
  unsigned int v14; // r15d
  int *v15; // r14
  __int64 v16; // rax
  void *v17; // r12
  void *v18; // rdi
  void *v19; // r12
  void *v20; // r12
  int v21; // edx
  __int64 v22; // rdx
  char v23; // si
  char v24; // al
  int v25; // eax
  __int64 v26; // rax
  char v27; // si
  void *v28; // rdi
  int *v29; // rsi
  bool v30; // al
  __int64 v31; // rax
  void *v32; // rdi
  int v33; // edx
  __int64 v34; // rdx
  char v35; // si
  char v36; // al
  int v37; // eax
  __int64 v38; // rax
  char v39; // si
  void *v40; // rdi
  int *v41; // rsi
  __int64 v42; // r12
  __int64 v43; // r12
  __int64 v44; // r12
  __int64 v45; // r12
  bool v46; // al
  __int64 v47; // [rsp+30h] [rbp-168h]
  _QWORD *v48; // [rsp+38h] [rbp-160h]
  __int64 v50; // [rsp+50h] [rbp-148h]
  __int64 v51; // [rsp+50h] [rbp-148h]
  unsigned int v52; // [rsp+60h] [rbp-138h]
  char v53; // [rsp+65h] [rbp-133h]
  char v54; // [rsp+66h] [rbp-132h]
  char v55; // [rsp+66h] [rbp-132h]
  char v56; // [rsp+67h] [rbp-131h]
  _QWORD v57[2]; // [rsp+70h] [rbp-128h] BYREF
  _QWORD v58[2]; // [rsp+80h] [rbp-118h] BYREF
  _QWORD v59[2]; // [rsp+90h] [rbp-108h] BYREF
  _QWORD v60[2]; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-E0h]
  __int64 v63; // [rsp+C0h] [rbp-D8h]
  __int64 v64; // [rsp+C8h] [rbp-D0h]
  _QWORD v65[4]; // [rsp+D0h] [rbp-C8h] BYREF
  _QWORD v66[2]; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+100h] [rbp-98h]
  __int64 v68; // [rsp+108h] [rbp-90h]
  void *v69; // [rsp+110h] [rbp-88h] BYREF
  __int64 v70; // [rsp+118h] [rbp-80h]
  __int64 v71; // [rsp+120h] [rbp-78h] BYREF
  __int64 v72; // [rsp+128h] [rbp-70h]
  __int64 v73; // [rsp+130h] [rbp-68h] BYREF
  __int64 v74; // [rsp+138h] [rbp-60h]
  __int64 v75; // [rsp+140h] [rbp-58h] BYREF
  __int64 v76; // [rsp+148h] [rbp-50h]

  v53 = a3;
  v57[0] = 0;
  v57[1] = 0;
  v58[0] = 1;
  v58[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v58);
  v6 = *a1;
  v59[0] = 0;
  v60[0] = 1;
  v47 = v6;
  v7 = (__int64 *)a1[13];
  v61 = 0;
  v63 = 1;
  v65[0] = 0;
  v65[2] = 1;
  v66[0] = 0;
  v67 = 1;
  v8 = *v7;
  BYTE4(v58[0]) &= ~1u;
  LODWORD(v58[0]) = 1;
  v59[1] = 0;
  v60[1] = 0;
  v62 = 0;
  v64 = 0;
  v65[1] = 0;
  v65[3] = 0;
  v66[1] = 0;
  v68 = 0;
  sub_1374250(&v73, a2, v8);
  v9 = v73;
  v48 = a1 + 1;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 1, v73, v66, &v69) )
  {
    sub_1872CE0("");
    sub_1873130(114, 774);
  }
  v10 = a1[8];
  if ( v10 )
  {
    if ( !a3 )
    {
      v54 = 0;
      v11 = 0;
      v52 = -1;
      while ( 1 )
      {
        if ( v11 >= *(_DWORD *)(v10 - 4) )
          goto LABEL_9;
        if ( *(_BYTE *)(a1[12] + v11) )
          goto LABEL_8;
        v12 = (int *)(a1[9] + 32LL * v11);
        if ( *v12 > 0 )
          goto LABEL_8;
        sub_1374250(&v73, a2, *(_QWORD *)(v10 + 8LL * v11));
        v16 = v73;
        v73 = v9;
        v50 = v16;
        sub_3E5D20(v9, v74);
        if ( !(unsigned __int8)sub_1666AE0(v48, v50, v59, &v73) )
        {
          sub_1872CE0("");
          sub_1873130(114, 780);
        }
        sub_3EC020((__int64)&v73, (__int64)v12);
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v59, (__int64)&v73, (__int64)v59);
        sub_25A130((char *)&v73);
        v17 = qword_1C7F2C0;
        v73 = 0;
        v74 = 0;
        v75 = 1;
        v76 = 0;
        if ( (v59[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v73, v59);
        else
          LODWORD(v73) = v59[0];
        if ( (v60[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v17, &v75, v60);
        }
        else
        {
          BYTE4(v75) &= ~1u;
          LODWORD(v75) = v60[0];
        }
        v18 = qword_1C7F2C0;
        if ( (v75 & 0x100000000LL) != 0 || (_DWORD)v75 != 1 || (v67 & 0x100000000LL) != 0 || (_DWORD)v67 != 1 )
        {
          sub_1852000(qword_1C7F2C0, &v73, v66);
        }
        else
        {
          sub_1832A70(qword_1C7F2C0, &v73, v66);
          sub_182CBA0(v18, &v75);
          BYTE4(v75) &= ~1u;
          LODWORD(v75) = 1;
        }
        BYTE4(v69) &= 0xFCu;
        v19 = qword_1C7F2C0;
        BYTE4(v71) &= 0xFCu;
        LODWORD(v69) = 0;
        v70 = 0;
        LODWORD(v71) = 1;
        v72 = 0;
        if ( (v73 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v69, &v73);
        else
          LODWORD(v69) = v73;
        if ( (v75 & 0x100000000LL) != 0 )
        {
          sub_182C690(v19, &v71, &v75);
        }
        else
        {
          BYTE4(v71) &= ~1u;
          LODWORD(v71) = v75;
        }
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v73);
        sub_182CBA0(v20, &v75);
        v21 = (int)v69;
        LODWORD(v69) = v61;
        LODWORD(v61) = v21;
        v22 = v70;
        v70 = v62;
        v62 = v22;
        v23 = BYTE4(v61) & 1;
        v24 = BYTE4(v69) & 0xFC | BYTE4(v61) & 2;
        BYTE4(v61) = BYTE4(v69) & 1 | BYTE4(v61) & 0xFC | BYTE4(v69) & 2;
        BYTE4(v69) = v23 | v24;
        v25 = v63;
        LODWORD(v63) = v71;
        LODWORD(v71) = v25;
        v26 = v64;
        v64 = v72;
        v72 = v26;
        v27 = BYTE4(v63) & 1;
        LOBYTE(v26) = BYTE4(v71) & 0xFC | BYTE4(v63) & 2;
        BYTE4(v63) = BYTE4(v71) & 1 | BYTE4(v63) & 0xFC | BYTE4(v71) & 2;
        BYTE4(v71) = v27 | v26;
        sub_25A130((char *)&v69);
        if ( !*(_BYTE *)(a1[11] + v11) )
          goto LABEL_31;
        v28 = qword_1C7F2C0;
        v29 = (int *)&v61;
        if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v61, (__int64)&qword_1C7F2A0) )
          break;
LABEL_32:
        if ( (unsigned int)sub_180B130(v28) > 1 )
        {
          if ( (unsigned __int8)sub_186A530(a4) )
          {
            sub_186A4C0(a4);
            v45 = sub_180B150(v28, v29);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(&v73, *(_QWORD *)(a1[8] + 8LL * v11), *a1, 0, 0, 0);
            sub_160E8B0(v45, &v73);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1850940(&v69, qword_1C7F2C0, v59);
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v69 != &v71 )
              operator delete(v69, v71 + 1);
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v53 && !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v57, (__int64)v59) )
              sub_3ED680((__int64)qword_1C7F2C0, (__int64)v59, (__int64)v57);
            std::ostream::_M_insert<bool>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(&v75);
            sub_186A500(&v75, "\n");
          }
          else
          {
            v42 = sub_180B150(v28, v29);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(&v73, *(_QWORD *)(a1[8] + 8LL * v11), *a1, 0, 0, 0);
            sub_160E8B0(v42, &v73);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1850940(&v69, qword_1C7F2C0, v59);
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v69 != &v71 )
              operator delete(v69, v71 + 1);
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v53 && !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v57, (__int64)v59) )
              sub_3ED680((__int64)qword_1C7F2C0, (__int64)v59, (__int64)v57);
            std::ostream::_M_insert<bool>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(&v75);
          }
        }
        if ( !v53 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)v57, (__int64)v59) )
          goto LABEL_39;
        v30 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v59, (__int64)v57);
        if ( !v30 )
          goto LABEL_55;
        if ( v54 )
        {
          v9 = v50;
          v53 = v54;
          v10 = a1[8];
          goto LABEL_8;
        }
        v54 = *(_BYTE *)(a1[11] + v11);
        if ( v54 )
        {
LABEL_39:
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v57, (int *)v59);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v65, v12);
          v9 = v50;
          v52 = v11;
          v53 = 1;
          v54 = *(_BYTE *)(a1[11] + v11);
          v10 = a1[8];
        }
        else
        {
          v53 = v30;
          v9 = v50;
          v10 = a1[8];
        }
LABEL_8:
        ++v11;
        if ( !v10 )
          goto LABEL_9;
      }
      if ( *(_BYTE *)(a1[11] + v11) )
      {
LABEL_55:
        v9 = v50;
        v10 = a1[8];
        goto LABEL_8;
      }
LABEL_31:
      v28 = qword_1C7F2C0;
      v29 = &qword_1C7F2A0;
      if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&qword_1C7F2A0, (__int64)&v61) )
        goto LABEL_55;
      goto LABEL_32;
    }
    v56 = 0;
    v14 = 0;
    v55 = 0;
    v52 = -1;
    while ( 1 )
    {
      if ( v14 >= *(_DWORD *)(v10 - 4) )
        goto LABEL_9;
      if ( *(_BYTE *)(a1[12] + v14) )
        goto LABEL_14;
      v15 = (int *)(a1[9] + 32LL * v14);
      if ( *v15 <= 0 )
        goto LABEL_14;
      sub_1374250(&v73, a2, *(_QWORD *)(v10 + 8LL * v14));
      v31 = v73;
      v73 = v9;
      v51 = v31;
      sub_3E5D20(v9, v74);
      if ( !(unsigned __int8)sub_1666AE0(v48, v51, v59, &v73) )
      {
        sub_1872CE0("");
        sub_1873130(114, 780);
      }
      sub_3EC020((__int64)&v73, (__int64)v15);
      sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v59, (__int64)&v73, (__int64)v59);
      sub_25A130((char *)&v73);
      v73 = 0;
      v74 = 0;
      v75 = 1;
      v76 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v73, (int *)v59);
      v32 = qword_1C7F2C0;
      if ( LODWORD(v66[0]) )
      {
        if ( (_DWORD)v73 )
        {
          if ( (v75 & 0x100000000LL) != 0 || (_DWORD)v75 != 1 || (v67 & 0x100000000LL) != 0 || (_DWORD)v67 != 1 )
          {
            sub_1851D20(qword_1C7F2C0, &v73, v66, &v73);
          }
          else
          {
            sub_1831A80(qword_1C7F2C0, &v73, v66, &v73);
            sub_182CBA0(v32, &v75);
            BYTE4(v75) &= ~1u;
            LODWORD(v75) = 1;
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v73, (int *)v66);
        }
      }
      else
      {
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v73, (int *)&v73);
      }
      LODWORD(v69) = 0;
      BYTE4(v69) &= 0xFCu;
      BYTE4(v71) &= 0xFCu;
      v70 = 0;
      LODWORD(v71) = 1;
      v72 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v69, (int *)&v73);
      sub_25A130((char *)&v73);
      v33 = (int)v69;
      LODWORD(v69) = v61;
      LODWORD(v61) = v33;
      v34 = v70;
      v70 = v62;
      v62 = v34;
      v35 = BYTE4(v61) & 1;
      v36 = BYTE4(v69) & 0xFC | BYTE4(v61) & 2;
      BYTE4(v61) = BYTE4(v69) & 1 | BYTE4(v61) & 0xFC | BYTE4(v69) & 2;
      BYTE4(v69) = v35 | v36;
      v37 = v63;
      LODWORD(v63) = v71;
      LODWORD(v71) = v37;
      v38 = v64;
      v64 = v72;
      v72 = v38;
      v39 = BYTE4(v63) & 1;
      LOBYTE(v38) = BYTE4(v71) & 0xFC | BYTE4(v63) & 2;
      BYTE4(v63) = BYTE4(v71) & 1 | BYTE4(v63) & 0xFC | BYTE4(v71) & 2;
      BYTE4(v71) = v39 | v38;
      sub_25A130((char *)&v69);
      if ( !*(_BYTE *)(a1[11] + v14) )
        goto LABEL_48;
      v40 = qword_1C7F2C0;
      v41 = (int *)&v61;
      if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v61, (__int64)&qword_1C7F2A0) )
        break;
LABEL_49:
      if ( (unsigned int)sub_180B130(v40) > 1 )
      {
        if ( (unsigned __int8)sub_186A530(a4) )
        {
          sub_186A4C0(a4);
          v43 = sub_180B150(v40, v41);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(&v73, *(_QWORD *)(a1[8] + 8LL * v14), *a1, 0, 0, 0);
          sub_160E8B0(v43, &v73);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1850940(&v69, qword_1C7F2C0, v59);
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v69 != &v71 )
            operator delete(v69, v71 + 1);
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v55 && !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v57, (__int64)v59) )
            sub_3ED680((__int64)qword_1C7F2C0, (__int64)v59, (__int64)v57);
          std::ostream::_M_insert<bool>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(&v75);
          sub_186A500(&v75, "\n");
        }
        else
        {
          v44 = sub_180B150(v40, v41);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(&v73, *(_QWORD *)(a1[8] + 8LL * v14), *a1, 0, 0, 0);
          sub_160E8B0(v44, &v73);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1850940(&v69, qword_1C7F2C0, v59);
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v69 != &v71 )
            operator delete(v69, v71 + 1);
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v55 && !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v57, (__int64)v59) )
            sub_3ED680((__int64)qword_1C7F2C0, (__int64)v59, (__int64)v57);
          std::ostream::_M_insert<bool>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(&v75);
        }
      }
      if ( v55 && !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v57, (__int64)v59) )
      {
        v46 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v59, (__int64)v57);
        if ( !v46 )
        {
LABEL_68:
          v9 = v51;
          v10 = a1[8];
          goto LABEL_14;
        }
        if ( v56 )
        {
          v9 = v51;
          v55 = v56;
          v10 = a1[8];
          goto LABEL_14;
        }
        v56 = *(_BYTE *)(a1[11] + v14);
        if ( !v56 )
        {
          v55 = v46;
          v9 = v51;
          v10 = a1[8];
          goto LABEL_14;
        }
      }
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v57, (int *)v59);
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v65, v15);
      v9 = v51;
      v52 = v14;
      v56 = *(_BYTE *)(a1[11] + v14);
      v55 = v53;
      v10 = a1[8];
LABEL_14:
      ++v14;
      if ( !v10 )
        goto LABEL_9;
    }
    if ( *(_BYTE *)(a1[11] + v14) )
      goto LABEL_68;
LABEL_48:
    v40 = qword_1C7F2C0;
    v41 = &qword_1C7F2A0;
    if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&qword_1C7F2A0, (__int64)&v61) )
      goto LABEL_68;
    goto LABEL_49;
  }
  v52 = -1;
LABEL_9:
  sub_25A130((char *)v66);
  sub_3E5D20(v9, v47);
  sub_25A130((char *)v65);
  sub_25A130((char *)&v61);
  sub_25A130((char *)v59);
  sub_25A130((char *)v57);
  return v52;
}

