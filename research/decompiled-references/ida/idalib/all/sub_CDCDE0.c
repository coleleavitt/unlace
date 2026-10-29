__int64 __fastcall sub_CDCDE0(_QWORD *a1, __int64 *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r15
  unsigned __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 (__fastcall **v18)(); // r12
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // esi
  int v25; // ebp
  unsigned int v26; // edx
  __int64 (__fastcall **v27)(); // rax
  __int64 (__fastcall *v28)(); // rdi
  __int64 v29; // r15
  unsigned int v30; // ebp
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // ecx
  __int64 (__fastcall **v35)(); // rax
  __int64 (__fastcall *v36)(); // rsi
  int v37; // eax
  int v38; // r15d
  bool v39; // zf
  int v40; // ebp
  __int64 (__fastcall **v41)(); // r10
  int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int v51; // eax
  __int64 v52; // [rsp-10h] [rbp-128h]
  __int64 v53; // [rsp-8h] [rbp-120h]
  unsigned int v54; // [rsp+0h] [rbp-118h]
  unsigned int v55; // [rsp+4h] [rbp-114h]
  _QWORD *v56; // [rsp+28h] [rbp-F0h]
  unsigned int v57; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v58; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v59; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v60; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-C0h]
  unsigned int v63; // [rsp+60h] [rbp-B8h]
  __int64 (__fastcall **v64)(); // [rsp+70h] [rbp-A8h] BYREF
  _QWORD *v65; // [rsp+78h] [rbp-A0h]
  __int64 v66; // [rsp+80h] [rbp-98h]
  __int64 v67; // [rsp+88h] [rbp-90h]
  int v68; // [rsp+90h] [rbp-88h]
  unsigned int v69; // [rsp+94h] [rbp-84h]
  char v70; // [rsp+98h] [rbp-80h]
  __int64 (__fastcall **v71)(); // [rsp+A0h] [rbp-78h] BYREF
  _QWORD *v72; // [rsp+A8h] [rbp-70h]
  __int64 v73; // [rsp+B0h] [rbp-68h]
  __int64 v74; // [rsp+B8h] [rbp-60h]
  __int64 v75; // [rsp+C0h] [rbp-58h]
  __int64 v76; // [rsp+C8h] [rbp-50h]
  int v77; // [rsp+D0h] [rbp-48h]
  __int64 v78; // [rsp+D8h] [rbp-40h]

  v2 = 0;
  v3 = a2[((*a2 & 0x200) != 0) + 3 + ((*a2 & 0x400) != 0)];
  if ( (*(_DWORD *)v3 & 0x40000) != 0 )
    return v2;
  v6 = (unsigned __int64)a2;
  v7 = sub_CE6180(a1[158], *(_QWORD *)(v3 + 8));
  v65 = a1;
  v55 = v7;
  v8 = v7;
  v9 = a1[166];
  a1[166] = &v64;
  v66 = v9;
  v67 = 0;
  v70 = 0;
  v68 = 1;
  v64 = &off_2B4B698;
  v57 = sub_CFF2B0(a1);
  v60 = 0;
  v71 = (__int64 (__fastcall **)())(v3 | 2);
  v54 = sub_CD2220((__int64)a1, (__int64 *)&v71, v8, 1u, 0, 1, 0);
  v11 = *a2;
  v12 = v52;
  if ( (*a2 & 0x200) != 0 )
  {
    v13 = a2[3];
    if ( v13 )
    {
      if ( !(unsigned __int8)sub_CDCBC0((__int64)a1, v13, v52, v53, v10) )
      {
LABEL_11:
        v2 = 0;
        goto LABEL_12;
      }
      v11 = *(_QWORD *)v6;
    }
  }
  if ( (v11 & 0x400) != 0 )
  {
    v14 = *(_QWORD *)(v6 + 8LL * ((v11 & 0x200) != 0) + 24);
    if ( v14 )
    {
      if ( !(unsigned __int8)sub_CD9F60((__int64)a1, v14, 0) )
        goto LABEL_11;
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 48LL))(a1, v3, v12) )
    goto LABEL_11;
  v71 = (__int64 (__fastcall **)())(v6 | 4);
  if ( !(unsigned __int8)sub_D256A0(a1, v8, v54, &v71) )
    goto LABEL_11;
  v15 = sub_EEE140(v6);
  if ( !(unsigned __int8)sub_CD9CA0((__int64)a1, v15) )
    goto LABEL_11;
  v16 = *(_QWORD *)(v6 + 8);
  v63 = 0;
  v61 = 0;
  v62 = 0;
  v58 = v16;
  if ( !v16 )
    goto LABEL_51;
  v17 = v16;
  v18 = (__int64 (__fastcall **)())(v6 | 4);
  v56 = (_QWORD *)v6;
  do
  {
    if ( (*(_WORD *)v17 & 0x1FF) != 0x85 )
    {
      v37 = sub_CFF2B0(a1);
      BYTE4(v60) = 1;
      LODWORD(v60) = v37;
      goto LABEL_26;
    }
    if ( (*(_WORD *)v17 & 0x200) != 0 )
      goto LABEL_29;
    v19 = sub_CFF2B0(a1);
    v24 = v63;
    v25 = v19;
    if ( !v63 )
    {
      v71 = nullptr;
      goto LABEL_38;
    }
    v21 = v58;
    v26 = (v63 - 1) & (((unsigned int)v58 >> 9) ^ ((unsigned int)v58 >> 4));
    v27 = (__int64 (__fastcall **)())(v61 + 16LL * v26);
    v28 = *v27;
    if ( (__int64 (__fastcall *)())v58 == *v27 )
      goto LABEL_20;
    v38 = 1;
    v22 = 0;
    if ( v28 == (__int64 (__fastcall *)())-4096LL )
    {
LABEL_32:
      v71 = v27;
      v20 = (unsigned int)(v62 + 1);
      v23 = (unsigned int)(4 * v20);
      if ( (unsigned int)v23 < 3 * v63 )
      {
        v23 = v63 >> 3;
        if ( v63 - HIDWORD(v62) - (unsigned int)v20 > (unsigned int)v23 )
        {
LABEL_34:
          v39 = (__int64 (__fastcall *)())((char *)*v27 + 4096) == nullptr;
          LODWORD(v62) = v20;
          if ( !v39 )
            --HIDWORD(v62);
          *v27 = (__int64 (__fastcall *)())v21;
          *((_DWORD *)v27 + 2) = 0;
          goto LABEL_20;
        }
LABEL_39:
        sub_CBDEC0(&v61, v24, v20, v21, v22, v23);
        sub_CBA220(&v61, &v58, &v71);
        v21 = v58;
        LODWORD(v20) = v62 + 1;
        v27 = v71;
        goto LABEL_34;
      }
LABEL_38:
      v24 = 2 * v63;
      goto LABEL_39;
    }
    while ( 1 )
    {
      if ( !v22 && v28 == (__int64 (__fastcall *)())-8192LL )
        v22 = (__int64)v27;
      v26 = (v63 - 1) & (v38 + v26);
      v27 = (__int64 (__fastcall **)())(v61 + 16LL * v26);
      v28 = *v27;
      if ( (__int64 (__fastcall *)())v58 == *v27 )
        break;
      if ( v28 == (__int64 (__fastcall *)())-4096LL )
      {
        if ( v22 )
          v27 = (__int64 (__fastcall **)())v22;
        goto LABEL_32;
      }
      ++v38;
    }
LABEL_20:
    v29 = *(_QWORD *)(v17 + 24);
    *((_DWORD *)v27 + 2) = v25;
    v30 = sub_CE6180(a1[158], *(_QWORD *)(v29 + 8));
    v71 = (__int64 (__fastcall **)())(v17 | 4);
    if ( !(unsigned __int8)sub_D32BF0(a1, v55, v54, &v71) )
      goto LABEL_29;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 48LL))(a1, v29) )
      goto LABEL_29;
    v71 = v18;
    if ( !(unsigned __int8)sub_D51B40(a1, v30, &v71) )
      goto LABEL_29;
    v59 = v17;
    if ( !v63 )
    {
      v71 = nullptr;
      goto LABEL_47;
    }
    v33 = v63 - 1;
    v34 = v33 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
    v35 = (__int64 (__fastcall **)())(v61 + 16LL * v34);
    v36 = *v35;
    if ( *v35 == (__int64 (__fastcall *)())v17 )
      goto LABEL_25;
    v40 = 1;
    v41 = nullptr;
    if ( v36 == (__int64 (__fastcall *)())-4096LL )
    {
LABEL_41:
      v71 = v35;
      v31 = (unsigned int)(v62 + 1);
      if ( 4 * (int)v31 < 3 * v63 )
      {
        if ( v63 - HIDWORD(v62) - (unsigned int)v31 > v63 >> 3 )
        {
LABEL_43:
          v39 = (__int64 (__fastcall *)())((char *)*v35 + 4096) == nullptr;
          LODWORD(v62) = v31;
          if ( !v39 )
            --HIDWORD(v62);
          *v35 = (__int64 (__fastcall *)())v17;
          *((_DWORD *)v35 + 2) = 0;
          goto LABEL_25;
        }
        v42 = v63;
LABEL_48:
        sub_CBDEC0(&v61, v42, v63, v31, v32, v33);
        sub_CBA220(&v61, &v59, &v71);
        v17 = v59;
        LODWORD(v31) = v62 + 1;
        v35 = v71;
        goto LABEL_43;
      }
LABEL_47:
      v42 = 2 * v63;
      goto LABEL_48;
    }
    while ( 1 )
    {
      if ( !v41 && v36 == (__int64 (__fastcall *)())-8192LL )
        v41 = v35;
      v32 = (unsigned int)(v40 + 1);
      v34 = v33 & (v40 + v34);
      v35 = (__int64 (__fastcall **)())(v61 + 16LL * v34);
      v36 = *v35;
      if ( *v35 == (__int64 (__fastcall *)())v17 )
        break;
      if ( v36 == (__int64 (__fastcall *)())-4096LL )
      {
        if ( v41 )
          v35 = v41;
        goto LABEL_41;
      }
      ++v40;
    }
