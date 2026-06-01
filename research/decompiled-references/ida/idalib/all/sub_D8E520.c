__int64 __fastcall sub_D8E520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r13d
  char v8; // al
  unsigned int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rbx
  void **v12; // rsi
  int v13; // ebx
  bool v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  bool v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int8 **v30; // rax
  int v31; // edx
  __int64 v32; // rsi
  bool v33; // al
  __int64 v34; // rbp
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r13
  _QWORD *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  void *v43; // rdi
  void *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rax
  void *v50; // rax
  void *v51; // rdx
  unsigned __int8 **v52; // r14
  __int64 v53; // rax
  __int64 v54; // rax
  int v56; // [rsp+10h] [rbp-138h]
  void *v57; // [rsp+10h] [rbp-138h]
  void *v58; // [rsp+10h] [rbp-138h]
  void *v59; // [rsp+10h] [rbp-138h]
  int v60; // [rsp+10h] [rbp-138h]
  __int64 v61; // [rsp+18h] [rbp-130h]
  int v62; // [rsp+18h] [rbp-130h]
  unsigned int v63; // [rsp+20h] [rbp-128h]
  int v64; // [rsp+20h] [rbp-128h]
  bool v65; // [rsp+27h] [rbp-121h]
  void *v66; // [rsp+48h] [rbp-100h]
  void *v67; // [rsp+48h] [rbp-100h]
  void *v68; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v69; // [rsp+58h] [rbp-F0h]
  __int64 v70; // [rsp+60h] [rbp-E8h] BYREF
  int v71; // [rsp+68h] [rbp-E0h]
  void *v72; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v73; // [rsp+78h] [rbp-D0h]
  void *v74; // [rsp+80h] [rbp-C8h] BYREF
  unsigned int v75; // [rsp+88h] [rbp-C0h]
  __int128 v76; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-A8h]
  unsigned int v78[6]; // [rsp+B0h] [rbp-98h] BYREF
  int v79; // [rsp+C8h] [rbp-80h]
  __int64 v80; // [rsp+D0h] [rbp-78h]
  __int64 v81; // [rsp+D8h] [rbp-70h]
  void *v82; // [rsp+E0h] [rbp-68h] BYREF
  signed __int64 v83; // [rsp+E8h] [rbp-60h]
  __int64 v84; // [rsp+F0h] [rbp-58h] BYREF

  v5 = a4;
  if ( (_DWORD)a4 == 943 || (_DWORD)a4 == 1484 || (_DWORD)a4 == 1234 || (_DWORD)a4 == 1475 )
    sub_D8ACC0(a1, a2, a4);
  v8 = *(_BYTE *)(a3 + 2);
  v9 = 13;
  v77 = 0;
  v76 = 0;
  v10 = *(_QWORD *)(a3 + 8 * (((v8 & 8) != 0) + 1LL) + 40);
  if ( (*(_BYTE *)(v10 + 1) & 6) == 0 )
    v9 = sub_D8A760(*(_QWORD *)(a1 + 184), v10, a3, a4, a5);
  if ( *(_DWORD *)(a3 + 16) == 3 )
  {
    v31 = 13;
    v32 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 48);
    if ( (*(_BYTE *)(v32 + 1) & 6) == 0 )
      v31 = sub_D8A760(*(_QWORD *)(a1 + 184), v32, 13, a4, a5);
    sub_D8B1A0((__int64)&v82, *(_QWORD *)(a1 + 176), v31);
    LOBYTE(v77) = 1;
    DWORD2(v76) = v83;
    *(_QWORD *)&v76 = v82;
    BYTE12(v76) = BYTE4(v83);
  }
  sub_D8B1A0((__int64)&v68, *(_QWORD *)(a1 + 176), v9);
  v11 = *(_QWORD *)(a1 + 176);
  sub_E21760(v11, 48);
  sub_E23260(v78);
  v12 = (void **)&dword_30;
  sub_E21790(v11, 48);
  if ( (_BYTE)v77 )
  {
    v13 = DWORD2(v76);
    LOBYTE(v9) = DWORD2(v76) <= 0x40 ? (_QWORD)v76 == 0 : (unsigned int)sub_2206780(&v76) == v13;
    if ( (_BYTE)v9 )
      goto LABEL_35;
  }
  if ( !v79 )
  {
    if ( v80 )
    {
      v9 = 0;
      if ( *(_BYTE *)(*(_QWORD *)(v80 + 32) + 61LL) )
        goto LABEL_36;
    }
    v14 = v80 == 0;
LABEL_16:
    if ( !v14 )
      goto LABEL_17;
LABEL_43:
    v82 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v30 = (unsigned __int8 **)sub_E33BA0(a1, &v82, 2369, 0);
    if ( v30 )
      sub_AE9DF0(v30, 0, 2u);
    v9 = 0;
    goto LABEL_36;
  }
  if ( v79 == 2 )
  {
    v14 = v80 == 0;
    goto LABEL_16;
  }
  if ( v79 != 3 && !(*(_QWORD *)v78 | v81) )
    goto LABEL_43;
