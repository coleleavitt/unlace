char __fastcall sub_AD5110(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  char v9; // al
  char result; // al
  __int64 v12; // rbp
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rsi
  char v19; // r13
  char v20; // dl
  unsigned __int8 v21; // al
  char v22; // r15
  __int64 v23; // r13
  unsigned __int64 v24; // rdx
  unsigned __int8 *v25; // r8
  __int64 v26; // rdx
  char v27; // al
  unsigned __int8 *v28; // rcx
  unsigned int v29; // r14d
  char v30; // r15
  unsigned __int64 v31; // rdx
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rdi
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  bool v41; // al
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rdi
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rax
  bool v49; // al
  __int64 v50; // r15
  __int64 v51; // r14
  __int64 v52; // r13
  unsigned __int64 v53; // rsi
  bool v54; // al
  __int64 v55; // rdi
  unsigned __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 *v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rsi
  unsigned __int64 v64; // rsi
  __int64 v65; // rdi
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rax
  char v71; // al
  unsigned __int64 v72; // r14
  __int64 v73; // rax
  __int64 v74; // r15
  unsigned __int64 v75; // rax
  __int64 v76; // r13
  unsigned __int64 v77; // rax
  __int64 v78; // rbp
  __int64 v79; // rbx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  char v82; // [rsp+0h] [rbp-B8h]
  __int64 v83; // [rsp+0h] [rbp-B8h]
  unsigned __int8 *v84; // [rsp+0h] [rbp-B8h]
  unsigned __int8 *v85; // [rsp+0h] [rbp-B8h]
  unsigned __int8 *v86; // [rsp+0h] [rbp-B8h]
  unsigned __int8 *v87; // [rsp+0h] [rbp-B8h]
  unsigned __int8 *v88; // [rsp+0h] [rbp-B8h]
  unsigned __int8 *v89; // [rsp+0h] [rbp-B8h]
  _QWORD *v90; // [rsp+8h] [rbp-B0h]
  unsigned __int8 *v91; // [rsp+8h] [rbp-B0h]
  unsigned __int8 *v92; // [rsp+8h] [rbp-B0h]
  char v93; // [rsp+8h] [rbp-B0h]
  char v94; // [rsp+8h] [rbp-B0h]
  unsigned __int8 *v95; // [rsp+8h] [rbp-B0h]
  char v96; // [rsp+8h] [rbp-B0h]
  unsigned __int8 *v97; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v98; // [rsp+18h] [rbp-A0h]
  unsigned __int8 *v99; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v100; // [rsp+28h] [rbp-90h]
  char v101; // [rsp+2Ch] [rbp-8Ch]
  unsigned __int8 *v102; // [rsp+30h] [rbp-88h] BYREF
  int v103; // [rsp+38h] [rbp-80h]
  char v104; // [rsp+3Ch] [rbp-7Ch]
  __int64 v105; // [rsp+88h] [rbp-30h]
  __int64 v106; // [rsp+90h] [rbp-28h]
  __int64 v107; // [rsp+98h] [rbp-20h]

  v9 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v9 != (*(_BYTE *)(a3 + 28) & 0x7F) )
    return 0;
  v107 = v8;
  v106 = v7;
  v12 = a3;
  v105 = v6;
  v13 = a2;
  switch ( v9 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 19:
    case 20:
    case 21:
    case 22:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 48:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 63:
    case 69:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 87:
    case 88:
    case 89:
      return sub_AC9FE0(a1, a2, a3);
    case 18:
      return sub_ACF9A0(a1, a2, a3);
    case 23:
      v37 = *(_QWORD *)(a3 + 40);
      if ( (v37 & 7) != 0 )
      {
        v40 = 0;
        v43 = *(_QWORD *)(v13 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v13 + 40) & 7) != 0 )
          goto LABEL_49;
      }
      else
      {
        v38 = *(_QWORD *)(v13 + 40);
        v39 = v37 & 0xFFFFFFFFFFFFFFF8LL;
        v40 = v39;
        v41 = v39 == 0;
        if ( (v38 & 7) != 0 )
          goto LABEL_48;
        v42 = v38 & 0xFFFFFFFFFFFFFFF8LL;
        v43 = v42;
        if ( v42 && v39 )
        {
          v41 = sub_AC75B0(v42, v39);
          goto LABEL_48;
        }
      }
      v41 = v40 == v43;
LABEL_48:
      if ( !v41 )
        return 0;
LABEL_49:
      v44 = *(_QWORD **)(v13 + 88);
      v90 = *(_QWORD **)(v12 + 88);
      if ( v44 && *(_QWORD *)(v12 + 88) )
        goto LABEL_51;
      if ( v44 != v90 )
        return 0;
      if ( !v44 )
        goto LABEL_58;
