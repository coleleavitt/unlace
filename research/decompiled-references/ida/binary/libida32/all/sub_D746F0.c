__int64 __fastcall sub_D746F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  char v21; // al
  char v22; // r13
  char v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // bl
  char *v32; // rax
  bool v33; // cc
  unsigned int v34; // ebx
  unsigned __int64 v35; // r13
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  char v40; // al
  int v41; // [rsp+10h] [rbp-F8h]
  char v42; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v43; // [rsp+18h] [rbp-F0h]
  unsigned int v44; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v45; // [rsp+18h] [rbp-F0h]
  int v46; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v47; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v48; // [rsp+30h] [rbp-D8h]
  char v49; // [rsp+3Fh] [rbp-C9h]
  char v50; // [rsp+4Fh] [rbp-B9h] BYREF
  void *v51; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v52; // [rsp+58h] [rbp-B0h]
  char v53; // [rsp+5Ch] [rbp-ACh]
  void *v54; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v55; // [rsp+68h] [rbp-A0h]
  char v56; // [rsp+6Ch] [rbp-9Ch]
  void *v57; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v58; // [rsp+78h] [rbp-90h]
  char v59; // [rsp+7Ch] [rbp-8Ch]
  void *v60; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v61; // [rsp+88h] [rbp-80h]
  char v62; // [rsp+8Ch] [rbp-7Ch]
  void *v63; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v64; // [rsp+98h] [rbp-70h]
  char v65; // [rsp+9Ch] [rbp-6Ch]
  _BYTE v66[24]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v67; // [rsp+B8h] [rbp-50h]
  __int64 v68; // [rsp+C0h] [rbp-48h]
  int v69; // [rsp+C8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v5, 48);
  sub_DFF520(v66);
  sub_DFDA50(v5, 48);
  if ( !v67 && v68 && *(_BYTE *)(*(_QWORD *)(v68 + 32) + 61LL) )
  {
    v34 = 0;
    goto LABEL_82;
  }
  v8 = sub_CC2440(
         *(_QWORD *)(a1 + 184),
         *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) + 8LL),
         v6,
         v67,
         v7);
  v41 = sub_CC2440(
          *(_QWORD *)(a1 + 184),
          *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL),
          v9,
          v10,
          v11);
  sub_D67460((__int64)&v51, *(_QWORD *)(a1 + 176), v8);
  v12 = *(_QWORD *)(a1 + 176);
  sub_D67460((__int64)&v54, v12, v41);
  v16 = sub_F44710(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL),
          v12,
          v13,
          v14,
          v15);
  v47 = v16;
  v20 = sub_CC2440(*(_QWORD *)(a1 + 184), v16, v17, v18, v19);
  v59 = 0;
  v46 = v20;
  v58 = 1;
  v57 = nullptr;
  v21 = a3 == 967 || a3 == 1284 || a3 == 115;
  v42 = v21;
  if ( !v21 )
    goto LABEL_29;
  v22 = v56;
  v21 = v53;
  v16 &= 0xFFFFFFFFFFFFFFF0LL;
  if ( !v56 )
  {
    v23 = v42;
    goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v21 )
        {
          v40 = sub_F41500(*(_QWORD *)v16);
          v23 = v40;
          if ( v56 )
          {
            v22 = v40 ^ 1;
          }
          else
          {
            v21 = v53;
            v22 = v23 ^ 1;
LABEL_7:
            if ( !v21 )
              v23 &= sub_F41500(*(_QWORD *)v16) ^ 1;
          }
          v49 = v23;
          v48 = v55;
          v43 = v52;
          v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
          v25 = sub_A73FE0(v24, *(_QWORD *)v16);
          v26 = v43;
          if ( v48 >= v43 )
            v26 = v48;
          if ( v26 <= v25 )
            v26 = v25;
          if ( !v49 )
            goto LABEL_14;
        }
        else
        {
          v35 = v52;
          v45 = v55;
          v36 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
          v37 = sub_A73FE0(v36, *(_QWORD *)v16);
          v38 = v45;
          if ( v35 >= v45 )
            v38 = v35;
          v26 = v38;
          if ( v38 < v37 )
            v26 = v37;
          v22 = 0;
        }
        ++v26;
