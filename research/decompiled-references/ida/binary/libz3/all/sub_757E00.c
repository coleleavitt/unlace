__int64 __fastcall sub_757E00(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rdi
  void *v6; // r15
  __int64 v7; // r15
  char v8; // al
  char v9; // al
  __int64 v10; // rax
  void *v11; // r15
  void *v12; // r15
  void *v13; // r15
  void *v14; // r15
  bool v15; // al
  void *v16; // r15
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // r15
  void *v20; // r15
  void *v21; // r15
  void *v22; // rdi
  bool v23; // al
  void *v24; // r15
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // r15
  void *v28; // r15
  void *v29; // r15
  void *v30; // rdi
  bool v31; // al
  void *v32; // r15
  bool v34; // al
  bool v36; // al
  void *v37; // rdi
  void *v38; // r12
  int v39; // eax
  int v40; // eax
  void *v41; // rbx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // r14
  char v46; // al
  int v47; // ecx
  char v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rsi
  int v51; // eax
  char v52; // r8
  char v53; // al
  int v54; // r14d
  char v55; // al
  char v56; // al
  __int64 v57; // [rsp+8h] [rbp-110h]
  void *v58; // [rsp+8h] [rbp-110h]
  void *v59; // [rsp+8h] [rbp-110h]
  void *v60; // [rsp+8h] [rbp-110h]
  void *v61; // [rsp+8h] [rbp-110h]
  int v62; // [rsp+8h] [rbp-110h]
  int v63; // [rsp+8h] [rbp-110h]
  char v64; // [rsp+10h] [rbp-108h]
  int v66; // [rsp+30h] [rbp-E8h] BYREF
  char v67; // [rsp+34h] [rbp-E4h]
  __int64 v68; // [rsp+38h] [rbp-E0h]
  int v69; // [rsp+40h] [rbp-D8h] BYREF
  char v70; // [rsp+44h] [rbp-D4h]
  __int64 v71; // [rsp+48h] [rbp-D0h]
  int v72; // [rsp+50h] [rbp-C8h] BYREF
  char v73; // [rsp+54h] [rbp-C4h]
  int v74; // [rsp+60h] [rbp-B8h] BYREF
  char v75; // [rsp+64h] [rbp-B4h]
  __int64 v76; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v77; // [rsp+78h] [rbp-A0h]
  __int64 v78; // [rsp+80h] [rbp-98h] BYREF
  __int64 v79; // [rsp+88h] [rbp-90h]
  __int64 v80; // [rsp+90h] [rbp-88h] BYREF
  __int64 v81; // [rsp+98h] [rbp-80h]
  __int64 v82; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-70h]
  char v84[104]; // [rsp+B0h] [rbp-68h] BYREF

  v5 = qword_1C7F2C0;
  while ( 1 )
  {
    v80 = 0;
    v81 = 0;
    v82 = 1;
    v83 = 0;
    sub_182CBA0(v5, &v82);
    BYTE4(v82) &= ~1u;
    v11 = qword_1C7F2C0;
    LODWORD(v82) = 1;
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || (v80 & 0x100000000LL) != 0 )
    {
      if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a1, &v80) )
      {
LABEL_18:
        v12 = qword_1C7F2C0;
LABEL_19:
        sub_182CBA0(v12, &v80);
        sub_182CBA0(v12, &v82);
        goto LABEL_20;
      }
    }
    else if ( *(_DWORD *)a1 != (_DWORD)v80 )
    {
      goto LABEL_18;
    }
    if ( (*(_BYTE *)(a1 + 20) & 1) != 0 || (v82 & 0x100000000LL) != 0 )
      v23 = (unsigned int)sub_182C7B0(v11, a1 + 16, &v82) == 0;
    else
      v23 = *(_DWORD *)(a1 + 16) == (_DWORD)v82;
    v12 = qword_1C7F2C0;
    if ( !v23 )
      goto LABEL_19;
    sub_182CBA0(qword_1C7F2C0, &v80);
    sub_182CBA0(v12, &v82);
    sub_17F6290(&v72, *(unsigned int *)(a1 + 64));
    v76 = 1;
    v77 = 0;
    v78 = 1;
    v79 = 0;
    sub_182CBA0(qword_1C7F2C0, &v78);
    BYTE4(v78) &= ~1u;
    v24 = qword_1C7F2C0;
    LODWORD(v78) = 1;
    v80 = 0;
    v81 = 0;
    v82 = 1;
    v83 = 0;
    if ( (v73 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v80, &v72);
    else
      LODWORD(v80) = v72;
    if ( (v75 & 1) != 0 )
    {
      sub_182C690(v24, &v82, &v74);
    }
    else
    {
      BYTE4(v82) &= ~1u;
      LODWORD(v82) = v74;
    }
    v25 = qword_1C7F2C0;
    if ( (v82 & 0x100000000LL) != 0 || (_DWORD)v82 != 1 || (v78 & 0x100000000LL) != 0 || (_DWORD)v78 != 1 )
    {
      sub_1852000(qword_1C7F2C0, &v80, &v76);
    }
    else
    {
      sub_1832A70(qword_1C7F2C0, &v80, &v76);
      sub_182CBA0(v25, &v82);
      BYTE4(v82) &= ~1u;
      LODWORD(v82) = 1;
    }
    v67 &= 0xFCu;
    v26 = qword_1C7F2C0;
    v70 &= 0xFCu;
    v66 = 0;
    v68 = 0;
    v69 = 1;
    v71 = 0;
    if ( (v80 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v66, &v80);
    else
      v66 = v80;
    if ( (v82 & 0x100000000LL) != 0 )
    {
      sub_182C690(v26, &v69, &v82);
    }
    else
    {
      v70 &= ~1u;
      v69 = v82;
    }
    v27 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v80);
    sub_182CBA0(v27, &v82);
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v76);
    sub_182CBA0(v28, &v78);
    v29 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v72);
    sub_182CBA0(v29, &v74);
    v30 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + 36) & 1) != 0 || (v67 & 1) != 0 )
    {
      v30 = qword_1C7F2C0;
      if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a1 + 32, &v66) )
      {
LABEL_63:
        v58 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v66);
        sub_182CBA0(v58, &v69);
        v13 = qword_1C7F2C0;
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
          goto LABEL_64;
        goto LABEL_21;
      }
    }
    else if ( *(_DWORD *)(a1 + 32) != v66 )
    {
      goto LABEL_63;
    }
    if ( (*(_BYTE *)(a1 + 52) & 1) != 0 || (v70 & 1) != 0 )
      v34 = (unsigned int)sub_182C7B0(v30, a1 + 48, &v69) == 0;
    else
      v34 = *(_DWORD *)(a1 + 48) == v69;
    if ( v34 )
    {
      v59 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v66);
      sub_182CBA0(v59, &v69);
