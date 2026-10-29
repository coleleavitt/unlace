__int64 __fastcall sub_7FF800(__int64 a1)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _DWORD *v6; // rax
  __int64 *v7; // r12
  __int64 *v8; // rdx
  __int64 v9; // rax
  int *v10; // rdx
  unsigned int v11; // esi
  int v12; // edi
  __int64 v13; // r9
  int *v14; // rsi
  __int64 v15; // r9
  int *v16; // r8
  int *i; // rbp
  __int64 v18; // rax
  unsigned __int8 v19; // al
  __int64 v20; // rax
  void *v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // r15
  _QWORD *v24; // r14
  void *v25; // r13
  int v26; // edx
  __int64 v27; // rdx
  char v28; // al
  int v29; // eax
  __int64 v30; // rax
  void *v31; // r13
  _QWORD *v32; // rax
  void *v33; // rdi
  __int64 v34; // rsi
  _QWORD *v35; // r12
  _QWORD *v36; // r13
  void *v37; // rdi
  _QWORD *v38; // rsi
  _QWORD *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // r14
  _QWORD *v42; // r13
  int v43; // edx
  __int64 v44; // rdx
  char v45; // si
  char v46; // al
  int v47; // eax
  __int64 v48; // rax
  _QWORD *v49; // rax
  void *v50; // r12
  void *v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rcx
  unsigned __int8 v54; // [rsp+8h] [rbp-110h]
  void *v55; // [rsp+8h] [rbp-110h]
  void *v56; // [rsp+8h] [rbp-110h]
  void *v57; // [rsp+8h] [rbp-110h]
  void *v58; // [rsp+20h] [rbp-F8h]
  int v59; // [rsp+30h] [rbp-E8h] BYREF
  char v60; // [rsp+34h] [rbp-E4h]
  __int64 v61; // [rsp+38h] [rbp-E0h]
  int v62; // [rsp+40h] [rbp-D8h] BYREF
  char v63; // [rsp+44h] [rbp-D4h]
  __int64 v64; // [rsp+48h] [rbp-D0h]
  __int64 v65; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-C0h]
  __int64 v67; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+68h] [rbp-B0h]
  __int64 v69; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+78h] [rbp-A0h]
  __int64 v71; // [rsp+80h] [rbp-98h] BYREF
  __int64 v72; // [rsp+88h] [rbp-90h]
  int v73; // [rsp+90h] [rbp-88h] BYREF
  char v74; // [rsp+94h] [rbp-84h]
  __int64 v75; // [rsp+98h] [rbp-80h]
  int v76; // [rsp+A0h] [rbp-78h] BYREF
  char v77; // [rsp+A4h] [rbp-74h]
  __int64 v78; // [rsp+A8h] [rbp-70h]
  __int64 v79; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-50h]
  __int64 v83; // [rsp+D0h] [rbp-48h]

  if ( !(unsigned __int8)sub_7FF320(a1) )
    return 1;
  if ( *(_DWORD *)(a1 + 116) )
  {
LABEL_4:
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_5;
    return 0;
  }
  if ( (unsigned __int8)sub_7FB2D0(a1 + 128, 0) )
    return 1;
  if ( *(_DWORD *)(a1 + 116) )
    goto LABEL_4;
  if ( !*(_BYTE *)(a1 + 40) )
    return 0;
  if ( (unsigned __int8)sub_753DF0(a1 + 128, 0) )
    return 1;
  if ( !*(_DWORD *)(a1 + 60) || !*(_DWORD *)(a1 + 116) )
    return 0;
