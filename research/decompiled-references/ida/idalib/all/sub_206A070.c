__int64 __fastcall sub_206A070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // edi
  _DWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int *v16; // rcx
  _DWORD *v17; // r8
  unsigned int v18; // esi
  __int64 v19; // rax
  _DWORD *v20; // rdi
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int *v24; // rcx
  unsigned int v25; // edx
  int v26; // r13d
  __int64 v27; // r14
  int v28; // r12d
  __int64 v29; // rbx
  __int64 v30; // r15
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  char v36; // r13
  __int64 v37; // r14
  unsigned int v38; // esi
  __int64 v39; // r8
  _DWORD *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int *v43; // rcx
  unsigned __int64 v44; // rdx
  _DWORD *v45; // r8
  unsigned int v46; // esi
  _DWORD *v47; // rdi
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned int *v51; // rcx
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rsi
  int v55; // r13d
  __int64 v56; // r14
  char v57; // r13
  _DWORD *v58; // r8
  unsigned int v59; // esi
  _DWORD *v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned int *v64; // r9
  char v65; // r12
  _DWORD *v66; // r8
  unsigned int v67; // esi
  _DWORD *v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int *v72; // r9
  int v73; // r12d
  __int64 v74; // r10
  unsigned int v75; // r10d
  __int64 v76; // r9
  __int64 v77; // r8
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // r12
  __int64 v82; // rdx
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // rax
  __int64 v86; // r13
  char v87; // r12
  _DWORD *v88; // r8
  unsigned int v89; // esi
  _DWORD *v90; // rdi
  __int64 v91; // r9
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned int *v94; // rcx
  __int64 v95; // r15
  unsigned int v96; // r12d
  __int64 v97; // rax
  __int64 v98; // r8
  unsigned int v99; // esi
  __int64 v100; // rdi
  __int64 v101; // rax
  unsigned int *v102; // r9
  __int64 v103; // [rsp+8h] [rbp-50h]

  v7 = a2;
  v8 = *(unsigned __int8 *)(a2 + 8);
  switch ( *(_BYTE *)(a2 + 8) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      while ( 2 )
      {
        switch ( v8 )
        {
          case 0LL:
          case 1LL:
            v38 = 16;
            goto LABEL_39;
          case 2LL:
            v38 = 32;
            goto LABEL_39;
          case 3LL:
            v38 = 64;
            goto LABEL_39;
          case 4LL:
            v38 = 80;
            goto LABEL_39;
          case 5LL:
          case 6LL:
            v38 = 128;
            goto LABEL_39;
          case 7LL:
          case 9LL:
          case 11LL:
          case 13LL:
          case 19LL:
          case 20LL:
            v7 = sub_20C5D00(v7);
            v8 = *(unsigned __int8 *)(v7 + 8);
            continue;
          case 8LL:
            v38 = *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4LL);
            goto LABEL_39;
          case 10LL:
            v38 = 0x2000;
            goto LABEL_39;
          case 12LL:
            v38 = *(_DWORD *)(v7 + 8) >> 8;
            goto LABEL_39;
          case 14LL:
            v45 = *(_DWORD **)(a1 + 272);
            v46 = *(_DWORD *)(v7 + 8) >> 8;
            if ( !v46 )
              goto LABEL_60;
            v47 = *(_DWORD **)(a1 + 272);
            v48 = 5LL * *(unsigned int *)(a1 + 280);
            v49 = *(unsigned int *)(a1 + 280);
            if ( !(v48 * 4) )
              goto LABEL_57;
            do
            {
              while ( 1 )
              {
                v50 = v49 >> 1;
                v51 = &v47[5 * (v49 >> 1)];
                if ( v46 <= *v51 )
                  break;
                v47 = v51 + 5;
                v49 = v49 - v50 - 1;
                if ( v49 <= 0 )
                  goto LABEL_57;
              }
              v49 >>= 1;
            }
            while ( v50 );
LABEL_57:
            if ( v47 != &v45[v48] && v46 == *v47 )
              v45 = v47;
LABEL_60:
            v38 = v45[1];
            goto LABEL_39;
          case 15LL:
            v38 = 8 * *(_QWORD *)sub_2069970(a1, v7, a3, v8, a5, a6);
            goto LABEL_39;
          case 16LL:
            v30 = *(_QWORD *)(v7 + 24);
            v31 = sub_2067E70(a1, v30, 1);
            v35 = v31;
            v36 = v31;
            v37 = 1LL << v31;
            while ( 2 )
            {
              switch ( *(_BYTE *)(v30 + 8) )
              {
                case 0:
                case 1:
                  v53 = 16;
                  goto LABEL_62;
                case 2:
                  v53 = 32;
                  goto LABEL_62;
                case 3:
                  v53 = 64;
                  goto LABEL_62;
                case 4:
                  v53 = 80;
                  goto LABEL_62;
                case 5:
                case 6:
                  v53 = 128;
                  goto LABEL_62;
                case 7:
                case 9:
                case 0xB:
                case 0xD:
                case 0x13:
                case 0x14:
                  v30 = sub_20C5D00(v30);
                  continue;
                case 8:
                  v53 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4LL);
                  goto LABEL_62;
                case 0xA:
                  v53 = 0x2000;
                  goto LABEL_62;
                case 0xC:
                  v53 = *(_DWORD *)(v30 + 8) >> 8;
                  goto LABEL_62;
                case 0xE:
                  v66 = *(_DWORD **)(a1 + 272);
                  v67 = *(_DWORD *)(v30 + 8) >> 8;
                  if ( !v67 )
                    goto LABEL_91;
                  v68 = *(_DWORD **)(a1 + 272);
                  v69 = 5LL * *(unsigned int *)(a1 + 280);
                  v70 = 0xCCCCCCCCCCCCCCCDLL * ((20LL * *(unsigned int *)(a1 + 280)) >> 2);
                  if ( !(v69 * 4) )
                    goto LABEL_88;
                  break;
                case 0xF:
                  v53 = 8LL * *(_QWORD *)sub_2069970(a1, v30, v32, v35, v33, v34);
                  goto LABEL_62;
                case 0x10:
                  v103 = *(_QWORD *)(v30 + 24);
                  v65 = sub_2067E70(a1, v103, 1);
                  v53 = 8
                      * *(_QWORD *)(v30 + 32)
                      * (((1LL << v65) + ((unsigned __int64)(sub_200E290(a1, v103) + 7) >> 3) - 1) >> v65 << v65);
                  goto LABEL_62;
                case 0x11:
                case 0x12:
                  v52 = *(unsigned int *)(v30 + 32);
                  v53 = sub_200E290(a1, *(_QWORD *)(v30 + 24)) * v52;
                  goto LABEL_62;
              }
              break;
            }
            do
            {
              while ( 1 )
              {
                v71 = v70 >> 1;
                v72 = &v68[5 * (v70 >> 1)];
                if ( v67 <= *v72 )
                  break;
                v68 = v72 + 5;
                v70 = v70 - v71 - 1;
                if ( v70 <= 0 )
                  goto LABEL_88;
              }
              v70 >>= 1;
            }
            while ( v71 );
LABEL_88:
            if ( v68 != &v66[v69] && v67 == *v68 )
              v66 = v68;
LABEL_91:
            v53 = (unsigned int)v66[1];
LABEL_62:
            v38 = 8 * *(_DWORD *)(v7 + 32) * ((v37 + ((unsigned __int64)(v53 + 7) >> 3) - 1) >> v36 << v36);
            goto LABEL_39;
          case 17LL:
          case 18LL:
            v28 = *(_DWORD *)(v7 + 32);
            v29 = *(_QWORD *)(v7 + 24);
            while ( 2 )
            {
              switch ( *(_BYTE *)(v29 + 8) )
              {
                case 0:
                case 1:
                  LODWORD(v54) = 16;
                  goto LABEL_64;
                case 2:
                  LODWORD(v54) = 32;
                  goto LABEL_64;
                case 3:
                  LODWORD(v54) = 64;
                  goto LABEL_64;
                case 4:
                  LODWORD(v54) = 80;
                  goto LABEL_64;
                case 5:
                case 6:
                  LODWORD(v54) = 128;
                  goto LABEL_64;
                case 8:
                  LODWORD(v54) = *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4LL);
                  goto LABEL_64;
                case 0xA:
                  LODWORD(v54) = 0x2000;
                  goto LABEL_64;
                case 0xC:
                  LODWORD(v54) = *(_DWORD *)(v29 + 8) >> 8;
                  goto LABEL_64;
                case 0xE:
                  v58 = *(_DWORD **)(a1 + 272);
                  v59 = *(_DWORD *)(v29 + 8) >> 8;
                  if ( !v59 )
                    goto LABEL_82;
                  v60 = *(_DWORD **)(a1 + 272);
                  v61 = 5LL * *(unsigned int *)(a1 + 280);
                  v62 = 0xCCCCCCCCCCCCCCCDLL * ((20LL * *(unsigned int *)(a1 + 280)) >> 2);
                  if ( !(v61 * 4) )
                    goto LABEL_79;
                  break;
                case 0xF:
                  v54 = 8LL * *(_QWORD *)sub_2069970(a1, v29, a3, v8, a5, a6);
                  goto LABEL_64;
                case 0x10:
                  v56 = *(_QWORD *)(v29 + 24);
                  v57 = sub_2067E70(a1, v56, 1);
                  LODWORD(v54) = 8
                               * (((1LL << v57) + ((unsigned __int64)(sub_200E290(a1, v56) + 7) >> 3) - 1) >> v57 << v57)
                               * *(_DWORD *)(v29 + 32);
                  goto LABEL_64;
                case 0x11:
                case 0x12:
                  v55 = *(_DWORD *)(v29 + 32);
                  LODWORD(v54) = v55 * sub_200E290(a1, *(_QWORD *)(v29 + 24));
                  goto LABEL_64;
                case 0x14:
                  v29 = sub_20C5D00(v29);
                  continue;
                default:
                  goto LABEL_2;
              }
              break;
            }
            break;
        }
        break;
      }
      do
      {
        while ( 1 )
        {
          v63 = v62 >> 1;
          v64 = &v60[5 * (v62 >> 1)];
          if ( v59 <= *v64 )
            break;
          v60 = v64 + 5;
          v62 = v62 - v63 - 1;
          if ( v62 <= 0 )
            goto LABEL_79;
        }
        v62 >>= 1;
      }
      while ( v63 );
