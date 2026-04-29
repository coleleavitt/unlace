__int64 __fastcall sub_671F0(__int64 a1)
{
  int v2; // eax
  int v3; // r11d
  int v4; // r8d
  int v5; // ebx
  int v6; // r10d
  int v7; // r9d
  int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  char v14; // cl
  char v15; // di
  char v16; // di
  unsigned __int8 v17; // cl
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  char v23; // al
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // si
  char v35; // cl
  int v36; // r9d
  int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rax
  char v42; // al
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // rsi
  char v46; // al
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rsi
  int v53; // edi
  char v54; // cl
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rsi
  char v60; // cl
  __int64 v61; // rsi
  char v62; // cl
  char v63; // di
  __int64 v64; // rsi
  __int64 v65; // rsi
  char v66; // r8
  unsigned __int8 v67; // cl
  __int16 v68; // ax
  __int64 v69; // rsi
  __int64 v70; // rsi
  char v71; // si
  char v72; // di
  __int64 v73; // rcx
  __int64 v74; // rsi
  char v75; // cl
  char v76; // di
  __int64 v77; // rsi
  __int64 v78; // rsi
  char v79; // r8
  unsigned __int8 v80; // cl
  int v81; // ecx
  __int64 v82; // rsi
  __int64 v83; // rsi
  char v84; // si
  char v85; // di
  __int64 v86; // rcx
  __int64 v87; // rsi
  char v88; // cl
  char v89; // di
  __int64 v90; // rsi
  __int64 v91; // rsi
  char v92; // r8
  unsigned __int8 v93; // cl
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // ecx
  __int64 v97; // rsi
  __int64 v98; // rax
  char v99; // al
  __int64 v100; // rsi
  __int64 v101; // r9
  char v102; // cl
  char v103; // di
  unsigned __int8 v104; // cl
  char v105; // si
  __int64 v106; // rcx
  int v107; // ecx
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // rax
  int v111; // ecx
  char v112; // al
  __int64 v113; // rax
  __int64 v114; // rax

  v2 = *(_DWORD *)(a1 + 16);
  v3 = v2 >> 22;
  v4 = v2 >> 7;
  v5 = v2 >> 5;
  v6 = (v2 >> 13) & 7;
  v7 = (v2 >> 17) & 7;
  v8 = (v2 >> 1) & 7;
  v9 = (v2 >> 20) & 3;
  if ( (v2 & 0x10000000) != 0 )
  {
    if ( (_DWORD)v9 != 3 )
    {
      if ( (~v2 & 0x11060) == 0 )
      {
        v10 = ((unsigned __int8)v4 | (unsigned __int8)v3) & 1;
        if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) == 0 )
        {
          if ( (~(_BYTE)v2 & 0xD) != 0 )
          {
            v43 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(v43 + 41) = 1;
            *(_WORD *)(v43 + 46) = v6 + 45;
            *(_BYTE *)(v43 + 45) = 8;
            v44 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(v44 + 81) = 1;
            *(_WORD *)(v44 + 86) = v7 + 45;
            *(_BYTE *)(v44 + 85) = 8;
            v45 = *(_QWORD *)(a1 + 8);
            *(_WORD *)(v45 + 126) = v2 & 0xF;
            v46 = byte_8E210[v9];
            *(_BYTE *)(v45 + 121) = 1;
            *(_BYTE *)(v45 + 125) = 0;
            v47 = *(_QWORD *)(a1 + 8);
            if ( v46 )
            {
              *(_BYTE *)(v47 + 33) = v46 | 0x80;
              v47 = *(_QWORD *)(a1 + 8);
            }
            *(_WORD *)(v47 + 24) = 962;
            return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
          }
          return v10;
        }
        return 0;
      }
      if ( (v2 & 0x10060) == 0x10040 )
        goto LABEL_5;
LABEL_17:
      if ( (v2 & 0x10041) == 0x10001 )
      {
        v10 = 0;
        if ( (((unsigned __int8)v5 | (unsigned __int8)(v3 | v4)) & 1) == 0 )
        {
          v55 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(v55 + 41) = 1;
          *(_WORD *)(v55 + 46) = v6 + 45;
          *(_BYTE *)(v55 + 45) = 8;
          v56 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(v56 + 81) = 1;
          *(_WORD *)(v56 + 86) = v7 + 45;
          *(_BYTE *)(v56 + 85) = 8;
          v57 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(v57 + 121) = 1;
          *(_WORD *)(v57 + 126) = v8 + 45;
          *(_BYTE *)(v57 + 125) = 8;
          v58 = *(_DWORD *)(a1 + 16);
          v59 = *(_QWORD *)(a1 + 8);
          if ( (v58 & 0x10000000) != 0 )
            v60 = byte_8E218[v9];
          else
            v60 = byte_8E21C[v9];
          if ( v60 )
          {
            *(_BYTE *)(v59 + 33) = v60 | 0x80;
            v58 = *(_DWORD *)(a1 + 16);
            v59 = *(_QWORD *)(a1 + 8);
          }
          *(_WORD *)(v59 + 24) = ((v58 & 0x1000) != 0) + 972;
          return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
        }
        return v10;
      }
      if ( (v2 & 0x10041) != (_DWORD)&stru_10000 )
      {
        v10 = v2 & 0x10040;
        if ( (v2 & 0x10040) == 0 )
        {
          if ( (((unsigned __int8)v5 | (unsigned __int8)(v3 | v4)) & 1) == 0 )
          {
            v19 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(v19 + 41) = 1;
            *(_WORD *)(v19 + 46) = v6 + 45;
            *(_BYTE *)(v19 + 45) = 8;
            v20 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(v20 + 81) = 1;
            *(_WORD *)(v20 + 86) = v7 + 45;
            *(_BYTE *)(v20 + 85) = 8;
            v21 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(v21 + 121) = 1;
            *(_WORD *)(v21 + 126) = v8 + 45;
            *(_BYTE *)(v21 + 125) = 8;
            v22 = *(_QWORD *)(a1 + 8);
            v23 = byte_8E21C[v9];
            if ( v23 )
            {
              *(_BYTE *)(v22 + 33) = v23 | 0x80;
              v22 = *(_QWORD *)(a1 + 8);
            }
            *(_WORD *)(v22 + 24) = word_8DBE0[4 * ((*(int *)(a1 + 16) >> 28) & 1)
                                            + 2 * (*(_DWORD *)(a1 + 16) & 1)
                                            + ((*(int *)(a1 + 16) >> 12) & 1)];
            return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
          }
          return v10;
        }
        if ( v10 == 64 )
        {
          v10 = ((unsigned __int8)v4 | (unsigned __int8)v3) & 1;
          if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) != 0 )
            return 0;
          if ( (~(_BYTE)v2 & 0xD) == 0 )
            return v10;
          v74 = *(_QWORD *)(a1 + 8);
          v75 = byte_8E21C[v9];
          v76 = 7;
          *(_BYTE *)(v74 + 41) = 1;
          *(_WORD *)(v74 + 46) = v6 + 45;
          *(_BYTE *)(v74 + 45) = 8;
          v77 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(v77 + 81) = 1;
          *(_WORD *)(v77 + 86) = v7 + 45;
          *(_BYTE *)(v77 + 85) = 8;
          v78 = *(_QWORD *)(a1 + 8);
          if ( v75 )
          {
            v79 = v75;
            v80 = v75 - 1;
            *(_BYTE *)(v78 + 33) = v79 | 0x80;
            v78 = *(_QWORD *)(a1 + 8);
            if ( v80 <= 0x14u )
              v76 = byte_8DB20[v80];
          }
          *(_BYTE *)(v78 + 121) = 1;
          *(_WORD *)(v78 + 126) = v2 & 0xF;
          *(_BYTE *)(v78 + 125) = v76;
          v81 = *(_DWORD *)(a1 + 16) & 0x20;
          if ( (*(_DWORD *)(a1 + 16) & 0x1000) != 0 )
            v68 = (v81 == 0) + 981;
          else
            v68 = v81 == 0 ? 881 : 980;
        }
        else
        {
          v10 = 0;
          if ( (v2 & 0x11060) != (_DWORD)&stru_10060 )
            return v10;
          v10 = ((unsigned __int8)v4 | (unsigned __int8)v3) & 1;
          if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) != 0 )
            return 0;
          if ( (~(_BYTE)v2 & 0xD) == 0 )
            return v10;
          v61 = *(_QWORD *)(a1 + 8);
          v62 = byte_8E21C[v9];
          v63 = 7;
          *(_BYTE *)(v61 + 41) = 1;
          *(_WORD *)(v61 + 46) = v6 + 45;
          *(_BYTE *)(v61 + 45) = 8;
          v64 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(v64 + 81) = 1;
          *(_WORD *)(v64 + 86) = v7 + 45;
          *(_BYTE *)(v64 + 85) = 8;
          v65 = *(_QWORD *)(a1 + 8);
          if ( v62 )
          {
            v66 = v62;
            v67 = v62 - 1;
            *(_BYTE *)(v65 + 33) = v66 | 0x80;
            v65 = *(_QWORD *)(a1 + 8);
            if ( v67 <= 0x14u )
              v63 = byte_8DB20[v67];
          }
          *(_BYTE *)(v65 + 121) = 1;
          *(_WORD *)(v65 + 126) = v2 & 0xF;
          *(_BYTE *)(v65 + 125) = v63;
          v68 = (*(_DWORD *)(a1 + 16) & 0x10000000) == 0 ? 376 : 381;
        }
        goto LABEL_87;
      }
      goto LABEL_66;
    }
