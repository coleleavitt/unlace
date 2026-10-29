unsigned __int64 __fastcall sub_192B0(__int64 a1)
{
  unsigned __int64 v1; // r11
  unsigned __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rsi
  char v6; // bl
  unsigned __int64 v7; // r12
  unsigned __int64 result; // rax
  __int16 v9; // bx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int16 v15; // si
  unsigned __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int16 v21; // r14
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  _BYTE *v25; // rax
  _BYTE *v26; // rsi
  _BYTE *v27; // rsi
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int16 v32; // si
  __int16 v33; // bx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r15
  __int16 v37; // dx
  __int64 v38; // rcx
  __int64 v39; // rdx
  _BYTE *v40; // rsi
  unsigned __int64 v41; // rax
  __int16 v42; // si
  unsigned __int64 v43; // r12
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int16 v52; // si
  char v53; // dl
  __int16 v54; // si
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int16 v57; // si
  size_t v58; // rcx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r12
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int16 v63; // si
  char v64; // al
  unsigned __int64 v65; // rax
  int v66; // eax
  unsigned __int64 v67; // r11
  unsigned __int64 v68; // rdx
  __int64 v69; // rbx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // r13
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // r14
  unsigned __int64 v76; // rax
  __int64 v77; // r12
  __int64 v78; // r12
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rbx
  unsigned __int64 v82; // r12
  _BYTE *v83; // r14
  unsigned __int64 v84; // rax
  _BYTE *v85; // rbx
  unsigned __int64 v86; // rax
  __int64 v87; // rcx
  unsigned __int64 v88; // rax
  _BYTE *v89; // rbx
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rax
  char v95; // [rsp+0h] [rbp-78h]
  char v96; // [rsp+Fh] [rbp-69h]
  __int64 v97; // [rsp+10h] [rbp-68h] BYREF
  __int64 v98; // [rsp+18h] [rbp-60h] BYREF
  void *v99; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v100; // [rsp+28h] [rbp-50h]
  _BYTE *v101; // [rsp+30h] [rbp-48h]
  unsigned __int64 v102; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 64);
  v102 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v1 <= v2 )
  {
    return 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 56);
    v4 = v2 + 1;
    *(_QWORD *)(a1 + 72) = v2 + 1;
    v6 = *(_BYTE *)(v3 + v2);
    switch ( v6 )
    {
      case 'A':
        v7 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v7 + 16) = 160;
        *(_BYTE *)(v7 + 18) = 0;
        return v7;
      case 'B':
        v57 = 90;
        return sub_15400((_QWORD *)a1, v57);
      case 'C':
        v14 = sub_BBE0(a1, 221);
        v15 = 27;
        return sub_CD20((_QWORD *)a1, v15, v14);
      case 'D':
        v59 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v59 + 16) = 52;
        v7 = v59;
        *(_BYTE *)(v59 + 18) = 0;
        return v7;
      case 'E':
        v7 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v7 + 16) = 50;
        *(_BYTE *)(v7 + 18) = 0;
        return v7;
      case 'F':
        v7 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v7 + 16) = 51;
        *(_BYTE *)(v7 + 18) = 0;
        return v7;
      case 'G':
        v57 = 89;
        return sub_15400((_QWORD *)a1, v57);
      case 'H':
      case 'h':
        v96 = 0;
        v33 = (v6 != 72) + 124;
        if ( v1 > v4 && *(_BYTE *)(v3 + v2 + 1) == 113 )
        {
          v96 = 1;
          *(_QWORD *)(a1 + 72) = v2 + 2;
        }
        v99 = nullptr;
        v34 = *(_DWORD *)(a1 + 96);
        v100 = nullptr;
        v101 = nullptr;
        if ( !v34 )
          return 0;
        v35 = (unsigned int)(v34 - 1);
        v36 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v35);
        *(_DWORD *)(a1 + 96) = v35;
        v97 = v36;
        if ( !v36 )
          return 0;
        v37 = *(_WORD *)(v36 + 16);
        if ( v37 == 40 )
          goto LABEL_37;
        if ( v37 != 221 )
          return 0;
        sub_18710((__int64)&v99, nullptr, &v97);
        LODWORD(v35) = *(_DWORD *)(a1 + 96);
        v36 = 0;
