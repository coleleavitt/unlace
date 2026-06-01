void __fastcall sub_357640(__int64 a1, char *a2, int *a3)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rdx
  __int64 *v6; // r15
  __int64 v7; // rax
  __int64 *v8; // r13
  __int64 v9; // rax
  void *v10; // r13
  __int64 *v11; // rbp
  __int64 *v12; // r13
  __int64 *v13; // r15
  __int64 *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  int v20; // eax
  _QWORD *v21; // rdi
  __int64 (*v22)(void); // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v26; // rbp
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rcx
  int v30; // edx
  __int64 v31; // rdi
  __int64 *v32; // rdx
  __int64 *v33; // r15
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // r13
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // r14
  __int64 v40; // r15
  void *v41; // rdi
  int *v42; // r14
  unsigned int v43; // eax
  __int64 v44; // rbp
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // rcx
  int v48; // edx
  void *v49; // rdi
  int v50; // eax
  void *v51; // rdi
  __int64 v52; // rax
  unsigned int v53; // edx
  __int64 *v54; // rax
  __int64 *v55; // r13
  __int64 v56; // r9
  __int64 v57; // rax
  _QWORD *v58; // rcx
  int v59; // edi
  unsigned int v60; // edx
  _QWORD *v61; // rsi
  __int64 v62; // rdx
  _QWORD *v63; // r8
  _QWORD *i; // rax
  _QWORD *v65; // r14
  void *v66; // rdi
  bool v67; // al
  void *v68; // r14
  bool v69; // al
  unsigned int v71; // eax
  int v72; // [rsp+0h] [rbp-128h]
  __int64 **v73; // [rsp+8h] [rbp-120h]
  void *v74; // [rsp+8h] [rbp-120h]
  int v75; // [rsp+10h] [rbp-118h]
  __int64 *v76; // [rsp+10h] [rbp-118h]
  __int64 *v77; // [rsp+10h] [rbp-118h]
  int *v78; // [rsp+18h] [rbp-110h]
  __int64 v79; // [rsp+20h] [rbp-108h]
  int v80; // [rsp+28h] [rbp-100h]
  int v81; // [rsp+30h] [rbp-F8h]
  int v82; // [rsp+38h] [rbp-F0h]
  int v83; // [rsp+40h] [rbp-E8h]
  __int64 *v84; // [rsp+40h] [rbp-E8h]
  int v85; // [rsp+48h] [rbp-E0h]
  __int64 v86; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v87; // [rsp+58h] [rbp-D0h] BYREF
  int v88[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v89; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v90; // [rsp+70h] [rbp-B8h]
  __int64 v91; // [rsp+78h] [rbp-B0h]
  __int64 v92; // [rsp+80h] [rbp-A8h] BYREF
  __int64 *v93; // [rsp+88h] [rbp-A0h]
  __int64 v94; // [rsp+90h] [rbp-98h] BYREF
  __int64 v95; // [rsp+98h] [rbp-90h]
  __int64 v96; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v97; // [rsp+A8h] [rbp-80h]
  __int64 v98; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v99; // [rsp+B8h] [rbp-70h]
  __int64 v100; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v101; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v102; // [rsp+D0h] [rbp-58h] BYREF
  _QWORD v103[10]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = a1;
  v73 = (__int64 **)a2;
  v78 = a3;
  if ( (unsigned int)sub_180B130(a1) > 2 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<bool>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      a2 = ")\n";
      a1 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(a1, ")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<bool>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      a2 = ")\n";
      a1 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v79 = *(_QWORD *)(v3 + 8);
  if ( (unsigned int)sub_180B130(a1) <= 9 )
  {
LABEL_3:
    v4 = *(_DWORD *)(v3 + 280);
    if ( v4 != 3 )
      goto LABEL_4;
LABEL_45:
    *(_QWORD *)v88 = 0;
    v89 = 0;
    v90 = 1;
    v91 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v88, v78);
    v31 = *(_QWORD *)(v3 + 8);
    v87 = 0;
    v32 = *v73;
    v86 = v31;
    if ( v32 )
    {
      v76 = &v32[*((unsigned int *)v32 - 1)];
      if ( v32 != v76 )
      {
        v33 = v32;
        while ( 1 )
        {
          v34 = sub_15EC2C0(v31, *v33);
          v100 = v34;
          if ( v34 )
            ++*(_DWORD *)(v34 + 8);
          sub_349180(&v87, &v100);
          if ( v76 == ++v33 )
            break;
          v31 = *(_QWORD *)(v3 + 8);
        }
      }
    }
    sub_356580(v3, v73);
    if ( *v73 )
    {
      v35 = *((_DWORD *)*v73 - 1);
      if ( v35 > 1 )
      {
        v92 = 0;
        v49 = qword_1C7F2C0;
        v93 = nullptr;
        v94 = 1;
        v95 = 0;
        v50 = v35 - 2;
        if ( v50 < 0 )
          sub_1830C40(qword_1C7F2C0, &v92, (unsigned int)v50);
        else
          LODWORD(v92) = v50;
        sub_182CBA0(v49, &v94);
        BYTE4(v94) &= ~1u;
        LODWORD(v94) = 1;
        v100 = 0;
        v101 = 0;
        v102 = 1;
        v103[0] = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v100, (int *)&v92);
        v51 = qword_1C7F2C0;
        if ( (v102 & 0x100000000LL) != 0 || (_DWORD)v102 != 1 || (v90 & 0x100000000LL) != 0 || (_DWORD)v90 != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, &v100, v88);
        }
        else
        {
          sub_1831650(qword_1C7F2C0, &v100, v88);
          sub_182CBA0(v51, &v102);
          BYTE4(v102) &= ~1u;
          LODWORD(v102) = 1;
        }
        BYTE4(v96) &= 0xFCu;
        BYTE4(v98) &= 0xFCu;
        LODWORD(v96) = 0;
        v97 = 0;
        LODWORD(v98) = 1;
        v99 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v96, (int *)&v100);
        sub_25A130((char *)&v100);
        sub_2FC4A0((__int64)qword_1C7F2C0, v3 + 640, (__int64)&v96, v3 + 640);
        sub_25A130((char *)&v96);
        sub_25A130((char *)&v92);
        v52 = sub_355880(v3, (__int64)&v86, 1u, v88);
        sub_34FB60(v3, v52, (__int64)v88);
      }
    }
    sub_2334C0(&v86);
    sub_25A130((char *)v88);
    goto LABEL_20;
  }
  if ( !(unsigned __int8)sub_186A530() )
  {
    v44 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v47 = *v73;
    if ( *v73 )
      v48 = *((_DWORD *)v47 - 1);
    else
      v48 = 0;
    sub_34CB70(
      v3,
      v44,
      v48,
      v47,
      v45,
      v46,
      v72,
      (int)v73,
      v75,
      (int)v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v85,
      v86,
      v87,
      v88[0],
      v89,
      v90,
      v91,
      v92,
      (char)v93);
    goto LABEL_3;
  }
  sub_186A4C0();
  v26 = sub_180B150(a1, a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  v29 = *v73;
  if ( *v73 )
    v30 = *((_DWORD *)v29 - 1);
  else
    v30 = 0;
  sub_34CB70(
    v3,
    v26,
    v30,
    v29,
    v27,
    v28,
    v72,
    (int)v73,
    v75,
    (int)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v85,
    v86,
    v87,
    v88[0],
    v89,
    v90,
    v91,
    v92,
    (char)v93);
  sub_186A500(v3, v26);
  v4 = *(_DWORD *)(v3 + 280);
  if ( v4 == 3 )
    goto LABEL_45;
LABEL_4:
  if ( v4 == 4 )
  {
    v100 = 0;
    v101 = 0;
    v102 = 1;
    v103[0] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v100, v78);
    sub_356EC0((_QWORD *)v3, v73, (__int64)&v100);
    sub_25A130((char *)&v100);
  }
  else
  {
    if ( v4 == 2 )
    {
      v96 = 0;
      v97 = 0;
      v98 = 1;
      v99 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v96, v78);
      v5 = *(_QWORD *)(v3 + 8);
      v6 = *v73;
      if ( *v73 )
      {
        v7 = *((unsigned int *)v6 - 1);
        *(_QWORD *)v88 = *(_QWORD *)(v3 + 8);
        v89 = 0;
        if ( (_DWORD)v7 )
        {
          v8 = &v6[v7];
          do
          {
            v9 = *v6;
            v100 = v9;
            if ( v9 )
              ++*(_DWORD *)(v9 + 8);
            sub_349180(&v89, &v100);
            ++v6;
          }
          while ( v8 != v6 );
          v5 = *(_QWORD *)(v3 + 8);
        }
      }
      else
      {
        *(_QWORD *)v88 = *(_QWORD *)(v3 + 8);
        v89 = 0;
      }
      v92 = v5;
      v100 = 0;
      v101 = 0;
      v102 = 1;
      v103[0] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v100, (int *)&v96);
      v93 = nullptr;
      sub_3493D0((_QWORD *)v3, v73, (__int64)&v92);
      v10 = qword_1C7F2C0;
      v11 = v93;
      sub_182CBA0(qword_1C7F2C0, &v100);
      sub_182CBA0(v10, &v102);
      if ( v11 )
      {
        v12 = &v11[*((unsigned int *)v11 - 1)];
        if ( v12 != v11 )
        {
          v13 = v11;
          do
            sub_34FB60(v3, *v13++, (__int64)&v96);
          while ( v12 != v13 );
        }
      }
      sub_2334C0(&v92);
      sub_2334C0((__int64 *)v88);
      sub_25A130((char *)&v96);
      v14 = *v73;
      if ( !*v73 )
        goto LABEL_18;
      goto LABEL_21;
    }
    sub_3503A0((_QWORD *)v3, (unsigned __int64 *)v73, (__int64)v78);
  }