LABEL_88:
      sub_27B950((__int64)qword_1C7F2C0, a3, (int *)a2);
      sub_27B950((__int64)qword_1C7F2C0, a3 + 32, (int *)(a2 + 32));
      *(_DWORD *)(a3 + 64) = *(_DWORD *)(a2 + 64);
      *(_BYTE *)(a3 + 68) = *(_BYTE *)(a2 + 68);
      return 1;
    }
    v61 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v66);
    sub_182CBA0(v61, &v69);
LABEL_20:
    v13 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
      goto LABEL_64;
LABEL_21:
    if ( (*(_BYTE *)(a2 + 4) & 1) == 0 )
    {
      if ( *(_DWORD *)a1 != *(_DWORD *)a2 )
        goto LABEL_23;
      goto LABEL_65;
    }
LABEL_64:
    if ( (unsigned int)sub_182C7B0(v13, a1, a2) )
      goto LABEL_23;
LABEL_65:
    if ( (*(_BYTE *)(a1 + 20) & 1) != 0 || (*(_BYTE *)(a2 + 20) & 1) != 0 )
      v31 = (unsigned int)sub_182C7B0(v13, a1 + 16, a2 + 16) == 0;
    else
      v31 = *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16);
    v32 = qword_1C7F2C0;
    if ( v31
      && ((*(_BYTE *)(a1 + 36) & 1) != 0 || (*(_BYTE *)(a2 + 36) & 1) != 0
        ? (unsigned int)sub_182C7B0(qword_1C7F2C0, a1 + 32, a2 + 32) == 0
        : *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32)) )
    {
      if ( (*(_BYTE *)(a1 + 52) & 1) != 0 || (*(_BYTE *)(a2 + 52) & 1) != 0 )
      {
        if ( !(unsigned int)sub_182C7B0(v32, a1 + 48, a2 + 48) && *(_BYTE *)(a1 + 68) == *(_BYTE *)(a2 + 68) )
          goto LABEL_88;
      }
      else if ( *(_DWORD *)(a1 + 48) == *(_DWORD *)(a2 + 48) && *(_BYTE *)(a1 + 68) == *(_BYTE *)(a2 + 68) )
      {
        goto LABEL_88;
      }
    }