LABEL_17:
  v17 = sub_CFDF60((__int64)v78);
  if ( *(_BYTE *)(v17 + 60) )
  {
    v21 = sub_CEF620(v17, 48, v15, v16, v18);
    v63 = v5 - 942;
    if ( v5 - 942 > 1 )
      goto LABEL_19;
LABEL_59:
    v58 = (void *)v21;
    v40 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
    if ( !(unsigned __int8)sub_F57EE0(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      v9 = sub_F57F60(*v40);
      if ( !(_BYTE)v9 )
      {
        v74 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
        v52 = (unsigned __int8 **)sub_E33BA0(a1, &v74, 2433, 0);
        v53 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_FBD300(&v82, *(_QWORD *)(v53 + 17520), v5);
        if ( v52 )
        {
          sub_AEC220(v52, v82, v83);
          sub_AE9DF0(v52, (__int64)v58, 8u);
        }
        if ( v82 != &v84 )
          operator delete(v82);
        goto LABEL_36;
      }
    }
    v22 = v5 - 1233;
    goto LABEL_27;
  }
  v21 = sub_CEF5A0((__int64 *)v17);
  v63 = v5 - 942;
  if ( v5 - 942 <= 1 )
    goto LABEL_59;
LABEL_19:
  v22 = v5 - 1233;
  if ( v5 - 1233 <= 1 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, unsigned __int64))(**(_QWORD **)(a1 + 24) + 104LL))(
            *(_QWORD *)(a1 + 24),
            48,
            v19,
            v20,
            v21);
    sub_A97D20(v23, *(_QWORD *)(*(_QWORD *)(v23 + 18648) & 0xFFFFFFFFFFFFFFF0LL));
    sub_2206A40(&v82, &v68);
    if ( (unsigned int)v83 > 0x40 )
    {
      v50 = *(void **)v82;
      v59 = v82;
      LODWORD(v83) = 64;
      v82 = v50;
      BYTE4(v83) = 0;
      v25 = sub_98E2D0((__int64 *)&v68, (__int64 *)&v82);
      v51 = v59;
      if ( (unsigned int)v83 > 0x40 && v82 )
      {
        v62 = v25;
        operator delete[](v82);
        v51 = v59;
        v25 = v62;
      }
      if ( v51 )
      {
        v60 = v25;
        operator delete[](v51);
        v25 = v60;
      }
    }
    else
    {
      v24 = 0;
      if ( (_DWORD)v83 )
        v24 = (__int64)((_QWORD)v82 << (64 - (unsigned __int8)v83)) >> (64 - (unsigned __int8)v83);
      LODWORD(v83) = 64;
      v82 = (void *)v24;
      BYTE4(v83) = 0;
      v25 = sub_98E2D0((__int64 *)&v68, (__int64 *)&v82);
      if ( (unsigned int)v83 > 0x40 && v82 )
      {
        v56 = v25;
        operator delete[](v82);
        v25 = v56;
      }
    }
    if ( v25 )
    {
      v9 = 1;
      v54 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
      *(_QWORD *)v54 = 0;
      *(_OWORD *)(v54 + 8) = 0;
      *(_DWORD *)(v54 + 24) = 1;
      *(_QWORD *)(v54 + 40) = 0;
      *(_QWORD *)(v54 + 32) = 0;
      goto LABEL_36;
    }
LABEL_27:
    v26 = v5 - 1483 <= 1;
    goto LABEL_28;
  }
  v33 = v5 - 1483 <= 1;
  v26 = v33 || v5 - 1474 <= 1;
  if ( v26 )
  {
    if ( v69 <= 0x40 )
      v57 = v68;
    else
      v57 = *(void **)v68;
    v65 = v33 || v22 <= 1;
    goto LABEL_53;
  }
LABEL_28:
  v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  sub_A97D20(v27, *(_QWORD *)(*(_QWORD *)(v27 + 18648) & 0xFFFFFFFFFFFFFFF0LL));
  v12 = &v68;
  sub_2206A40(&v82, &v68);
  v57 = v82;
  if ( (unsigned int)v83 > 0x40 )
  {
    v57 = *(void **)v82;
    if ( v82 )
      operator delete[](v82);
  }
  v65 = v26 || v22 <= 1;
  if ( v63 <= 1 )
  {
    v64 = 0;
    goto LABEL_54;
  }