LABEL_24:
    v10 = v2 & 0x10040;
    if ( (v2 & 0x10040) == 0 )
    {
      if ( (((unsigned __int8)v5 | (unsigned __int8)(v3 | v4)) & 1) != 0 )
        return v10;
      v24 = (v2 >> 28) & 1;
      if ( !v24 || v6 != v8 && v6 != v7 )
      {
        v25 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v25 + 46) = v6 + 45;
        *(_BYTE *)(v25 + 41) = 1;
        *(_BYTE *)(v25 + 45) = 8;
        v26 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v26 + 86) = v7 + 45;
        *(_BYTE *)(v26 + 81) = 1;
        *(_BYTE *)(v26 + 85) = 8;
        v27 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v27 + 121) = 1;
        *(_WORD *)(v27 + 126) = v8 + 45;
        *(_BYTE *)(v27 + 125) = 8;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 161LL) = 5;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) = 90 * (*(_DWORD *)(a1 + 16) & 1 | (*(_DWORD *)(a1 + 16) >> 11) & 2u);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 165LL) = 2;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = (v24 + 19) | 0x80;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 963;
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      return 0;
    }
    if ( (v2 & 0xF00C1) == 0xF0001 )
    {
      v10 = 0;
      if ( (((unsigned __int8)v3 | (unsigned __int8)v5) & 1) == 0 )
      {
        v31 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v31 + 46) = v6 + 45;
        *(_BYTE *)(v31 + 41) = 1;
        *(_BYTE *)(v31 + 45) = 8;
        v32 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v32 + 81) = 1;
        *(_WORD *)(v32 + 86) = v8 + 45;
        *(_BYTE *)(v32 + 85) = 8;
        v33 = *(_QWORD *)(a1 + 8);
        if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
        {
          v34 = -108;
          v35 = 19;
        }
        else
        {
          v34 = -109;
          v35 = 20;
        }
        *(_BYTE *)(v33 + 33) = v34;
        *(_BYTE *)(v33 + 72) = v35;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = ((*(_BYTE *)(a1 + 17) & 0x10) != 0) + 327;
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      return v10;
    }
    if ( (v2 & 0x10060) == 0x10040 )
    {
      v10 = ((unsigned __int8)v4 | (unsigned __int8)v3) & 1;
      if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) == 0 )
      {
        if ( (~(_BYTE)v2 & 0xD) != 0 )
        {
          v82 = *(_QWORD *)(a1 + 8);
          *(_WORD *)(v82 + 46) = v6 + 45;
          *(_BYTE *)(v82 + 41) = 1;
          *(_BYTE *)(v82 + 45) = 8;
          v83 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(v83 + 81) = 1;
          *(_WORD *)(v83 + 86) = v7 + 45;
          *(_BYTE *)(v83 + 85) = 8;
          if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
          {
            v84 = -109;
            v85 = 18;
          }
          else
          {
            v84 = -108;
            v85 = 3;
          }
          v86 = *(_QWORD *)(a1 + 8);
          *(_WORD *)(v86 + 126) = v2 & 0xF;
          *(_BYTE *)(v86 + 121) = 1;
          *(_BYTE *)(v86 + 125) = v85;
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v84;
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = (*(_DWORD *)(a1 + 16) & 0x1000) == 0 ? 333 : 964;
          return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
        }
        return v10;
      }
      return 0;
    }
    if ( (v2 & 0x300C1) == 0x30081 )
    {
      v10 = 0;
      if ( (((unsigned __int8)v3 | (unsigned __int8)v5) & 1) != 0 )
        return v10;
      v94 = *(_QWORD *)(a1 + 8);
      *(_WORD *)(v94 + 46) = v6 + 45;
      *(_BYTE *)(v94 + 41) = 1;
      *(_BYTE *)(v94 + 45) = 8;
      v95 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v95 + 81) = 1;
      *(_WORD *)(v95 + 86) = v8 + 45;
      *(_BYTE *)(v95 + 85) = 8;
      v96 = *(_DWORD *)(a1 + 16);
      v97 = *(_QWORD *)(a1 + 8);
      v98 = (v96 >> 18) & 3;
      if ( (_DWORD)v98 == 3 )
      {
        *(_BYTE *)(v97 + 33) = ((v96 & 0x10000000) == 0) - 109;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = (*(_DWORD *)(a1 + 16) & 0x1000) == 0 ? 966 : 968;
      }
      else
      {
        v99 = byte_8E21C[v98];
        if ( v99 )
        {
          *(_BYTE *)(v97 + 33) = v99 | 0x80;
          v96 = *(_DWORD *)(a1 + 16);
          v97 = *(_QWORD *)(a1 + 8);
        }
        *(_WORD *)(v97 + 24) = (v96 & 0x1000) == 0 ? 965 : 967;
      }
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    if ( (v2 & 0x10000000) != 0 )
    {
      if ( (~v2 & 0xC0000) == 0 )
      {
        if ( (v2 & 0x11060) != (_DWORD)&stru_10060 )
        {
          if ( (v2 & 0x10041) != (_DWORD)&stru_10000 )
            return 0;
          goto LABEL_66;
        }
        goto LABEL_88;
      }
      if ( (v2 & 0x300C1) == 0x10081 )
      {
        v10 = ((unsigned __int8)v5 | (unsigned __int8)v3) & 1;
        if ( (((unsigned __int8)v5 | (unsigned __int8)v3) & 1) == 0 )
        {
          v28 = (v2 >> 18) & 3;
          if ( v28 != 2 )
          {
            v29 = *(_QWORD *)(a1 + 8);
            *(_WORD *)(v29 + 46) = v6 + 45;
            *(_BYTE *)(v29 + 41) = 1;
            *(_BYTE *)(v29 + 45) = 8;
            v30 = *(_QWORD *)(a1 + 8);
            *(_BYTE *)(v30 + 81) = 1;
            *(_WORD *)(v30 + 86) = v8 + 45;
            *(_BYTE *)(v30 + 85) = 8;
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = -114 - ((v28 == 0) - 1);
            *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = ((*(_BYTE *)(a1 + 17) & 0x10) != 0) + 970;
            return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
          }
          return v10;
        }
        return 0;
      }
    }
    if ( (v2 & 0x11060) != (_DWORD)&stru_10060 )
    {
      if ( (v2 & 0x10041) != (_DWORD)&stru_10000 )
      {
        v10 = 0;
        v36 = v2 >> 18;
        v37 = (v2 >> 18) & 3;
        if ( v37 == 3 )
          return v10;
        v10 = v2 & 0x10000;
        if ( (v2 & 0x10000) == 0 )
          return v10;
        if ( (~(_WORD)v2 & 0x1060) != 0 )
        {
          if ( (v2 & 0x200C1) == 0x20001 )
          {
            if ( (((unsigned __int8)v3 | (unsigned __int8)v5) & 1) == 0 && v37 != 2 )
            {
              v108 = *(_QWORD *)(a1 + 8);
              v109 = v37 + 1;
              *(_WORD *)(v108 + 46) = v6 + 45;
              *(_BYTE *)(v108 + 41) = 1;
              *(_BYTE *)(v108 + 45) = 8;
              v110 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(v110 + 81) = 1;
              *(_WORD *)(v110 + 86) = v8 + 45;
              *(_BYTE *)(v110 + 85) = 8;
              v111 = *(_DWORD *)(a1 + 16);
              if ( (v111 & 0x10000000) != 0 )
                v112 = byte_8E218[v109];
              else
                v112 = byte_8E21C[v109];
              if ( v112 )
              {
                *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v112 | 0x80;
                v111 = *(_DWORD *)(a1 + 16);
              }
              *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = ((v111 & 0x1000) != 0) + 987;
              return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
            }
          }
          else
          {
            if ( (v2 & 0x100200C1) == 0x81 )
            {
              v10 = 0;
              if ( (((unsigned __int8)v3 | (unsigned __int8)v5) & 1) == 0 )
              {
                v113 = *(_QWORD *)(a1 + 8);
                *(_WORD *)(v113 + 46) = v6 + 45;
                *(_BYTE *)(v113 + 41) = 1;
                *(_BYTE *)(v113 + 45) = 8;
                v114 = *(_QWORD *)(a1 + 8);
                *(_BYTE *)(v114 + 81) = 1;
                *(_WORD *)(v114 + 86) = v8 + 45;
                *(_BYTE *)(v114 + 85) = 8;
                *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = (6 - ((v37 == 0) - 1)) | 0x80;
                *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = ((*(_BYTE *)(a1 + 17) & 0x10) != 0) + 989;
                return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
              }
              return v10;
            }
            v10 = 0;
            if ( (v2 & 0x200C1) != 1 )
              return v10;
            if ( v37 != 2 && (((unsigned __int8)v3 | (unsigned __int8)v5) & 1) == 0 )
            {
              v38 = *(_QWORD *)(a1 + 8);
              *(_WORD *)(v38 + 46) = v6 + 45;
              *(_BYTE *)(v38 + 41) = 1;
              *(_BYTE *)(v38 + 45) = 8;
              v39 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(v39 + 81) = 1;
              *(_WORD *)(v39 + 86) = v8 + 45;
              *(_BYTE *)(v39 + 85) = 8;
              *(_BYTE *)(*(_QWORD *)(a1 + 8) + 121LL) = 5;
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) = (unsigned int)(8 * v37 + 8);
              *(_BYTE *)(*(_QWORD *)(a1 + 8) + 125LL) = 2;
              v40 = *(_DWORD *)(a1 + 16);
              v41 = v36 & 3;
              if ( (v40 & 0x10000000) != 0 )
                v42 = byte_8E218[v41];
              else
                v42 = byte_8E21C[v41];
              if ( v42 )
              {
                *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v42 | 0x80;
                v40 = *(_DWORD *)(a1 + 16);
              }
              *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 992 - ((v40 & 0x1000) == 0);
              return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
            }
          }
          return 0;
        }
        v10 = (v2 >> 22) & 1;
        if ( (v3 & 1) != 0 )
          return 0;
        if ( (~(_BYTE)v2 & 0xD) == 0 )
          return v10;
        v100 = *(_QWORD *)(a1 + 8);
        v101 = v36 & 3;
        *(_BYTE *)(v100 + 41) = 1;
        *(_WORD *)(v100 + 46) = v6 + 45;
        *(_BYTE *)(v100 + 45) = 8;
        if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
          v102 = byte_8E218[v101];
        else
          v102 = byte_8E21C[v101];
        if ( v102 && (v103 = v102, v104 = v102 - 1, *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v103 | 0x80, v104 <= 0x14u) )
          v105 = byte_8DB20[v104];
        else
          v105 = 7;
        v106 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v106 + 86) = v2 & 0xF;
        *(_BYTE *)(v106 + 81) = 1;
        *(_BYTE *)(v106 + 85) = v105;
        v107 = *(_DWORD *)(a1 + 16) & 0x80;
        if ( (*(_DWORD *)(a1 + 16) & 0x20000) != 0 )
        {
          v68 = 382;
          if ( !v107 )
            v68 = 397;
        }
        else
        {
          v68 = 385;
          if ( !v107 )
            v68 = 404;
        }