LABEL_79:
      if ( v60 != &v58[v61] && v59 == *v60 )
        v58 = v60;
LABEL_82:
      LODWORD(v54) = v58[1];
LABEL_64:
      v38 = v28 * v54;
LABEL_39:
      v39 = 8LL * *(unsigned int *)(a1 + 136);
      v40 = *(_DWORD **)(a1 + 128);
      v41 = v39 >> 3;
      if ( v39 )
      {
        do
        {
          while ( 1 )
          {
            v42 = v41 >> 1;
            v43 = &v40[2 * (v41 >> 1)];
            if ( *v43 >= v38 )
              break;
            v40 = v43 + 2;
            v41 = v41 - v42 - 1;
            if ( v41 <= 0 )
              goto LABEL_42;
          }
          v41 >>= 1;
        }
        while ( v42 );
      }
LABEL_42:
      if ( v40 == (_DWORD *)(*(_QWORD *)(a1 + 128) + v39) || *v40 != v38 )
        JUMPOUT(0x206A392);
      return *((unsigned __int8 *)v40 + 4);
    case 7:
    case 9:
    case 0xB:
    case 0xD:
    case 0x13:
    case 0x14:
      v10 = sub_20C5D00(a2);
      return sub_2067E70(a1, v10, 1);
    case 8:
      return *(unsigned __int8 *)(*(_QWORD *)(a1 + 272) + 8LL);
    case 0xA:
      return 6;
    case 0xC:
      v11 = 8LL * *(unsigned int *)(a1 + 72);
      v12 = *(_DWORD *)(a2 + 8) >> 8;
      v13 = *(_DWORD **)(a1 + 64);
      v14 = (8LL * *(unsigned int *)(a1 + 72)) >> 3;
      if ( !v11 )
        goto LABEL_12;
      do
      {
        while ( 1 )
        {
          v15 = v14 >> 1;
          v16 = &v13[2 * (v14 >> 1)];
          if ( v12 <= *v16 )
            break;
          v13 = v16 + 2;
          v14 = v14 - v15 - 1;
          if ( v14 <= 0 )
            goto LABEL_12;
        }
        v14 >>= 1;
      }
      while ( v15 );