LABEL_5:
  v3 = *(_QWORD **)(a1 + 48);
  v4 = &v3[5 * *(unsigned int *)(a1 + 56)];
  if ( v3 == v4 )
  {
    v52 = *v3;
  }
  else
  {
    while ( 1 )
    {
      v52 = *v3;
      v5 = v3;
      if ( *v3 > 1u )
        break;
      v3 += 5;
      if ( v4 == v3 )
      {
        v52 = v5[5];
        break;
      }
    }
  }
  v6 = *(_DWORD **)(sub_15D1F10(v52) + 24);
  if ( !v6 || *v6 != 5 || v6[1] != 1 )
    goto LABEL_11;
  v60 &= 0xFCu;
  v63 &= 0xFCu;
  v59 = 0;
  v21 = qword_1C7F2C0;
  v61 = 0;
  v62 = 1;
  v64 = 0;
  if ( (*(_BYTE *)(a1 + 92) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v59, a1 + 88);
  else
    v59 = *(_DWORD *)(a1 + 88);
  sub_182CBA0(v21, &v62);
  v22 = *(unsigned int *)(a1 + 56);
  v23 = *(_QWORD **)(a1 + 48);
  v62 = 1;
  v63 &= ~1u;
  v24 = &v23[5 * v22];
  if ( v23 != v24 )
  {
    while ( *v23 <= 1u )
    {
      v23 += 5;
      if ( v24 == v23 )
        goto LABEL_57;
    }
    if ( v23 != v24 )
    {
      do
      {
        BYTE4(v79) &= 0xFCu;
        v25 = qword_1C7F2C0;
        BYTE4(v81) &= 0xFCu;
        LODWORD(v79) = 0;
        v80 = 0;
        LODWORD(v81) = 1;
        v82 = 0;
        if ( (*((_BYTE *)v23 + 28) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v79, v23 + 3);
        else
          LODWORD(v79) = *((_DWORD *)v23 + 6);
        sub_182CBA0(v25, &v81);
        BYTE4(v81) &= ~1u;
        v74 &= 0xFCu;
        v77 &= 0xFCu;
        LODWORD(v81) = 1;
        v73 = 0;
        v75 = 0;
        v76 = 1;
        v78 = 0;
        v55 = qword_1C7F2C0;
        sub_1836B00(qword_1C7F2C0, &v59, &v79, &v73);
        sub_182CBA0(v55, &v76);
        v26 = v73;
        v73 = v59;
        v59 = v26;
        v27 = v75;
        v75 = v61;
        v61 = v27;
        v58 = qword_1C7F2C0;
        v28 = v60 & 1 | v74 & 0xFC | v60 & 2;
        v60 = v74 & 1 | v60 & 0xFC | v74 & 2;
        v74 = v28;
        v29 = v62;
        v62 = 1;
        v76 = v29;
        v30 = v64;
        v64 = v78;
        v78 = v30;
        LOBYTE(v27) = v63 & 0xFC | v77 & 2;
        v77 = v63 & 1 | v63 & 2 | v77 & 0xFC;
        v63 = v27;
        sub_182CBA0(qword_1C7F2C0, &v73);
        sub_182CBA0(v58, &v76);
        v31 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v79);
        sub_182CBA0(v31, &v81);
        v32 = v23 + 5;
        if ( v24 == v23 + 5 )
          break;
        while ( 1 )
        {
          v23 = v32;
          if ( *v32 > 1u )
            break;
          v32 += 5;
          if ( v24 == v32 )
            goto LABEL_57;
        }
      }
      while ( v24 != v32 );
    }
  }
LABEL_57:
  if ( (unsigned __int8)sub_7FB3D0((__int64)&v59, 1u) )
  {
    v33 = qword_1C7F2C0;
    v34 = a1 + 72;
    if ( (*(_BYTE *)(a1 + 92) & 1) != 0 || *(_DWORD *)(a1 + 88) != 1 || (v63 & 1) != 0 || v62 != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, v34, &v59);
    }
    else
    {
      sub_1831650(qword_1C7F2C0, v34, &v59);
      sub_182CBA0(v33, a1 + 88);
      *(_BYTE *)(a1 + 92) &= ~1u;
      *(_DWORD *)(a1 + 88) = 1;
    }
    v35 = *(_QWORD **)(a1 + 48);
    v36 = &v35[5 * *(unsigned int *)(a1 + 56)];
    if ( v35 != v36 )
    {
      while ( *v35 <= 1u )
      {
        v35 += 5;
        if ( v36 == v35 )
          goto LABEL_74;
      }
      if ( v36 != v35 )
      {
        do
        {
          v37 = qword_1C7F2C0;
          v38 = v35 + 1;
          if ( (*((_BYTE *)v35 + 28) & 1) != 0 || *((_DWORD *)v35 + 6) != 1 || (v63 & 1) != 0 || v62 != 1 )
          {
            sub_1848FF0(qword_1C7F2C0, v38, &v59);
          }
          else
          {
            sub_1831650(qword_1C7F2C0, v38, &v59);
            sub_182CBA0(v37, v35 + 3);
            *((_BYTE *)v35 + 28) &= ~1u;
            *((_DWORD *)v35 + 6) = 1;
          }
          v39 = v35 + 5;
          if ( v36 == v35 + 5 )
            break;
          while ( 1 )
          {
            v35 = v39;
            if ( *v39 > 1u )
              break;
            v39 += 5;
            if ( v36 == v39 )
              goto LABEL_74;
          }
        }
        while ( v39 != v36 );
      }
    }
  }
