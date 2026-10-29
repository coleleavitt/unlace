__int64 __fastcall sub_9B7380(_QWORD *a1, unsigned int a2, _BYTE *a3, __int64 a4, _BYTE *a5, __int64 a6, int *a7)
{
  __int64 v7; // r12
  unsigned int *v9; // r13
  int v10; // eax
  __int64 v11; // rax
  char v12; // di
  char v13; // dl
  char v14; // si
  char v15; // di
  __int64 v16; // rax
  __int64 v17; // rax
  int *v18; // r14
  __int64 v19; // rax
  int *v20; // r14
  void *v21; // r14
  void *v22; // r14
  void *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // r14
  void *v30; // r15
  int v31; // eax
  char v32; // si
  __int64 v33; // rax
  char v34; // cl
  char v35; // si
  char v36; // si
  __int64 v37; // rax
  void *v38; // r15
  __int64 v39; // r15
  __int64 v40; // r8
  void *v41; // r15
  void *v42; // r15
  __int64 v43; // r8
  char v44; // al
  void *v45; // r15
  void *v46; // r14
  void *v47; // r14
  void *v48; // r14
  __int64 v50; // rax
  bool v51; // al
  unsigned int *v52; // [rsp+8h] [rbp-F0h]
  __int64 v53; // [rsp+18h] [rbp-E0h]
  __int64 v58; // [rsp+48h] [rbp-B0h]
  void *v59; // [rsp+50h] [rbp-A8h]
  void *v60; // [rsp+50h] [rbp-A8h]
  void *v61; // [rsp+50h] [rbp-A8h]
  __int64 v62; // [rsp+50h] [rbp-A8h]
  __int64 v63; // [rsp+50h] [rbp-A8h]
  __int64 v64; // [rsp+50h] [rbp-A8h]
  __int64 v65; // [rsp+50h] [rbp-A8h]
  __int64 v66; // [rsp+58h] [rbp-A0h]
  int v67[4]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v68[16]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v69[16]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v70[16]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-50h]
  __int64 v73; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-40h]

  v7 = a2;
  if ( a2 == -1 || ((*(_BYTE *)(a1[74] + 4LL * a2 + 3) >> 4) & 3) != 1 )
  {
    v58 = sub_999800((__int64)a1, a2);
    v9 = *(unsigned int **)(a1[73] + 16LL * a2);
    if ( v9 )
      v52 = &v9[2 * *(v9 - 1)];
    else
      v52 = nullptr;
    *a3 = 1;
    *a5 = 1;
    sub_992B50(a4);
    sub_992B50(a6);
    v71 = 1;
    v72 = 0;
    v73 = 1;
    v74 = 0;
    sub_182CBA0(qword_1C7F2C0, &v73);
    v10 = *a7;
    *a7 = v71;
    LODWORD(v71) = v10;
    v11 = *((_QWORD *)a7 + 1);
    *((_QWORD *)a7 + 1) = v72;
    v72 = v11;
    v12 = *((_BYTE *)a7 + 4);
    LOBYTE(v11) = v12 & 2;
    v12 &= ~2u;
    v13 = BYTE4(v71) & 1;
    LOBYTE(v11) = v12 & 1 | BYTE4(v71) & 0xFC | v11 & 0xFE;
    v14 = v12 & 0xFE | BYTE4(v71) & 2;
    v15 = *((_BYTE *)a7 + 20);
    BYTE4(v71) = v11;
    LODWORD(v11) = a7[4];
    *((_BYTE *)a7 + 4) = v14 | v13;
    LODWORD(v73) = v11;
    v16 = *((_QWORD *)a7 + 3);
    *((_QWORD *)a7 + 3) = v74;
    v74 = v16;
    LOBYTE(v16) = BYTE4(v73);
    a7[4] = 1;
    *((_BYTE *)a7 + 20) = v15 & 0xFC | v16 & 2;
    BYTE4(v73) = v15 & 1 | v15 & 2 | v16 & 0xFC;
    sub_25A130((char *)&v71);
    v17 = *(_QWORD *)(a1[77] + 8 * v7);
    if ( v17 )
    {
      v18 = (int *)(v17 + 16);
      if ( *a3 || sub_3ED700((__int64)qword_1C7F2C0, a4, v17 + 16) )
      {
        sub_27B950((__int64)qword_1C7F2C0, a4, v18);
        *a3 = 0;
      }
      else if ( *a3 )
      {
        goto LABEL_48;
      }
      if ( *a5 )
      {
        v19 = *(_QWORD *)(a1[78] + 8 * v7);
        v20 = (int *)(v19 + 16);
        if ( !v19 )
          goto LABEL_11;
        goto LABEL_10;
      }
      if ( sub_3ED680((__int64)qword_1C7F2C0, a4, a6) )
        return 1;
    }
LABEL_48:
    v50 = *(_QWORD *)(a1[78] + 8 * v7);
    if ( !v50 )
      goto LABEL_11;
    v20 = (int *)(v50 + 16);
    if ( !*a5 && !sub_3ED700((__int64)qword_1C7F2C0, v50 + 16, a6) )
    {
      if ( *a3 || *a5 )
        goto LABEL_11;
      goto LABEL_53;
    }
LABEL_10:
    sub_27B950((__int64)qword_1C7F2C0, a6, v20);
    *a5 = 0;
    if ( *a3 )
      goto LABEL_11;
LABEL_53:
    if ( sub_3ED680((__int64)qword_1C7F2C0, a4, a6) )
      return 1;
LABEL_11:
    v66 = 4 * v7;
    if ( v9 == v52 )
      return 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = *v9;
        if ( (_DWORD)v24 == -1 )
          goto LABEL_24;
        v25 = a1[71] + 24 * v24;
        v26 = *(_DWORD *)(v25 + 12);
        if ( v26 == -1 )
          goto LABEL_24;
        v27 = a1[74];
        v28 = v26;
        if ( ((*(_BYTE *)(v27 + 4LL * v26 + 3) >> 4) & 3) == 2 )
          goto LABEL_24;
        v29 = *(_QWORD *)v25 + 40LL * v9[1];
        v53 = a1[75] + 32LL * v26;
        if ( (*(_BYTE *)(v27 + 4LL * v26 + 3) & 0x40) != 0
          && (*(_BYTE *)(v27 + v66 + 3) & 0x40) != 0
          && ((*(_BYTE *)(v29 + 20) & 1) != 0 || *(_DWORD *)(v29 + 16) != 1) )
        {
          sub_992B90((__int64)v69, v29);
          sub_992D20((__int64)&v71, (__int64)a7, (__int64)v69);
          v30 = qword_1C7F2C0;
          v31 = *a7;
          v32 = *((_BYTE *)a7 + 4);
          *a7 = v71;
          LODWORD(v71) = v31;
          v33 = *((_QWORD *)a7 + 1);
          *((_QWORD *)a7 + 1) = v72;
          v72 = v33;
          v34 = v32;
          v35 = BYTE4(v71) & 0xFD | v32 & 2;
          *((_BYTE *)a7 + 4) = BYTE4(v71) & 1 | v34 & 0xFC | BYTE4(v71) & 2;
          LOBYTE(v33) = v35 & 0xFE;
          v36 = *((_BYTE *)a7 + 20);
          BYTE4(v71) = v34 & 1 | v33;
          LODWORD(v33) = a7[4];
          a7[4] = v73;
          LODWORD(v73) = v33;
          v37 = *((_QWORD *)a7 + 3);
          *((_QWORD *)a7 + 3) = v74;
          v74 = v37;
          LOBYTE(v37) = BYTE4(v73) & 0xFD;
          *((_BYTE *)a7 + 20) = BYTE4(v73) & 1 | v36 & 0xFC | BYTE4(v73) & 2;
          BYTE4(v73) = v36 & 1 | v37 & 0xFE | v36 & 2;
          sub_182CBA0(v30, &v71);
          sub_182CBA0(v30, &v73);
          v38 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v69);
          sub_182CBA0(v38, v70);
        }
        v39 = *(_QWORD *)(a1[77] + 8 * v28);
        v40 = *(_QWORD *)(a1[78] + 8 * v28);
        if ( *(int *)v29 >= 0 )
          break;
        if ( !v39 )
          goto LABEL_40;
        v62 = *(_QWORD *)(a1[78] + 8 * v28);
        sub_3EBB80((__int64)v69, v53, v39 + 16);
        sub_27B620((__int64)&v71, (__int64)v69, v29);
        sub_27B340((__int64)v67, v58, (int *)&v71);
        v41 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v71);
        sub_182CBA0(v41, &v73);
        v42 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v69);
        sub_182CBA0(v42, v70);
        v43 = v62;
        if ( *a3 || (v44 = sub_3ED700((__int64)qword_1C7F2C0, a4, (__int64)v67), v43 = v62, v44) )
        {
          v63 = v43;
          sub_27B950((__int64)qword_1C7F2C0, a4, v67);
          v43 = v63;
          *a3 = 0;
LABEL_38:
          if ( !*a5 )
          {
            v65 = v43;
            v51 = sub_3ED680((__int64)qword_1C7F2C0, a4, a6);
            v43 = v65;
            if ( v51 )
              goto LABEL_60;
          }
          goto LABEL_39;
        }
        if ( !*a3 )
          goto LABEL_38;
