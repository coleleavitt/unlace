__int64 __fastcall sub_21F0520(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  unsigned int v6; // eax
  bool v7; // r13
  void *v8; // rdx
  unsigned int v9; // eax
  bool v10; // r13
  void *v11; // rdx
  unsigned int v12; // r13d
  unsigned int v13; // eax
  __int16 v14; // cx
  __int64 v15; // rdx
  char v16; // al
  unsigned __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // edx
  char v20; // al
  bool v21; // cl
  void *v22; // rsi
  unsigned int v23; // eax
  char v24; // r14
  bool v25; // dl
  void *v26; // rcx
  bool v27; // r13
  int v28; // edx
  bool v29; // r13
  void *v30; // rax
  unsigned int v32; // eax
  bool v33; // cc
  unsigned int v34; // r12d
  unsigned int v35; // edi
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  void *v38; // rdx
  unsigned int v39; // eax
  unsigned int v40; // r12d
  unsigned int v41; // edi
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  void *v44; // rdx
  unsigned int v45; // [rsp+8h] [rbp-130h]
  unsigned int v46; // [rsp+8h] [rbp-130h]
  char v47; // [rsp+8h] [rbp-130h]
  void *v48; // [rsp+10h] [rbp-128h]
  bool v49; // [rsp+10h] [rbp-128h]
  bool v50; // [rsp+10h] [rbp-128h]
  int v52; // [rsp+2Ch] [rbp-10Ch] BYREF
  void *v53; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v54; // [rsp+38h] [rbp-100h]
  bool v55; // [rsp+3Ch] [rbp-FCh]
  void *v56; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v57; // [rsp+48h] [rbp-F0h]
  char v58; // [rsp+4Ch] [rbp-ECh]
  void *v59; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v60; // [rsp+58h] [rbp-E0h]
  bool v61; // [rsp+5Ch] [rbp-DCh]
  void *v62; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-D0h]
  char v64; // [rsp+6Ch] [rbp-CCh]
  void *v65; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int v66; // [rsp+78h] [rbp-C0h]
  char v67; // [rsp+7Ch] [rbp-BCh]
  void *v68; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v69; // [rsp+88h] [rbp-B0h]
  bool v70; // [rsp+8Ch] [rbp-ACh]
  void *v71; // [rsp+90h] [rbp-A8h] BYREF
  unsigned int v72; // [rsp+98h] [rbp-A0h]
  void *v73; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v74; // [rsp+A8h] [rbp-90h]
  char v75; // [rsp+B3h] [rbp-85h]
  void *v76; // [rsp+C0h] [rbp-78h] BYREF
  unsigned int v77; // [rsp+C8h] [rbp-70h]
  char v78; // [rsp+D3h] [rbp-65h]
  void *v79; // [rsp+E0h] [rbp-58h] BYREF
  unsigned int v80; // [rsp+E8h] [rbp-50h]
  char v81; // [rsp+F3h] [rbp-45h]

  LODWORD(v79) = *(_DWORD *)(a3 + 16);
  v52 = sub_21EF420((unsigned __int16 *)(a2 + 16), (unsigned int *)&v79);
  sub_21EDE90((__int64)&v73, a2, (unsigned __int16 *)&v52, nullptr);
  sub_21EDE90((__int64)&v76, a3, (unsigned __int16 *)&v52, nullptr);
  v6 = v74;
  v7 = (v75 & 0x20) == 0;
  v80 = v74;
  if ( v74 > 0x40 )
  {
    sub_2205510(&v79);
    v6 = v80;
    v8 = v79;
  }
  else
  {
    v8 = v73;
  }
  v54 = v6;
  v9 = v77;
  v55 = v7;
  v53 = v8;
  v10 = (v78 & 0x20) == 0;
  v80 = v77;
  if ( v77 > 0x40 )
  {
    sub_2205510(&v79);
    v9 = v80;
    v11 = v79;
  }
  else
  {
    v11 = v76;
  }
  v57 = v9;
  v56 = v11;
  v58 = v10;
  v12 = ((unsigned __int16)v52 + ((__int16)(8 * HIWORD(v52)) >> 3) == 0) + 2 * (unsigned __int16)v52;
  if ( (v52 & 0x20000000) != 0 )
  {
    sub_2206B70(&v79, &v53, v12);
    if ( v54 > 0x40 && v53 )
      operator delete[](v53);
    v53 = v79;
    v54 = v80;
    sub_2206B70(&v79, &v56, v12);
    if ( v57 > 0x40 )
    {
LABEL_8:
      if ( v56 )
        operator delete[](v56);
    }
  }
  else
  {
    sub_2206CD0(&v79, &v53, v12);
    if ( v54 > 0x40 && v53 )
      operator delete[](v53);
    v53 = v79;
    v54 = v80;
    sub_2206CD0(&v79, &v56, v12);
    if ( v57 > 0x40 )
      goto LABEL_8;
  }
  v13 = v80;
  v56 = v79;
  v14 = (__int16)(8 * HIWORD(v52)) >> 3;
  v57 = v80;
  if ( v14 >= 0 )
  {
    if ( !((__int16)(8 * HIWORD(v52)) >> 3) )
      goto LABEL_12;
    v34 = v14;
    if ( v80 > 0x40 )
    {
      sub_2205510(&v79);
      v13 = v80;
      if ( v80 > 0x40 )
      {
        sub_220A130(&v79, v34);
        v35 = v57;
LABEL_116:
        if ( v35 > 0x40 && v56 )
          operator delete[](v56);
        v56 = v79;
        v57 = v80;
        goto LABEL_12;
      }
      v35 = v57;
    }
    else
    {
      v35 = v80;
    }
    if ( v34 == v13 )
    {
      v37 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v34;
      v36 = 0;
    }
    else
    {
      v36 = (_QWORD)v79 << v34;
      v37 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v13;
      if ( !v13 )
      {
        v38 = nullptr;
        goto LABEL_115;
      }
    }
    v38 = (void *)(v37 & v36);
LABEL_115:
    v79 = v38;
    goto LABEL_116;
  }
  v39 = v54;
  v40 = -v14;
  v80 = v54;
  if ( v54 <= 0x40 )
  {
    v41 = v54;
    v79 = v53;
    goto LABEL_122;
  }
  sub_2205510(&v79);
  v39 = v80;
  if ( v80 <= 0x40 )
  {
    v41 = v54;
LABEL_122:
    if ( v40 == v39 )
    {
      v43 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v40;
      v42 = 0;
    }
    else
    {
      v42 = (_QWORD)v79 << v40;
      v43 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v39;
      if ( !v39 )
      {
        v44 = nullptr;
        goto LABEL_125;
      }
    }
    v44 = (void *)(v43 & v42);
LABEL_125:
    v79 = v44;
    goto LABEL_126;
  }
  sub_220A130(&v79, v40);
  v41 = v54;