LABEL_12:
      if ( v13 == (_DWORD *)(*(_QWORD *)(a1 + 64) + v11) )
        v13 -= 2;
      return *((unsigned __int8 *)v13 + 4);
    case 0xE:
      v17 = *(_DWORD **)(a1 + 272);
      v18 = *(_DWORD *)(a2 + 8) >> 8;
      if ( !v18 )
        return *((unsigned __int8 *)v17 + 8);
      v19 = *(unsigned int *)(a1 + 280);
      v20 = *(_DWORD **)(a1 + 272);
      v19 *= 5;
      v21 = v19;
      v22 = 0xCCCCCCCCCCCCCCCDLL * v19;
      if ( !(v21 * 4) )
        goto LABEL_19;
      do
      {
        while ( 1 )
        {
          v23 = v22 >> 1;
          v24 = &v20[5 * (v22 >> 1)];
          if ( v18 <= *v24 )
            break;
          v20 = v24 + 5;
          v22 = v22 - v23 - 1;
          if ( v22 <= 0 )
            goto LABEL_19;
        }
        v22 >>= 1;
      }
      while ( v23 );
LABEL_19:
      if ( v20 != &v17[v21] && v18 == *v20 )
        v17 = v20;
      return *((unsigned __int8 *)v17 + 8);
    case 0xF:
      result = 0;
      if ( (*(_BYTE *)(a2 + 9) & 2) == 0 )
      {
        v25 = *((unsigned __int8 *)sub_2069970(a1, a2, a3, v8, a5, a6) + 16);
        result = *(unsigned __int8 *)(a1 + 480);
        if ( (unsigned __int8)v25 >= *(_BYTE *)(a1 + 480) )
          return v25;
      }
      return result;
    case 0x10:
      return sub_2067E70(a1, *(_QWORD *)(a2 + 24), 1);
    case 0x11:
    case 0x12:
      v26 = *(_DWORD *)(a2 + 32);
      v27 = *(_QWORD *)(a2 + 24);
      while ( 2 )
      {
        switch ( *(_BYTE *)(v27 + 8) )
        {
          case 0:
          case 1:
            LODWORD(v74) = 16;
            goto LABEL_105;
          case 2:
            LODWORD(v74) = 32;
            goto LABEL_105;
          case 3:
            LODWORD(v74) = 64;
            goto LABEL_105;
          case 4:
            LODWORD(v74) = 80;
            goto LABEL_105;
          case 5:
          case 6:
            LODWORD(v74) = 128;
            goto LABEL_105;
          case 8:
            LODWORD(v74) = *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4LL);
            goto LABEL_105;
          case 0xA:
            LODWORD(v74) = 0x2000;
            goto LABEL_105;
          case 0xC:
            LODWORD(v74) = *(_DWORD *)(v27 + 8) >> 8;
            goto LABEL_105;
          case 0xE:
            v98 = *(_QWORD *)(a1 + 272);
            v99 = *(_DWORD *)(v27 + 8) >> 8;
            if ( !v99 )
              goto LABEL_143;
            v8 = *(_QWORD *)(a1 + 272);
            a3 = 0xCCCCCCCCCCCCCCCDLL;
            v100 = 20LL * *(unsigned int *)(a1 + 280);
            v101 = 0xCCCCCCCCCCCCCCCDLL * ((20LL * *(unsigned int *)(a1 + 280)) >> 2);
            if ( !v100 )
              goto LABEL_140;
            break;
          case 0xF:
            v74 = 8LL * *(_QWORD *)sub_2069970(a1, v27, a3, v8, a5, a6);
            goto LABEL_105;
          case 0x10:
            v95 = *(_QWORD *)(v27 + 24);
            v96 = sub_2067E70(a1, v95, 1);
            v97 = sub_200E290(a1, v95);
            v8 = v96;
            a3 = 1LL << v96;
            v74 = 8 * (((1LL << v96) + ((unsigned __int64)(v97 + 7) >> 3) - 1) >> v96 << v96) * *(_QWORD *)(v27 + 32);
            goto LABEL_105;
          case 0x11:
          case 0x12:
            v73 = *(_DWORD *)(v27 + 32);
            LODWORD(v74) = v73 * sub_200E290(a1, *(_QWORD *)(v27 + 24));
            goto LABEL_105;
          case 0x14:
            v27 = sub_20C5D00(v27);
            continue;
          default:
LABEL_2:
            BUG();
        }
        return result;
      }
  }
  do
  {
    while ( 1 )
    {
      a3 = v101 >> 1;
      v102 = (unsigned int *)(v8 + 20 * (v101 >> 1));
      if ( v99 <= *v102 )
        break;
      v8 = (__int64)(v102 + 5);
      v101 = v101 - a3 - 1;
      if ( v101 <= 0 )
        goto LABEL_140;
    }
    v101 >>= 1;
  }
  while ( a3 );