LABEL_39:
        v45 = qword_1C7F2C0;
        v64 = v43;
        sub_182CBA0(qword_1C7F2C0, v67);
        sub_182CBA0(v45, v68);
        v40 = v64;
LABEL_40:
        if ( !v40 )
          goto LABEL_24;
        sub_3EBB80((__int64)v69, v53, v40 + 16);
        sub_27B620((__int64)&v71, (__int64)v69, v29);
        sub_27B340((__int64)v67, v58, (int *)&v71);
        v46 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v71);
        sub_182CBA0(v46, &v73);
        v47 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v69);
        sub_182CBA0(v47, v70);
        if ( *a5 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)v67, a6) )
        {
          sub_27B950((__int64)qword_1C7F2C0, a6, v67);
          *a5 = 0;
          if ( *a3 )
            goto LABEL_44;
        }
        else if ( *a3 || *a5 )
        {
          goto LABEL_44;
        }
        if ( sub_3ED680((__int64)qword_1C7F2C0, a4, a6) )
          goto LABEL_60;
LABEL_44:
        v48 = qword_1C7F2C0;
        v9 += 2;
        sub_182CBA0(qword_1C7F2C0, v67);
        sub_182CBA0(v48, v68);
        if ( v9 == v52 )
          return 1;
      }
      if ( v40 )
        break;