LABEL_37:
        if ( !(_DWORD)v35 )
          goto LABEL_109;
        do
        {
          v38 = (unsigned int)(v35 - 1);
          v39 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v38);
          *(_DWORD *)(a1 + 96) = v38;
          v98 = v39;
          if ( !v39 )
            break;
          if ( *(_WORD *)(v39 + 16) != 221 )
          {
LABEL_106:
            v83 = v99;
            v7 = 0;
            goto LABEL_107;
          }
          v40 = v100;
          if ( v100 == v101 )
          {
            sub_18710((__int64)&v99, v100, &v98);
          }
          else
          {
            *(_QWORD *)v100 = v39;
            v100 = v40 + 8;
          }
          LODWORD(v35) = *(_DWORD *)(a1 + 96);
        }
        while ( (_DWORD)v35 );
LABEL_109:
        v84 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v84 + 16) = v33;
        v7 = v84;
        *(_BYTE *)(v84 + 18) = 0;
        v85 = v100;
        v83 = v99;
        if ( v99 != v100 )
        {
          do
          {
            sub_C080(v7, *((_QWORD *)v85 - 1), (_QWORD *)a1);
            v85 -= 8;
          }
          while ( v83 != v85 );
        }
        if ( v36 )
          sub_C080(v7, v36, (_QWORD *)a1);
        if ( v96 )
        {
          v86 = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(v86 + 16) = 206;
          *(_BYTE *)(v86 + 18) = 0;
          sub_C080(v7, v86, (_QWORD *)a1);
        }
LABEL_107:
        if ( v83 )
          operator delete(v83, v101 - v83);
        return v7;
      case 'I':
        v55 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v55 + 16) = 55;
        v7 = v55;
        *(_BYTE *)(v55 + 18) = 0;
        return v7;
      case 'J':
        if ( v1 <= v4 )
          goto LABEL_57;
        v53 = *(_BYTE *)(v3 + v2 + 1);
        switch ( v53 )
        {
          case 'S':
            *(_QWORD *)(a1 + 72) = v2 + 2;
            result = sub_108F0(a1);
            break;
          case 'V':
            *(_QWORD *)(a1 + 72) = v2 + 2;
            v54 = 312;
            return sub_10730(a1, v54);
          case 'O':
            *(_QWORD *)(a1 + 72) = v2 + 2;
            result = sub_103C0(a1);
            break;
          default:
LABEL_57:
            v54 = 308;
            return sub_10730(a1, v54);
        }
        break;
      case 'K':
      case 'k':
        v95 = 0;
        v21 = (v6 != 75) + 122;
        if ( v1 > v4 && *(_BYTE *)(v3 + v2 + 1) == 113 )
        {
          v95 = 1;
          *(_QWORD *)(a1 + 72) = v2 + 2;
        }
        v99 = nullptr;
        v22 = *(_DWORD *)(a1 + 96);
        v100 = nullptr;
        v101 = nullptr;
        if ( !v22 )
          return 0;
        v23 = (unsigned int)(v22 - 1);
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v23);
        *(_DWORD *)(a1 + 96) = v23;
        v98 = v24;
        if ( !v24 || *(_WORD *)(v24 + 16) != 221 )
          return 0;
        v25 = nullptr;
        v26 = nullptr;
        while ( 2 )
        {
          if ( v26 == v25 )
          {
            sub_18710((__int64)&v99, v26, &v98);
          }
          else
          {
            v27 = v26 + 8;
            *((_QWORD *)v27 - 1) = v98;
            v100 = v27;
          }
          v28 = *(_DWORD *)(a1 + 96);
          if ( !v28 )
            goto LABEL_106;
          v29 = *(_QWORD *)(a1 + 88);
          v30 = (unsigned int)(v28 - 1);
          v31 = *(_QWORD *)(v29 + 8 * v30);
          *(_DWORD *)(a1 + 96) = v30;
          v98 = v31;
          if ( !v31 )
            goto LABEL_106;
          v32 = *(_WORD *)(v31 + 16);
          if ( v32 == 221 )
          {
            v26 = v100;
            v25 = v101;
            continue;
          }
          break;
        }
        if ( v32 == 40 )
        {
          if ( v28 == 1 )
            goto LABEL_106;
          v87 = (unsigned int)(v28 - 2);
          v7 = *(_QWORD *)(v29 + 8 * v87);
          *(_DWORD *)(a1 + 96) = v87;
          if ( !v7 )
          {
            v83 = v99;
            goto LABEL_107;
          }
          v88 = sub_CE00((_QWORD *)a1, v21, v7, v31);
        }
        else
        {
          v88 = sub_CD20((_QWORD *)a1, v21, v31);
        }
        v89 = v100;
        v83 = v99;
        v7 = v88;
        if ( v99 != v100 )
        {
          do
          {
            sub_C080(v7, *((_QWORD *)v89 - 1), (_QWORD *)a1);
            v89 -= 8;
          }
          while ( v83 != v89 );
        }
        if ( v95 )
        {
          v90 = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(v90 + 16) = 206;
          *(_BYTE *)(v90 + 18) = 0;
          sub_C080(v7, v90, (_QWORD *)a1);
        }
        goto LABEL_107;
      case 'L':
        v14 = sub_13360(a1);
        v15 = 255;
        return sub_CD20((_QWORD *)a1, v15, v14);
      case 'M':
        v14 = sub_FA80(a1);
        v15 = 7;
        return sub_CD20((_QWORD *)a1, v15, v14);
      case 'N':
        v47 = sub_13360(a1);
        v48 = sub_10000(a1);
        v49 = sub_BBE0(a1, 221);
        v50 = v47;
        v51 = v48;
        v52 = 257;
        return sub_CEE0((_QWORD *)a1, v52, v49, v51, v50);
      case 'O':
        v46 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v46 + 16) = 150;
        v7 = v46;
        *(_BYTE *)(v46 + 18) = 0;
        return v7;
      case 'P':
        v42 = 84;
        goto LABEL_48;
      case 'Q':
      case 'Y':
        v14 = sub_D1F0((_QWORD *)a1);
        v15 = (v6 != 81) + 316;
        return sub_CD20((_QWORD *)a1, v15, v14);
      case 'R':
      case 'r':
      case 'y':
        if ( v6 == 82 )
        {
          v9 = 190;
        }
        else
        {
          if ( v6 == 121 )
          {
            v7 = sub_12C70((_QWORD *)a1, 1);
            *(_WORD *)(v7 + 16) = 191;
            *(_BYTE *)(v7 + 18) = 0;
            v91 = sub_BBE0(a1, 40);
            if ( v91 )
              sub_CCF0((_QWORD *)a1, v7, v91);
            v11 = sub_BBE0(a1, 221);
            goto LABEL_9;
          }
          v9 = 189;
        }
        v10 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v10 + 16) = v9;
        v7 = v10;
        *(_BYTE *)(v10 + 18) = 0;
        v11 = sub_BBE0(a1, 40);
        if ( !v11 )
          goto LABEL_10;