LABEL_126:
  if ( v41 > 0x40 && v53 )
    operator delete[](v53);
  v53 = v79;
  v54 = v80;
LABEL_12:
  v60 = 1;
  v59 = nullptr;
  v61 = 0;
  if ( (v52 & 0x20000000) != 0 )
  {
    v72 = 1;
    v71 = nullptr;
    sub_2208B20(&v53, &v56, &v59, &v71);
    if ( v55 )
    {
      v16 = v58;
    }
    else
    {
      v15 = 1LL << ((unsigned __int8)v54 - 1);
      if ( v54 <= 0x40 )
      {
        v16 = v58;
        if ( ((unsigned __int64)v53 & v15) == 0 )
          goto LABEL_16;
LABEL_135:
        if ( v16 )
        {
LABEL_20:
          if ( v72 <= 0x40 )
          {
            if ( !v71 )
              goto LABEL_30;
          }
          else
          {
            v45 = v72;
            if ( v45 == (unsigned int)sub_2206780(&v71) )
            {
LABEL_87:
              if ( v71 )
                operator delete[](v71);
              goto LABEL_30;
            }
          }
          v80 = v60;
          if ( v60 > 0x40 )
            sub_2205510(&v79);
          else
            v79 = v59;
          sub_2205B00(&v79, 1);
          v18 = v80;
          v80 = 0;
          if ( v60 <= 0x40 || !v59 )
          {
            v59 = v79;
            v60 = v18;
            if ( v72 <= 0x40 )
              goto LABEL_30;
            goto LABEL_87;
          }
          v48 = v79;
          v46 = v18;
          operator delete[](v59);
          v59 = v48;
          v60 = v46;
          if ( v80 > 0x40 && v79 )
            operator delete[](v79);
LABEL_29:
          if ( v72 <= 0x40 )
            goto LABEL_30;
          goto LABEL_87;
        }
        v16 = 1;
LABEL_17:
        v17 = (unsigned __int64)v56;
        if ( v57 > 0x40 )
          v17 = *((_QWORD *)v56 + ((v57 - 1) >> 6));
        if ( ((v17 & (1LL << ((unsigned __int8)v57 - 1))) != 0) == v16 )
          goto LABEL_29;
        goto LABEL_20;
      }
      v16 = v58;
      if ( (*((_QWORD *)v53 + ((v54 - 1) >> 6)) & v15) != 0 )
        goto LABEL_135;
    }
LABEL_16:
    if ( v16 )
      goto LABEL_29;
    goto LABEL_17;
  }
  sub_22078F0(&v79);
  if ( v60 > 0x40 && v59 )
    operator delete[](v59);
  v59 = v79;
  v60 = v80;
