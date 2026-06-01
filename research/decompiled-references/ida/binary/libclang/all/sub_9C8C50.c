__int64 __fastcall sub_9C8C50(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  char v13; // r14
  unsigned __int64 v14; // rdi
  bool v15; // al
  unsigned __int64 v16; // r14
  unsigned int v17; // r13d
  void **v18; // r15
  void *v19; // rax
  unsigned int v20; // ecx
  __int64 *v21; // rsi
  __int64 *v22; // rdi
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // r13d
  __int64 v26; // r15
  void *v27; // rax
  unsigned __int8 **v28; // r13
  unsigned int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned __int64 *v33; // r15
  unsigned int v34; // r12d
  void *v35; // r14
  char v36; // bl
  unsigned int v37; // ebx
  bool v38; // al
  unsigned __int64 *v39; // r13
  unsigned int v40; // r12d
  unsigned __int64 v41; // r13
  bool v42; // bl
  int v43; // eax
  unsigned int v44; // esi
  char v45; // r12
  unsigned int v46; // r15d
  char v47; // r12
  __int64 v48; // rbx
  unsigned int v49; // eax
  void *v51; // rax
  __int128 v52; // rax
  int v53; // eax
  unsigned int v55; // [rsp+10h] [rbp-148h]
  unsigned int v56; // [rsp+10h] [rbp-148h]
  unsigned int v57; // [rsp+18h] [rbp-140h]
  unsigned int v58; // [rsp+18h] [rbp-140h]
  unsigned int v59; // [rsp+18h] [rbp-140h]
  unsigned int v60; // [rsp+18h] [rbp-140h]
  void *v61; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v62; // [rsp+38h] [rbp-120h]
  char v63; // [rsp+3Ch] [rbp-11Ch]
  void *v64; // [rsp+40h] [rbp-118h]
  unsigned int v65; // [rsp+48h] [rbp-110h]
  char v66; // [rsp+4Ch] [rbp-10Ch]
  int v67; // [rsp+50h] [rbp-108h]
  void *v68; // [rsp+60h] [rbp-F8h]
  unsigned int v69; // [rsp+68h] [rbp-F0h]
  bool v70; // [rsp+6Ch] [rbp-ECh]
  unsigned int v71; // [rsp+70h] [rbp-E8h]
  void *v72; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v73; // [rsp+88h] [rbp-D0h]
  char v74; // [rsp+8Ch] [rbp-CCh]
  unsigned int v75; // [rsp+90h] [rbp-C8h]
  void *v76; // [rsp+A0h] [rbp-B8h] BYREF
  unsigned int v77; // [rsp+A8h] [rbp-B0h]
  bool v78; // [rsp+ACh] [rbp-ACh]
  unsigned int v79; // [rsp+B0h] [rbp-A8h]
  void *v80; // [rsp+C0h] [rbp-98h] BYREF
  unsigned int v81; // [rsp+C8h] [rbp-90h]
  char v82; // [rsp+CCh] [rbp-8Ch]
  int v83; // [rsp+D0h] [rbp-88h]
  void *v84; // [rsp+E0h] [rbp-78h] BYREF
  unsigned int v85; // [rsp+E8h] [rbp-70h]
  bool v86; // [rsp+ECh] [rbp-6Ch]
  unsigned int v87; // [rsp+F0h] [rbp-68h]
  void *v88; // [rsp+100h] [rbp-58h] BYREF
  unsigned int v89; // [rsp+108h] [rbp-50h]
  unsigned int v90; // [rsp+110h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v65 = v7;
  v64 = *(void **)v6;
  LOBYTE(v7) = *(_BYTE *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 16);
  v66 = v7;
  v67 = v6;
  sub_A1A5E0(v5, 24);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_A1A5A0(v8, 24);
  v10 = *(_DWORD *)(v9 + 8);
  *(_DWORD *)(v9 + 8) = 0;
  v69 = v10;
  v68 = *(void **)v9;
  LOBYTE(v10) = *(_BYTE *)(v9 + 12);
  LODWORD(v9) = *(_DWORD *)(v9 + 16);
  v70 = v10;
  v71 = v9;
  sub_A1A5E0(v8, 24);
  v11 = v65;
  v89 = v65;
  v12 = (unsigned __int16)v71 - 1 - (v71 >> 31);
  v13 = HIBYTE(v67) & 0x20;
  if ( v65 > 0x40 )
  {
    sub_2585B30(&v88);
    v14 = (unsigned __int64)v88;
    if ( v13 )
    {
      v30 = 1LL << ((unsigned __int8)v89 - 1);
      if ( v89 <= 0x40 )
        goto LABEL_32;
      if ( (*((_QWORD *)v88 + ((v89 - 1) >> 6)) & v30) != 0 )
      {
        if ( v88 )
          operator delete[](v88);
LABEL_33:
        v31 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
        v80 = (void *)sub_A2E050(a1, v31, 2242, 0);
        v89 = v65;
        if ( v65 > 0x40 )
        {
          sub_2585B30(&v88);
          v32 = v89;
          v86 = (v67 & 0x20000000) == 0;
          v85 = v89;
          v84 = v88;
          if ( !v80 )
            goto LABEL_36;
        }
        else
        {
          v85 = v65;
          v86 = (v67 & 0x20000000) == 0;
          v84 = v64;
          if ( !v80 )
          {
LABEL_39:
            v16 = v12;
            goto LABEL_40;
          }
        }
        sub_9C19A0((unsigned __int8 ***)&v80, (__int64)&v84);
        v32 = v85;
LABEL_36:
        if ( v32 > 0x40 && v84 )
          operator delete[](v84);
        goto LABEL_39;
      }
    }
    else if ( v89 <= 0x40 )
    {
      goto LABEL_75;
    }
    if ( v88 )
      operator delete[](v88);
    goto LABEL_75;
  }
  v14 = (unsigned __int64)v64;
  if ( !v13 )
  {
    v15 = (v67 & 0x20000000) == 0;
LABEL_4:
    v77 = v11;
    v16 = v12;
    v17 = v11;
    v78 = v15;
    v76 = v64;
    v18 = (void **)v64;
    v73 = v11;
    v74 = v15;
    v72 = v64;
    goto LABEL_5;
  }
  v30 = 1LL << ((unsigned __int8)v65 - 1);
LABEL_32:
  if ( (v30 & v14) != 0 )
    goto LABEL_33;
LABEL_75:
  v11 = v65;
  v89 = v65;
  v15 = (v67 & 0x20000000) == 0;
  if ( v65 <= 0x40 )
    goto LABEL_4;
  v16 = v12;
  sub_2585B30(&v88);
  v17 = v89;
  v89 = v65;
  v77 = v17;
  v76 = v88;
  v78 = (v67 & 0x20000000) == 0;
  sub_2585B30(&v88);
  v11 = v89;
  v18 = (void **)v88;
  v73 = v89;
  v72 = v88;
  v74 = v78;
  if ( v89 <= 0x40 )
  {
LABEL_5:
    v19 = v18;
    if ( v16 <= (unsigned __int64)v18 )
      v19 = (void *)v16;
    goto LABEL_7;
  }
  v56 = v89;
  v43 = sub_2587400(&v72);
  v11 = v56;
  v44 = v56 - v43;
  v19 = (void *)v12;
  if ( v44 <= 0x40 )
  {
    v19 = *v18;
    if ( v12 <= (unsigned __int64)*v18 )
      v19 = (void *)v12;
  }
LABEL_7:
  v81 = 64;
  v80 = v19;
  v82 = 0;
  if ( v17 == 64 )
  {
    v60 = v11;
    if ( v78 )
      v53 = sub_25867A0(&v76, &v80);
    else
      v53 = sub_2586820(&v76, &v80);
    v24 = v60;
    v25 = v53;
  }
  else
  {
    if ( v17 > 0x40 )
    {
      v57 = v11;
      sub_2587BE0(&v88, &v80, v17);
      v22 = (__int64 *)&v76;
      v86 = 0;
      v21 = (__int64 *)&v84;
      v85 = v89;
      v84 = v88;
    }
    else
    {
      v55 = v11;
      if ( v78 )
      {
        sub_2587D60(&v88, &v76);
        v20 = v55;
        v86 = 1;
      }
      else
      {
        sub_2587BE0(&v88, &v76, 64);
        v20 = v55;
        v86 = 0;
      }
      v85 = v89;
      v84 = v88;
      v57 = v20;
      v21 = (__int64 *)&v80;
      v22 = (__int64 *)&v84;
    }
    v23 = sub_804370(v22, v21);
    v24 = v57;
    v25 = v23;
    if ( v85 > 0x40 && v84 )
    {
      operator delete[](v84);
      v24 = v57;
    }
    if ( v81 > 0x40 && v80 )
    {
      v58 = v24;
      operator delete[](v80);
      v24 = v58;
    }
  }
  if ( v24 > 0x40 && v18 )
    operator delete[](v18);
  if ( v77 > 0x40 && v76 )
    operator delete[](v76);
  if ( v25 )
  {
    v26 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v27 = (void *)sub_A2E240(a1, v26, 2220, 0);
    v80 = v27;
    v89 = v65;
    if ( v65 > 0x40 )
    {
      sub_2585B30(&v88);
      v86 = (v67 & 0x20000000) == 0;
      v29 = v89;
      v28 = (unsigned __int8 **)v80;
      v85 = v89;
      v84 = v88;
      if ( !v80 )
        goto LABEL_28;
    }
    else
    {
      v85 = v65;
      v28 = (unsigned __int8 **)v27;
      v86 = (v67 & 0x20000000) == 0;
      v84 = v64;
      if ( !v27 )
        goto LABEL_40;
    }
    sub_9C19A0((unsigned __int8 ***)&v80, (__int64)&v84);
    sub_9B5660(v28, *(_QWORD *)(v26 + 8));
    sub_9B58B0(v28, v16);
    v29 = v85;
LABEL_28:
    if ( v29 > 0x40 && v84 )
      operator delete[](v84);
  }
LABEL_40:
  v74 = 1;
  v73 = 0;
  v72 = nullptr;
  v75 = 0;
  v81 = v65;
  if ( !a3 )
  {
    if ( v65 > 0x40 )
      sub_2585B30(&v80);
    else
      v80 = v64;
    v82 = v66;
    v83 = v67;
    v77 = v69;
    if ( v69 > 0x40 )
      sub_2585B30(&v76);
    else
      v76 = v68;
    v38 = v70;
    v79 = v71;
    v78 = v70;
    v89 = v81;
    if ( v81 <= 0x40 )
    {
      v39 = (unsigned __int64 *)v80;
      goto LABEL_63;
    }
    v45 = HIBYTE(v83) >> 5;
    sub_2585B30(&v88);
    v46 = v89;
    v39 = (unsigned __int64 *)v88;
    v85 = v89;
    v84 = v88;
    v86 = !(v45 & 1);
    if ( v89 <= 0x40 )
    {
      v38 = v78;
LABEL_63:
      if ( v16 >= (unsigned __int64)v39 )
        v12 = (unsigned int)v39;
LABEL_65:
      v40 = v77;
      v89 = v77;
      if ( v38 )
      {
        if ( v77 <= 0x40 )
        {
          v88 = v76;
          goto LABEL_68;
        }
        sub_2585B30(&v88);
        v40 = v89;
        if ( v89 <= 0x40 )
        {
LABEL_68:
          if ( v40 != v12 )
          {
            v41 = (unsigned __int64)v88 >> v12;
            v42 = (v79 & 0x20000000) == 0;
            goto LABEL_120;
          }
LABEL_158:
          v41 = 0;
          v42 = (v79 & 0x20000000) == 0;
          goto LABEL_120;
        }
        sub_258EF20(&v88, v12);
        v40 = v89;
        v63 = 1;
        v41 = (unsigned __int64)v88;
        v62 = v89;
        v61 = v88;
LABEL_133:
        v89 = v40;
        v42 = (v79 & 0x20000000) == 0;
        if ( v40 > 0x40 )
        {
          sub_2585B30(&v88);
          v40 = v89;
          v41 = (unsigned __int64)v88;
          v87 = v79;
          if ( v62 > 0x40 && v61 )
            operator delete[](v61);
          goto LABEL_121;
        }
LABEL_120:
        v87 = v79;
LABEL_121:
        v90 = v87;
        if ( v73 > 0x40 && v72 )
          operator delete[](v72);
        v72 = (void *)v41;
        v73 = v40;
        v74 = v42;
        v75 = v90;
        goto LABEL_94;
      }
      if ( v77 > 0x40 )
      {
        sub_2585B30(&v88);
        v40 = v89;
        if ( v89 > 0x40 )
        {
          sub_2587FC0(&v88, v12);
          v40 = v89;
          v63 = 0;
          v41 = (unsigned __int64)v88;
          v62 = v89;
          v61 = v88;
          goto LABEL_133;
        }
        v51 = v88;
      }
      else
      {
        v51 = v76;
      }
      if ( v40 )
      {
        v52 = (__int64)((_QWORD)v51 << (64 - (unsigned __int8)v40)) >> (64 - (unsigned __int8)v40);
        *(_QWORD *)&v52 = (__int64)v52 >> v12;
        if ( v40 == v12 )
          *(_QWORD *)&v52 = *((_QWORD *)&v52 + 1);
        v41 = v52 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v40);
        v42 = (v79 & 0x20000000) == 0;
        goto LABEL_120;
      }
      goto LABEL_158;
    }
    if ( v46 - (unsigned int)sub_831980((__int64)&v84) > 0x40 )
    {
      if ( !v39 )
        goto LABEL_86;
    }
    else if ( v16 >= *v39 )
    {
      v12 = *v39;
    }
    operator delete[](v39);
LABEL_86:
    v38 = v78;
    goto LABEL_65;
  }
  if ( v65 > 0x40 )
    sub_2585B30(&v80);
  else
    v80 = v64;
  v82 = v66;
  v83 = v67;
  v77 = v69;
  if ( v69 > 0x40 )
    sub_2585B30(&v76);
  else
    v76 = v68;
  v78 = v70;
  v79 = v71;
  v89 = v81;
  if ( v81 <= 0x40 )
  {
    v33 = (unsigned __int64 *)v80;
    goto LABEL_47;
  }
  v47 = HIBYTE(v83) >> 5;
  sub_2585B30(&v88);
  v33 = (unsigned __int64 *)v88;
  v85 = v89;
  v84 = v88;
  v86 = !(v47 & 1);
  v59 = v89;
  if ( v89 <= 0x40 )
  {
LABEL_47:
    if ( v16 >= (unsigned __int64)v33 )
      v12 = (unsigned int)v33;
    goto LABEL_49;
  }
  if ( v59 - (unsigned int)sub_2587400(&v84) > 0x40 )
  {
    if ( !v33 )
      goto LABEL_49;
  }
  else if ( v16 >= *v33 )
  {
    v12 = *v33;
  }
  operator delete[](v33);
