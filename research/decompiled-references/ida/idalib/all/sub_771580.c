__int64 __fastcall sub_771580(char *a1, int a2, const char *a3, int a4)
{
  char *v4; // rbx
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  int v10; // eax
  signed int v11; // ebx
  int v12; // ebx
  __int64 v14; // rcx
  int v15; // esi
  char v16; // di
  __int16 v17; // ax
  char *v18; // rax
  char v19; // r12
  bool v20; // bp
  __int64 (*v21)(void); // rdx
  _BYTE *v22; // rcx
  __int64 v23; // rax
  _BYTE *v24; // rax
  int v25; // eax
  unsigned int v26; // edx
  char *v27; // rbp
  signed int v28; // eax
  int v29; // edi
  char v30; // al
  int v31; // eax
  unsigned __int8 v32; // dl
  char *v33; // rsi
  char *v34; // rsi
  __int64 v35; // rbx
  unsigned __int16 **v36; // rbx
  char *v37; // rax
  signed int v38; // eax
  signed int v39; // r14d
  char v40; // dl
  __int64 v41; // rax
  int v42; // eax
  char v43; // r14
  int v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  signed int v48; // ebp
  int v49; // r8d
  __int64 v50; // rdi
  _BYTE *v51; // rsi
  __int16 v52; // di
  __int64 v53; // rsi
  _BYTE *v54; // rax
  __int64 v55; // rax
  __int16 v56; // cx
  __int16 v57; // si
  _BYTE *v58; // rax
  unsigned int v59; // ecx
  char *v60; // rbp
  char v61; // al
  char *v62; // r13
  char *v63; // r13
  __int64 v64; // rbx
  unsigned __int8 *v65; // r13
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rdx
  _DWORD *v69; // rdx
  int v70; // edi
  __int16 v71; // si
  __int16 v72; // di
  const char *v73; // r13
  int v74; // eax
  __int64 v75; // r15
  char v76; // bl
  _DWORD *v77; // r8
  int v78; // edx
  __int64 v79; // rax
  __int64 v80; // rdx
  _DWORD *v81; // rdx
  int v82; // edx
  __int64 v83; // rax
  __int64 v84; // rdx
  _DWORD *v85; // rdx
  unsigned int v88; // [rsp+14h] [rbp-84h]
  bool v89; // [rsp+2Eh] [rbp-6Ah]
  char v90; // [rsp+2Fh] [rbp-69h]
  int v91; // [rsp+30h] [rbp-68h] BYREF
  int v92; // [rsp+34h] [rbp-64h] BYREF
  int v93; // [rsp+38h] [rbp-60h] BYREF
  int v94; // [rsp+3Ch] [rbp-5Ch] BYREF
  int v95; // [rsp+40h] [rbp-58h] BYREF
  int v96; // [rsp+44h] [rbp-54h] BYREF
  _BYTE *v97; // [rsp+48h] [rbp-50h]
  char *v98; // [rsp+50h] [rbp-48h]
  unsigned __int64 v99; // [rsp+58h] [rbp-40h]

  v99 = __readfsqword(0x28u);
  v89 = 0;
  v90 = 0;
  if ( !a3 )
    return 4294967294LL;
  v4 = (char *)a3;
  v6 = strlen(a3);
  v91 = v6;
  v7 = v6;
  if ( !v6 )
    return 4294967294LL;
  if ( (a4 & 0xC000000) == 0 )
    goto LABEL_8;
  if ( v6 <= 2 )
    goto LABEL_27;
  if ( *(_WORD *)v4 == 24426 )
  {
    v7 = v6 - 2;
    v91 = v6 - 2;
    v89 = (a4 & 0x8000000) != 0;
    v4 += 2;
LABEL_27:
    if ( v7 == 1 )
      goto LABEL_10;
  }
  if ( *v4 == 46 )
  {
    --v7;
    ++v4;
    v91 = v7;
  }
  else
  {
    v7 = v91;
  }
LABEL_8:
  if ( v7 > 6 && *(_DWORD *)v4 == 1835622239 && *((_WORD *)v4 + 2) == 24432 )
  {
    v7 -= 6;
    v90 = 1;
    v4 += 6;
    v91 = v7;
  }
LABEL_10:
  qword_2CD44C0 = v4;
  v8 = (__int64)&v4[v7];
  qword_2CD44B0 = 0;
  qword_2CD44B8 = v8;
  byte_2CD44A0 = -1;
  dword_2CD44A8 = 4;
  if ( a2 )
  {
    qword_2CD43E8 = 0;
    dword_2CD44A4 = 0;
    v98 = a1;
    if ( a2 >= 0 )
    {
      v91 = a2 - 1;
      if ( a2 != 1 )
        goto LABEL_13;
      return 4294967294LL;
    }
    v14 = (unsigned int)-a2;
    v91 = -a2;
    if ( v98 )
    {
      if ( (unsigned int)v14 <= 9 )
        return 4294967294LL;
      v98 = *(char **)v98;
      if ( !v98 )
        return 4294967294LL;
      qword_2CD43E8 = (__int64)&v98[v14 - 4];
      v15 = ~a2;
    }
    else
    {
      if ( (unsigned int)(-2 - a2) > 6 )
        return 4294967294LL;
      v15 = ~a2;
      if ( a4 & 0x89FFFFFF | ~a2 & (unsigned int)v14 )
        return 4294967294LL;
      dword_2CD44A4 = v14;
      dword_2CD44A8 = v14;
    }
    v91 = v15;
LABEL_13:
    dword_2CD43F4 = 2000;
    dword_2CD43F0 = 1750;
    dword_2CD44CC = a4;
    v97 = nullptr;
    if ( (a4 & 0x2000000) != 0 && v7 > 5 && (unsigned __int8)(*(_BYTE *)(v8 - 1) - 48) <= 9u )
    {
      v16 = *(_BYTE *)(v8 - 2);
      if ( *(_BYTE *)(v8 + ((unsigned __int8)(v16 - 48) > 9u) - 3) == 95 )
        v97 = (_BYTE *)(v8 + ((unsigned __int8)(v16 - 48) > 9u) - 3);
    }
    v9 = (unsigned __int64)env;
    byte_2CD44A1 = 0;
    v88 = a4 & 0x70000000;
    qword_2CD43F8 = (__int64)&unk_2CD4400;
    dword_2CD44C8 = 0;
    v10 = _setjmp(env);
    v11 = v10;
    if ( v10 == -3 )
      goto LABEL_21;
    if ( v10 < -2 )
    {
      if ( v10 < -7 )
      {
        if ( v10 >= -9 )
        {
LABEL_21:
          dword_2CD44C8 = v11;
          goto LABEL_22;
        }
      }
      else if ( v10 == -4 )
      {
        v11 = -4;
        if ( a2 < 0 )
        {
          v12 = dword_2CD44C8;
          *(_QWORD *)a1 = qword_2CD43E8;
          v11 = v12 | 0x80000000;
        }
        goto LABEL_21;
      }
LABEL_44:
      v11 = -1;
      goto LABEL_21;
    }
    if ( v10 )
      goto LABEL_44;
    v18 = qword_2CD44C0++;
    v19 = *v18;
    switch ( *v18 )
    {
      case '?':
        v21 = (__int64 (*)(void))sub_766F70;
        goto LABEL_96;
      case '@':
        v28 = sub_76F490();
        if ( v28 == -1 )
        {
          v21 = (__int64 (*)(void))sub_758D20;
          v11 = -1;
          if ( !v88 )
            goto LABEL_94;
LABEL_93:
          if ( v88 == 0x20000000 )
          {
LABEL_94:
            dword_2CD44C8 = 0x20000000;
            goto LABEL_80;
          }
          return 4294967289LL;
        }
        v11 = v28 + 1;
        if ( v88 != 1610612736 )
        {
          if ( !v88 || (v21 = nullptr, v88 == 0x10000000) )
          {
            dword_2CD44C8 = 0x10000000;
            if ( !dword_2CD44A4 )
            {
              v21 = nullptr;
              if ( !v97 )
              {
                v27 = (char *)qword_2CD44B0;
                v11 = v28;
                goto LABEL_165;
              }
              goto LABEL_69;
            }
            goto LABEL_123;
          }
          goto LABEL_93;
        }
        goto LABEL_185;
      case 'T':
      case 'W':
        qword_2CD44C0 = v18 + 2;
        if ( v18[1] != 63 )
          goto LABEL_76;
        if ( v88 && v88 != 805306368 )
          return 4294967289LL;
        dword_2CD44C8 = 805306368;
        v21 = (__int64 (*)(void))sub_76E360;
        goto LABEL_80;
      case '_':
        if ( (unsigned __int8)sub_76E420() )
        {
          if ( !v88 || dword_2CD44C8 == v88 )
          {
            v27 = (char *)qword_2CD44B8;
            v9 = (unsigned int)dword_2CD44A4;
            qword_2CD44C0 += 11;
            qword_2CD44B0 = qword_2CD44B8;
            if ( !dword_2CD44A4 )
            {
              if ( !v97 )
              {
                v11 = -1;
                v19 = 0;
                goto LABEL_165;
              }
              v19 = 0;
              v21 = nullptr;
              goto LABEL_69;
            }
            goto LABEL_148;
          }
          return 4294967289LL;
        }
        v38 = sub_76F490();
        v39 = v38;
        if ( v38 != -1 )
        {
          v11 = v38 + 1;
          if ( v88 != 1610612736 )
          {
            v21 = nullptr;
LABEL_96:
            if ( !v88 || v88 == 0x10000000 )
            {
              dword_2CD44C8 = 0x10000000;
              goto LABEL_80;
            }
            return 4294967289LL;
          }
LABEL_185:
          v27 = (char *)qword_2CD44B0;
          if ( *(_BYTE *)(qword_2CD44B0 + 1) != 64 )
          {
            dword_2CD44C8 = 1610612736;
            if ( dword_2CD44A4 )
            {
LABEL_122:
              v28 = v11 - 1;
LABEL_123:
              v31 = dword_2CD44A8 * v28 + 1;
LABEL_124:
              dword_2CD44C8 = v31;
              goto LABEL_22;
            }
            if ( qword_2CD44B0 - (__int64)qword_2CD44C0 <= 4 || *(_WORD *)qword_2CD44C0 != 23135 )
            {
              if ( !v97 )
              {
                --v11;
                v88 = 0;
LABEL_165:
                if ( qword_2CD43F8 < (unsigned __int64)&byte_2CD44A0 )
                {
                  v40 = *v27;
                  v41 = qword_2CD43F8 + 16;
                  v95 = 0;
                  *(_BYTE *)(qword_2CD43F8 + 8) = v40;
                  *(_QWORD *)(v41 - 16) = qword_2CD44B8;
                  qword_2CD44B8 = (__int64)v27;
                  *v27 = 0;
                  qword_2CD43F8 = v41;
                  sub_76EF20((__int16 *)&v95, (_DWORD)v27 - (_DWORD)qword_2CD44C0);
                  if ( byte_2CD44A1 > 0 )
                  {
                    sub_76FA20(&v96, (__int64)"`...'", 5u);
                    v56 = v96;
                    if ( (_WORD)v96 )
                    {
                      v57 = v95;
                      if ( (_WORD)v95 )
                      {
                        v78 = dword_2CD43F0;
                        v79 = (unsigned int)(dword_2CD43F0 - 1);
                        dword_2CD43F0 = v79;
                        if ( (int)v79 < 0 )
                          goto LABEL_266;
                        v80 = (unsigned int)(v78 - 2);
                        dword_2CD43F0 = v80;
                        v58 = &byte_2CCCDE0[16 * v79 + 2000];
                        if ( (_DWORD)v80 == -1 )
                          goto LABEL_266;
                        v81 = &byte_2CCCDE0[16 * v80 + 2000];
                        *v81 = 0;
                        *(_WORD *)v81 = v57;
                        *(_QWORD *)v58 = v81;
                        *((_WORD *)v58 + 5) = 0;
                        *((_WORD *)v58 + 4) = v56;
                      }
                      else
                      {
                        v58 = &byte_2CCCDE0[(unsigned __int16)v96];
                      }
                      LOWORD(v95) = v58 - byte_2CCCDE0;
                    }
                  }
                  if ( v11 < 0 )
                  {
                    dword_2CD44C8 |= 0xEu;
                    if ( (dword_2CD44CC & 0x128) != 0 )
                    {
                      v92 = v95;
                      if ( !(_WORD)v95 )
                        goto LABEL_74;
                      goto LABEL_112;
                    }
                    v70 = 13;
                  }
                  else
                  {
                    v42 = 255;
                    v43 = v27[1];
                    v44 = 13;
                    if ( (unsigned int)v11 <= 0xFF )
                      v42 = v11;
                    v45 = v42 << 8;
                    if ( v43 != 64 )
                    {
                      v44 = 4;
                      if ( v19 != 95 )
                        v44 = v19 == 0 ? 10 : 5;
                    }
                    dword_2CD44C8 |= v44 | v45;
                    if ( (dword_2CD44CC & 8) != 0 )
                      goto LABEL_201;
                    sub_76FD20((__int16 *)&v95, 0x28u);
                    if ( v11 )
                    {
                      v46 = dword_2CD43F0;
                      v47 = dword_2CD43F0 - 1;
                      dword_2CD43F0 = v47;
                      if ( v47 < 0 )
                        goto LABEL_266;
                      v48 = v11;
                      while ( 1 )
                      {
                        v52 = v95;
                        v53 = 16LL * (unsigned int)(v47 + 125);
                        v54 = &byte_2CCCDE0[v53];
                        *(_QWORD *)v54 = 120;
                        *((_DWORD *)v54 + 2) = 0x10000;
                        if ( v52 )
                        {
                          v67 = (unsigned int)(v46 - 2);
                          dword_2CD43F0 = v46 - 2;
                          if ( v46 == 1 )
                            goto LABEL_266;
                          v68 = (unsigned int)(v46 - 3);
                          dword_2CD43F0 = v68;
                          v54 = &byte_2CCCDE0[16 * v67 + 2000];
                          if ( (_DWORD)v68 == -1 )
                            goto LABEL_266;
                          v69 = &byte_2CCCDE0[16 * v68 + 2000];
                          *v69 = 0;
                          *(_WORD *)v69 = v52;
                          *(_QWORD *)v54 = v69;
                          *((_WORD *)v54 + 5) = 0;
                          *((_WORD *)v54 + 4) = v53;
                        }
                        v55 = v54 - byte_2CCCDE0;
                        LOWORD(v95) = v55;
                        if ( !--v11 )
                          break;
                        if ( (dword_2CD44CC & 0x400000) != 0 )
                        {
                          v49 = dword_2CD43F0;
                          v46 = dword_2CD43F0 - 1;
                          dword_2CD43F0 = v46;
                          if ( v46 < 0 )
                            goto LABEL_266;
                          v50 = 16 * ((unsigned int)v46 + 125LL);
                          v51 = &byte_2CCCDE0[v50];
                          *(_QWORD *)v51 = 8236;
                          *((_DWORD *)v51 + 2) = 0x20000;
                          if ( (_WORD)v55 )
                          {
                            dword_2CD43F0 = v49 - 2;
                            if ( v49 == 1 )
                              goto LABEL_266;
                            v46 = v49 - 3;
                            dword_2CD43F0 = v49 - 3;
                            v51 = &byte_2CCCDE0[16 * (v49 - 2) + 2000];
                            if ( v49 == 2 )
                              goto LABEL_266;
                            v77 = &byte_2CCCDE0[16 * v46 + 2000];
                            *v77 = 0;
                            *(_WORD *)v77 = v55;
                            *(_QWORD *)v51 = v77;
                            *((_WORD *)v51 + 5) = 0;
                            *((_WORD *)v51 + 4) = v50;
                          }
                          LOWORD(v95) = v51 - byte_2CCCDE0;
                        }
                        else
                        {
                          sub_76FD20((__int16 *)&v95, 0x2Cu);
                          v46 = dword_2CD43F0;
                        }
                        v47 = v46 - 1;
                        dword_2CD43F0 = v46 - 1;
                        if ( v46 - 1 < 0 )
                          goto LABEL_266;
                      }
                      v11 = v48;
                    }
                    sub_76FD20((__int16 *)&v95, 0x29u);
                    if ( (dword_2CD44CC & 0x120) != 0 )
                    {
LABEL_201:
                      LOWORD(v59) = HIWORD(v95);
                      LOWORD(v24) = v95;
                      goto LABEL_202;
                    }
                    v70 = 7;
                    if ( v43 != 64 )
                    {
                      if ( v19 == 95 )
                      {
                        v70 = 4;
                      }
                      else
                      {
                        v70 = 8;
                        if ( v19 )
                          v70 = 5;
                      }
                    }
                  }
                  LODWORD(v24) = sub_76E800(v70);
                  v71 = (__int16)v24;
                  v59 = (unsigned int)v24 >> 16;
                  v72 = v95;
                  if ( (_WORD)v95 )
                  {
                    if ( !(_WORD)v24 )
                    {
                      v24 = &byte_2CCCDE0[(unsigned __int16)v95];
LABEL_234:
                      LOWORD(v24) = (_WORD)v24 - (unsigned __int16)byte_2CCCDE0;
                      goto LABEL_202;
                    }
                    v82 = dword_2CD43F0;
                    v83 = (unsigned int)(dword_2CD43F0 - 1);
                    dword_2CD43F0 = v83;
                    if ( (int)v83 >= 0 )
                    {
                      v84 = (unsigned int)(v82 - 2);
                      dword_2CD43F0 = v84;
                      v24 = &byte_2CCCDE0[16 * v83 + 2000];
                      if ( (_DWORD)v84 != -1 )
                      {
                        v85 = &byte_2CCCDE0[16 * v84 + 2000];
                        *v85 = 0;
                        *(_WORD *)v85 = v71;
                        *(_QWORD *)v24 = v85;
                        *((_WORD *)v24 + 5) = 0;
                        *((_WORD *)v24 + 4) = v72;
                        goto LABEL_234;
                      }
                    }
LABEL_266:
                    __longjmp_chk(env, 4294967288LL);
                  }
LABEL_202:
                  LOWORD(v92) = (_WORD)v24;
                  HIWORD(v92) = v59;
                  goto LABEL_73;
                }
LABEL_267:
                sub_76E790(v9);
              }
              v88 = 0;
              v21 = nullptr;
              goto LABEL_69;
            }
            v9 = qword_2CD44B0;
            sub_76E7B0((_BYTE *)qword_2CD44B0);
            v21 = sub_75FD40;
            goto LABEL_80;
          }
          return 4294967289LL;
        }
        v60 = qword_2CD44C0;
        v61 = *qword_2CD44C0;
        v62 = &qword_2CD44C0[*qword_2CD44C0 == 95];
        if ( *v62 == 68 )
        {
          qword_2CD44C0 += v61 == 95;
          if ( (unsigned __int8)(v62[1] - 48) > 9u )
            goto LABEL_252;
          v73 = v62 + 1;
          do
          {
            v74 = *v73++;
            v11 = v74 + 10 * v11 - 48;
            if ( v11 <= 0 )
              goto LABEL_252;
            v75 = *v73;
          }
          while ( (unsigned __int8)(v75 - 48) <= 9u );
          if ( (_BYTE)v75 != 95 && ((unsigned int)(char)v75 > 0x7F || ((*__ctype_b_loc())[v75] & 0x400) == 0) )
            goto LABEL_252;
          v9 = (unsigned __int64)v73;
          if ( strlen(v73) < v11 )
            goto LABEL_252;
          do
          {
            do
              v76 = *++v73;
            while ( v76 == 95 );
            if ( (unsigned int)v76 > 0x7F )
              goto LABEL_252;
          }
          while ( ((*__ctype_b_loc())[v76] & 8) != 0 );
          if ( v76 )
            goto LABEL_252;
        }
        else
        {
          v63 = qword_2CD44C0;
          if ( v61 == 95 )
          {
            v61 = qword_2CD44C0[1];
            v63 = qword_2CD44C0 + 1;
          }
          if ( v61 != 84 || (v64 = v63[1], v65 = (unsigned __int8 *)(v63 + 1), !(_BYTE)v64) )
          {
LABEL_252:
            v18 = v60 - 1;
            v11 = v39;
LABEL_76:
            qword_2CD44C0 = v18;
            v25 = sub_76F170();
            dword_2CD44C8 = v25;
            v26 = v25;
            if ( !v88 )
            {
              if ( !v25 )
                return 4294967290LL;
              if ( v25 == 1879048192 )
              {
                dword_2CD44C8 = 1342177280;
                v21 = (__int64 (*)(void))sub_762F20;
LABEL_80:
                if ( !dword_2CD44A4 )
                {
                  if ( !v97 )
                  {
LABEL_71:
                    if ( v21 )
                    {
                      LODWORD(v24) = v21();
                      v92 = (int)v24;
LABEL_73:
                      if ( !(_WORD)v24 )
                      {
LABEL_74:
                        dword_2CD44C8 = -3;
                        goto LABEL_22;
                      }
                      if ( v11 > 0 && v88 == 1610612736 )
                      {
                        if ( (dword_2CD44CC & 8) == 0 )
                        {
                          if ( (dword_2CD44C8 & 0x10001) != 1
                            || BYTE1(dword_2CD44C8) != v11 - 1
                            || qword_2CD44C0 != (char *)qword_2CD44B0 )
                          {
                            dword_2CD44C8 = -7;
                            goto LABEL_22;
                          }
                          if ( (dword_2CD44CC & 0x120) == 0 )
                          {
                            v29 = 4;
                            if ( v19 == 64 )
                              v29 = 5;
                            v93 = sub_76E800(v29);
                            v92 = sub_771320((unsigned __int16 *)&v93, (unsigned __int16 *)&v92);
                          }
                        }
                        dword_2CD44C8 = ((v19 == 64) + 4) | dword_2CD44C8 & 0xFFFFFFF0;
                      }
LABEL_112:
                      if ( !*qword_2CD44C0 || dword_2CD44C8 & 0x800000 | dword_2CD44CC & 8 )
                      {
                        if ( v98 )
                        {
                          if ( v90 && (dword_2CD44CC & 0x800008) == 0 )
                          {
                            v32 = 20;
                            v33 = "declspec(dllimport) ";
                            if ( (dword_2CD44CC & 0x10) == 0 )
                            {
                              v32 = 22;
                              v33 = "__declspec(dllimport) ";
                            }
                            sub_76FA20(&v94, (__int64)v33, v32);
                            v92 = sub_771320((unsigned __int16 *)&v94, (unsigned __int16 *)&v92);
                          }
                          if ( v89 && (!*qword_2CD44C0 || (~dword_2CD44CC & 0xC000000) != 0) )
                            v92 = sub_7714B0(0x5F6Au, (unsigned __int16 *)&v92);
                          v34 = v98;
                          v35 = (unsigned __int16)v92;
                          if ( (_WORD)v92 )
                          {
                            do
                            {
                              v36 = (unsigned __int16 **)&byte_2CCCDE0[v35];
                              v37 = sub_76EA50(v36, v34, (unsigned int *)&v91);
                              v35 = *((unsigned __int16 *)v36 + 4);
                              v34 = v37;
                            }
                            while ( (_DWORD)v35 );
                          }
                          v98 = v34;
                          *v34 = 0;
                          if ( a2 < 0 )
                            *(_QWORD *)a1 = v98;
                        }
                      }
                      else
                      {
                        dword_2CD44C8 = -5;
                      }
LABEL_22:
                      if ( (_UNKNOWN *)qword_2CD43F8 != &unk_2CD4400 )
                        sub_76E6E0(0);
                      return (unsigned int)dword_2CD44C8;
                    }
                    --v11;
                    goto LABEL_223;
                  }
LABEL_69:
                  v22 = v97;
                  if ( qword_2CD43F8 >= (unsigned __int64)&byte_2CD44A0 )
                    goto LABEL_267;
                  v23 = qword_2CD43F8 + 16;
                  *(_BYTE *)(qword_2CD43F8 + 8) = *v97;
                  *(_QWORD *)(v23 - 16) = qword_2CD44B8;
                  qword_2CD44B8 = (__int64)v22;
                  qword_2CD43F8 = v23;
                  *v22 = 0;
                  goto LABEL_71;
                }
                v20 = v21 == nullptr;
LABEL_120:
                if ( v19 && v20 )
                  goto LABEL_122;
LABEL_148:
                v31 = 0;
                goto LABEL_124;
              }
              goto LABEL_144;
            }
LABEL_140:
            v9 = v88;
            if ( v88 <= 0x4FFFFFFF || v25 && v26 < v88 )
              return 4294967289LL;
            dword_2CD44C8 = v88;
            v26 = v88;
LABEL_144:
            if ( v26 == 1610612736 )
              v21 = sub_75FD40;
            else
              v21 = (__int64 (*)(void))sub_762F20;
            goto LABEL_80;
          }
          do
          {
            if ( (_BYTE)v64 == 36
              || (_BYTE)v64 == 95
              || (unsigned int)(char)v64 <= 0x7F && ((*__ctype_b_loc())[v64] & 8) != 0 )
            {
              ++v65;
            }
            else
            {
              v9 = (unsigned __int64)v65;
              v66 = sub_76F430(v65);
              if ( !v66 )
                goto LABEL_252;
              v65 += v66;
            }
            v64 = (char)*v65;
          }
          while ( (_BYTE)v64 );
        }
        if ( !v88 || v88 == 0x40000000 )
        {
          v11 = v39;
          dword_2CD44C8 = 0x40000000;
          if ( *qword_2CD44C0 == 68 )
            v21 = (__int64 (*)(void))sub_75BF50;
          else
            v21 = (__int64 (*)(void))sub_76C060;
          goto LABEL_80;
        }
        return 4294967289LL;
      default:
        v9 = v88;
        v20 = v88 == 0x10000000 || v88 == 0;
        if ( !v20 )
        {
          qword_2CD44C0 = v18;
          v25 = sub_76F170();
          dword_2CD44C8 = v25;
          v26 = v25;
          goto LABEL_140;
        }
        v11 = sub_76F490();
        v18 = qword_2CD44C0 - 1;
        if ( v11 != -1 )
        {
          --qword_2CD44C0;
          dword_2CD44C8 = 0x10000000;
          if ( !dword_2CD44A4 )
          {
            if ( !v97 )
            {
LABEL_223:
              v27 = (char *)qword_2CD44B0;
              goto LABEL_165;
            }
            ++v11;
            v21 = nullptr;
            goto LABEL_69;
          }
          ++v11;
          goto LABEL_120;
        }
        goto LABEL_76;
    }
  }
  qword_2CD44C0 = v4 + 1;
  switch ( *v4 )
  {
    case '?':
      v17 = *(_WORD *)(v4 + 1);
      return (unsigned __int8)(v17 != 16447) << 28;
    case '@':
      if ( (unsigned int)sub_76F490() == -1 )
        return 0x20000000;
      if ( *(_BYTE *)(qword_2CD44B0 + 1) == 64
        || qword_2CD44B0 - (__int64)qword_2CD44C0 <= 4
        || *(_WORD *)qword_2CD44C0 != 23135 )
      {
        return 268435457;
      }
      return 1610612737;
    case 'T':
    case 'W':
      if ( v4[1] != 63 )
        goto LABEL_36;
      return 805306368;
    case '_':
      if ( (unsigned __int8)sub_76E420() )
        return (unsigned int)dword_2CD44C8;
      if ( (unsigned int)sub_76F490() == -1 )
      {
        v30 = *qword_2CD44C0;
        if ( *qword_2CD44C0 == 68 )
        {
          if ( (unsigned __int8)(qword_2CD44C0[1] - 48) > 9u )
            goto LABEL_118;
        }
        else
        {
          if ( v30 == 84 )
          {
            if ( qword_2CD44C0[1] )
              return 0x40000000;
            goto LABEL_118;
          }
          if ( v30 != 95 || qword_2CD44C0[1] != 84 )
            goto LABEL_118;
        }
        if ( qword_2CD44C0[2] )
          return 0x40000000;
LABEL_118:
        v4 = qword_2CD44C0 - 1;
LABEL_36:
        qword_2CD44C0 = v4;
        return sub_76F170();
      }
      v17 = *(_WORD *)qword_2CD44C0;
      if ( qword_2CD44B0 - (__int64)qword_2CD44C0 > 4 && v17 == 23135 )
        return 1610612737;
      else
        return (unsigned __int8)(v17 != 16447) << 28;
    default:
      if ( (unsigned int)sub_76F490() != -1 )
        return 268435457;
      v4 = qword_2CD44C0 - 1;
      goto LABEL_36;
  }
}
