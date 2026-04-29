__int64 __fastcall sub_68E40(__int64 a1)
{
  int v2; // eax
  int v3; // ecx
  int v4; // r9d
  __int64 v5; // r11
  int v6; // ebx
  int v7; // edi
  int v8; // r10d
  int v9; // r12d
  int v10; // edi
  int v11; // ebx
  int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // cl
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // edi
  int v25; // esi
  int v26; // esi
  __int64 v27; // rdi
  int v28; // ecx
  char v29; // al
  int v30; // eax
  __int16 v31; // ax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  bool v35; // zf
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // ecx
  int v40; // eax
  char v41; // al
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  __int16 v45; // si
  __int64 v46; // rcx
  __int16 v47; // r11
  __int64 v48; // rcx
  int v49; // eax
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rax
  int v54; // ecx
  __int16 v55; // ax
  int v56; // eax
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rax
  char v62; // al
  int v63; // eax
  char v64; // al
  int v65; // eax
  char v66; // al
  int v67; // edi
  __int64 v68; // rsi
  int v69; // ecx
  int v70; // eax
  __int64 v71; // r8
  int v72; // esi
  int v73; // r8d
  int v74; // ecx
  int v75; // esi
  __int64 v76; // rcx
  char v77; // al
  _BOOL8 v78; // rax
  char v79; // al

  v2 = *(_DWORD *)(a1 + 16);
  v3 = v2 >> 5;
  v4 = (v2 >> 1) & 7;
  v5 = (v2 >> 5) & 1;
  v6 = (v2 >> 18) & 3;
  if ( (v2 & 0x710041) == 0x600000 )
  {
    if ( (_DWORD)v5 )
      return 0;
    v32 = v2 >> 12;
    if ( (~(_BYTE)v32 & 0xD) == 0 )
      return 0;
    v37 = *(_QWORD *)(a1 + 8);
    *(_WORD *)(v37 + 46) = v32 & 0xF;
    *(_BYTE *)(v37 + 41) = 1;
    *(_BYTE *)(v37 + 45) = 2;
    v38 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v38 + 81) = 1;
    *(_WORD *)(v38 + 86) = v4 + 45;
    *(_BYTE *)(v38 + 85) = 8;
    v39 = *(_DWORD *)(a1 + 16);
    v27 = *(_QWORD *)(a1 + 8);
    v40 = v39 & 0x10000000;
    if ( v6 == 3 )
    {
      *(_BYTE *)(v27 + 33) = (v40 == 0) - 109;
      v54 = *(_DWORD *)(a1 + 16) & 0x20000;
      if ( (*(_DWORD *)(a1 + 16) & 0x80u) == 0 )
        v55 = (v54 == 0) + 1034;
      else
        v55 = (v54 == 0) + 1036;
      goto LABEL_56;
    }
    if ( v40 )
      v41 = byte_8E218[v6];
    else
      v41 = byte_8E21C[v6];
    if ( v41 )
    {
      *(_BYTE *)(v27 + 33) = v41 | 0x80;
      v39 = *(_DWORD *)(a1 + 16);
      v27 = *(_QWORD *)(a1 + 8);
    }
    v42 = v39 & 0x20000;
    if ( (v39 & 0x80) != 0 )
      v31 = (v42 == 0) + 1032;
    else
      v31 = (v42 == 0) + 1030;
LABEL_25:
    *(_WORD *)(v27 + 24) = v31;
    return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
  }
  v7 = v2 >> 22;
  v8 = (v2 >> 13) & 7;
  if ( (v2 & 0x200040) == 0x40 )
  {
    if ( (((unsigned __int8)v3 | (unsigned __int8)v7) & 1) != 0 )
      return 0;
    v20 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v20 + 41) = 1;
    *(_WORD *)(v20 + 46) = v8 + 45;
    *(_BYTE *)(v20 + 45) = 8;
    v21 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v21 + 81) = 1;
    *(_WORD *)(v21 + 86) = v4 + 45;
    *(_BYTE *)(v21 + 85) = 8;
    v22 = *(_WORD *)(a1 + 18) & 0x1F;
    v23 = v22 >> 3;
    if ( v22 >> 3 == 1 )
    {
      v25 = 16;
    }
    else
    {
      v24 = v23 - 2;
      v25 = 32;
      v23 = 2;
      if ( v24 > 1 )
        return 0;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 121LL) = 5;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) = v25 - v22;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 125LL) = 2;
    v26 = *(_DWORD *)(a1 + 16);
    v27 = *(_QWORD *)(a1 + 8);
    v28 = (v26 >> 28) & 1;
    if ( (v26 & 0x80u) == 0 )
    {
      if ( v28 )
        v64 = byte_8E218[v23];
      else
        v64 = byte_8E21C[v23];
      if ( v64 )
      {
        *(_BYTE *)(v27 + 33) = v64 | 0x80;
        v26 = *(_DWORD *)(a1 + 16);
        v27 = *(_QWORD *)(a1 + 8);
      }
      v65 = v26 & 0x1000;
      if ( (v26 & 1) != 0 )
        v31 = 1040 - ((v65 == 0) - 1);
      else
        v31 = 1038 - ((v65 == 0) - 1);
    }
    else if ( (v26 & 1) != 0 )
    {
      v62 = byte_8E214[v23];
      if ( v62 )
      {
        *(_BYTE *)(v27 + 33) = v62 | 0x80;
        v26 = *(_DWORD *)(a1 + 16);
        v27 = *(_QWORD *)(a1 + 8);
      }
      v63 = v26 & 0x1000;
      if ( v28 )
        v31 = 1048 - ((v63 == 0) - 1);
      else
        v31 = 1046 - ((v63 == 0) - 1);
    }
    else
    {
      v29 = byte_8E21C[v23];
      if ( v29 )
      {
        *(_BYTE *)(v27 + 33) = v29 | 0x80;
        v26 = *(_DWORD *)(a1 + 16);
        v27 = *(_QWORD *)(a1 + 8);
      }
      v30 = v26 & 0x1000;
      if ( v28 )
        v31 = 1044 - ((v30 == 0) - 1);
      else
        v31 = 1042 - ((v30 == 0) - 1);
    }
    goto LABEL_25;
  }
  if ( (v2 & 0x10040) != 0 )
  {
    if ( (v2 & 0x300C1) != (_DWORD)&stru_10000 )
    {
      if ( (v2 & 0x200000) == 0 )
        return 0;
      if ( (v2 & 0x100010E0) == 0xC0 )
      {
        if ( (v7 & 1) != 0 || (~(_BYTE)v2 & 0xD) == 0 )
          return 0;
        v33 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v33 + 41) = 1;
        *(_WORD *)(v33 + 46) = v8 + 45;
        *(_BYTE *)(v33 + 45) = 8;
        v34 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v34 + 86) = v2 & 0xF;
        *(_BYTE *)(v34 + 81) = 1;
        *(_BYTE *)(v34 + 85) = 2;
        v35 = (*(_WORD *)(a1 + 18) & 0x1F) == 0;
        v36 = *(_WORD *)(a1 + 18) & 0x1F;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 121LL) = 5;
        if ( v35 )
          v36 = 32;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) = v36;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 125LL) = 2;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 1059;
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      if ( (v2 & 0xC1) != 0x40 )
        return 0;
      v67 = ((unsigned __int8)v3 | (unsigned __int8)v7) & 1;
      if ( v67 )
        return 0;
      v68 = *(_QWORD *)(a1 + 8);
      v69 = v2;
      v70 = (v2 >> 19) & 3;
      *(_BYTE *)(v68 + 41) = 1;
      *(_WORD *)(v68 + 46) = v8 + 45;
      *(_BYTE *)(v68 + 45) = 8;
      v71 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v71 + 81) = 1;
      *(_WORD *)(v71 + 86) = v4 + 45;
      *(_BYTE *)(v71 + 85) = 8;
      v72 = *(_DWORD *)(a1 + 16);
      v73 = (v72 >> 28) & 1;
      v74 = (v69 >> 16) & 7;
      if ( v74 )
      {
        v75 = 8;
        if ( v70 == 1 )
        {
LABEL_90:
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 121LL) = 5;
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) = (v74 | (8 * v70)) - v75;
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 125LL) = 2;
          v76 = *(_QWORD *)(a1 + 8);
          if ( v73 )
            v77 = byte_8E218[v67];
          else
            v77 = byte_8E21C[v67];
          if ( v77 )
          {
            *(_BYTE *)(v76 + 33) = v77 | 0x80;
            v76 = *(_QWORD *)(a1 + 8);
          }
          *(_WORD *)(v76 + 24) = ((*(_BYTE *)(a1 + 17) & 0x10) != 0) + 991;
          return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
        }