LABEL_20:
  v14 = *v73;
  if ( !*v73 )
  {
LABEL_18:
    v15 = 0;
    goto LABEL_22;
  }
LABEL_21:
  v15 = *((unsigned int *)v14 - 1);
LABEL_22:
  v16 = sub_15EC1C0(*(_QWORD *)(v3 + 8), v15);
  v17 = sub_15EC2C0(*(_QWORD *)(v3 + 8), v16);
  v18 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v19 = sub_2FF8B0(v3);
  sub_E5EBF0(v19, v18);
  if ( !*v73 || *((_DWORD *)*v73 - 1) <= 2u )
  {
    v96 = v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    sub_349180((_QWORD *)(v3 + 208), &v96);
  }
  sub_2FC4A0((__int64)qword_1C7F2C0, v3 + 72, (__int64)v78, v3 + 72);
  if ( *(_DWORD *)(v3 + 280) == 1 )
  {
    v41 = qword_1C7F2C0;
    v42 = (int *)(v3 + 104);
    if ( (*(_BYTE *)(v3 + 124) & 1) != 0
      || *(_DWORD *)(v3 + 120) != 1
      || (*(_BYTE *)(v3 + 92) & 1) != 0
      || *(_DWORD *)(v3 + 88) != 1 )
    {
      LOBYTE(v43) = sub_1848D40(qword_1C7F2C0, v3 + 104, v3 + 72);
      v41 = qword_1C7F2C0;
    }
    else if ( (*(_BYTE *)(v3 + 108) & 1) != 0 || (*(_BYTE *)(v3 + 76) & 1) != 0 )
    {
      v71 = sub_182C7B0(qword_1C7F2C0, v3 + 104, v3 + 72);
      v41 = qword_1C7F2C0;
      v43 = v71 >> 31;
    }
    else
    {
      LOBYTE(v43) = *(_DWORD *)(v3 + 104) < *(_DWORD *)(v3 + 72);
    }
    if ( !(_BYTE)v43 )
      v42 = (int *)(v3 + 72);
    sub_27B950((__int64)v41, v3 + 72, v42);
  }
  if ( *(_QWORD *)(v3 + 320) )
  {
    v20 = *(_DWORD *)(v3 + 528);
    if ( v20 )
      *(_DWORD *)(v3 + 528) = v20 - 1;
  }
  sub_302130(v3, *(const char **)(v3 + 560));
  if ( *(_DWORD *)(v3 + 280) > 2u )
    goto LABEL_38;
  v21 = *(_QWORD **)(v3 + 16);
  v22 = *(__int64 (**)(void))(*v21 + 88LL);
  if ( (char *)v22 == (char *)sub_2A5F70 )
  {
    v23 = v21[64];
    if ( !v23 )
      goto LABEL_38;
    v24 = *(_DWORD *)(v23 - 4);
  }
  else
  {
    v24 = v22();
  }
  if ( v24 != 1
    || !*(_BYTE *)(v3 + 549)
    || (v36 = *(_QWORD *)(v3 + 320)) == 0
    || (v37 = *v73) == nullptr
    || *(_DWORD *)(v3 + 528) >= *((_DWORD *)v37 - 1) )
  {
LABEL_38:
    if ( v18 )
    {
      if ( (*(_DWORD *)(v18 + 8))-- == 1 )
        sub_15D7BC0(v79, v18);
    }
    return;
  }
  v38 = *(_QWORD *)(v3 + 192);
  if ( v38
    && (v39 = *(__int64 **)(v3 + 192), v40 = 0, v77 = (__int64 *)(v38 + 8LL * *(unsigned int *)(v38 - 4)), v77 != v39) )
  {
    do
    {
      v100 = *v39;
      if ( (unsigned __int8)sub_13742D0(v36, v100) )
      {
        *(_QWORD *)v88 = v40;
        sub_349180(v88, &v100);
        v40 = *(_QWORD *)v88;
      }
      ++v39;
    }
    while ( v77 != v39 );
    v37 = *v73;
    if ( v40 )
    {
      v53 = *(_DWORD *)(v40 - 4);
      *(_DWORD *)(v3 + 528) = v53;
      if ( !v37 || v53 >= *((_DWORD *)v37 - 1) )
      {
LABEL_101:
        sub_186B220((void *)(v40 - 8));
        goto LABEL_102;
      }
      goto LABEL_106;
    }
    *(_DWORD *)(v3 + 528) = 0;
    if ( !v37 )
      goto LABEL_102;
  }
  else
  {
    *(_DWORD *)(v3 + 528) = 0;
  }
  if ( !*((_DWORD *)v37 - 1) )
    goto LABEL_102;
  v40 = 0;
