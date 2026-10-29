__int64 __fastcall sub_89AC40(
        __int64 a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // ebp
  char v8; // dl
  unsigned __int8 *v10; // rcx
  unsigned __int8 *v11; // rbx
  bool v13; // cf
  int v14; // esi
  __int16 v15; // dx
  int v16; // ecx
  __int64 v17; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int16 v22; // ax
  unsigned __int8 v23; // dl
  unsigned __int8 *v24; // rax
  int v25; // r13d
  unsigned __int8 *v26; // rdx
  unsigned __int8 v27; // cl
  __int64 v28; // rax
  int v29; // r10d
  unsigned __int8 v30; // cl
  int v31; // eax
  unsigned __int16 v32; // r13
  int v33; // eax
  unsigned __int8 *v34; // rax
  unsigned __int8 *v35; // rsi
  int v36; // r13d
  int v37; // eax
  unsigned __int64 v38; // rdx
  unsigned __int8 *v39; // rax
  unsigned __int8 *v40; // r10
  unsigned __int8 *v41; // rcx
  int v42; // edx
  unsigned __int16 v43; // di
  int v44; // ebp
  _WORD *v45; // r10
  _DWORD *v46; // r14
  int v47; // r11d
  unsigned __int16 v48; // bx
  int v49; // ecx
  unsigned __int8 *v50; // rax
  unsigned __int8 *v51; // rsi
  unsigned __int8 *v52; // rdx
  int v53; // eax
  int v54; // ecx
  __int16 v55; // ax
  unsigned __int8 *v56; // rax
  _QWORD *v57; // rax
  int v58; // eax
  _QWORD *v59; // rax
  int v60; // eax
  _QWORD *v61; // rax
  int v62; // eax
  unsigned __int8 *v63; // [rsp+8h] [rbp-D0h]
  int v68; // [rsp+30h] [rbp-A8h]
  int v69; // [rsp+34h] [rbp-A4h]
  _DWORD *v70; // [rsp+38h] [rbp-A0h]
  _DWORD *v71; // [rsp+38h] [rbp-A0h]
  _DWORD *v72; // [rsp+38h] [rbp-A0h]
  _WORD *v73; // [rsp+38h] [rbp-A0h]
  _WORD *v74; // [rsp+38h] [rbp-A0h]
  _DWORD *v75; // [rsp+38h] [rbp-A0h]
  unsigned __int8 *v76; // [rsp+38h] [rbp-A0h]
  _DWORD *v77; // [rsp+38h] [rbp-A0h]
  _DWORD *v78; // [rsp+38h] [rbp-A0h]
  _DWORD *v79; // [rsp+40h] [rbp-98h]
  _DWORD *v80; // [rsp+40h] [rbp-98h]
  _DWORD *v81; // [rsp+40h] [rbp-98h]
  int v82; // [rsp+40h] [rbp-98h]
  int v83; // [rsp+40h] [rbp-98h]
  _DWORD *v84; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v85; // [rsp+40h] [rbp-98h]
  _DWORD *v86; // [rsp+40h] [rbp-98h]
  _DWORD *v87; // [rsp+40h] [rbp-98h]
  int v88; // [rsp+48h] [rbp-90h]
  int v89; // [rsp+4Ch] [rbp-8Ch]
  int v90; // [rsp+50h] [rbp-88h]
  int v91; // [rsp+54h] [rbp-84h]
  int v92; // [rsp+58h] [rbp-80h]
  bool v93; // [rsp+5Fh] [rbp-79h]
  int v94; // [rsp+60h] [rbp-78h]
  int v95; // [rsp+60h] [rbp-78h]
  _DWORD *v96; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v97; // [rsp+68h] [rbp-70h]
  _DWORD *v98; // [rsp+68h] [rbp-70h]
  _DWORD *v99; // [rsp+70h] [rbp-68h]
  int v100; // [rsp+78h] [rbp-60h]
  int v101; // [rsp+7Ch] [rbp-5Ch]
  _QWORD *v102; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int8 *v103; // [rsp+88h] [rbp-50h]
  unsigned __int64 v104; // [rsp+98h] [rbp-40h]

  v7 = 0;
  v8 = *a2;
  v104 = __readfsqword(0x28u);
  if ( (unsigned __int8)(v8 + 114) > 4u )
  {
    v10 = (unsigned __int8 *)(a2 + 3);
    v11 = (unsigned __int8 *)(a2 + 5);
    v13 = (unsigned __int8)(v8 + 117) < 2u;
    v14 = *(_DWORD *)(a1 + 104);
    v15 = *(_WORD *)(a2 + 1);
    if ( !v13 )
      v11 = v10;
    v16 = (*a6)++;
    if ( v16 > 1000 )
      return (unsigned int)-1;
    v88 = 0;
    v91 = v14 & 0x200000;
    v68 = 0;
    v100 = 0;
    v92 = -1;
    v93 = (v14 & 0x200000) != 0;
    v89 = 0;
    v90 = -1;
    v69 = -1;
    v63 = (unsigned __int8 *)&a2[(unsigned __int16)__ROL2__(v15, 8)];
    while ( 1 )
    {
LABEL_6:
      if ( v7 <= 65534 )
        goto LABEL_8;
      while ( 1 )
      {
        v11 = v63;
        v7 = 0xFFFF;
LABEL_8:
        v17 = *v11;
        if ( (unsigned __int8)v17 > 0x9Bu )
        {
          if ( (unsigned __int8)v17 > 0xA7u )
          {
            if ( (_BYTE)v17 == 0xA9 )
            {
LABEL_52:
              v26 = &v11[byte_23C3B20[v17]];
              do
                v26 += (unsigned __int16)__ROL2__(*(_WORD *)(v26 + 1), 8);
              while ( *v26 == 121 );
              v11 = v26 + 3;
            }
            else
            {
              if ( (unsigned __int8)v17 <= 0xA9u )
              {
                v17 = 168;
              }
              else if ( (unsigned __int8)(v17 + 85) > 1u )
              {
                return (unsigned int)-3;
              }
LABEL_12:
              v11 += byte_23C3B20[v17];
            }
          }
          else
          {
            v20 = 1LL << ((unsigned __int8)v17 + 100);
            if ( (v20 & 0x2AA) != 0 )
              goto LABEL_12;
            if ( (v20 & 0x155) == 0 )
              return (unsigned int)-1;
            v11 += v11[1] + byte_23C3B20[v17];
          }
          goto LABEL_6;
        }
        if ( (unsigned __int8)v17 <= 0x54u )
          break;
        switch ( (char)v17 )
        {
          case 85:
          case 86:
          case 89:
          case 90:
          case 94:
          case 96:
            v23 = v11[1] - 15;
            goto LABEL_36;
          case 87:
          case 88:
          case 95:
            ++v7;
            v11 += (unsigned __int8)(v11[1] - 15) < 2u ? 4LL : 2LL;
            goto LABEL_6;
          case 91:
          case 92:
          case 97:
            v23 = v11[3] - 15;
LABEL_36:
            if ( v23 < 2u )
              v11 += 2;
            v11 += byte_23C3B20[v17];
            goto LABEL_6;
          case 93:
            v7 += (unsigned __int16)__ROL2__(*(_WORD *)(v11 + 1), 8);
            v11 += (unsigned __int8)(v11[3] - 15) < 2u ? 6LL : 4LL;
            goto LABEL_6;
          case 110:
          case 111:
            v11 += byte_23C3B20[110];
            v27 = *v11 - 98;
            if ( v27 > 0xBu )
              goto LABEL_61;
            v28 = 1LL << v27;
            if ( ((1LL << v27) & 0x533) != 0 )
              goto LABEL_26;
            if ( (v28 & 0x8C0) != 0 )
            {
              v55 = *(_WORD *)(v11 + 1);
              v11 += 5;
              v7 += (unsigned __int16)__ROL2__(v55, 8);
            }
            else
            {
              if ( (v28 & 0x20C) != 0 )
                goto LABEL_25;
LABEL_61:
              ++v7;
            }
            goto LABEL_6;
          case 114:
          case 115:
            v32 = __ROL2__(*(_WORD *)(v11 + 1), 8);
            if ( *a7 >= (int)v32 )
            {
              v29 = a7[v32];
              if ( v29 >= 0 )
                goto LABEL_64;
            }
            v29 = 0;
            if ( (*(_BYTE *)(a1 + 97) & 2) != 0 )
              goto LABEL_73;
            v81 = a7;
            v72 = a6;
            v39 = sub_866C40(a3, a4, v32);
            v40 = v39;
            if ( !v39 )
              return (unsigned int)-2;
            a6 = v72;
            a7 = v81;
            v41 = v39;
            do
              v41 += (unsigned __int16)__ROL2__(*(_WORD *)(v41 + 1), 8);
            while ( *v41 == 121 );
            if ( v91
              && (v98 = v81,
                  v96 = v72,
                  v85 = v39,
                  v76 = v41,
                  v56 = sub_866C40(v41, a4, v32),
                  v41 = v76,
                  v40 = v85,
                  a6 = v96,
                  a7 = v98,
                  v56) )
            {
              v29 = 0;
            }
            else
            {
              if ( v40 < v11 && v11 < v41 )
                goto LABEL_96;
              v57 = a5;
              if ( a5 )
              {
                while ( (unsigned __int8 *)v57[1] != v40 )
                {
                  v57 = (_QWORD *)*v57;
                  if ( !v57 )
                    goto LABEL_133;
                }
LABEL_96:
                v88 = 1;
                v29 = 0;
                goto LABEL_73;
              }
LABEL_133:
              v103 = v40;
              v102 = a5;
              v86 = a7;
              v77 = a6;
              v58 = sub_89AC40(a1, (_DWORD)v40, (_DWORD)a3, a4, (unsigned int)&v102, (_DWORD)a6, (__int64)a7);
              a6 = v77;
              a7 = v86;
              v29 = v58;
              if ( v58 < 0 )
                return (unsigned int)v58;
            }
LABEL_73:
            a7[v32] = v29;
            v33 = *a7 + 1;
            if ( v32 > v33 )
            {
              v94 = v29;
              v80 = a6;
              v71 = a7;
              memset(&a7[v33], 255, 4LL * ((unsigned int)v32 - *a7 - 2) + 4);
              a7 = v71;
              a6 = v80;
              v29 = v94;
            }
            *a7 = v32;
            v17 = *v11;
LABEL_64:
            v11 += byte_23C3B20[v17];
            v30 = *v11 - 98;
            if ( v30 > 0xBu )
              goto LABEL_68;
            if ( ((1LL << v30) & 0x533) != 0 )
            {
              ++v11;
              v29 = 0;
            }
            else if ( ((1LL << v30) & 0x8C0) != 0 )
            {
              if ( v29 )
              {
                v54 = (unsigned __int16)__ROL2__(*(_WORD *)(v11 + 1), 8);
                if ( 0x7FFFFFFF / v29 < (unsigned __int16)v54 )
                  continue;
                v29 *= v54;
                v11 += 5;
              }
              else
              {
                v11 += 5;
              }
            }
            else
            {
              v11 += -(((1LL << v30) & 0x20C) == 0) + 1;
            }
LABEL_68:
            v31 = 0xFFFF - v7;
            v7 += v29;
            if ( v31 >= v29 )
              goto LABEL_6;
            break;
          case 116:
          case 117:
            v29 = 0;
            if ( v91 || (*(_BYTE *)(a1 + 97) & 2) != 0 )
              goto LABEL_64;
            v42 = *(unsigned __int16 *)(a1 + 140) * (unsigned __int16)__ROL2__(*(_WORD *)(v11 + 1), 8);
            v43 = __ROL2__(*(_WORD *)(v11 + 3), 8);
            if ( !*(_WORD *)(v11 + 3) )
            {
              v29 = 0x7FFFFFFF;
              goto LABEL_64;
            }
            v101 = v7;
            v97 = v11;
            v44 = 0x7FFFFFFF;
            v45 = (_WORD *)(a1 + (unsigned int)(v42 + 152));
            v46 = a7;
            v99 = a6;
            v47 = v43;
            while ( 2 )
            {
              v48 = __ROL2__(*v45, 8);
              if ( *v46 >= (int)v48 )
              {
                v49 = v46[v48];
                if ( v49 >= 0 )
                  goto LABEL_99;
              }
              v82 = v47;
              v73 = v45;
              v50 = sub_866C40(a3, a4, v48);
              v45 = v73;
              v47 = v82;
              v51 = v50;
              if ( !v50 )
                return (unsigned int)-2;
              v52 = v50;
              do
                v52 += (unsigned __int16)__ROL2__(*(_WORD *)(v52 + 1), 8);
              while ( *v52 == 121 );
              if ( v50 < v97 && v97 < v52 )
                goto LABEL_110;
              v59 = a5;
              if ( a5 )
              {
                while ( (unsigned __int8 *)v59[1] != v51 )
                {
                  v59 = (_QWORD *)*v59;
                  if ( !v59 )
                    goto LABEL_139;
                }
LABEL_110:
                v88 = 1;
                v49 = 0;
              }
              else
              {
LABEL_139:
                v102 = a5;
                v103 = v51;
                v60 = sub_89AC40(a1, (_DWORD)v51, (_DWORD)a3, a4, (unsigned int)&v102, (_DWORD)v99, (__int64)v46);
                v45 = v73;
                v47 = v82;
                v49 = v60;
                if ( v60 < 0 )
                  return (unsigned int)v60;
              }
              v46[v48] = v49;
              v53 = *v46 + 1;
              if ( v48 > v53 )
              {
                v95 = v49;
                v83 = v47;
                v74 = v45;
                memset(&v46[v53], 255, 4LL * (-2 - *v46 + (unsigned int)v48) + 4);
                v45 = v74;
                v47 = v83;
                v49 = v95;
              }
              *v46 = v48;
LABEL_99:
              if ( v44 > v49 )
                v44 = v49;
              if ( !v44 || (v45 = (_WORD *)((char *)v45 + *(unsigned __int16 *)(a1 + 140)), --v47, !v47) )
              {
                v11 = v97;
                v29 = v44;
                a6 = v99;
                a7 = v46;
                v7 = v101;
                v17 = *v97;
                goto LABEL_64;
              }
              continue;
            }
          case 118:
            v35 = &a3[(unsigned __int16)__ROL2__(*(_WORD *)(v11 + 1), 8)];
            v36 = (unsigned __int16)__ROL2__(*(_WORD *)(v35 + 3), 8);
            if ( v92 == (unsigned __int16)v36 )
            {
              v7 += v100;
              goto LABEL_81;
            }
            v38 = (unsigned __int64)v35;
            do
              v38 += (unsigned __int16)__ROL2__(*(_WORD *)(v38 + 1), 8);
            while ( *(_BYTE *)v38 == 121 );
            if ( v35 < v11 && (unsigned __int64)v11 < v38 )
              goto LABEL_89;
            v61 = a5;
            if ( a5 )
            {
              while ( (unsigned __int8 *)v61[1] != v35 )
              {
                v61 = (_QWORD *)*v61;
                if ( !v61 )
                  goto LABEL_145;
              }
LABEL_89:
              v88 = 1;
            }
            else
            {
LABEL_145:
              v103 = v35;
              v102 = a5;
              v87 = a7;
              v78 = a6;
              v62 = sub_89AC40(a1, (_DWORD)v35, (_DWORD)a3, a4, (unsigned int)&v102, (_DWORD)a6, (__int64)a7);
              v100 = v62;
              if ( v62 < 0 )
                return (unsigned int)v62;
              v92 = v36;
              a6 = v78;
              v7 += v62;
              a7 = v87;
            }
LABEL_81:
            v37 = v68;
            v68 = 0;
            v11 += (unsigned int)(v37 + 3);
            goto LABEL_6;
          case 119:
          case 126:
          case 127:
          case -109:
          case -108:
          case -107:
          case -106:
          case -105:
          case -104:
            goto LABEL_12;
          case 120:
            v11 += (unsigned __int16)__ROL2__(*(_WORD *)(v11 + 5), 8);
            goto LABEL_6;
          case 121:
          case 122:
          case 123:
          case 124:
          case 125:
            if ( v69 >= 0 && (v88 || v7 >= v69) )
              v7 = v69;
            if ( (_BYTE)v17 != 121 || !v7 )
              return (unsigned int)v7;
            v69 = v7;
            v7 = 0;
            v88 = 0;
            v24 = &v11[(unsigned __int16)__ROL2__(*(_WORD *)(v11 + 1), 8)];
            v11 += 3;
            v63 = v24;
            goto LABEL_8;
          case -128:
          case -127:
          case -126:
          case -125:
          case -124:
          case -123:
          case -122:
            do
            {
              v11 += (unsigned __int16)__ROL2__(*(_WORD *)(v11 + 1), 8);
              v17 = *v11;
            }
            while ( (_BYTE)v17 == 121 );
            goto LABEL_12;
          case -121:
          case -120:
          case -118:
          case -114:
          case -113:
            goto LABEL_19;
          case -119:
            if ( v11[3] != 118 || v11[6] != 122 )
              goto LABEL_19;
            v68 = 3;
            v11 += 3;
            goto LABEL_6;
          case -117:
          case -116:
          case -112:
          case -111:
            v25 = (unsigned __int16)__ROL2__(*(_WORD *)(v11 + 3), 8);
            if ( v90 == (unsigned __int16)v25 && !v93 )
              goto LABEL_49;
            v84 = a7;
            v75 = a6;
            v89 = sub_89AC40(a1, (_DWORD)v11, (_DWORD)a3, a4, (_DWORD)a5, (_DWORD)a6, (__int64)a7);
            if ( v89 < 0 )
              return (unsigned int)v89;
            a7 = v84;
            a6 = v75;
            v90 = v25;
LABEL_49:
            v7 += v89;
            do
              v11 += (unsigned __int16)__ROL2__(*(_WORD *)(v11 + 1), 8);
            while ( *v11 == 121 );
            v11 += 3;
            goto LABEL_6;
          case -115:
          case -110:
            v34 = &v11[(unsigned __int16)__ROL2__(*(_WORD *)(v11 + 1), 8)];
            if ( *v34 == 121 )
            {
LABEL_19:
              v79 = a7;
              v70 = a6;
              v19 = sub_89AC40(a1, (_DWORD)v11, (_DWORD)a3, a4, (_DWORD)a5, (_DWORD)a6, (__int64)a7);
              if ( v19 < 0 )
                return (unsigned int)v19;
              a6 = v70;
              a7 = v79;
              v7 += v19;
              do
                v11 += (unsigned __int16)__ROL2__(*(_WORD *)(v11 + 1), 8);
              while ( *v11 == 121 );
              v11 += 3;
            }
            else
            {
              v11 = v34 + 3;
            }
            goto LABEL_6;
          case -103:
          case -102:
          case -101:
            goto LABEL_52;
          default:
            return (unsigned int)-3;
        }
      }
      switch ( (char)v17 )
      {
        case 0:
          if ( v69 >= 0 && (v7 >= v69 || v88) )
            return (unsigned int)v69;
          return (unsigned int)v7;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
          goto LABEL_12;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
          goto LABEL_25;
        case 15:
        case 16:
          v11 += 2;
LABEL_25:
          ++v7;
LABEL_26:
          ++v11;
          continue;
        default:
          v21 = 1LL << ((unsigned __int8)v17 - 29);
          if ( (v21 & 0xD79EBCF5E7AF30LL) != 0 )
            goto LABEL_12;
          if ( (v21 & 0x206103081840CFLL) != 0 )
          {
            ++v7;
            v11 += 2;
          }
          else
          {
            if ( (v21 & 0x8004002001000LL) == 0 )
              return (unsigned int)-3;
            v22 = *(_WORD *)(v11 + 1);
            v11 += 4;
            v7 += (unsigned __int16)__ROL2__(v22, 8);
          }
          break;
      }
    }
  }
  return (unsigned int)v7;
}