LABEL_88:
        if ( (unsigned int)(v70 - 2) > 1 )
          return 0;
        v75 = 16;
        v67 = 1;
        goto LABEL_90;
      }
      if ( (unsigned int)(v70 - 1) > 1 )
        goto LABEL_88;
      v78 = v70 != 1;
      if ( v73 )
        v79 = byte_8E218[v78];
      else
        v79 = byte_8E21C[v78];
      if ( v79 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v79 | 0x80;
        v72 = *(_DWORD *)(a1 + 16);
      }
      v55 = ((v72 & 0x1000) != 0) + 1060;
LABEL_56:
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v55;
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    v43 = (v2 >> 20) & 7;
    if ( v43 == 7 && v6 == 3 || v43 == 6 )
      return 0;
    v44 = *(_QWORD *)(a1 + 8);
    v45 = v4 + 45;
    *(_WORD *)(v44 + 46) = 2 * v8;
    *(_BYTE *)(v44 + 41) = 1;
    *(_BYTE *)(v44 + 45) = 2;
    v46 = *(_QWORD *)(a1 + 8);
    if ( v43 != 7 )
    {
      *(_BYTE *)(v46 + 81) = 1;
      *(_WORD *)(v46 + 86) = 2 * v43 + 1;
      *(_BYTE *)(v46 + 85) = 2;
      *(_BYTE *)(v46 + 121) = 1;
      *(_WORD *)(v46 + 126) = v45;
      *(_BYTE *)(v46 + 125) = 8;
      v47 = v5 + 1055;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = (*(_DWORD *)(a1 + 16) & 0x10000000) == 0 ? -121 : -117;
      v48 = *(_QWORD *)(a1 + 8);
LABEL_50:
      *(_WORD *)(v48 + 24) = v47;
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    *(_BYTE *)(v46 + 81) = 1;
    *(_WORD *)(v46 + 86) = v45;
    *(_BYTE *)(v46 + 85) = 8;
    v48 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
    {
      v66 = byte_8E218[v6];
      if ( !v66 )
      {
LABEL_81:
        v47 = v5 + 1057;
        goto LABEL_50;
      }
    }
    else
    {
      v66 = byte_8E21C[v6];
      if ( !v66 )
        goto LABEL_81;
    }
    *(_BYTE *)(v48 + 33) = v66 | 0x80;
    v48 = *(_QWORD *)(a1 + 8);
    goto LABEL_81;
  }
  v9 = v2 >> 12;
  v10 = (v2 >> 7) & 1;
  v11 = (v2 >> 17) & 7;
  v12 = (v2 >> 12) & 1;
  if ( (v2 & 0x700001) == 0x700000 )
  {
    if ( !v10 )
    {
      v49 = v2 >> 28;
      v50 = v49 & 1;
      if ( (v12 & v49) == 0 )
      {
        v51 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v51 + 46) = 2 * v8;
        *(_BYTE *)(v51 + 41) = 1;
        *(_BYTE *)(v51 + 45) = 2;
        v52 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v52 + 81) = 1;
        *(_WORD *)(v52 + 86) = v11 + 45;
        *(_BYTE *)(v52 + 85) = 8;
        v53 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v53 + 121) = 1;
        *(_WORD *)(v53 + 126) = v4 + 45;
        *(_BYTE *)(v53 + 125) = 8;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v50 == 0 ? -123 : -119;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = word_8DBD0[2 * v5 + v12];
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
    }
    return 0;
  }
  if ( (~v2 & 0x600000) == 0 )
    return 0;
  if ( (v2 & 1) == 0 )
  {
    if ( !v10 )
    {
      v56 = v2 >> 28;
      v57 = v56 & 1;
      if ( (v12 & v56) == 0 )
      {
        v58 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v58 + 46) = 2 * v8;
        *(_BYTE *)(v58 + 41) = 1;
        *(_BYTE *)(v58 + 45) = 2;
        v59 = *(_QWORD *)(a1 + 8);
        LOWORD(v58) = (*(_DWORD *)(a1 + 16) >> 19) & 0xE;
        *(_BYTE *)(v59 + 81) = 1;
        *(_BYTE *)(v59 + 85) = 2;
        *(_WORD *)(v59 + 86) = v58 + 1;
        v60 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v60 + 121) = 1;
        *(_WORD *)(v60 + 126) = v11 + 45;
        *(_BYTE *)(v60 + 125) = 8;
        v61 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v61 + 161) = 1;
        *(_WORD *)(v61 + 166) = v4 + 45;
        *(_BYTE *)(v61 + 165) = 8;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v57 == 0 ? -121 : -117;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = word_8DBA0[2 * v5 + v12];
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
    }
    return 0;
  }
  v13 = (v2 >> 20) & 3;
  if ( (v2 & 0x400000) != 0
    || (_DWORD)v13 == 3
    || (((unsigned __int8)v3 | (unsigned __int8)(v2 >> 7)) & 1) != 0
    || (~(_BYTE)v9 & 0xD) == 0 )
  {
    return 0;
  }
  v14 = *(_QWORD *)(a1 + 8);
  *(_WORD *)(v14 + 46) = v9 & 0xF;
  *(_BYTE *)(v14 + 41) = 1;
  *(_BYTE *)(v14 + 45) = 2;
  v15 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v15 + 81) = 1;
  *(_WORD *)(v15 + 86) = v11 + 45;
  *(_BYTE *)(v15 + 85) = 8;
  v16 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v16 + 121) = 1;
  *(_WORD *)(v16 + 126) = v4 + 45;
  *(_BYTE *)(v16 + 125) = 8;
  v17 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
    v18 = byte_8E218[v13];
  else
    v18 = byte_8E21C[v13];
  if ( v18 )
  {
    *(_BYTE *)(v17 + 33) = v18 | 0x80;
    v17 = *(_QWORD *)(a1 + 8);
  }
  *(_WORD *)(v17 + 24) = 1054;
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
}
