__int64 __fastcall sub_8DF3C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  char v12; // r14
  unsigned __int64 v13; // rdi
  bool v14; // al
  unsigned __int64 v15; // r14
  unsigned int v16; // r12d
  void **v17; // r13
  void *v18; // rax
  __int64 v19; // r8
  int v20; // r15d
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  void *v25; // rdx
  unsigned int v26; // r12d
  void *v27; // r14
  char v28; // bl
  unsigned int v29; // ebx
  bool v30; // al
  unsigned __int64 *v31; // r13
  unsigned int v32; // r12d
  unsigned __int64 v33; // r13
  bool v34; // bl
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // edx
  char v38; // r12
  unsigned int v39; // r15d
  char v40; // r12
  __int64 v41; // rbx
  unsigned int v42; // eax
  void *v44; // rax
  __int128 v45; // rax
  unsigned __int8 **v47; // [rsp+10h] [rbp-138h]
  unsigned int v48; // [rsp+10h] [rbp-138h]
  unsigned __int64 *v49; // [rsp+10h] [rbp-138h]
  unsigned int v50; // [rsp+18h] [rbp-130h]
  void *v51; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v52; // [rsp+28h] [rbp-120h]
  char v53; // [rsp+2Ch] [rbp-11Ch]
  void *v54; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v55; // [rsp+38h] [rbp-110h]
  char v56; // [rsp+3Ch] [rbp-10Ch]
  int v57; // [rsp+40h] [rbp-108h]
  void *v58; // [rsp+50h] [rbp-F8h]
  unsigned int v59; // [rsp+58h] [rbp-F0h]
  bool v60; // [rsp+5Ch] [rbp-ECh]
  unsigned int v61; // [rsp+60h] [rbp-E8h]
  void *v62; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v63; // [rsp+78h] [rbp-D0h]
  char v64; // [rsp+7Ch] [rbp-CCh]
  unsigned int v65; // [rsp+80h] [rbp-C8h]
  void *v66; // [rsp+90h] [rbp-B8h] BYREF
  unsigned int v67; // [rsp+98h] [rbp-B0h]
  bool v68; // [rsp+9Ch] [rbp-ACh]
  unsigned int v69; // [rsp+A0h] [rbp-A8h]
  void *v70; // [rsp+B0h] [rbp-98h] BYREF
  unsigned int v71; // [rsp+B8h] [rbp-90h]
  char v72; // [rsp+BCh] [rbp-8Ch]
  int v73; // [rsp+C0h] [rbp-88h]
  void *v74; // [rsp+D0h] [rbp-78h] BYREF
  unsigned int v75; // [rsp+D8h] [rbp-70h]
  bool v76; // [rsp+DCh] [rbp-6Ch]
  unsigned int v77; // [rsp+E0h] [rbp-68h]
  void *v78; // [rsp+F0h] [rbp-58h] BYREF
  unsigned int v79; // [rsp+F8h] [rbp-50h]
  unsigned int v80; // [rsp+100h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v55 = v6;
  v54 = *(void **)v5;
  LOBYTE(v6) = *(_BYTE *)(v5 + 12);
  LODWORD(v5) = *(_DWORD *)(v5 + 16);
  v56 = v6;
  v57 = v5;
  sub_A1A5E0(v4, 24);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = sub_A1A5A0(v7, 24);
  v9 = *(_DWORD *)(v8 + 8);
  *(_DWORD *)(v8 + 8) = 0;
  v59 = v9;
  v58 = *(void **)v8;
  LOBYTE(v9) = *(_BYTE *)(v8 + 12);
  LODWORD(v8) = *(_DWORD *)(v8 + 16);
  v60 = v9;
  v61 = v8;
  sub_A1A5E0(v7, 24);
  v10 = v55;
  v79 = v55;
  v11 = (unsigned __int16)v61 - 1 - (v61 >> 31);
  v12 = HIBYTE(v57) & 0x20;
  if ( v55 > 0x40 )
  {
    sub_2585B30(&v78);
    v13 = (unsigned __int64)v78;
    if ( v12 )
    {
      v22 = 1LL << ((unsigned __int8)v79 - 1);
      if ( v79 <= 0x40 )
        goto LABEL_30;
      if ( (*((_QWORD *)v78 + ((v79 - 1) >> 6)) & v22) != 0 )
      {
        if ( v78 )
          operator delete[](v78);
LABEL_31:
        v23 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
        v70 = (void *)sub_A2E050(a1, v23, 2242, 0);
        v79 = v55;
        if ( v55 > 0x40 )
        {
          sub_2585B30(&v78);
          v24 = v79;
          v76 = (v57 & 0x20000000) == 0;
          v75 = v79;
          v74 = v78;
          if ( !v70 )
            goto LABEL_34;
        }
        else
        {
          v75 = v55;
          v76 = (v57 & 0x20000000) == 0;
          v74 = v54;
          if ( !v70 )
          {
LABEL_37:
            v15 = v11;
            goto LABEL_38;
          }
        }
        sub_8DF340((unsigned __int8 ***)&v70, (__int64)&v74);
        v24 = v75;
LABEL_34:
        if ( v24 > 0x40 && v74 )
          operator delete[](v74);
        goto LABEL_37;
      }
    }
    else if ( v79 <= 0x40 )
    {
      goto LABEL_73;
    }
    if ( v78 )
      operator delete[](v78);
    goto LABEL_73;
  }
  v13 = (unsigned __int64)v54;
  if ( !v12 )
  {
    v14 = (v57 & 0x20000000) == 0;
LABEL_4:
    v67 = v10;
    v15 = v11;
    v16 = v10;
    v68 = v14;
    v66 = v54;
    v17 = (void **)v54;
    v63 = v10;
    v64 = v14;
    v62 = v54;
    goto LABEL_5;
  }
  v22 = 1LL << ((unsigned __int8)v55 - 1);