LABEL_23:
    v80 = 0;
    v81 = 0;
    v82 = 1;
    v83 = 0;
    sub_182CBA0(qword_1C7F2C0, &v82);
    BYTE4(v82) &= ~1u;
    v14 = qword_1C7F2C0;
    LODWORD(v82) = 1;
    if ( (*(_BYTE *)(a2 + 4) & 1) != 0 || (v80 & 0x100000000LL) != 0 )
    {
      if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a2, &v80) )
        goto LABEL_4;
LABEL_25:
      if ( (*(_BYTE *)(a2 + 20) & 1) != 0 || (v82 & 0x100000000LL) != 0 )
        v15 = (unsigned int)sub_182C7B0(v14, a2 + 16, &v82) == 0;
      else
        v15 = *(_DWORD *)(a2 + 16) == (_DWORD)v82;
      v6 = qword_1C7F2C0;
      if ( !v15 )
        goto LABEL_5;
      sub_182CBA0(qword_1C7F2C0, &v80);
      sub_182CBA0(v6, &v82);
      sub_17F6290(&v72, *(unsigned int *)(a2 + 64));
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
      if ( (v73 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v80, &v72);
      else
        LODWORD(v80) = v72;
      if ( (v75 & 1) != 0 )
      {
        sub_182C690(v16, &v82, &v74);
      }
      else
      {
        BYTE4(v82) &= ~1u;
        LODWORD(v82) = v74;
      }
      v17 = qword_1C7F2C0;
      if ( (v82 & 0x100000000LL) != 0 || (_DWORD)v82 != 1 || (v78 & 0x100000000LL) != 0 || (_DWORD)v78 != 1 )
      {
        sub_1852000(qword_1C7F2C0, &v80, &v76);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, &v80, &v76);
        sub_182CBA0(v17, &v82);
        BYTE4(v82) &= ~1u;
        LODWORD(v82) = 1;
      }
      v67 &= 0xFCu;
      v18 = qword_1C7F2C0;
      v70 &= 0xFCu;
      v66 = 0;
      v68 = 0;
      v69 = 1;
      v71 = 0;
      if ( (v80 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v66, &v80);
      else
        v66 = v80;
      if ( (v82 & 0x100000000LL) != 0 )
      {
        sub_182C690(v18, &v69, &v82);
      }
      else
      {
        v70 &= ~1u;
        v69 = v82;
      }
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v80);
      sub_182CBA0(v19, &v82);
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v76);
      sub_182CBA0(v20, &v78);
      v21 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v72);
      sub_182CBA0(v21, &v74);
      v22 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a2 + 36) & 1) != 0 || (v67 & 1) != 0 )
      {
        v22 = qword_1C7F2C0;
        if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a2 + 32, &v66) )
          goto LABEL_98;
      }
      else if ( *(_DWORD *)(a2 + 32) != v66 )
      {
LABEL_98:
        v60 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v66);
        sub_182CBA0(v60, &v69);
        goto LABEL_6;
      }
      if ( (*(_BYTE *)(a2 + 52) & 1) != 0 || (v70 & 1) != 0 )
        v36 = (unsigned int)sub_182C7B0(v22, a2 + 48, &v69) == 0;
      else
        v36 = *(_DWORD *)(a2 + 48) == v69;
      v37 = qword_1C7F2C0;
      if ( v36 )
      {
        sub_182CBA0(qword_1C7F2C0, &v66);
        sub_182CBA0(v37, &v69);
        v38 = qword_1C7F2C0;
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, a3, a1);
        }
        else
        {
          v39 = *(_DWORD *)a1;
          *(_BYTE *)(a3 + 4) &= ~1u;
          *(_DWORD *)a3 = v39;
        }
        if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
        {
          sub_182C690(v38, a3 + 16, a1 + 16);
        }
        else
        {
          v40 = *(_DWORD *)(a1 + 16);
          *(_BYTE *)(a3 + 20) &= ~1u;
          *(_DWORD *)(a3 + 16) = v40;
        }
        v41 = qword_1C7F2C0;
        if ( (*(_BYTE *)(a1 + 36) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, a3 + 32, a1 + 32);
        }
        else
        {
          v42 = *(_DWORD *)(a1 + 32);
          *(_BYTE *)(a3 + 36) &= ~1u;
          *(_DWORD *)(a3 + 32) = v42;
        }
        if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
        {
          sub_182C690(v41, a3 + 48, a1 + 48);
        }
        else
        {
          v43 = *(_DWORD *)(a1 + 48);
          *(_BYTE *)(a3 + 52) &= ~1u;
          *(_DWORD *)(a3 + 48) = v43;
        }
        *(_DWORD *)(a3 + 64) = *(_DWORD *)(a1 + 64);
        *(_BYTE *)(a3 + 68) = *(_BYTE *)(a1 + 68);
        return 1;
      }
      goto LABEL_98;
    }
    if ( *(_DWORD *)a2 == (_DWORD)v80 )
      goto LABEL_25;