LABEL_53:
  v34 = *(_QWORD *)(a1 + 184);
  v35 = sub_D8AB40((__int64)v78, (__int64)v12);
  v64 = sub_CE6180(v34, v35, v36, v37, v38);
LABEL_54:
  v61 = sub_CFE630(v78);
  v39 = v61;
  if ( !v61 )
    goto LABEL_77;
  while ( 2 )
  {
    sub_CFE430((__int64)&v82, (__int64)v78, v39);
LABEL_56:
    v9 = sub_DCC160(a1, a2, &v82, 0);
    if ( !(_BYTE)v9 )
      goto LABEL_80;
    switch ( v64 )
    {
      case 0:
        v44 = (void *)*(unsigned __int8 *)sub_D0C5D0((__int64)&v82);
        goto LABEL_69;
      case 1:
        v44 = (void *)*(unsigned __int8 *)sub_D0C7E0((__int64)&v82);
        goto LABEL_69;
      case 2:
        v44 = (void *)*(unsigned __int16 *)sub_D0CBD0((__int64)&v82);
        goto LABEL_69;
      case 3:
        v44 = (void *)*(unsigned __int16 *)sub_D0CDE0((__int64)&v82);
        goto LABEL_69;
      case 4:
        v44 = (void *)*(unsigned int *)sub_D0D1D0((__int64)&v82);
        goto LABEL_69;
      case 5:
        v44 = (void *)*(unsigned int *)sub_D0D3E0((__int64)&v82);
        if ( v44 == v57 )
          goto LABEL_79;
        goto LABEL_70;
      case 6:
        v44 = *(void **)sub_D0D9C0((__int64)&v82);
        goto LABEL_69;
      case 7:
        v44 = *(void **)sub_D0DBD0((__int64)&v82);
        goto LABEL_69;
      case 8:
        v41 = sub_D0E1E0((__int64)&v82);
        v42 = *(_QWORD *)v41;
        LODWORD(v41) = *(_DWORD *)(v41 + 8);
        v70 = v42;
        v71 = v41;
        goto LABEL_62;
      case 9:
        v47 = sub_D0E230((__int64)&v82);
        v48 = *(_DWORD *)(v47 + 8);
        v49 = *(_QWORD *)v47;
        v71 = v48;
        v70 = v49;
LABEL_62:
        sub_D47CB0((__int64)&v72, &v70);
        if ( v73 > 0x40 )
        {
          sub_2206A40(&v74, &v72);
          v44 = v74;
          if ( v75 > 0x40 )
          {
            v43 = v74;
            v44 = *(void **)v74;
LABEL_65:
            v66 = v44;
            operator delete[](v43);
            v44 = v66;
          }
        }
        else
        {
          sub_2206CD0(&v74, &v72, 64);
          v43 = v74;
          v44 = v74;
          if ( v75 > 0x40 )
          {
            v44 = *(void **)v74;
            if ( v74 )
              goto LABEL_65;
          }
        }
        if ( v73 > 0x40 && v72 )
        {
          v67 = v44;
          operator delete[](v72);
          v44 = v67;
        }
LABEL_69:
        if ( v44 != v57 )
        {
LABEL_70:
          if ( !v44 && v65 )
            goto LABEL_34;
          if ( (_BYTE)v77 )
          {
            v45 = v76;
            if ( DWORD2(v76) > 0x40 )
              v45 = *(_QWORD *)v76;
            if ( v45 == v39 - v61 + 1 )
            {
LABEL_34:
              sub_E232A0(&v82);
LABEL_35:
              v28 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
              *(_QWORD *)v28 = 0;
              *(_DWORD *)(v28 + 24) = 1;
              *(_QWORD *)(v28 + 40) = 0;
              *(_QWORD *)(v28 + 32) = 0;
              *(_OWORD *)(v28 + 8) = 0;
              goto LABEL_36;
            }
          }
          ++v39;
          sub_E232A0(&v82);
          if ( v39 )
            continue;
LABEL_77:
          sub_E231E0(&v82, v78);
          goto LABEL_56;
        }
LABEL_79:
        v46 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
        sub_E231E0(v46, &v82);
LABEL_80:
        sub_E232A0(&v82);
LABEL_36:
        sub_E232A0(v78);
        if ( v69 > 0x40 && v68 )
          operator delete[](v68);
        sub_98E4B0((__int64)&v76);
        return v9;
    }
  }
}