LABEL_30:
  if ( (v22 & v13) != 0 )
    goto LABEL_31;
LABEL_73:
  v10 = v55;
  v79 = v55;
  v14 = (v57 & 0x20000000) == 0;
  if ( v55 <= 0x40 )
    goto LABEL_4;
  v15 = v11;
  sub_2585B30(&v78);
  v35 = v79;
  v79 = v55;
  v67 = v35;
  v66 = v78;
  v68 = (v57 & 0x20000000) == 0;
  sub_2585B30(&v78);
  v16 = v79;
  v17 = (void **)v78;
  v64 = v68;
  v10 = v67;
  v63 = v79;
  v62 = v78;
  if ( v79 <= 0x40 )
  {
LABEL_5:
    v18 = v17;
    if ( v15 <= (unsigned __int64)v17 )
      v18 = (void *)v15;
    goto LABEL_7;
  }
  v48 = v67;
  v36 = sub_831980((__int64)&v62);
  v10 = v48;
  v37 = v16 - v36;
  v18 = (void *)v11;
  if ( v37 <= 0x40 )
  {
    v18 = *v17;
    if ( v11 <= (unsigned __int64)*v17 )
      v18 = (void *)v11;
  }
LABEL_7:
  v71 = 64;
  v70 = v18;
  v72 = 0;
  if ( v10 != 64 )
  {
    if ( v10 > 0x40 )
    {
      sub_2587BE0(&v78, &v70, v10);
      v76 = 0;
      v75 = v79;
      v74 = v78;
      v20 = sub_804370((__int64 *)&v66, (__int64 *)&v74);
      if ( v75 > 0x40 )
        goto LABEL_12;
    }
    else
    {
      if ( v68 )
      {
        sub_2587D60(&v78, &v66);
        v76 = 1;
      }
      else
      {
        sub_2587BE0(&v78, &v66, 64);
        v76 = 0;
      }
      v75 = v79;
      v74 = v78;
      v20 = sub_804370((__int64 *)&v74, (__int64 *)&v70);
      if ( v75 > 0x40 )
      {
LABEL_12:
        if ( v74 )
          operator delete[](v74);
      }
    }
    if ( v71 > 0x40 && v70 )
      operator delete[](v70);
    goto LABEL_17;
  }
  if ( v68 )
    v20 = sub_25867A0(&v66, &v70);
  else
    v20 = sub_2586820(&v66, &v70);