LABEL_4:
    v6 = qword_1C7F2C0;
LABEL_5:
    sub_182CBA0(v6, &v80);
    sub_182CBA0(v6, &v82);
LABEL_6:
    v5 = qword_1C7F2C0;
    v7 = a1 + 32;
    if ( (*(_BYTE *)(a1 + 52) & 1) != 0
      || *(_DWORD *)(a1 + 48) != 1
      || (*(_BYTE *)(a1 + 20) & 1) != 0
      || *(_DWORD *)(a1 + 16) != 1 )
    {
      v8 = sub_1848D40(qword_1C7F2C0, a1 + 32, a1);
      v5 = qword_1C7F2C0;
      goto LABEL_9;
    }
    if ( (*(_BYTE *)(a1 + 36) & 1) != 0 || (*(_BYTE *)(a1 + 4) & 1) != 0 )
      break;
    v8 = *(_DWORD *)(a1 + 32) < *(_DWORD *)a1;
LABEL_9:
    if ( !v8 )
      goto LABEL_136;
LABEL_10:
    v57 = a2 + 32;
    if ( (*(_BYTE *)(a2 + 52) & 1) != 0
      || *(_DWORD *)(a2 + 48) != 1
      || (*(_BYTE *)(a2 + 20) & 1) != 0
      || *(_DWORD *)(a2 + 16) != 1 )
    {
      v9 = sub_1848D40(v5, v57, a2);
      v5 = qword_1C7F2C0;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)(a2 + 36) & 1) == 0 && (*(_BYTE *)(a2 + 4) & 1) == 0 )
    {
      v9 = *(_DWORD *)(a2 + 32) < *(_DWORD *)a2;
LABEL_13:
      if ( v9 )
        goto LABEL_144;
      goto LABEL_14;
    }
    v51 = sub_182C7B0(v5, v57, a2);
    v5 = qword_1C7F2C0;
    if ( v51 < 0 )
    {
LABEL_144:
      if ( sub_3ED700((__int64)v5, a1 + 32, a2) )
      {
        if ( !sub_3ED700((__int64)qword_1C7F2C0, v57, a1) )
        {
          sub_751B90(a3, (int *)a1);
          return 1;
        }
        v54 = *(_DWORD *)(a1 + 64);
        if ( sub_3ED700((__int64)qword_1C7F2C0, v57, a1 + 32) )
          v7 = a2 + 32;
        v55 = sub_3ED700((__int64)qword_1C7F2C0, a1, a2);
        v50 = a1;
        v47 = v54;
        v49 = v7;
        if ( v55 )
          v50 = a2;
        v48 = 0;
LABEL_161:
        sub_757CC0((__int64)&v80, v50, v49, v47, v48);
        sub_751900((int *)a3, (int *)&v80);
        sub_25A130(v84);
        sub_25A130((char *)&v80);
        return 1;
      }
      goto LABEL_147;
    }