LABEL_74:
  v65 = 0;
  v66 = 0;
  v67 = 1;
  v68 = 0;
  sub_182CBA0(qword_1C7F2C0, &v67);
  v40 = *(unsigned int *)(a1 + 56);
  v41 = *(_QWORD **)(a1 + 48);
  LODWORD(v67) = 1;
  BYTE4(v67) &= ~1u;
  v42 = &v41[5 * v40];
  if ( v41 != v42 )
  {
    while ( *v41 <= 1u )
    {
      v41 += 5;
      if ( v42 == v41 )
        goto LABEL_84;
    }
    if ( v42 != v41 )
    {
      do
      {
        BYTE4(v79) &= 0xFCu;
        BYTE4(v81) &= 0xFCu;
        LODWORD(v79) = 0;
        v80 = 0;
        LODWORD(v81) = 1;
        v82 = 0;
        v56 = qword_1C7F2C0;
        sub_1832C70(qword_1C7F2C0, v41 + 1, &v65, &v79);
        sub_182CBA0(v56, &v81);
        v43 = v79;
        LODWORD(v79) = v65;
        LODWORD(v65) = v43;
        v44 = v80;
        v80 = v66;
        v66 = v44;
        v57 = qword_1C7F2C0;
        v45 = BYTE4(v65) & 1;
        v46 = BYTE4(v79) & 0xFC | BYTE4(v65) & 2;
        BYTE4(v65) = BYTE4(v79) & 1 | BYTE4(v65) & 0xFC | BYTE4(v79) & 2;
        BYTE4(v79) = v45 | v46;
        v47 = v67;
        LODWORD(v67) = 1;
        LODWORD(v81) = v47;
        v48 = v68;
        v68 = v82;
        v82 = v48;
        LOBYTE(v44) = BYTE4(v67) & 0xFC | BYTE4(v81) & 2;
        BYTE4(v81) = BYTE4(v67) & 1 | BYTE4(v67) & 2 | BYTE4(v81) & 0xFC;
        BYTE4(v67) = v44;
        sub_182CBA0(qword_1C7F2C0, &v79);
        sub_182CBA0(v57, &v81);
        v49 = v41 + 5;
        if ( v42 == v41 + 5 )
          break;
        while ( 1 )
        {
          v41 = v49;
          if ( *v49 > 1u )
            break;
          v49 += 5;
          if ( v42 == v49 )
            goto LABEL_84;
        }
      }
      while ( v42 != v49 );
    }
  }