LABEL_106:
  v92 = 0;
  v93 = nullptr;
  v94 = 1;
  v95 = 0;
  sub_182CBA0(qword_1C7F2C0, &v94);
  v54 = *(__int64 **)(v3 + 192);
  BYTE4(v94) &= ~1u;
  LODWORD(v94) = 1;
  if ( !v54 || (v84 = &v54[*((unsigned int *)v54 - 1)], v84 == v54) )
  {
LABEL_142:
    *(_QWORD *)v88 = v40;
    sub_351740(v3, (__int64 **)v88);
    sub_25A130((char *)&v92);
    if ( v40 )
      sub_186B220((void *)(v40 - 8));
    goto LABEL_38;
  }
  v55 = v54;
  while ( 1 )
  {
    v56 = *v55;
    v57 = *(unsigned int *)(v3 + 224);
    v101 = 0;
    v103[0] = 1;
    v58 = *(_QWORD **)(v3 + 216);
    v59 = *(_DWORD *)(v56 + 12);
    v60 = v57 - 1;
    v100 = v56;
    v102 = 0;
    v57 *= 40;
    v61 = (_QWORD *)((char *)v58 + v57);
    v103[1] = 0;
    v62 = 40LL * (v59 & v60);
    v63 = &v58[(unsigned __int64)v62 / 8];
    if ( v62 != v57 )
    {
      for ( i = &v58[(unsigned __int64)v62 / 8]; v61 != i; i += 5 )
      {
        v65 = (_QWORD *)*i;
        if ( *i > 1u )
        {
          if ( *((_DWORD *)v65 + 3) == v59 && (_QWORD *)v56 == v65 )
          {
            v65 = i;
            goto LABEL_116;
          }
        }
        else if ( !v65 )
        {
          goto LABEL_116;
        }
      }
    }
    for ( ; v63 != v58; v58 += 5 )
    {
      v65 = (_QWORD *)*v58;
      if ( *v58 > 1u )
      {
        if ( *((_DWORD *)v65 + 3) == v59 && (_QWORD *)v56 == v65 )
        {
          v65 = v58;
          goto LABEL_116;
        }
      }
      else if ( !v65 )
      {
        goto LABEL_116;
      }
    }
    v65 = nullptr;
LABEL_116:
    v74 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v101);
    sub_182CBA0(v74, v103);
    v96 = 0;
    v97 = 0;
    v98 = 1;
    v99 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v96, (int *)v65 + 2);
    v100 = 0;
    v101 = 0;
    v102 = 1;
    v103[0] = 0;
    sub_182CBA0(qword_1C7F2C0, &v102);
    BYTE4(v102) &= ~1u;
    v66 = qword_1C7F2C0;
    LODWORD(v102) = 1;
    if ( (v92 & 0x100000000LL) != 0 || (v100 & 0x100000000LL) != 0 )
      v67 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v92, &v100) == 0;
    else
      v67 = (_DWORD)v92 == (_DWORD)v100;
    if ( !v67 )
      break;
    if ( (v94 & 0x100000000LL) != 0 || (v102 & 0x100000000LL) != 0 )
    {
      if ( (unsigned int)sub_182C7B0(v66, &v94, &v102) )
        break;
    }
    else if ( (_DWORD)v94 != (_DWORD)v102 )
    {
      break;
    }
    sub_25A130((char *)&v100);
LABEL_141:
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v92, (int *)&v96);
    ++v55;
    sub_25A130((char *)&v96);
    if ( v84 == v55 )
      goto LABEL_142;
  }
  sub_25A130((char *)&v100);
  v68 = qword_1C7F2C0;
  if ( (v96 & 0x100000000LL) != 0 || (v92 & 0x100000000LL) != 0 )
    v69 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v96, &v92) == 0;
  else
    v69 = (_DWORD)v96 == (_DWORD)v92;
  if ( v69
    && ((v98 & 0x100000000LL) != 0 || (v94 & 0x100000000LL) != 0
      ? (unsigned int)sub_182C7B0(v68, &v98, &v94) == 0
      : (_DWORD)v98 == (_DWORD)v94) )
  {
    goto LABEL_141;
  }
  sub_25A130((char *)&v96);
  sub_25A130((char *)&v92);
  if ( v40 )
    goto LABEL_101;
LABEL_102:
  sub_349160(v18, v79);
}