LABEL_14:
    v10 = a1;
    a1 = a2;
    a2 = v10;
  }
  v44 = sub_182C7B0(qword_1C7F2C0, a1 + 32, a1);
  v5 = qword_1C7F2C0;
  if ( v44 < 0 )
    goto LABEL_10;
LABEL_136:
  v45 = a2 + 32;
  if ( sub_3ED700((__int64)v5, a2 + 32, a2) )
  {
    if ( !sub_3ED700((__int64)qword_1C7F2C0, a1 + 32, a2) || !sub_3ED700((__int64)qword_1C7F2C0, a2 + 32, a1) )
    {
      if ( sub_3ED700((__int64)qword_1C7F2C0, a1 + 32, a2) || sub_3ED700((__int64)qword_1C7F2C0, a2 + 32, a1) )
      {
        v46 = sub_3ED700((__int64)qword_1C7F2C0, a1 + 32, a2);
        v47 = *(_DWORD *)(a1 + 64);
        if ( v46 )
        {
          v63 = *(_DWORD *)(a1 + 64);
          v56 = sub_3ED700((__int64)qword_1C7F2C0, a2 + 32, a1 + 32);
          v47 = v63;
          v50 = a1;
          if ( !v56 )
            v45 = a1 + 32;
          v48 = 0;
          v49 = v45;
        }
        else
        {
          v48 = 0;
          v49 = a1 + 32;
          v50 = a2;
        }
        goto LABEL_161;
      }
LABEL_147:
      sub_751B90(a3, (int *)a2);
      return 1;
    }
  }
  else if ( !sub_3ED700((__int64)qword_1C7F2C0, a2 + 32, a1) && !sub_3ED700((__int64)qword_1C7F2C0, a1 + 32, a2) )
  {
    v52 = 0;
    if ( *(_BYTE *)(a1 + 68) )
      v52 = *(_BYTE *)(a2 + 68);
    v64 = v52;
    v62 = *(_DWORD *)(a1 + 64);
    if ( !sub_3ED700((__int64)qword_1C7F2C0, a2 + 32, a1 + 32) )
      v45 = a1 + 32;
    v53 = sub_3ED700((__int64)qword_1C7F2C0, a1, a2);
    v50 = a2;
    v48 = v64;
    v47 = v62;
    v49 = v45;
    if ( !v53 )
      v50 = a1;
    goto LABEL_161;
  }
  return 0;
}

