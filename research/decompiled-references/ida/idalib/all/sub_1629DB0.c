char __fastcall sub_1629DB0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  int v5; // r13d
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // r13
  __int64 *v13; // r12
  __int64 *v14; // rbp
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rcx
  char result; // al
  int v21; // eax
  unsigned __int64 v22; // rax
  int v23; // r13d
  __int64 v24; // rax
  unsigned __int8 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r15d
  unsigned __int8 v30; // al
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int8 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  _QWORD *v41; // rbx
  int v42; // r14d
  unsigned __int8 v43; // al
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r12
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // rax
  __int64 v59; // [rsp+8h] [rbp-50h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  _QWORD *v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+8h] [rbp-50h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+10h] [rbp-48h]
  __int64 v66; // [rsp+10h] [rbp-48h]
  unsigned __int64 v67; // [rsp+18h] [rbp-40h]

  v3 = a2;
  v5 = *(_DWORD *)(sub_168B6E0(a1) + 176);
  if ( v5 != *(_DWORD *)(sub_168B6E0(a1) + 184)
    || (v23 = *(_DWORD *)(sub_168B6E0(a1) + 180), v23 != *(_DWORD *)(sub_168B6E0(a1) + 188)) )
  {
    a2 = 1;
    v6 = sub_15F1640(*a1, 1);
    v9 = v6;
    if ( v6 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v10 + 16) == 26 )
      {
        v11 = *(unsigned __int8 *)(v10 + 19);
        if ( (v11 & 0x40) == 0 )
        {
LABEL_5:
          a2 = 1;
          v12 = sub_B7B300(v9, 1, v11, v8);
          goto LABEL_6;
        }
      }
      else
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v11 + 16) != 26 )
          goto LABEL_5;
        v10 = sub_F63050(v10, 1, v11, v8);
        if ( !v10 )
          goto LABEL_5;
        v11 = *(unsigned __int8 *)(v10 + 19);
        if ( (v11 & 0x40) == 0 )
          goto LABEL_5;
      }
      v8 = *(unsigned __int16 *)(v10 + 22);
      v11 = (((char)v11 >> 5) & 4) + 8 * v8 + 48;
      v22 = (v10 + v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v22 + 1) & 4) != 0 && (*(_BYTE *)(v22 + 8) & 2) != 0 )
        return 0;
      goto LABEL_5;
    }
  }
  v12 = 0;
LABEL_6:
  v13 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *v14;
  v16 = *(_QWORD *)(*v13 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)v16;
  if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) != 13 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v21) = *(_BYTE *)(v18 + 16);
    goto LABEL_17;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v15 + 16) - 57 <= 1 )
    goto LABEL_8;
  v59 = *(_QWORD *)v16;
  v18 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(unsigned __int8 *)(v18 + 16);
  v7 = (unsigned int)(v21 - 57);
  if ( (unsigned int)v7 > 1 )
  {
LABEL_17:
    if ( (_BYTE)v21 != 13 )
      return 0;
    goto LABEL_11;
  }
  v24 = sub_F63050(v15, a2, v7, v17);
  v17 = v59;
  v15 = v24;
  if ( !v24 )
    goto LABEL_10;