LABEL_17:
  if ( v16 > 0x40 && v17 )
    operator delete[](v17);
  if ( v67 > 0x40 && v66 )
    operator delete[](v66);
  if ( v20 )
  {
    v21 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v74 = (void *)sub_A2E240(a1, v21, 2220, 0);
    sub_8DF2E0((__int64)&v78, (__int64 *)&v54);
    v47 = (unsigned __int8 **)v74;
    if ( v74 )
    {
      sub_8DF340((unsigned __int8 ***)&v74, (__int64)&v78);
      sub_8D69A0(v47, *(_QWORD *)(v21 + 8));
      sub_8D6E40(v47, v15);
    }
    if ( v79 > 0x40 && v78 )
      operator delete[](v78);
  }
LABEL_38:
  v63 = 0;
  v62 = nullptr;
  v64 = 1;
  v65 = 0;
  v71 = v55;
  if ( !a3 )
  {
    if ( v55 > 0x40 )
      sub_2585B30(&v70);
    else
      v70 = v54;
    v72 = v56;
    v73 = v57;
    v67 = v59;
    if ( v59 > 0x40 )
      sub_2585B30(&v66);
    else
      v66 = v58;
    v30 = v60;
    v69 = v61;
    v68 = v60;
    v79 = v71;
    if ( v71 <= 0x40 )
    {
      v31 = (unsigned __int64 *)v70;
      goto LABEL_61;
    }
    v38 = HIBYTE(v73) >> 5;
    sub_2585B30(&v78);
    v39 = v79;
    v31 = (unsigned __int64 *)v78;
    v75 = v79;
    v74 = v78;
    v76 = !(v38 & 1);
    if ( v79 <= 0x40 )
    {
      v30 = v68;
LABEL_61:
      if ( v15 >= (unsigned __int64)v31 )
        v11 = (unsigned int)v31;
LABEL_63:
      v32 = v67;
      v79 = v67;
      if ( v30 )
      {
        if ( v67 <= 0x40 )
        {
          v78 = v66;
          goto LABEL_66;
        }
        sub_2585B30(&v78);
        v32 = v79;
        if ( v79 <= 0x40 )
        {
LABEL_66:
          if ( v32 != v11 )
          {
            v33 = (unsigned __int64)v78 >> v11;
            v34 = (v69 & 0x20000000) == 0;
            goto LABEL_118;
          }
LABEL_156:
          v33 = 0;
          v34 = (v69 & 0x20000000) == 0;
          goto LABEL_118;
        }
        sub_258EF20(&v78, v11);
        v32 = v79;
        v53 = 1;
        v33 = (unsigned __int64)v78;
        v52 = v79;
        v51 = v78;
LABEL_131:
        v79 = v32;
        v34 = (v69 & 0x20000000) == 0;
        if ( v32 > 0x40 )
        {
          sub_2585B30(&v78);
          v32 = v79;
          v33 = (unsigned __int64)v78;
          v77 = v69;
          if ( v52 > 0x40 && v51 )
            operator delete[](v51);
          goto LABEL_119;
        }
LABEL_118:
        v77 = v69;
LABEL_119:
        v80 = v77;
        if ( v63 > 0x40 && v62 )
          operator delete[](v62);
        v62 = (void *)v33;
        v63 = v32;
        v64 = v34;
        v65 = v80;
        goto LABEL_92;
      }
      if ( v67 > 0x40 )
      {
        sub_2585B30(&v78);
        v32 = v79;
        if ( v79 > 0x40 )
        {
          sub_2587FC0(&v78, v11);
          v32 = v79;
          v53 = 0;
          v33 = (unsigned __int64)v78;
          v52 = v79;
          v51 = v78;
          goto LABEL_131;
        }
        v44 = v78;
      }
      else
      {
        v44 = v66;
      }
      if ( v32 )
      {
        v45 = (__int64)((_QWORD)v44 << (64 - (unsigned __int8)v32)) >> (64 - (unsigned __int8)v32);
        *(_QWORD *)&v45 = (__int64)v45 >> v11;
        if ( v32 == v11 )
          *(_QWORD *)&v45 = *((_QWORD *)&v45 + 1);
        v33 = v45 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v32);
        v34 = (v69 & 0x20000000) == 0;
        goto LABEL_118;
      }
      goto LABEL_156;
    }
    if ( v39 - (unsigned int)sub_831980((__int64)&v74) > 0x40 )
    {
      if ( !v31 )
        goto LABEL_84;
    }
    else if ( v15 >= *v31 )
    {
      v11 = *v31;
    }
    operator delete[](v31);