LABEL_51:
      v45 = v44[5];
      v46 = v90[5] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v90[5] & 7) != 0 )
        v46 = 0;
      if ( (v45 & 7) != 0 )
      {
        v48 = 0;
      }
      else
      {
        v47 = v45 & 0xFFFFFFFFFFFFFFF8LL;
        v48 = v47;
        if ( v46 && v47 )
        {
          v49 = sub_AC75B0(v47, v46);
          goto LABEL_57;
        }
      }
      v49 = v46 == v48;
LABEL_57:
      if ( !v49 )
        return 0;
LABEL_58:
      v50 = *(_QWORD *)(v12 + 104);
      v51 = *(_QWORD *)(v13 + 104);
      v83 = v50 + 8LL * *(unsigned int *)(v12 + 112);
      v52 = v51 + 8LL * *(unsigned int *)(v13 + 112);
      if ( v51 == v52 )
        goto LABEL_131;
      if ( v50 == v50 + 8LL * *(unsigned int *)(v12 + 112) )
        return 0;
      while ( 2 )
      {
        v57 = *(_QWORD *)(*(_QWORD *)v50 + 40LL);
        if ( (v57 & 7) != 0 )
        {
          a5 = 0;
          a6 = *(_QWORD *)(*(_QWORD *)v51 + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(*(_QWORD *)v51 + 40LL) & 7) != 0 )
            goto LABEL_66;
        }
        else
        {
          v53 = v57 & 0xFFFFFFFFFFFFFFF8LL;
          a5 = v53;
          v54 = v53 == 0;
          v55 = *(_QWORD *)(*(_QWORD *)v51 + 40LL);
          if ( (v55 & 7) != 0 )
            goto LABEL_65;
          v56 = v55 & 0xFFFFFFFFFFFFFFF8LL;
          a6 = v56;
          if ( v56 && v53 )
          {
            v54 = sub_AC75B0(v56, v53);
            goto LABEL_65;
          }
        }
        v54 = a5 == a6;
LABEL_65:
        if ( !v54 )
          return 0;
LABEL_66:
        v51 += 8;
        v50 += 8;
        if ( v52 != v51 )
        {
          if ( v83 == v50 )
            return 0;
          continue;
        }
        break;
      }