LABEL_9:
        sub_CCF0((_QWORD *)a1, v7, v11);
LABEL_10:
        v12 = sub_BBE0(a1, 221);
        sub_CCF0((_QWORD *)a1, v7, v12);
        v13 = sub_BBE0(a1, 221);
        sub_CCF0((_QWORD *)a1, v7, v13);
        return v7;
      case 'S':
        v14 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
        v15 = 183;
        return sub_CD20((_QWORD *)a1, v15, v14);
      case 'U':
        v72 = sub_BBE0(a1, 221);
        if ( !v72 )
          return 0;
        v73 = *(_DWORD *)(a1 + 96);
        if ( !v73 )
          return 0;
        v74 = (unsigned int)(v73 - 1);
        v75 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v74);
        *(_DWORD *)(a1 + 96) = v74;
        if ( !v75 )
          return 0;
        v76 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v76 + 16) = 192;
        v7 = v76;
        *(_BYTE *)(v76 + 18) = 0;
        sub_C080(v76, v75, (_QWORD *)a1);
        sub_C080(v7, v72, (_QWORD *)a1);
        return v7;
      case 'V':
        v78 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
        v61 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
        v62 = v78;
        v63 = 244;
        return sub_CE00((_QWORD *)a1, v63, v61, v62);
      case 'W':
        v77 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
        v61 = sub_135F0(a1);
        v62 = v77;
        v63 = 185;
        return sub_CE00((_QWORD *)a1, v63, v61, v62);
      case 'X':
        v41 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v41 + 16) = 57;
        v7 = v41;
        *(_BYTE *)(v41 + 18) = 0;
        return v7;
      case 'Z':
      case 'z':
        v16 = sub_D1F0((_QWORD *)a1);
        v17 = sub_BBE0(a1, 40);
        v18 = sub_BBE0(a1, 221);
        v19 = sub_BBE0(a1, 221);
        v20 = sub_CEE0((_QWORD *)a1, (v6 != 122) + 152, v19, v18, v16);
        v7 = v20;
        if ( v17 )
          sub_CCF0((_QWORD *)a1, v20, v17);
        return v7;
      case 'a':
        v7 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v7 + 16) = 161;
        *(_BYTE *)(v7 + 18) = 0;
        return v7;
      case 'b':
        v60 = sub_13360(a1);
        v61 = sub_BBE0(a1, 221);
        v62 = v60;
        v63 = 258;
        return sub_CE00((_QWORD *)a1, v63, v61, v62);
      case 'c':
        v14 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
        v15 = 252;
        return sub_CD20((_QWORD *)a1, v15, v14);
      case 'd':
        v7 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v7 + 16) = 53;
        *(_BYTE *)(v7 + 18) = 0;
        return v7;
      case 'e':
        v7 = 0;
        sub_10ED0(&v99, (_QWORD *)a1);
        v58 = *((_QWORD *)v99 - 3);
        if ( v58 )
          v7 = sub_BAC0((_QWORD *)a1, 265, v99, v58);
        std::string::~string((std::string *)&v99);
        return v7;
      case 'f':
        return sub_174E0(a1);
      case 'g':
        v57 = 88;
        return sub_15400((_QWORD *)a1, v57);
      case 'i':
        v57 = 93;
        return sub_15400((_QWORD *)a1, v57);
      case 'j':
        v14 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
        v15 = 253;
        return sub_CD20((_QWORD *)a1, v15, v14);
      case 'l':
        v14 = sub_FA80(a1);
        if ( !v14 )
          return 0;
        v15 = 259;
        return sub_CD20((_QWORD *)a1, v15, v14);
      case 'm':
        v56 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v56 + 16) = 134;
        v7 = v56;
        *(_BYTE *)(v56 + 18) = 0;
        return v7;
      case 'n':
        v81 = sub_13360(a1);
        v82 = sub_10000(a1);
        v49 = sub_BBE0(a1, 221);
        v50 = v81;
        v51 = v82;
        v52 = 256;
        return sub_CEE0((_QWORD *)a1, v52, v49, v51, v50);
      case 'o':
        v80 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v80 + 16) = 154;
        v7 = v80;
        *(_BYTE *)(v80 + 18) = 0;
        return v7;
      case 'p':
        v42 = 83;