LABEL_84:
    v30 = v68;
    goto LABEL_63;
  }
  if ( v55 > 0x40 )
    sub_2585B30(&v70);
  else
    v70 = v54;
  v72 = v56;
  v73 = v57;
  v67 = v59;
  if ( v59 > 0x40 )
    sub_2585B30(&v66);
  else
    v66 = v58;
  v68 = v60;
  v69 = v61;
  v79 = v71;
  if ( v71 <= 0x40 )
  {
    v25 = v70;
    goto LABEL_45;
  }
  v40 = HIBYTE(v73) >> 5;
  sub_2585B30(&v78);
  v25 = v78;
  v75 = v79;
  v74 = v78;
  v76 = !(v40 & 1);
  v50 = v79;
  if ( v79 <= 0x40 )
  {
LABEL_45:
    if ( v15 >= (unsigned __int64)v25 )
      v11 = (unsigned int)v25;
    goto LABEL_47;
  }
  v49 = (unsigned __int64 *)v78;
  if ( v50 - (unsigned int)sub_831980((__int64)&v74) > 0x40 )
  {
    if ( !v49 )
      goto LABEL_47;
  }
  else if ( v15 >= *v49 )
  {
    v11 = *v49;
  }
  operator delete[](v49);
LABEL_47:
  sub_2571A20(&v74, &v66, v11, &v51, v19);
  v26 = v75;
  v27 = v74;
  v75 = 0;
  v80 = v77;
  v28 = v76;
  if ( v63 > 0x40 && v62 )
  {
    operator delete[](v62);
    v62 = v27;
    v63 = v26;
    v64 = v28;
    v65 = v80;
    if ( v75 > 0x40 && v74 )
    {
      operator delete[](v74);
      if ( (_BYTE)v51 )
        goto LABEL_52;
LABEL_92:
      if ( v67 <= 0x40 )
        goto LABEL_95;
      goto LABEL_93;
    }
  }
  else
  {
    v62 = v74;
    v63 = v26;
    v64 = v76;
    v65 = v77;
  }
  if ( !(_BYTE)v51 )
    goto LABEL_92;
LABEL_52:
  v29 = sub_9C87D0(a1, a2, &v62);
  if ( (_BYTE)v29 )
  {
    if ( v67 <= 0x40 )
    {
LABEL_95:
      if ( v71 > 0x40 && v70 )
        operator delete[](v70);
      v41 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
      v42 = v63;
      *(_DWORD *)(v41 + 8) = v63;
      if ( v42 > 0x40 )
        sub_2585B30(v41);
      else
        *(_QWORD *)v41 = v62;
      *(_BYTE *)(v41 + 12) = v64;
      *(_DWORD *)(v41 + 16) = v65;
      v29 = 1;
      goto LABEL_101;
    }
LABEL_93:
    if ( v66 )
      operator delete[](v66);
    goto LABEL_95;
  }
  if ( v67 > 0x40 && v66 )
    operator delete[](v66);
  if ( v71 > 0x40 && v70 )
    operator delete[](v70);
LABEL_101:
  if ( v63 > 0x40 && v62 )
    operator delete[](v62);
  if ( v59 > 0x40 && v58 )
    operator delete[](v58);
  if ( v55 > 0x40 && v54 )
    operator delete[](v54);
  return v29;
}