LABEL_49:
  sub_2571A20(&v84, &v76, v12, &v61, &v84);
  v34 = v85;
  v35 = v84;
  v85 = 0;
  v90 = v87;
  v36 = v86;
  if ( v73 > 0x40 && v72 )
  {
    operator delete[](v72);
    v72 = v35;
    v73 = v34;
    v74 = v36;
    v75 = v90;
    if ( v85 > 0x40 && v84 )
    {
      operator delete[](v84);
      if ( (_BYTE)v61 )
        goto LABEL_54;
LABEL_94:
      if ( v77 <= 0x40 )
        goto LABEL_97;
      goto LABEL_95;
    }
  }
  else
  {
    v72 = v84;
    v73 = v34;
    v74 = v86;
    v75 = v87;
  }
  if ( !(_BYTE)v61 )
    goto LABEL_94;
LABEL_54:
  v37 = sub_9C87D0(a1, a2, (__int64)&v72);
  if ( (_BYTE)v37 )
  {
    if ( v77 <= 0x40 )
    {
LABEL_97:
      if ( v81 > 0x40 && v80 )
        operator delete[](v80);
      v48 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
      v49 = v73;
      *(_DWORD *)(v48 + 8) = v73;
      if ( v49 > 0x40 )
        sub_2585B30(v48);
      else
        *(_QWORD *)v48 = v72;
      *(_BYTE *)(v48 + 12) = v74;
      *(_DWORD *)(v48 + 16) = v75;
      v37 = 1;
      goto LABEL_103;
    }
LABEL_95:
    if ( v76 )
      operator delete[](v76);
    goto LABEL_97;
  }
  if ( v77 > 0x40 && v76 )
    operator delete[](v76);
  if ( v81 > 0x40 && v80 )
    operator delete[](v80);
LABEL_103:
  if ( v73 > 0x40 && v72 )
    operator delete[](v72);
  if ( v69 > 0x40 && v68 )
    operator delete[](v68);
  if ( v65 > 0x40 && v64 )
    operator delete[](v64);
  return v37;
}