LABEL_48:
        v43 = sub_151B0((_QWORD *)a1, v42);
        v44 = sub_BBE0(a1, 221);
        v45 = sub_CD20((_QWORD *)a1, 91, v44);
        return sub_CCF0((_QWORD *)a1, v43, v45);
      case 'q':
        v14 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
        v15 = 254;
        return sub_CD20((_QWORD *)a1, v15, v14);
      case 's':
        v57 = 92;
        return sub_15400((_QWORD *)a1, v57);
      case 'u':
        v71 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v71 + 16) = 307;
        v7 = v71;
        *(_BYTE *)(v71 + 18) = 0;
        return v7;
      case 'v':
        v66 = sub_D180((_QWORD *)a1);
        if ( v66 < 0 )
          return 0;
        v68 = *(_QWORD *)(a1 + 72);
        v69 = v66;
        if ( v67 > v68 && (*(_QWORD *)(a1 + 72) = v68 + 1, *(_BYTE *)(v3 + v68) == 114) )
        {
          v94 = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(v94 + 16) = 276;
          v7 = v94;
          *(_BYTE *)(v94 + 18) = 2;
          *(_QWORD *)v94 = v69;
        }
        else
        {
          v70 = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(v70 + 16) = 275;
          v7 = v70;
          *(_BYTE *)(v70 + 18) = 2;
          *(_QWORD *)v70 = v69;
        }
        return v7;
      case 'w':
        if ( v1 <= v4 )
          return 0;
        *(_QWORD *)(a1 + 72) = v2 + 2;
        v64 = *(_BYTE *)(v3 + v2 + 1);
        switch ( v64 )
        {
          case 'S':
            v93 = sub_12C70((_QWORD *)a1, 1);
            *(_WORD *)(v93 + 16) = 328;
            v7 = v93;
            *(_BYTE *)(v93 + 18) = 0;
            break;
          case 'b':
            v92 = sub_12C70((_QWORD *)a1, 1);
            *(_WORD *)(v92 + 16) = 320;
            v7 = v92;
            *(_BYTE *)(v92 + 18) = 0;
            break;
          case 'B':
            v65 = sub_12C70((_QWORD *)a1, 1);
            *(_WORD *)(v65 + 16) = 321;
            v7 = v65;
            *(_BYTE *)(v65 + 18) = 0;
            break;
          default:
            return 0;
        }
        return v7;
      case 'x':
        v79 = sub_12C70((_QWORD *)a1, 1);
        *(_WORD *)(v79 + 16) = 56;
        v7 = v79;
        *(_BYTE *)(v79 + 18) = 0;
        return v7;
      default:
        return 0;
    }
  }
  return result;
}