LABEL_8:
  if ( ((*(_BYTE *)(v15 + 18) >> 3) & 0xF) == 0 || ((*(_BYTE *)(v15 + 18) >> 3) & 0xF) == 6 )
  {
    v60 = v17;
    v25 = *(_BYTE *)(sub_168B6E0(a1) + 200);
    v26 = sub_168B6C0(a1);
    v27 = v60;
    v28 = v26;
    v29 = v25 >> 6;
    v30 = *(_BYTE *)(v15 + 18);
    if ( ((*(_WORD *)(v60 + 18) >> 3) & 0x1FF) == 0x64 )
    {
      v31 = (v30 >> 3) & 0xF;
      if ( v31 == 6 )
        goto LABEL_10;
    }
    else
    {
      v31 = (v30 >> 3) & 0xF;
    }
    if ( v31 )
      goto LABEL_33;
    a2 = *v14;
    v64 = v60;
    v63 = v28;
    v49 = sub_A97D20(v28, *v14);
    v28 = v63;
    v50 = v49;
    v51 = *(_QWORD *)(v63 + 2320);
    if ( v12 )
      v52 = *(unsigned int *)(v51 + 184);
    else
      v52 = *(unsigned int *)(v51 + 176);
    v27 = v52 << 7;
    v7 = (*(_WORD *)(v64 + 18) >> 3) & 0x1FF;
    if ( (_DWORD)v7 == 100 || (_DWORD)v7 == 103 )
    {
      v67 = v52 << 7;
      v65 = v50;
      v53 = sub_A97D20(v63, *(_QWORD *)(*(_QWORD *)(v63 + 18648) & 0xFFFFFFFFFFFFFFF0LL));
      v50 = v65;
      a2 = v53;
      v28 = v63;
      v7 = v67 % v53;
      v27 = v67 / v53;
    }
    if ( v50 == v27 )
    {
LABEL_33:
      if ( v29 == 2 )
        return 1;
      if ( v29 == 1 )
      {
        v61 = (_QWORD *)v28;
        if ( sub_9EC890(
               *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
               a2,
               v7,
               v27,
               v28) )
        {
          a2 = (__int64)v61;
          v32 = sub_F583D0(*v13, v61);
          result = sub_9EC890(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v61, v33, v34, v35);
          if ( result )
            return result;
        }
      }
    }
  }
LABEL_10:
  v18 = *(_QWORD *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v18 + 16) != 13 )
    return 0;
LABEL_11:
  v19 = *v13;
  if ( (unsigned int)*(unsigned __int8 *)(*v13 + 16) - 57 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
      return 0;
    v19 = sub_F63050(*v13, a2, v7, v19);
    if ( !v19 )
      return 0;
  }
  if ( ((*(_BYTE *)(v19 + 18) >> 3) & 0xF) != 6 && ((*(_BYTE *)(v19 + 18) >> 3) & 0xF) != 0 )
    return 0;
  v62 = v19;
  v36 = *(_BYTE *)(sub_168B6E0(a1) + 200);
  v37 = sub_168B6C0(a1);
  v40 = v62;
  v41 = (_QWORD *)v37;
  v42 = v36 >> 6;
  v43 = *(_BYTE *)(v62 + 18);
  if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x64 )
  {
    v44 = (v43 >> 3) & 0xF;
    if ( v44 != 6 )
      goto LABEL_40;
    return 0;
  }
  v44 = (v43 >> 3) & 0xF;
LABEL_40:
  if ( !v44 )
  {
    a2 = *v13;
    v54 = sub_A97D20((__int64)v41, *v13);
    v40 = v62;
    v39 = v54;
    v55 = v41[290];
    v56 = v12 ? *(unsigned int *)(v55 + 184) : *(unsigned int *)(v55 + 176);
    v57 = v56 << 7;
    v38 = (*(_WORD *)(v18 + 18) >> 3) & 0x1FF;
    if ( (_DWORD)v38 == 103 || (_DWORD)v38 == 100 )
    {
      v66 = v39;
      v58 = sub_A97D20((__int64)v41, *(_QWORD *)(v41[2331] & 0xFFFFFFFFFFFFFFF0LL));
      v39 = v66;
      v40 = v62;
      a2 = v58;
      v38 = v57 % v58;
      v57 /= v58;
    }
    if ( v39 != v57 )
      return 0;
  }
  if ( v42 == 2 )
    return 1;
  if ( v42 != 1 )
    return 0;
  if ( !sub_9EC890(
          *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v40 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          v38,
          v40,
          v39) )
    return 0;
  v45 = sub_F583D0(*v14, v41);
  result = sub_9EC890(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v41, v46, v47, v48);
  if ( !result )
    return 0;
  return result;
}