LABEL_87:
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v68;
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
LABEL_66:
      v10 = 0;
      if ( (((unsigned __int8)v5 | (unsigned __int8)(v3 | v4)) & 1) == 0 )
      {
        v48 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v48 + 41) = 1;
        *(_WORD *)(v48 + 46) = v6 + 45;
        *(_BYTE *)(v48 + 45) = 8;
        v49 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v49 + 81) = 1;
        *(_WORD *)(v49 + 86) = v7 + 45;
        *(_BYTE *)(v49 + 85) = 8;
        v50 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v50 + 126) = v8 + 45;
        *(_BYTE *)(v50 + 121) = 1;
        *(_BYTE *)(v50 + 125) = 8;
        v51 = *(_DWORD *)(a1 + 16);
        v52 = *(_QWORD *)(a1 + 8);
        v53 = v51 & 0x10000000;
        if ( (_DWORD)v9 == 3 )
        {
          *(_BYTE *)(v52 + 33) = -111 - ((v53 == 0) - 1);
          v51 = *(_DWORD *)(a1 + 16);
          v52 = *(_QWORD *)(a1 + 8);
        }
        else
        {
          if ( v53 )
            v54 = byte_8E218[v9];
          else
            v54 = byte_8E21C[v9];
          if ( v54 )
          {
            *(_BYTE *)(v52 + 33) = v54 | 0x80;
            v51 = *(_DWORD *)(a1 + 16);
            v52 = *(_QWORD *)(a1 + 8);
          }
        }
        *(_WORD *)(v52 + 24) = ((v51 & 0x1000) != 0) + 974;
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      return v10;
    }
