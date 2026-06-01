__int64 __fastcall sub_10B29F0(__int64 a1)
{
  __int64 v2; // rax
  char *v3; // rax
  char *v4; // rdx
  unsigned int v5; // r15d
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  void *v10; // r9
  __int64 v11; // rdx
  char *v12; // rax
  char *v13; // r14
  _BYTE *v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rcx
  bool v18; // si
  bool v19; // r10
  bool v20; // r8
  char v21; // r11
  char v22; // r9
  char v23; // bl
  char v24; // r11
  char v25; // dl
  char v26; // r11
  unsigned __int64 v27; // rdx
  __int64 v28; // rdi
  char v29; // bp
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rax
  bool v32; // zf
  int v33; // eax
  void *v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  _DWORD *v39; // r9
  __int64 v40; // rax
  char v41; // r10
  unsigned __int64 v42; // rax
  _BYTE *v43; // rdx
  char v44; // r15
  __int64 v45; // rax
  unsigned __int8 (__fastcall *v46)(__int64, void **); // rax
  bool v47; // r11
  int v48; // ebx
  __int64 v49; // rax
  _BYTE *v50; // rdi
  __int64 v51; // rbp
  __int64 *v52; // r13
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rbp
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rdi
  __int64 v62; // rdx
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rsi
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  int v72; // eax
  __int64 *v73; // [rsp+8h] [rbp-1D0h]
  unsigned int v74; // [rsp+18h] [rbp-1C0h]
  int v75; // [rsp+1Ch] [rbp-1BCh]
  char v76; // [rsp+2Fh] [rbp-1A9h] BYREF
  _QWORD v77[2]; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned __int64 v78; // [rsp+40h] [rbp-198h] BYREF
  unsigned __int64 v79; // [rsp+48h] [rbp-190h]
  __int64 v80; // [rsp+50h] [rbp-188h] BYREF
  unsigned __int64 v81; // [rsp+58h] [rbp-180h]
  char v82; // [rsp+60h] [rbp-178h]
  unsigned __int64 ptr; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v84; // [rsp+78h] [rbp-160h]
  unsigned __int64 v85; // [rsp+80h] [rbp-158h] BYREF
  unsigned __int64 v86; // [rsp+88h] [rbp-150h]
  void *v87; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v88; // [rsp+98h] [rbp-140h]
  _BYTE v89[16]; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v90; // [rsp+B0h] [rbp-128h]

  v90 = 259;
  v87 = "/etc/os-release";
  sub_22399B0((unsigned int)&v80, a1, (unsigned int)&v87, -1, 1, 0, 1);
  if ( (v82 & 1) != 0 )
  {
    v90 = 259;
    v87 = "/usr/lib/os-release";
    sub_22399B0((unsigned int)&ptr, a1, (unsigned int)&v87, -1, 1, 0, 1);
    sub_F9EDB0(&v80);
    if ( (v85 & 1) != 0 )
    {
      v82 |= 1u;
      LODWORD(v80) = ptr;
      v81 = v84;
    }
    else
    {
      v15 = ptr;
      v82 &= ~1u;
      ptr = 0;
      v80 = v15;
    }
    sub_F9EDB0((__int64 *)&ptr);
    if ( (v82 & 1) != 0 )
      goto LABEL_18;
  }
  v87 = v89;
  v88 = 0x1000000000LL;
  v2 = *(_QWORD *)(v80 + 16);
  ptr = *(_QWORD *)(v80 + 8);
  v84 = v2 - ptr;
  sub_2223490(&ptr, &v87, "\n", 1, 0xFFFFFFFFLL, 1);
  v3 = (char *)v87;
  v4 = (char *)v87 + 16 * (unsigned int)v88;
  if ( v87 == v4 )
  {
    if ( v87 == v89 )
      goto LABEL_18;
LABEL_90:
    free(v87);
    sub_F9EDB0(&v80);
    goto LABEL_19;
  }
  v5 = 57;
  while ( v5 != 57 )
  {
LABEL_5:
    v3 += 16;
    if ( v4 == v3 )
      goto LABEL_6;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *((_QWORD *)v3 + 1);
        v8 = *(_QWORD *)v3;
        if ( v7 <= 2 )
          goto LABEL_10;
        if ( *(_WORD *)v8 == 17481 )
          break;
        v3 += 16;
        if ( v4 == v3 )
        {
LABEL_27:
          if ( v87 == v89 )
            goto LABEL_18;
LABEL_28:
          free(v87);
          sub_F9EDB0(&v80);
          if ( v5 != 57 )
            return v5;
          goto LABEL_19;
        }
      }
      if ( *(_BYTE *)(v8 + 2) == 61 )
        break;
LABEL_10:
      v3 += 16;
      if ( v4 == v3 )
        goto LABEL_27;
    }
    v38 = v7 - 3;
    v39 = (_DWORD *)(v8 + 3);
    switch ( v38 )
    {
      case 6uLL:
        if ( *(_DWORD *)(v8 + 3) == 1768975457 && *(_WORD *)(v8 + 7) == 25966 )
        {
          v3 += 16;
          if ( v4 == v3 )
          {
            v5 = 1;
            goto LABEL_6;
          }
          v5 = 1;
          goto LABEL_5;
        }
        if ( *v39 == 1868850534 && *(_WORD *)(v8 + 7) == 24946 )
        {
          v3 += 16;
          if ( v4 == v3 )
          {
            v5 = 18;
            goto LABEL_6;
          }
          v5 = 18;
          goto LABEL_5;
        }
        if ( *v39 == 1953391975 && *(_WORD *)(v8 + 7) == 28527 )
        {
          v5 = 19;
          goto LABEL_5;
        }
        break;
      case 4uLL:
        if ( *(_DWORD *)(v8 + 3) == 1751347809 )
        {
          v3 += 16;
          v5 = 2;
          if ( v4 == v3 )
            goto LABEL_6;
          goto LABEL_5;
        }
        if ( *(_DWORD *)(v8 + 3) == 1936026739 )
        {
          v5 = 20;
          goto LABEL_5;
        }
        break;
      case 8uLL:
        if ( *(_QWORD *)(v8 + 3) == 0x657375736E65706FLL )
        {
          v3 += 16;
          v5 = 20;
          if ( v4 == v3 )
            goto LABEL_6;
          goto LABEL_5;
        }
        break;
      default:
        if ( v38 == 7 && *v39 == 1701345381 && *(_WORD *)(v8 + 7) == 25202 && *(_BYTE *)(v8 + 9) == 111 )
        {
          if ( v4 == v3 + 16 )
          {
            v5 = 14;
            if ( v87 == v89 )
              goto LABEL_7;
          }
          else
          {
            v3 += 32;
            v5 = 14;
            if ( v4 != v3 )
              goto LABEL_5;
LABEL_6:
            if ( v87 == v89 )
            {
LABEL_7:
              sub_F9EDB0(&v80);
              return v5;
            }
          }
          goto LABEL_28;
        }
        break;
    }
    v3 += 16;
  }
  while ( v4 != v3 );
  if ( v87 != v89 )
    goto LABEL_90;
