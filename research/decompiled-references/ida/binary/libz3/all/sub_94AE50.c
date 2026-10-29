__int64 __fastcall sub_94AE50(__int64 a1, __int64 *a2, unsigned int *a3, void *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // r15d
  unsigned int v9; // eax
  void *v10; // rcx
  __int64 v11; // rbp
  void *v12; // r12
  int v13; // eax
  void *v14; // rbp
  _BYTE *v15; // rcx
  void *v16; // rbp
  void *v17; // r12
  void *v18; // rdi
  void *v19; // r12
  void *v20; // r12
  __int64 v21; // r11
  __int64 v22; // r12
  void *v23; // rdi
  void *v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  char v27; // dl
  char v28; // cl
  __int64 v29; // rax
  char v30; // dl
  char v31; // cl
  void *v32; // rdi
  __int64 v33; // rbp
  void *v34; // r14
  int v35; // eax
  int v36; // eax
  void *v37; // rbp
  void *v38; // rbp
  void *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // r12
  __int64 v43; // r12
  __int64 v44; // rbp
  _BYTE *v45; // [rsp+0h] [rbp-148h]
  void *v46; // [rsp+0h] [rbp-148h]
  void *v47; // [rsp+0h] [rbp-148h]
  void *v48; // [rsp+0h] [rbp-148h]
  _BYTE *v49; // [rsp+0h] [rbp-148h]
  void *v51; // [rsp+28h] [rbp-120h]
  void *v52; // [rsp+28h] [rbp-120h]
  void *v53; // [rsp+28h] [rbp-120h]
  void *v54; // [rsp+28h] [rbp-120h]
  __int64 v55; // [rsp+48h] [rbp-100h]
  _QWORD v56[2]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v57[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v58; // [rsp+70h] [rbp-D8h] BYREF
  char v59; // [rsp+74h] [rbp-D4h]
  __int64 v60; // [rsp+78h] [rbp-D0h]
  int v61; // [rsp+80h] [rbp-C8h] BYREF
  char v62; // [rsp+84h] [rbp-C4h]
  __int64 v63; // [rsp+88h] [rbp-C0h]
  int v64; // [rsp+90h] [rbp-B8h] BYREF
  char v65; // [rsp+94h] [rbp-B4h]
  __int64 v66; // [rsp+98h] [rbp-B0h]
  int v67; // [rsp+A0h] [rbp-A8h] BYREF
  char v68; // [rsp+A4h] [rbp-A4h]
  __int64 v69; // [rsp+A8h] [rbp-A0h]
  int v70; // [rsp+B0h] [rbp-98h] BYREF
  char v71; // [rsp+B4h] [rbp-94h]
  __int64 v72; // [rsp+B8h] [rbp-90h]
  int v73; // [rsp+C0h] [rbp-88h] BYREF
  char v74; // [rsp+C4h] [rbp-84h]
  __int64 v75; // [rsp+C8h] [rbp-80h]
  __int64 v76; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-70h]
  __int64 v78; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-60h]
  __int64 v80; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-50h]
  __int64 v82; // [rsp+100h] [rbp-48h] BYREF
  __int64 v83; // [rsp+108h] [rbp-40h]

  v5 = *a2;
  if ( *a2 )
  {
    v6 = v5 + 32LL * *(unsigned int *)(v5 - 4);
    if ( v5 != v6 )
    {
      while ( (*(_BYTE *)(v5 + 20) & 1) == 0 && *(_DWORD *)(v5 + 16) == 1 )
      {
        v5 += 32;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      return 0;
    }
  }
LABEL_8:
  sub_949A20(a1, a2);
  v7 = sub_94A480(a1, a2);
  if ( (_BYTE)v7 )
  {
    v9 = sub_94A150(a1, a2);
    v10 = a4;
    v56[0] = 0;
    *a3 = v9;
    v56[1] = 0;
    v11 = *a2 + 32LL * v9;
    v57[0] = 1;
    v12 = qword_1C7F2C0;
    v57[1] = 0;
    if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v56, v11);
      v10 = a4;
    }
    else
    {
      LODWORD(v56[0]) = *(_DWORD *)v11;
    }
    if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
    {
      v47 = v10;
      sub_182C690(v12, v57, v11 + 16);
      v10 = v47;
    }
    else
    {
      v13 = *(_DWORD *)(v11 + 16);
      BYTE4(v57[0]) &= ~1u;
      LODWORD(v57[0]) = v13;
    }
    v59 &= 0xFCu;
    v14 = qword_1C7F2C0;
    v62 &= 0xFCu;
    v58 = 0;
    v60 = 0;
    v61 = 1;
    v63 = 0;
    if ( (v56[0] & 0x100000000LL) != 0 )
    {
      v46 = v10;
      sub_182C690(qword_1C7F2C0, &v58, v56);
      v10 = v46;
    }
    else
    {
      v58 = v56[0];
    }
    if ( (v57[0] & 0x100000000LL) != 0 )
    {
      v48 = v10;
      sub_182C690(v14, &v61, v57);
      v10 = v48;
    }
    else
    {
      v62 &= ~1u;
      v61 = v57[0];
    }
    v45 = v10;
    sub_1831690(qword_1C7F2C0, &v58);
    v15 = v45;
    if ( !v58 )
      goto LABEL_61;
    if ( (v56[0] & 0x100000000LL) == 0 && LODWORD(v56[0]) == 1 && (v57[0] & 0x100000000LL) == 0 && LODWORD(v57[0]) == 1 )
    {
      v40 = *a2;
      if ( *a2 )
      {
        v41 = v40 + 32LL * *(unsigned int *)(v40 - 4);
        if ( v41 != v40 )
        {
          v42 = *a2;
          do
          {
            v49 = v15;
            sub_1831620(qword_1C7F2C0, v42);
            v42 += 32;
            v15 = v49;
          }
          while ( v41 != v42 );
        }
      }
    }
    if ( (v59 & 1) == 0 && v58 == 1 && (v62 & 1) == 0 && v61 == 1 )
    {
      *v15 = 0;
LABEL_61:
      v38 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v58);
      sub_182CBA0(v38, &v61);
      v39 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v56);
      sub_182CBA0(v39, v57);
      return v7;
    }
    *v15 = 1;
    v76 = 1;
    v77 = 0;
    v78 = 1;
    v79 = 0;
    sub_182CBA0(qword_1C7F2C0, &v78);
    BYTE4(v78) &= ~1u;
    v16 = qword_1C7F2C0;
    LODWORD(v78) = 1;
    v80 = 0;
    v81 = 0;
    v82 = 1;
    v83 = 0;
    if ( (v59 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v80, &v58);
    else
      LODWORD(v80) = v58;
    if ( (v62 & 1) != 0 )
    {
      sub_182C690(v16, &v82, &v61);
    }
    else
    {
      BYTE4(v82) &= ~1u;
      LODWORD(v82) = v61;
    }
    v17 = qword_1C7F2C0;
    if ( (_DWORD)v76 )
    {
      if ( (_DWORD)v80 )
      {
        if ( (v82 & 0x100000000LL) != 0 || (_DWORD)v82 != 1 || (v78 & 0x100000000LL) != 0 || (_DWORD)v78 != 1 )
        {
          sub_1851D20(qword_1C7F2C0, &v80, &v76, &v80);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, &v80, &v76, &v80);
          sub_182CBA0(v17, &v82);
          BYTE4(v82) &= ~1u;
          LODWORD(v82) = 1;
        }
      }
      else
      {
        if ( (v76 & 0x100000000LL) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v80, &v76);
        }
        else
        {
          LODWORD(v80) = v76;
          BYTE4(v80) &= ~1u;
        }
        if ( (v78 & 0x100000000LL) != 0 )
        {
          sub_182C690(v17, &v82, &v78);
        }
        else
        {
          BYTE4(v82) &= ~1u;
          LODWORD(v82) = v78;
        }
      }
    }
    else
    {
      if ( (v80 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v80, &v80);
      else
        BYTE4(v80) &= ~1u;
      if ( (v82 & 0x100000000LL) != 0 )
        sub_182C690(v17, &v82, &v82);
      else
        BYTE4(v82) &= ~1u;
    }
    v65 &= 0xFCu;
    v18 = qword_1C7F2C0;
    v68 &= 0xFCu;
    v64 = 0;
    v66 = 0;
    v67 = 1;
    v69 = 0;
    if ( (v80 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v64, &v80);
    else
      v64 = v80;
    if ( (v82 & 0x100000000LL) != 0 )
    {
      sub_182C690(v18, &v67, &v82);
    }
    else
    {
      v68 &= ~1u;
      v67 = v82;
    }
    v19 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v80);
    sub_182CBA0(v19, &v82);
    v20 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v76);
    sub_182CBA0(v20, &v78);
    v21 = *a2;
    if ( !*a2 || (v55 = v21 + 32LL * *(unsigned int *)(v21 - 4), v55 == v21) )
    {
LABEL_54:
      v33 = v21 + 32LL * *a3;
      if ( (*(_BYTE *)(v33 + 4) & 1) == 0
        && *(_DWORD *)v33 == 1
        && (*(_BYTE *)(v33 + 20) & 1) == 0
        && *(_DWORD *)(v33 + 16) == 1 )
      {
        if ( v21 )
        {
          v43 = v21 + 32LL * *(unsigned int *)(v21 - 4);
          if ( v21 != v43 )
          {
            v44 = v21;
            do
            {
              sub_1831620(qword_1C7F2C0, v44);
              v44 += 32;
            }
            while ( v43 != v44 );
            v33 = *a2 + 32LL * *a3;
          }
        }
      }
      v34 = qword_1C7F2C0;
      if ( (v65 & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v33, &v64);
      }
      else
      {
        v35 = v64;
        *(_BYTE *)(v33 + 4) &= ~1u;
        *(_DWORD *)v33 = v35;
      }
      if ( (v68 & 1) != 0 )
      {
        sub_182C690(v34, v33 + 16, &v67);
      }
      else
      {
        v36 = v67;
        *(_BYTE *)(v33 + 20) &= ~1u;
        *(_DWORD *)(v33 + 16) = v36;
      }
      v37 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v64);
      sub_182CBA0(v37, &v67);
      goto LABEL_61;
    }
    v22 = *a2;
    while ( 1 )
    {
      v70 = 0;
      v71 &= 0xFCu;
      v74 &= 0xFCu;
      v72 = 0;
      v73 = 1;
      v75 = 0;
      v54 = qword_1C7F2C0;
      sub_1832AB0(qword_1C7F2C0, v22, &v64, &v70);
      sub_182CBA0(v54, &v73);
      v74 &= ~1u;
      v32 = qword_1C7F2C0;
      v73 = 1;
      v76 = 0;
      v77 = 0;
      v78 = 1;
      v79 = 0;
      if ( (v71 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v76, &v70);
      else
        LODWORD(v76) = v70;
      if ( (v74 & 1) != 0 )
      {
        sub_182C690(v32, &v78, &v73);
      }
      else
      {
        BYTE4(v78) &= ~1u;
        LODWORD(v78) = v73;
      }
      v80 = 2;
      v81 = 0;
      v82 = 1;
      v83 = 0;
      sub_182CBA0(qword_1C7F2C0, &v82);
      v23 = qword_1C7F2C0;
      LODWORD(v82) = 1;
      BYTE4(v82) &= ~1u;
      if ( (v78 & 0x100000000LL) == 0 && (_DWORD)v78 == 1 )
      {
        sub_1831650(qword_1C7F2C0, &v76, &v80);
        sub_182CBA0(v23, &v78);
        BYTE4(v78) &= ~1u;
        LODWORD(v78) = 1;
      }
      else
      {
        sub_1848FF0(qword_1C7F2C0, &v76, &v80);
      }
      v51 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v80);
      sub_182CBA0(v51, &v82);
      if ( (v68 & 1) != 0 || v67 != 1 || (v78 & 0x100000000LL) != 0 || (_DWORD)v78 != 1 )
      {
        if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, &v64, &v76) )
          goto LABEL_47;
      }
      else if ( (v65 & 1) != 0 || (v76 & 0x100000000LL) != 0 )
      {
        if ( (int)sub_182C7B0(qword_1C7F2C0, &v64, &v76) < 0 )
        {
LABEL_47:
          v24 = qword_1C7F2C0;
          if ( (v74 & 1) != 0 || v73 != 1 || (v68 & 1) != 0 || v67 != 1 )
          {
            sub_1852000(qword_1C7F2C0, &v70, &v64);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, &v70, &v64);
            sub_182CBA0(v24, &v73);
            v74 &= ~1u;
            v73 = 1;
          }
        }
      }
      else if ( v64 < (int)v76 )
      {
        goto LABEL_47;
      }
      v22 += 32;
      v52 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v76);
      sub_182CBA0(v52, &v78);
      v25 = *(_DWORD *)(v22 - 32);
      *(_DWORD *)(v22 - 32) = v70;
      v70 = v25;
      v26 = *(_QWORD *)(v22 - 24);
      *(_QWORD *)(v22 - 24) = v72;
      v72 = v26;
      v27 = *(_BYTE *)(v22 - 28);
      *(_BYTE *)(v22 - 28) = v71 & 2 | v27 & 0xFD;
      v71 = v27 & 2 | v71 & 0xFD;
      v28 = *(_BYTE *)(v22 - 28);
      *(_BYTE *)(v22 - 28) = v71 & 1 | v28 & 0xFE;
      v71 = v28 & 1 | v71 & 0xFE;
      LODWORD(v26) = *(_DWORD *)(v22 - 16);
      *(_DWORD *)(v22 - 16) = v73;
      v73 = v26;
      v29 = *(_QWORD *)(v22 - 8);
      *(_QWORD *)(v22 - 8) = v75;
      v75 = v29;
      v30 = *(_BYTE *)(v22 - 12);
      *(_BYTE *)(v22 - 12) = v74 & 2 | v30 & 0xFD;
      v74 = v30 & 2 | v74 & 0xFD;
      v31 = *(_BYTE *)(v22 - 12) & 1;
      *(_BYTE *)(v22 - 12) = v74 & 1 | *(_BYTE *)(v22 - 12) & 0xFE;
      v53 = qword_1C7F2C0;
      v74 = v31 | v74 & 0xFE;
      sub_182CBA0(qword_1C7F2C0, &v70);
      sub_182CBA0(v53, &v73);
      if ( v55 == v22 )
      {
        v21 = *a2;
        goto LABEL_54;
      }
    }
  }
  return 0;
}