LABEL_14:
        v16 = (unsigned __int64)&v63;
        v44 = v26;
        if ( v56 )
          sub_21E3050(&v63, &v54, v26);
        else
          sub_21E30A0(&v63, &v54, v26);
        v65 = v22;
        sub_BF5070((__int64)&v54, (__int64)&v63);
        if ( v64 > 0x40 && v63 )
          operator delete[](v63);
        if ( v53 )
          sub_21E3050(&v63, &v51, v44);
        else
          sub_21E30A0(&v63, &v51, v44);
        v65 = v22;
        sub_BF5070((__int64)&v51, (__int64)&v63);
        if ( v64 > 0x40 && v63 )
          operator delete[](v63);
        v64 = v44;
        if ( v44 > 0x40 )
          sub_21E1730(&v63, 0, 0);
        else
          v63 = nullptr;
        v65 = v22;
        v21 = sub_BF5070((__int64)&v57, (__int64)&v63);
        if ( v64 > 0x40 && v63 )
          operator delete[](v63);
LABEL_29:
        if ( a3 > 0x4C4 )
          break;
        if ( a3 >= 0x4C2 )
          goto LABEL_69;
        if ( a3 > 0x47B )
        {
          a3 -= 1205;
          if ( a3 <= 2 )
          {
LABEL_35:
            if ( v56 )
              sub_21E7520(&v63, &v54, &v51, &v50);
            else
              sub_21E60E0(&v63, &v54, &v51, &v50);
            goto LABEL_37;
          }
        }
        else
        {
          if ( a3 >= 0x479 || a3 == 115 )
          {
LABEL_66:
            if ( v56 )
              sub_21E5250(&v63, &v54, &v51, &v50);
            else
              sub_21E5140(&v63, &v54, &v51, &v50);
            goto LABEL_37;
          }
          if ( a3 == 967 )
            goto LABEL_35;
        }
      }
      if ( a3 <= 0x5A2 )
        break;
      a3 -= 1446;
      if ( a3 <= 2 )
        goto LABEL_69;
    }
    if ( a3 >= 0x5A0 )
      goto LABEL_35;
    if ( a3 == 1284 )
      break;
    if ( a3 > 0x59C )
      goto LABEL_66;
  }
LABEL_69:
  if ( v56 )
    sub_21E53C0(&v63, &v54, &v51, &v50);
  else
    sub_21E52D0(&v63, &v54, &v51, &v50);
LABEL_37:
  if ( v58 > 0x40 && v57 )
    operator delete[](v57);
  v57 = v63;
  v58 = v64;
  if ( v42 )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v30 = (unsigned int)sub_A73FE0(v29, *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v59 )
    {
      sub_21E3050(&v63, &v57, v30);
      v62 = 1;
    }
    else
    {
      sub_21E30A0(&v63, &v57, v30);
      v62 = 0;
    }
    v61 = v64;
    v60 = v63;
    v62 = sub_F41500(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL)) ^ 1;
    if ( (unsigned int)sub_96A590((__int64 *)&v60, (__int64 *)&v57) )
      v50 = 1;
    sub_BF5070((__int64)&v57, (__int64)&v60);
    if ( v61 > 0x40 && v60 )
      operator delete[](v60);
  }
  sub_D741C0((_QWORD *)a1, (__int64)v66, v46, (__int64)&v57, v27, v28);
  if ( !v67 && v68 && v69 )
    sub_E00FC0(v66);
  v31 = v50;
  v32 = (char *)sub_DFD980(*(_QWORD *)(a1 + 176), 8);
  v33 = v58 <= 0x40;
  *v32 = v31;
  if ( !v33 && v57 )
    operator delete[](v57);
  if ( v55 > 0x40 && v54 )
    operator delete[](v54);
  if ( v52 > 0x40 && v51 )
    operator delete[](v51);
  v34 = 1;
LABEL_82:
  sub_DFF560(v66);
  return v34;
}