LABEL_18:
  sub_F9EDB0(&v80);
LABEL_19:
  v87 = "/etc/lsb-release";
  v90 = 259;
  sub_22399B0((unsigned int)&ptr, a1, (unsigned int)&v87, -1, 1, 0, 1);
  if ( (v85 & 1) != 0 )
    goto LABEL_76;
  v87 = v89;
  v88 = 0x1000000000LL;
  v9 = *(_QWORD *)(ptr + 16);
  v80 = *(_QWORD *)(ptr + 8);
  v81 = v9 - v80;
  sub_2223490(&v80, &v87, "\n", 1, 0xFFFFFFFFLL, 1);
  v10 = v87;
  v11 = 16LL * (unsigned int)v88;
  v12 = (char *)v87;
  if ( v87 == (char *)v87 + v11 )
  {
    if ( v87 == v89 )
      goto LABEL_76;
LABEL_112:
    free(v10);
    sub_F9EDB0((__int64 *)&ptr);
LABEL_77:
    v87 = "/etc/redhat-release";
    v90 = 259;
    sub_22399B0((unsigned int)&v80, a1, (unsigned int)&v87, -1, 1, 0, 1);
    v29 = v82 & 1;
    if ( (v82 & 1) == 0 )
    {
      v30 = *(_QWORD **)(v80 + 8);
      v31 = *(_QWORD *)(v80 + 16) - (_QWORD)v30;
      v87 = v30;
      v88 = v31;
      if ( v31 <= 0xD )
      {
        if ( v31 <= 5 )
          goto LABEL_110;
      }
      else
      {
        if ( *v30 == 0x722061726F646546LL && *((_DWORD *)v30 + 2) == 1634036837 )
        {
          v5 = 18;
          if ( *((_WORD *)v30 + 6) == 25971 )
            goto LABEL_7;
        }
        if ( v31 > 0x17
          && !(*v30 ^ 0x2074614820646552LL | v30[1] ^ 0x6972707265746E45LL)
          && v30[2] == 0x78756E694C206573LL )
        {
LABEL_84:
          v5 = 17;
          if ( sub_2222D70(&v87, "release 7", 9, 0) == -1 )
          {
            v5 = 16;
            if ( sub_2222D70(&v87, "release 6", 9, 0) == -1 )
            {
              v32 = sub_2222D70(&v87, "release 5", 9, 0) == -1;
              v33 = 57;
              if ( !v32 )
                v33 = 15;
              v5 = v33;
            }
          }
          goto LABEL_7;
        }
      }
      if ( *(_DWORD *)v30 == 1953391939 && *((_WORD *)v30 + 2) == 21327
        || v31 > 0xF && !(*v30 ^ 0x6669746E65696353LL | v30[1] ^ 0x78756E694C206369LL) )
      {
        goto LABEL_84;
      }
LABEL_110:
      v5 = 57;
      goto LABEL_7;
    }
    v87 = "/etc/debian_version";
    v90 = 259;
    sub_22399B0((unsigned int)&ptr, a1, (unsigned int)&v87, -1, 1, 0, 1);
    sub_F9EDB0(&v80);
    if ( (v85 & 1) != 0 )
    {
      v82 |= 1u;
      LODWORD(v80) = ptr;
      v81 = v84;
    }
    else
    {
      v40 = ptr;
      v82 &= ~1u;
      ptr = 0;
      v80 = v40;
    }
    sub_F9EDB0((__int64 *)&ptr);
    if ( (v82 & 1) != 0 )
    {
      v90 = 259;
      v87 = "/etc/SuSE-release";
      sub_22399B0((unsigned int)&ptr, a1, (unsigned int)&v87, -1, 1, 0, 1);
      sub_F9EDB0(&v80);
      if ( (v85 & 1) != 0 )
      {
        v82 |= 1u;
        LODWORD(v80) = ptr;
        v81 = v84;
      }
      else
      {
        v45 = ptr;
        v82 &= ~1u;
        ptr = 0;
        v80 = v45;
      }
      sub_F9EDB0((__int64 *)&ptr);
      if ( (v82 & 1) != 0 )
      {
        v46 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 96LL);
        v87 = "/etc/gentoo-release";
        v90 = 259;
        v5 = v46(a1, &v87) == 0 ? 57 : 19;
      }
      else
      {
        v49 = *(_QWORD *)(v80 + 16) - *(_QWORD *)(v80 + 8);
        v77[0] = *(_QWORD *)(v80 + 8);
        v77[1] = v49;
        v87 = v89;
        v88 = 0x800000000LL;
        sub_2223490(v77, &v87, "\n", 1, 0xFFFFFFFFLL, 1);
        v50 = v87;
        v51 = 16LL * (unsigned int)v88;
        v52 = (__int64 *)v87;
        v73 = (__int64 *)((char *)v87 + v51);
        if ( v87 == (char *)v87 + v51 )
        {
LABEL_266:
          v5 = 57;
        }
        else
        {
          while ( 1 )
          {
            v53 = sub_2223270(v52, asc_22BE270, 6, 0);
            v54 = v52[1];
            v55 = 0;
            if ( v53 < v54 )
            {
              v55 = v54 - v53;
              v54 = v53;
            }
            ptr = *v52 + v54;
            v84 = v55;
            v56 = sub_22233F0(&ptr, asc_22BE270, 6, -1) + 1;
            if ( v56 > v84 )
              v56 = v84;
            v57 = v84 - v55 + v56;
            if ( v57 > v84 )
              v57 = v84;
            if ( v57 > 6 && *(_DWORD *)ptr == 1397900630 && *(_WORD *)(ptr + 4) == 20297 && *(_BYTE *)(ptr + 6) == 78 )
              break;
            v52 += 2;
            if ( v73 == v52 )
            {
              v50 = v87;
              goto LABEL_266;
            }
          }
          LOBYTE(v78) = 61;
          v58 = sub_2222D70(v52, &v78, 1, 0);
          if ( v58 == -1 )
          {
            v70 = *v52;
            v71 = v52[1];
            v85 = 0;
            v86 = 0;
            ptr = v70;
            v84 = v71;
          }
          else
          {
            v59 = v52[1];
            v60 = v58 + 1;
            if ( v58 + 1 > v59 )
            {
              v60 = v52[1];
              v61 = 0;
            }
            else
            {
              v61 = v59 - v60;
            }
            v62 = *v52;
            v86 = v61;
            if ( v58 > v59 )
              v58 = v59;
            ptr = v62;
            v84 = v58;
            v85 = v60 + v62;
          }
          v63 = 0;
          v64 = sub_2223270(&v85, asc_22BE270, 6, 0);
          v65 = v86;
          if ( v64 < v86 )
          {
            v63 = v86 - v64;
            v65 = v64;
          }
          v79 = v63;
          v78 = v85 + v65;
          v66 = sub_22233F0(&v78, asc_22BE270, 6, -1) + 1;
          v76 = 46;
          if ( v66 > v79 )
            v66 = v79;
          v67 = v79 - v63 + v66;
          if ( v67 > v79 )
            v67 = v79;
          v79 = v67;
          v68 = sub_2222D70(&v78, &v76, 1, 0);
          v69 = v79;
          if ( v68 != -1 )
          {
            if ( v79 <= v68 )
              v68 = v79;
            v69 = v68;
          }
          if ( (unsigned __int8)sub_2223D10(v78, v69, 10, &v78) || v78 != (int)v78 || (int)v78 <= 10 )
          {
            v5 = 57;
            v50 = v87;
          }
          else
          {
            v5 = 20;
            v50 = v87;
          }
        }
        if ( v50 != v89 )
          free(v50);
      }
      goto LABEL_7;
    }
    v34 = *(void **)(v80 + 8);
    v35 = *(_QWORD *)(v80 + 16);
    LOBYTE(ptr) = 46;
    v87 = v34;
    v88 = v35 - (_QWORD)v34;
    v36 = sub_2222D70(&v87, &ptr, 1, 0);
    v37 = v88;
    if ( v36 != -1 )
    {
      if ( v88 <= v36 )
        v36 = v88;
      v37 = v36;
    }
    if ( !(unsigned __int8)sub_2223D10(v87, v37, 10, &ptr) && ptr == (int)ptr )
    {
      switch ( (int)ptr )
      {
        case 5:
          v5 = 3;
          break;
        case 6:
          v5 = 4;
          break;
        case 7:
          v5 = 5;
          break;
        case 8:
          v5 = 6;
          break;
        case 9:
          v5 = 7;
          break;
        case 10:
          v5 = 8;
          break;
        case 11:
          v5 = 9;
          break;
        case 12:
          v5 = 10;
          break;
        case 13:
          goto LABEL_136;
        case 14:
          goto LABEL_124;
        case 15:
          v5 = 13;
          break;
        default:
          goto LABEL_110;
      }
      goto LABEL_7;
    }
    v42 = sub_2222D70(&v87, "\n", 1, 0);
    switch ( v42 )
    {
      case 0xFFFFFFFFFFFFFFFFLL:
        v43 = v87;
        v42 = v88;
        break;
      case 0xBuLL:
        if ( *(_QWORD *)v43 == 0x2F657A6565757173LL && *((_WORD *)v43 + 4) == 26995 )
        {
          v5 = 4;
          if ( v43[10] == 100 )
          {
LABEL_326:
            if ( v42 == 8 )
            {
              if ( !v29 )
              {
                v72 = 13;
                if ( *(_QWORD *)v43 != 0x6469732F656B7564LL )
                  v72 = 57;
                v5 = v72;
              }
              goto LABEL_7;
            }
            goto LABEL_291;
          }
        }
        if ( *(_QWORD *)v43 == 0x2F68637465727473LL && *((_WORD *)v43 + 4) == 26995 && v43[10] == 100 )
        {
LABEL_325:
          v5 = 7;
          goto LABEL_326;
        }
        break;
      case 0xAuLL:
        if ( *(_QWORD *)v43 != 0x732F797A65656877LL || (v5 = 5, *((_WORD *)v43 + 4) != 25705) )
        {
          if ( *(_QWORD *)v43 != 0x732F65697373656ALL || (v5 = 6, *((_WORD *)v43 + 4) != 25705) )
          {
            if ( *(_QWORD *)v43 != 0x732F726574737562LL || (v5 = 8, *((_WORD *)v43 + 4) != 25705) )
            {
              if ( *(_QWORD *)v43 == 0x732F656978697274LL && *((_WORD *)v43 + 4) == 25705 )
              {
LABEL_136:
                v5 = 11;
                goto LABEL_7;
              }
              goto LABEL_110;
            }
          }
        }
        goto LABEL_326;
      case 0xCuLL:
        if ( *(_QWORD *)v43 != 0x657965736C6C7562LL || (v5 = 9, *((_DWORD *)v43 + 2) != 1684632367) )
        {
          if ( *(_QWORD *)v43 != 0x6D726F776B6F6F62LL )
            goto LABEL_110;
          v5 = 10;
          if ( *((_DWORD *)v43 + 2) != 1684632367 )
            goto LABEL_110;
        }
LABEL_291:
        if ( !v29 )
          v5 = 57;
        goto LABEL_7;
      case 9uLL:
        if ( *(_QWORD *)v43 == 0x69732F796B726F66LL && v43[8] == 100 )
        {
LABEL_124:
          v5 = 12;
          goto LABEL_7;
        }
        goto LABEL_110;
      default:
        v43 = v87;
        if ( v88 <= v42 )
          v42 = v88;
        break;
    }
    v29 = 0;
    goto LABEL_325;
  }
  v5 = 57;
  v13 = (char *)v87 + v11;
  do
  {
    if ( v5 == 57 )
    {
LABEL_67:
      while ( 1 )
      {
        v27 = *((_QWORD *)v12 + 1);
        v28 = *(_QWORD *)v12;
        if ( v27 > 0x10 )
          break;
LABEL_66:
        v12 += 16;
        if ( v12 == v13 )
        {
LABEL_72:
          v14 = v87;
          if ( v87 != v89 )
            goto LABEL_73;
LABEL_76:
          sub_F9EDB0((__int64 *)&ptr);
          goto LABEL_77;
        }
      }
      v74 = v5;
      while ( 1 )
      {
        if ( *(_QWORD *)v28 ^ 0x5F42495254534944LL | *(_QWORD *)(v28 + 8) ^ 0x454D414E45444F43LL
          || *(_BYTE *)(v28 + 16) != 61 )
        {
          v12 += 16;
          v5 = v74;
          if ( v13 != v12 )
            goto LABEL_67;
          goto LABEL_72;
        }
        v16 = v27 - 17;
        v17 = (_DWORD *)(v28 + 17);
        v18 = v16 != 6;
        v19 = v16 != 4;
        v20 = v16 != 7;
        if ( v16 == 5 )
          break;
        if ( v16 == 8 )
        {
          v23 = 0;
          if ( *(_QWORD *)(v28 + 17) != 0x6469706572746E69LL )
          {
            v20 = 1;
            v19 = 1;
            v18 = 1;
            v22 = 1;
            goto LABEL_370;
          }
          v22 = 1;
          v75 = 22;
LABEL_236:
          v18 = 1;
          v20 = 1;
          v19 = 1;
          v47 = 1;
          goto LABEL_237;
        }
        if ( v16 != 6 )
        {
          v21 = 1;
          v22 = 1;
          goto LABEL_34;
        }
        if ( *v17 == 1853186410 && *(_WORD *)(v28 + 21) == 31092 )
        {
          v75 = 23;
LABEL_378:
          v23 = 1;
          v22 = 1;
LABEL_214:
          v25 = 1;
LABEL_171:
          v24 = v25 | v19;
LABEL_42:
          if ( !v24 )
          {
            v26 = v25 | v20;
            if ( *(_DWORD *)(v28 + 17) == 2037148023 )
            {
              v25 = 1;
              v75 = 36;
              goto LABEL_45;
            }
            goto LABEL_44;
          }
          goto LABEL_148;
        }
        if ( *v17 == 1836212587 && *(_WORD *)(v28 + 21) == 25449 )
        {
          v75 = 24;
          goto LABEL_378;
        }
        v23 = 1;
        v22 = 1;
LABEL_37:
        if ( !v18 )
        {
          if ( *v17 == 1769103730 && *(_WORD *)(v28 + 21) == 26478 )
          {
            v75 = 31;
            goto LABEL_214;
          }
          if ( *v17 == 1937076852 && *(_WORD *)(v28 + 21) == 31092 )
          {
            v75 = 33;
          }
          else
          {
            if ( *v17 != 1886352501 || *(_WORD *)(v28 + 21) != 25449 )
            {
              v24 = v19;
              v25 = 0;
              v18 = 0;
              goto LABEL_42;
            }
            v75 = 34;
          }
          v18 = 0;
          v25 = 1;
LABEL_148:
          v44 = v18 | v25;
          goto LABEL_149;
        }
        if ( v22 )
        {
          v25 = 0;
          v18 = v22;
          goto LABEL_171;
        }
        if ( *v17 == 1668637043 && *(_BYTE *)(v28 + 21) == 121 )
        {
          v75 = 32;
          goto LABEL_214;
        }
        if ( *v17 == 1769367926 && *(_BYTE *)(v28 + 21) == 100 )
        {
          v44 = v18;
          v25 = v18;
          v75 = 35;
        }
        else
        {
          v44 = v18;
          v25 = 0;
        }
        v22 = 0;
LABEL_149:
        v26 = v25 | v20;
        if ( !v44 )
        {
          if ( *v17 == 1768842616 && *(_WORD *)(v28 + 21) == 27745 )
          {
            v75 = 37;
            goto LABEL_153;
          }
          goto LABEL_45;
        }
LABEL_44:
        if ( !v26 )
        {
          if ( *v17 == 1802199417 && *(_WORD *)(v28 + 21) == 29797 && *(_BYTE *)(v28 + 23) == 121 )
          {
            v75 = 38;
            goto LABEL_153;
          }
LABEL_46:
          if ( v25 )
            goto LABEL_153;
          if ( !v18 )
          {
            if ( *v17 == 1718907489 && *(_WORD *)(v28 + 21) == 27765 )
            {
              v25 = 1;
              v75 = 40;
              goto LABEL_115;
            }
            if ( *v17 == 1852795234 && *(_WORD *)(v28 + 21) == 25449 )
            {
              v25 = 1;
              v75 = 41;
              goto LABEL_115;
            }
            if ( *v17 == 1836281699 && *(_WORD *)(v28 + 21) == 25449 )
            {
              v75 = 42;
              v25 = 1;
              goto LABEL_115;
            }
            v25 = 0;
          }
          if ( v22 )
          {
            if ( v19 )
              goto LABEL_115;
            v25 = 0;
            v41 = v18;
            if ( *(_DWORD *)(v28 + 17) == 1851879269 )
            {
              v25 = v22;
              v75 = 44;
              goto LABEL_55;
            }
            goto LABEL_116;
          }
          goto LABEL_53;
        }
LABEL_45:
        if ( (unsigned __int8)v22 | (unsigned __int8)v25 )
          goto LABEL_46;
        if ( *v17 == 1953719674 && *(_BYTE *)(v28 + 21) == 121 )
        {
          v75 = 39;
LABEL_153:
          v25 = 1;
LABEL_115:
          v41 = v25 | v18;
LABEL_116:
          if ( !v41 )
          {
            if ( *v17 == 1869574759 && *(_WORD *)(v28 + 21) == 31094 )
            {
              v25 = 1;
              v75 = 46;
            }
            else if ( *v17 == 1768975721 && *(_WORD *)(v28 + 21) == 26739 )
            {
              v75 = 48;
              v25 = 1;
              goto LABEL_59;
            }
            goto LABEL_57;
          }
          goto LABEL_55;
        }
LABEL_53:
        if ( *v17 == 1668508004 && *(_BYTE *)(v28 + 21) == 111 )
        {
          v75 = 43;
          v25 = 1;
        }
        else if ( *v17 == 1633906534 && *(_BYTE *)(v28 + 21) == 108 )
        {
          v75 = 45;
          v25 = 1;
          goto LABEL_56;
        }
LABEL_55:
        if ( !(v20 | (unsigned __int8)v25)
          && *v17 == 1936877928
          && *(_WORD *)(v28 + 21) == 29813
          && *(_BYTE *)(v28 + 23) == 101 )
        {
          v25 = 1;
          v75 = 47;
          goto LABEL_57;
        }
LABEL_56:
        if ( !((unsigned __int8)v22 | (unsigned __int8)v25) )
        {
          if ( *v17 != 1835884906 || *(_BYTE *)(v28 + 21) != 121 )
            goto LABEL_165;
          v75 = 49;
          v25 = 1;
          goto LABEL_59;
        }
LABEL_57:
        if ( (unsigned __int8)v25 | v20 )
        {
          if ( !((unsigned __int8)v25 | (unsigned __int8)v22) )
          {
            v25 = 0;
LABEL_165:
            if ( *v17 == 1634628972 && *(_BYTE *)(v28 + 21) == 114 )
            {
              v75 = 51;
              v25 = 1;
            }
            else if ( *v17 == 1818390382 && *(_BYTE *)(v28 + 21) == 101 )
            {
              v75 = 53;
LABEL_169:
              v5 = v75;
              goto LABEL_23;
            }
LABEL_61:
            if ( !((unsigned __int8)v25 | v18) && *v17 == 1668639856 && *(_WORD *)(v28 + 21) == 31083 )
            {
              v12 += 16;
              if ( v12 != v13 )
              {
                v75 = 55;
                v5 = 55;
                goto LABEL_23;
              }
              v14 = v87;
              v5 = 55;
              goto LABEL_25;
            }
            if ( v25 )
              goto LABEL_169;
            goto LABEL_63;
          }
        }
        else if ( *v17 == 1701734763 && *(_WORD *)(v28 + 21) == 26996 && *(_BYTE *)(v28 + 23) == 99 )
        {
          v25 = 1;
          v75 = 50;
          goto LABEL_60;
        }
LABEL_59:
        if ( !(v18 | (unsigned __int8)v25) && *v17 == 1953390957 && *(_WORD *)(v28 + 21) == 25449 )
        {
          v75 = 52;
          v25 = 1;
          goto LABEL_61;
        }
LABEL_60:
        if ( (unsigned __int8)v25 | (unsigned __int8)v23 )
          goto LABEL_61;
        if ( *(_QWORD *)(v28 + 17) == 0x72616C756361726FLL )
        {
          v12 += 16;
          if ( v13 != v12 )
          {
            v75 = 54;
            v5 = 54;
            goto LABEL_23;
          }
          v14 = v87;
          v5 = 54;
          goto LABEL_25;
        }
        if ( *(_QWORD *)(v28 + 17) == 0x676E697473657571LL )
        {
          if ( v13 != v12 + 16 )
          {
            v12 += 32;
            if ( v13 != v12 )
            {
              v75 = 56;
              v5 = 56;
              goto LABEL_23;
            }
            v14 = v87;
            v5 = 56;
            goto LABEL_25;
          }
          v14 = v87;
          if ( v87 == v89 )
          {
            v5 = 56;
            sub_F9EDB0((__int64 *)&ptr);
            return v5;
          }
          v5 = 56;
          goto LABEL_73;
        }
LABEL_63:
        v12 += 16;
        if ( v13 == v12 )
        {
          v10 = v87;
          if ( v87 != v89 )
            goto LABEL_112;
          goto LABEL_76;
        }
        v27 = *((_QWORD *)v12 + 1);
        v28 = *(_QWORD *)v12;
        if ( v27 <= 0x10 )
        {
          v5 = v74;
          goto LABEL_66;
        }
      }
      if ( *(_DWORD *)(v28 + 17) == 1685217640 && *(_BYTE *)(v28 + 21) == 121 )
      {
        v75 = 21;
        v22 = 0;
        v23 = 1;
        goto LABEL_236;
      }
      v21 = 0;
      v22 = 0;
      v18 = 1;
      v20 = 1;
      v19 = 1;
LABEL_34:
      v23 = 1;
      if ( !v21 )
      {
        if ( *v17 == 1768125804 && *(_BYTE *)(v28 + 21) == 100 )
        {
          v75 = 25;
          goto LABEL_214;
        }
        if ( *v17 == 1953784174 && *(_BYTE *)(v28 + 21) == 121 )
        {
          v75 = 27;
          goto LABEL_214;
        }
        goto LABEL_37;
      }
LABEL_370:
      v47 = 0;
LABEL_237:
      if ( !((unsigned __int8)v23 | v47) )
      {
        v48 = 26;
        if ( *(_QWORD *)(v28 + 17) != 0x6B6369726576616DLL )
          v48 = v75;
        v47 = *(_QWORD *)(v28 + 17) == 0x6B6369726576616DLL;
        v75 = v48;
        v23 = 0;
      }
      if ( v47 )
        goto LABEL_214;
      if ( v16 == 7 )
      {
        if ( *v17 == 1768255087 && *(_WORD *)(v28 + 21) == 26994 && *(_BYTE *)(v28 + 23) == 99 )
        {
          v75 = 28;
          goto LABEL_214;
        }
        if ( *v17 == 1667592816 && *(_WORD *)(v28 + 21) == 29545 && *(_BYTE *)(v28 + 23) == 101 )
        {
          v75 = 29;
          goto LABEL_214;
        }
        if ( *v17 == 1851880817 && *(_WORD *)(v28 + 21) == 24948 && *(_BYTE *)(v28 + 23) == 108 )
        {
          v75 = 30;
          goto LABEL_214;
        }
      }
      goto LABEL_37;
    }
LABEL_23:
    v12 += 16;
  }
  while ( v13 != v12 );
  v14 = v87;
LABEL_25:
  if ( v14 == v89 )
  {
    sub_F9EDB0((__int64 *)&ptr);
  }
  else
  {
LABEL_73:
    free(v14);
    sub_F9EDB0((__int64 *)&ptr);
    if ( v5 == 57 )
      goto LABEL_77;
  }
  return v5;
}