LABEL_18:
      if ( v39 )
      {
        sub_3EBB80((__int64)v69, v53, v39 + 16);
        sub_27B620((__int64)&v71, (__int64)v69, v29);
        sub_27B340((__int64)v67, v58, (int *)&v71);
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v71);
        sub_182CBA0(v21, &v73);
        v22 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v69);
        sub_182CBA0(v22, v70);
        if ( *a5 || sub_3ED700((__int64)qword_1C7F2C0, (__int64)v67, a6) )
        {
          sub_27B950((__int64)qword_1C7F2C0, a6, v67);
          *a5 = 0;
          if ( *a3 )
          {
LABEL_23:
            v23 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v67);
            sub_182CBA0(v23, v68);
            goto LABEL_24;
          }
        }
        else if ( *a3 || *a5 )
        {
          goto LABEL_23;
        }
        if ( sub_3ED680((__int64)qword_1C7F2C0, a4, a6) )
          goto LABEL_60;
        goto LABEL_23;
      }
LABEL_24:
      v9 += 2;
      if ( v9 == v52 )
        return 1;
    }
    sub_3EBB80((__int64)v69, v53, v40 + 16);
    sub_27B620((__int64)&v71, (__int64)v69, v29);
    sub_27B340((__int64)v67, v58, (int *)&v71);
    v59 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v71);
    sub_182CBA0(v59, &v73);
    v60 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v69);
    sub_182CBA0(v60, v70);
    if ( *a3 || sub_3ED700((__int64)qword_1C7F2C0, a4, (__int64)v67) )
    {
      sub_27B950((__int64)qword_1C7F2C0, a4, v67);
      *a3 = 0;
    }
    else if ( *a3 )
    {
LABEL_17:
      v61 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v67);
      sub_182CBA0(v61, v68);
      goto LABEL_18;
    }
    if ( !*a5 && sub_3ED680((__int64)qword_1C7F2C0, a4, a6) )
    {
LABEL_60:
      sub_25A130((char *)v67);
      return 1;
    }
    goto LABEL_17;
  }
  return 0;
}