LABEL_25:
    if ( !(unsigned __int8)sub_CFF5D0(a1, v35 + 1) )
      goto LABEL_29;
LABEL_26:
    v17 = *(_QWORD *)(v58 + 16);
    v58 = v17;
  }
  while ( v17 );
  v6 = (unsigned __int64)v56;
LABEL_51:
  if ( !BYTE4(v60) )
  {
    if ( (unsigned __int8)sub_CFF6B0(a1, &v57) )
      goto LABEL_53;
    goto LABEL_29;
  }
  if ( !(unsigned __int8)sub_CFF6B0(a1, &v60) )
  {
LABEL_29:
    v2 = 0;
    goto LABEL_30;
  }
LABEL_53:
  v43 = a1[182];
  a1[182] = 0;
  v75 = v43;
  v44 = a1[183];
  v71 = &off_2B4B718;
  v45 = a1[186];
  a1[183] = 0;
  v73 = v45;
  v46 = a1[189];
  *((_BYTE *)a1 + 1492) = 1;
  v74 = v46;
  LODWORD(v46) = *((_DWORD *)a1 + 368);
  *((_DWORD *)a1 + 368) = 0;
  v77 = v46;
  v47 = a1[185];
  v76 = v44;
  v78 = v47;
  v72 = a1;
  *((_DWORD *)a1 + 372) = v57;
  a1[189] = v60;
  operator delete(0, 0, 8);
  v48 = v61;
  v61 = 0;
  a1[182] = v48;
  *((_DWORD *)a1 + 366) = v62;
  LODWORD(v48) = HIDWORD(v62);
  v62 = 0;
  *((_DWORD *)a1 + 367) = v48;
  LODWORD(v48) = v63;
  v63 = 0;
  *((_DWORD *)a1 + 368) = v48;
  v72[185] = v72[166];
  v2 = sub_CDCBC0(
         (__int64)a1,
         *(_QWORD *)(v6 + 8LL * (((*(_QWORD *)v6 & 0x200) != 0) + (unsigned int)((*(_QWORD *)v6 & 0x400) != 0) + 1) + 24),
         (*(_QWORD *)v6 & 0x200) != 0,
         v49,
         v50);
  if ( (_BYTE)v2 )
  {
    sub_CFF2A0(a1, v57);
    if ( v70 )
    {
      v51 = sub_CBB7D0((__int64)&v64, 0);
      v59 = 4;
      v2 = v51;
      sub_CFF770(v65, v69, &v59);
    }
  }
  sub_CAED40((__int64)&v71);
LABEL_30:
  operator delete(v61, 16LL * v63, 8);
LABEL_12:
  sub_CBB4F0((__int64)&v64);
  return v2;
}