LABEL_131:
      if ( v83 != v50 )
        return 0;
      v72 = 0;
      if ( v90 )
        v72 = sub_A5E330(*(_QWORD *)(a1 + 16), (__int64)v90, 0, v40, a5, a6);
      v73 = sub_B6AC30(v12 + 48);
      v74 = v73;
      if ( !v73 )
        goto LABEL_139;
      if ( (*(_BYTE *)(v73 + 28) & 0x7F) == 0x32 )
      {
LABEL_171:
        v76 = sub_B6AC30(v13 + 48);
        if ( !v76 )
          return 0;
        goto LABEL_140;
      }
      while ( 1 )
      {
        v75 = *(_QWORD *)(v74 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v74 = v75;
        if ( !v75 )
          break;
        if ( (*(_BYTE *)(v75 + 28) & 0x7F) == 0x32 )
          goto LABEL_171;
      }
LABEL_139:
      v74 = 0;
      v76 = sub_B6AC30(v13 + 48);
      if ( v76 )
      {
LABEL_140:
        if ( (*(_BYTE *)(v76 + 28) & 0x7F) == 0x32 )
          goto LABEL_156;
        while ( 1 )
        {
          v77 = *(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v76 = v77;
          if ( !v77 )
            break;
          if ( (*(_BYTE *)(v77 + 28) & 0x7F) == 0x32 )
          {
LABEL_156:
            while ( v74
                 && (*(_BYTE *)(v76 + 88) & 7) == (*(_BYTE *)(v74 + 88) & 7)
                 && (unsigned __int8)sub_AD2DB0(a1, v76, v74, v72) )
            {
              do
              {
                v81 = *(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v76 = v81;
              }
              while ( v81 && (*(_BYTE *)(v81 + 28) & 0x7F) != 0x32 );
              do
              {
                v80 = *(_QWORD *)(v74 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v74 = v80;
              }
              while ( v80 && (*(_BYTE *)(v80 + 28) & 0x7F) != 0x32 );
              if ( !v76 )
                goto LABEL_144;
            }
            return 0;
          }
        }
LABEL_144:
        if ( v74 )
          return 0;
      }
      v78 = sub_AC9900(v12);
      v79 = sub_AC9900(v13);
      while ( v79 )
      {
        if ( !v78 || !(unsigned __int8)sub_ACF9A0(a1, v79, v78) )
          return 0;
        do
          v79 = *(_QWORD *)(v79 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        while ( v79 && (*(_BYTE *)(v79 + 28) & 0x7F) != 0x12 );
        do
          v78 = *(_QWORD *)(v78 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        while ( v78 && (*(_BYTE *)(v78 + 28) & 0x7F) != 0x12 );
      }
      return v78 == 0;
    case 33:
      v22 = *(_BYTE *)(a2 + 80);
      v23 = *(unsigned int *)(a2 + 64);
      v24 = (unsigned __int64)(v23 + 63) >> 6;
      if ( v24 > 1 )
      {
        sub_21E18D0(&v99, (unsigned int)v23, v24, *(_QWORD *)(a2 + 56));
        LODWORD(v23) = v100;
        v25 = v99;
      }
      else
      {
        v25 = *(unsigned __int8 **)(a2 + 56);
        v100 = *(_DWORD *)(a2 + 64);
        if ( (unsigned int)v23 > 0x40 )
        {
          sub_21E1730(&v99, v25, 0);
          LODWORD(v23) = v100;
          v25 = v99;
        }
      }
      v26 = *(unsigned int *)(v12 + 64);
      v27 = *(_BYTE *)(v12 + 80);
      v104 = v22;
      v103 = v23;
      v28 = *(unsigned __int8 **)(v12 + 56);
      v29 = v26;
      v102 = v25;
      v30 = v27 ^ v22;
      v31 = (unsigned __int64)(v26 + 63) >> 6;
      if ( v31 > 1 )
      {
        v94 = v27;
        v87 = v25;
        sub_21E18D0(&v97, v29, v31, v28);
        v25 = v87;
        v71 = v94;
      }
      else
      {
        v98 = v29;
        if ( v29 <= 0x40 )
        {
          v100 = v29;
          v99 = v28;
          v101 = v27;
          if ( v29 != (_DWORD)v23 || v30 )
          {
            result = 0;
            goto LABEL_37;
          }
LABEL_92:
          if ( v28 != v25 )
            return 0;
          goto LABEL_93;
        }
        v96 = v27;
        v89 = v25;
        sub_21E1730(&v97, v28, 0);
        v71 = v96;
        v25 = v89;
      }
      v29 = v98;
      v28 = v97;
      v101 = v71;
      v100 = v98;
      v99 = v97;
      if ( v98 != (_DWORD)v23 || v30 )
      {
        result = 0;
        goto LABEL_103;
      }
      if ( (unsigned int)v23 <= 0x40 )
        goto LABEL_92;
      v95 = v97;
      v88 = v25;
      result = sub_21E2030(&v102, &v99);
      v25 = v88;
      v28 = v95;
      if ( !result )
      {
        if ( !v95 )
          goto LABEL_38;
        goto LABEL_105;
      }
LABEL_93:
      v63 = *(_QWORD *)(v12 + 40);
      if ( (v63 & 7) != 0 )
        v64 = 0;
      else
        v64 = v63 & 0xFFFFFFFFFFFFFFF8LL;
      v65 = *(_QWORD *)(v13 + 40);
      if ( (v65 & 7) != 0 )
      {
        v67 = 0;
      }
      else
      {
        v66 = v65 & 0xFFFFFFFFFFFFFFF8LL;
        v67 = v66;
        if ( v66 && v64 )
        {
          v91 = v28;
          v84 = v25;
          result = sub_AC75B0(v66, v64);
          v28 = v91;
          v25 = v84;
          goto LABEL_99;
        }
      }
      result = v64 == v67;
LABEL_99:
      if ( result )
      {
        v68 = *(_QWORD *)(v13 + 72);
        v69 = *(_QWORD *)(v12 + 72);
        if ( v68 && v69 )
        {
          v92 = v28;
          v85 = v25;
          result = sub_ACD3E0(a1, v68, v69);
          v25 = v85;
          v28 = v92;
        }
        else
        {
          result = v69 == v68;
        }
      }
LABEL_103:
      if ( v29 > 0x40 && v28 )
      {
LABEL_105:
        v93 = result;
        v86 = v25;
        operator delete[](v28);
        v25 = v86;
        result = v93;
      }
LABEL_37:
      if ( (unsigned int)v23 <= 0x40 )
        return result;
LABEL_38:
      if ( v25 )
      {
        v82 = result;
        operator delete[](v25);
        return v82;
      }
      return result;
    case 34:
    case 39:
      return sub_ACFB70(a1, a2, a3);
    case 35:
    case 36:
    case 37:
    case 38:
      return sub_AD3A90(a1, a2, a3);
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
      return sub_AD2C60(a1, a2, a3);
    case 47:
      return sub_ACFC70(a1, a2, a3);
    case 49:
      v14 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      v15 = *(_QWORD *)(a3 + 16) & 4LL;
      if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
        v14 = (_QWORD *)*v14;
      if ( !v14 )
        BUG();
      goto LABEL_14;
    case 50:
      v32 = *(_QWORD *)(a1 + 16);
      v33 = sub_B84E90(a3);
      v17 = sub_A5E330(v32, v33, 0, v34, v35, v36);
      result = 0;
      if ( (*(_BYTE *)(a2 + 88) & 7) == (*(_BYTE *)(v12 + 88) & 7) )
        return sub_AD2DB0(a1, a2, v12, v17);
      return result;
    case 51:
      v14 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      v15 = *(_QWORD *)(a3 + 16) & 4LL;
      if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
        v14 = (_QWORD *)*v14;
      if ( !v14 )
        BUG();
LABEL_14:
      v16 = *(v14 - 2);
      if ( v16 )
        v17 = v16 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v17 = sub_A56D30(*(_QWORD *)(a1 + 16), (__int64)(v14 - 8), v15, 0, a5, a6);
      return sub_AD2DB0(a1, a2, v12, v17);
    case 58:
    case 59:
    case 60:
    case 61:
      return sub_AD3E50(a1, a2, a3);
    case 62:
      return sub_AD0740(a1, a2, a3);
    case 64:
    case 65:
    case 66:
      return sub_AD0650(a1, a2, a3);
    case 67:
      v19 = sub_B9A890(a2);
      v20 = sub_B9A890(v12);
      result = 1;
      if ( v19 == v20 )
        return result;
      if ( !*(_BYTE *)(a1 + 142) )
        return 0;
      sub_AC7530((__int64)&v102, a1, *(_DWORD *)(v12 + 24), *(_BYTE *)(a1 + 141) == 0 ? 2578 : 2358);
      v21 = sub_B9A890(v12);
      sub_AC60B0(&v102, v21, 2u);
      sub_AC6300((__int64)&v102);
      sub_AC74B0((__int64)&v102, a1, *(_DWORD *)(a2 + 24), 0x9F4u);
      v18 = (unsigned __int8)sub_B9A890(a2);
      goto LABEL_20;
    case 68:
      if ( ((*(_BYTE *)(a2 + 80) & 2) != 0) == ((*(_BYTE *)(a3 + 80) & 2) != 0) )
        return sub_ACA990(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a3 + 56));
      if ( *(_BYTE *)(a1 + 142) )
      {
        sub_AC7530((__int64)&v102, a1, *(_DWORD *)(a3 + 24), *(_BYTE *)(a1 + 141) == 0 ? 2578 : 2358);
        sub_AC60B0(&v102, (*(_BYTE *)(v12 + 80) & 2) != 0, 2u);
        sub_AC6300((__int64)&v102);
        sub_AC74B0((__int64)&v102, a1, *(_DWORD *)(a2 + 24), 0x9F4u);
        v18 = (*(_BYTE *)(a2 + 80) & 2) != 0;
LABEL_20:
        sub_AC60B0(&v102, v18, 2u);
        sub_AC6300((__int64)&v102);
      }
      return 0;
    case 70:
      if ( !(unsigned __int8)sub_ACB3E0(a1, a2, a3) )
        return 0;
      return sub_AC9FE0(a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(v12 + 48));
    case 71:
      if ( !(unsigned __int8)sub_ACB3E0(a1, a2, a3) )
        return 0;
      return sub_ACDF50(a1, *(_QWORD *)(*(_QWORD *)(a2 + 48) + 48LL), *(_QWORD *)(*(_QWORD *)(v12 + 48) + 48LL));
    case 72:
      if ( !(unsigned __int8)sub_ACB3E0(a1, a2, a3) )
        return 0;
      return sub_AD3E50(a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(v12 + 48));
    case 73:
      if ( !(unsigned __int8)sub_ACB3E0(a1, a2, a3) )
        return 0;
      v61 = *(_QWORD *)(a2 + 64);
      v62 = *(_QWORD *)(v12 + 64);
      if ( v61 && v62 )
        return sub_ACD3E0(a1, v61, v62);
      else
        return v62 == v61;
    case 86:
      v58 = *(_QWORD *)(a2 + 40);
      if ( !v58 )
        return 0;
      a2 = v58 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v58 & 4) != 0 )
      {
        if ( a2 )
        {
          v59 = *(_QWORD *)(a3 + 40);
          if ( v59 )
          {
            if ( ((v59 & 4) != 0 || (v59 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (v59 & 4) != 0 )
            {
              v60 = (__int64 *)(v59 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v60 )
                return sub_ACDF50(a1, *(_QWORD *)a2, *v60);
            }
          }
        }
      }
      else if ( a2 )
      {
        v70 = *(_QWORD *)(a3 + 40);
        if ( v70 )
        {
          if ( ((v70 & 4) == 0 || (v70 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (v70 & 4) == 0 )
          {
            a3 = v70 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v70 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              return sub_AC9FE0(a1, a2, a3);
          }
        }
      }
      return 0;
    default:
      return 1;
  }
}