LABEL_30:
  v61 = (v52 & 0x20000000) == 0;
  sub_21EEC90((__int64)&v79, (unsigned __int16 *)&v52);
  v19 = v80;
  v20 = v81 & 0x20;
  v72 = v80;
  v21 = (v81 & 0x20) == 0;
  if ( v80 > 0x40 )
  {
    v50 = (v81 & 0x20) == 0;
    v47 = v81 & 0x20;
    sub_2205510(&v71);
    v21 = v50;
    v20 = v47;
    v19 = v72;
    v22 = v71;
  }
  else
  {
    v22 = v79;
  }
  v69 = v19;
  v68 = v22;
  v70 = v21;
  if ( v20 )
  {
    sub_2206DE0(&v71, &v68, v12);
    v64 = 0;
  }
  else
  {
    sub_2206D90(&v71, &v68, v12);
    v64 = 1;
  }
  v63 = v72;
  v62 = v71;
  if ( v69 > 0x40 && v68 )
    operator delete[](v68);
  if ( v80 > 0x40 && v79 )
    operator delete[](v79);
  sub_21EEEF0((__int64)&v79, &v52);
  v23 = v80;
  v24 = v81 & 0x20;
  v25 = (v81 & 0x20) == 0;
  v72 = v80;
  if ( v80 > 0x40 )
  {
    v49 = (v81 & 0x20) == 0;
    sub_2205510(&v71);
    v23 = v72;
    v25 = v49;
    v26 = v71;
  }
  else
  {
    v26 = v79;
  }
  v70 = v25;
  v69 = v23;
  v68 = v26;
  if ( v24 )
  {
    sub_2206DE0(&v71, &v68, v12);
    v67 = 0;
  }
  else
  {
    sub_2206D90(&v71, &v68, v12);
    v67 = 1;
  }
  v66 = v72;
  v65 = v71;
  if ( v69 > 0x40 && v68 )
    operator delete[](v68);
  if ( v80 > 0x40 && v79 )
    operator delete[](v79);
  v27 = v61;
  if ( (v52 & 0x40000000) != 0 )
  {
    if ( v61 )
    {
      if ( (int)sub_2205DB0(&v59, &v65) >= 0 )
      {
        v27 = (int)sub_2205DB0(&v59, &v62) > 0;
        goto LABEL_54;
      }
    }
    else if ( (int)sub_2205E20(&v59, &v65) >= 0 )
    {
      v27 = (int)sub_2205E20(&v59, &v62) > 0;
LABEL_54:
      if ( v27 )
      {
        if ( v60 <= 0x40 && v63 <= 0x40 )
        {
          v60 = v63;
          v59 = v62;
        }
        else
        {
          sub_22056A0(&v59, &v62);
        }
        v27 = 0;
        v61 = v64;
      }
      goto LABEL_59;
    }
    if ( v60 <= 0x40 && v66 <= 0x40 )
    {
      v60 = v66;
      v59 = v65;
    }
    else
    {
      sub_22056A0(&v59, &v65);
    }
    v27 = 0;
    v61 = v67;
    goto LABEL_59;
  }
  if ( v61 )
  {
    if ( (int)sub_2205DB0(&v59, &v65) >= 0 )
      v27 = (int)sub_2205DB0(&v59, &v62) > 0;
  }
  else
  {
    v27 = 1;
    if ( (int)sub_2205E20(&v59, &v65) >= 0 )
      v27 = (int)sub_2205E20(&v59, &v62) > 0;
  }
LABEL_59:
  if ( a4 )
    *a4 = v27;
  sub_2206DE0(&v71, &v59, (unsigned __int16)v52);
  v28 = v52;
  v80 = v72;
  v29 = (v52 & 0x20000000) == 0;
  if ( v72 > 0x40 )
  {
    sub_2205510(&v79);
    v32 = v80;
    *(_BYTE *)(a1 + 12) = v29;
    v33 = v72 <= 0x40;
    *(_DWORD *)(a1 + 8) = v32;
    *(_QWORD *)a1 = v79;
    *(_DWORD *)(a1 + 16) = v52;
    if ( !v33 && v71 )
      operator delete[](v71);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v72;
    v30 = v71;
    *(_BYTE *)(a1 + 12) = v29;
    *(_QWORD *)a1 = v30;
    *(_DWORD *)(a1 + 16) = v28;
  }
  if ( v66 > 0x40 && v65 )
    operator delete[](v65);
  if ( v63 > 0x40 && v62 )
    operator delete[](v62);
  if ( v60 > 0x40 && v59 )
    operator delete[](v59);
  if ( v57 > 0x40 && v56 )
    operator delete[](v56);
  if ( v54 > 0x40 && v53 )
    operator delete[](v53);
  if ( v77 > 0x40 && v76 )
    operator delete[](v76);
  if ( v74 > 0x40 && v73 )
    operator delete[](v73);
  return a1;
}