LABEL_88:
    v10 = ((unsigned __int8)v4 | (unsigned __int8)v3) & 1;
    if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) == 0 )
    {
      if ( (~(_BYTE)v2 & 0xD) != 0 )
      {
        v69 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v69 + 46) = v6 + 45;
        *(_BYTE *)(v69 + 41) = 1;
        *(_BYTE *)(v69 + 45) = 8;
        v70 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v70 + 81) = 1;
        *(_WORD *)(v70 + 86) = v7 + 45;
        *(_BYTE *)(v70 + 85) = 8;
        if ( (*(_BYTE *)(a1 + 19) & 0x10) != 0 )
        {
          v71 = -109;
          v72 = 18;
        }
        else
        {
          v71 = -108;
          v72 = 3;
        }
        v73 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v73 + 126) = v2 & 0xF;
        *(_BYTE *)(v73 + 121) = 1;
        *(_BYTE *)(v73 + 125) = v72;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v71;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 356;
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      return v10;
    }
    return 0;
  }
  if ( (_DWORD)v9 == 3 )
    goto LABEL_24;
  if ( (v2 & 0x10060) != 0x10040 )
  {
    if ( (~v2 & 0x11060) == 0 )
    {
      v10 = ((unsigned __int8)v4 | (unsigned __int8)v3) & 1;
      if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) == 0 )
      {
        if ( (~(_BYTE)v2 & 0xD) != 0 )
        {
          v87 = *(_QWORD *)(a1 + 8);
          v88 = byte_8E214[v9];
          v89 = 7;
          *(_BYTE *)(v87 + 41) = 1;
          *(_WORD *)(v87 + 46) = v6 + 45;
          *(_BYTE *)(v87 + 45) = 8;
          v90 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(v90 + 81) = 1;
          *(_WORD *)(v90 + 86) = v7 + 45;
          *(_BYTE *)(v90 + 85) = 8;
          v91 = *(_QWORD *)(a1 + 8);
          if ( v88 )
          {
            v92 = v88;
            v93 = v88 - 1;
            *(_BYTE *)(v91 + 33) = v92 | 0x80;
            v91 = *(_QWORD *)(a1 + 8);
            if ( v93 <= 0x14u )
              v89 = byte_8DB20[v93];
          }
          *(_BYTE *)(v91 + 121) = 1;
          *(_WORD *)(v91 + 126) = v2 & 0xF;
          *(_BYTE *)(v91 + 125) = v89;
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 356;
          return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
        }
        return v10;
      }
      return 0;
    }
    goto LABEL_17;
  }