LABEL_84:
  if ( !(unsigned __int8)sub_753DF0((__int64)&v65, 1u) )
  {
    v50 = qword_1C7F2C0;
    BYTE4(v69) &= 0xFCu;
    BYTE4(v71) &= 0xFCu;
    LODWORD(v69) = 0;
    v70 = 0;
    LODWORD(v71) = 1;
    v72 = 0;
    sub_1832AB0(qword_1C7F2C0, a1 + 72, &v65, &v69);
    sub_182CBA0(v50, &v71);
    BYTE4(v71) &= ~1u;
    LODWORD(v71) = 1;
    if ( !(unsigned __int8)sub_753DF0((__int64)&v69, 0) )
    {
      v79 = 0;
      v80 = 0;
      v81 = 1;
      v82 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v79, (int *)&v65);
      v51 = qword_1C7F2C0;
      if ( (v81 & 0x100000000LL) != 0 || (_DWORD)v81 != 1 || (v71 & 0x100000000LL) != 0 || (_DWORD)v71 != 1 )
      {
        sub_1852000(qword_1C7F2C0, &v79, &v69);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, &v79, &v69);
        sub_182CBA0(v51, &v81);
        BYTE4(v81) &= ~1u;
        LODWORD(v81) = 1;
      }
      v74 &= 0xFCu;
      v77 &= 0xFCu;
      v73 = 0;
      v75 = 0;
      v76 = 1;
      v78 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v73, (int *)&v79);
      sub_25A130((char *)&v79);
      sub_2FC4A0((__int64)qword_1C7F2C0, a1 + 72, (__int64)&v73, a1 + 72);
      sub_25A130((char *)&v73);
      sub_25A130((char *)&v69);
      sub_25A130((char *)&v65);
      sub_25A130((char *)&v59);
      goto LABEL_11;
    }
    sub_25A130((char *)&v69);
  }
  sub_25A130((char *)&v65);
  sub_25A130((char *)&v59);
LABEL_11:
  v7 = *(__int64 **)(a1 + 48);
  v8 = &v7[5 * *(unsigned int *)(a1 + 56)];
  if ( v7 == v8 )
  {
    v53 = *v7;
  }
  else
  {
    while ( 1 )
    {
      v53 = *v7;
      if ( (unsigned __int64)*v7 > 1 )
        break;
      if ( v8 == v7 + 5 )
      {
        v53 = v7[5];
        v7 = v8;
        break;
      }
      v7 += 5;
    }
  }
  v9 = *(unsigned int *)(a1 + 112);
  v10 = *(int **)(a1 + 104);
  v69 = 0;
  v71 = 1;
  v80 = 0;
  v11 = v9 - 1;
  v82 = 1;
  v12 = *(_DWORD *)(v53 + 12);
  v9 *= 40;
  v70 = 0;
  v72 = 0;
  v13 = 5LL * (v12 & v11);
  v14 = (int *)((char *)v10 + v9);
  v79 = v53;
  v81 = 0;
  v15 = 8 * v13;
  v83 = 0;
  v16 = &v10[(unsigned __int64)v15 / 4];
  if ( v15 != v9 )
  {
    for ( i = &v10[(unsigned __int64)v15 / 4]; v14 != i; i += 10 )
    {
      v18 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v18 + 12) == v12 && v18 == v53 )
        {
LABEL_40:
          sub_25A130((char *)&v80);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v69, i + 2);
          sub_27B620((__int64)&v73, (__int64)&v69, (__int64)(v7 + 1));
          sub_3EC020((__int64)&v79, (__int64)&v73);
          sub_7F9760(a1 + 104, a1 + 48, (__int64)&v79);
          sub_25A130((char *)&v79);
          sub_25A130((char *)&v73);
          v19 = sub_7FB4F0(a1, a1 + 104);
          goto LABEL_41;
        }
      }
      else if ( !v18 )
      {
        goto LABEL_23;
      }
    }
  }
  for ( ; v16 != v10; v10 += 10 )
  {
    v20 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 > 1u )
    {
      if ( *(_DWORD *)(v20 + 12) == v12 && v20 == v53 )
      {
        i = v10;
        goto LABEL_40;
      }
    }
    else if ( !v20 )
    {
      break;
    }
  }
LABEL_23:
  sub_25A130((char *)&v80);
  v19 = 0;
LABEL_41:
  v54 = v19;
  sub_25A130((char *)&v69);
  return v54;
}