LABEL_140:
  if ( v8 != v98 + v100 && v99 == *(_DWORD *)v8 )
    v98 = v8;
LABEL_143:
  LODWORD(v74) = *(_DWORD *)(v98 + 4);
LABEL_105:
  v75 = v26 * v74;
  v76 = *(_QWORD *)(a1 + 176);
  v77 = 8LL * *(unsigned int *)(a1 + 184);
  v78 = v76;
  v79 = v77 >> 3;
  if ( v77 )
  {
    do
    {
      while ( 1 )
      {
        a3 = v79 >> 1;
        v8 = v78 + 8 * (v79 >> 1);
        if ( *(_DWORD *)v8 >= v75 )
          break;
        v78 = v8 + 8;
        v79 = v79 - a3 - 1;
        if ( v79 <= 0 )
          goto LABEL_108;
      }
      v79 >>= 1;
    }
    while ( a3 );
  }
LABEL_108:
  v80 = v76 + v77;
  if ( v78 != v80 && *(_DWORD *)v78 == v75 )
    return *(unsigned __int8 *)(v78 + 4);
  while ( 2 )
  {
    switch ( *(_BYTE *)(v7 + 8) )
    {
      case 0:
      case 1:
        v84 = 1;
        goto LABEL_115;
      case 2:
        v84 = 3;
        goto LABEL_115;
      case 3:
        v84 = 7;
        goto LABEL_115;
      case 4:
        v84 = 9;
        goto LABEL_115;
      case 5:
      case 6:
        v84 = 15;
        goto LABEL_115;
      case 8:
        v82 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4LL);
        goto LABEL_113;
      case 0xA:
        v84 = 1023;
        goto LABEL_115;
      case 0xC:
        v82 = *(_DWORD *)(v7 + 8) >> 8;
        goto LABEL_113;
      case 0xE:
        v88 = *(_DWORD **)(a1 + 272);
        v89 = *(_DWORD *)(v7 + 8) >> 8;
        if ( !v89 )
          goto LABEL_125;
        v90 = *(_DWORD **)(a1 + 272);
        v91 = 5LL * *(unsigned int *)(a1 + 280);
        v92 = *(unsigned int *)(a1 + 280);
        if ( !(v91 * 4) )
          goto LABEL_122;
        break;
      case 0xF:
        v82 = 8LL * *(_QWORD *)sub_2069970(a1, v7, a3, v8, v80, v76);
        goto LABEL_113;
      case 0x10:
        v86 = *(_QWORD *)(v7 + 24);
        v87 = sub_2067E70(a1, v86, 1);
        v82 = 8
            * *(_QWORD *)(v7 + 32)
            * (((1LL << v87) + ((unsigned __int64)(sub_200E290(a1, v86) + 7) >> 3) - 1) >> v87 << v87);
        goto LABEL_113;
      case 0x11:
      case 0x12:
        v81 = *(unsigned int *)(v7 + 32);
        v82 = v81 * sub_200E290(a1, *(_QWORD *)(v7 + 24));
        goto LABEL_113;
      case 0x14:
        v7 = sub_20C5D00(v7);
        continue;
      default:
        goto LABEL_2;
    }
    break;
  }
  do
  {
    while ( 1 )
    {
      v93 = v92 >> 1;
      v94 = &v90[5 * (v92 >> 1)];
      if ( v89 <= *v94 )
        break;
      v90 = v94 + 5;
      v92 = v92 - v93 - 1;
      if ( v92 <= 0 )
        goto LABEL_122;
    }
    v92 >>= 1;
  }
  while ( v93 );
LABEL_122:
  if ( v90 != &v88[v91] && v89 == *v90 )
    v88 = v90;
LABEL_125:
  v82 = (unsigned int)v88[1];
LABEL_113:
  result = 0xFFFFFFFFLL;
  v83 = (unsigned __int64)(v82 + 7) >> 3;
  if ( v83 )
  {
    result = 0;
    v84 = v83 - 1;
    if ( v84 )
    {
LABEL_115:
      _BitScanReverse64(&v85, v84);
      _BitScanReverse64(&v44, 1LL << (64 - ((unsigned __int8)v85 ^ 0x3Fu)));
      return 63 - ((unsigned int)v44 ^ 0x3F);
    }
  }
  return result;
}