LABEL_5:
  v10 = ((unsigned __int8)v4 | (unsigned __int8)v3) & 1;
  if ( (((unsigned __int8)v4 | (unsigned __int8)v3) & 1) == 0 )
  {
    if ( (~(_BYTE)v2 & 0xD) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v11 + 41) = 1;
      *(_WORD *)(v11 + 46) = v6 + 45;
      *(_BYTE *)(v11 + 45) = 8;
      v12 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v12 + 81) = 1;
      *(_WORD *)(v12 + 86) = v7 + 45;
      *(_BYTE *)(v12 + 85) = 8;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = (*(_DWORD *)(a1 + 16) & 0x1000) == 0 ? 347 : 969;
      v13 = *(_QWORD *)(a1 + 8);
      if ( *(_WORD *)(v13 + 24) == 347 )
      {
        v14 = byte_8E214[v9];
        v15 = 7;
        if ( v14 )
        {
LABEL_9:
          v16 = v14;
          v17 = v14 - 1;
          *(_BYTE *)(v13 + 33) = v16 | 0x80;
          v13 = *(_QWORD *)(a1 + 8);
          if ( v17 > 0x14u )
            v15 = 7;
          else
            v15 = byte_8DB20[v17];
        }
      }
      else
      {
        v14 = byte_8E21C[v9];
        v15 = 7;
        if ( v14 )
          goto LABEL_9;
      }
      *(_BYTE *)(v13 + 121) = 1;
      *(_WORD *)(v13 + 126) = v2 & 0xF;
      *(_BYTE *)(v13 + 125) = v15;
      return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
    }
    return v10;
  }
  return 0;
}
