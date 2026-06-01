__int64 __fastcall sub_B78650(__int64 a1)
{
  __int64 v1; // r13
  void *v2; // r12
  int v3; // r8d
  int v4; // ecx
  char *v5; // r15
  unsigned int v6; // edi
  char *v7; // rdx
  char *v8; // rax
  char *v9; // r12
  void *v10; // rbx
  char *v11; // rsi
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rdi
  _DWORD *v19; // rax
  __int64 v20; // r8
  int v21; // r9d
  _QWORD *v22; // r15
  __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // ecx
  _QWORD *v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // rsi
  _QWORD *v30; // rax
  _QWORD *v31; // r12
  __int64 v32; // rdx
  _QWORD *v33; // r13
  _QWORD *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v38; // rax
  _DWORD *v39; // rax
  int v40; // edx
  int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int i; // r12d
  __int64 v47; // rax
  __int64 v48; // rbx
  char *v49; // rdi
  unsigned int v50; // ecx
  __int64 v51; // rax
  char *v52; // r12
  char *v53; // rbx
  void *v54; // r13
  char *v55; // rsi
  int v56; // eax
  int v57; // edx
  __int64 v58; // rax
  char v59; // cl
  __int64 v60; // rax
  char v61; // cl
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 **v69; // [rsp+18h] [rbp-120h]
  unsigned int v70; // [rsp+28h] [rbp-110h]
  __int64 v71; // [rsp+28h] [rbp-110h]
  unsigned int v72; // [rsp+28h] [rbp-110h]
  unsigned int v73; // [rsp+38h] [rbp-100h]
  unsigned int v74; // [rsp+38h] [rbp-100h]
  unsigned int v75; // [rsp+38h] [rbp-100h]
  unsigned int v76; // [rsp+3Ch] [rbp-FCh]
  _QWORD v77[4]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v78[4]; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v79[2]; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD v80[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-88h]
  __int64 v84; // [rsp+B8h] [rbp-80h]
  __int64 v85; // [rsp+C0h] [rbp-78h]
  __int64 v86; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v87; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v88; // [rsp+E0h] [rbp-58h]
  __int64 v89; // [rsp+E8h] [rbp-50h]
  __int64 v90; // [rsp+F0h] [rbp-48h]

  v1 = a1 + 112;
  v2 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a1 + 112);
  sub_182CBA0(v2, a1 + 128);
  v3 = *(_DWORD *)(a1 + 100);
  *(_BYTE *)(a1 + 132) &= ~1u;
  *(_DWORD *)(a1 + 128) = 1;
  if ( v3 || *(_DWORD *)(a1 + 104) )
  {
    v4 = 0;
    v5 = *(char **)(a1 + 88);
    v6 = *(_DWORD *)(a1 + 96);
    v7 = &v5[40 * v6];
    v8 = *(char **)(a1 + 88);
    if ( v5 != v7 )
    {
      do
      {
        while ( *(_QWORD *)v8 )
        {
          *(_QWORD *)v8 = 0;
          v8 += 40;
          if ( v7 == v8 )
            goto LABEL_8;
        }
        v8 += 40;
        ++v4;
      }
      while ( v7 != v8 );
LABEL_8:
      if ( v6 > 0x10 && 3 * v6 < 4 * v4 )
      {
        if ( v5 )
        {
          v9 = v5;
          do
          {
            v10 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v9 + 8);
            v11 = v9 + 24;
            v9 += 40;
            sub_182CBA0(v10, v11);
          }
          while ( v9 != &v5[40 * v6] );
          sub_186B220(v5);
          v6 = *(_DWORD *)(a1 + 96);
        }
        v12 = v6 >> 1;
        *(_QWORD *)(a1 + 88) = 0;
        *(_DWORD *)(a1 + 96) = v12;
        *(_QWORD *)(a1 + 88) = sub_7FF080(v12);
      }
    }
    *(_QWORD *)(a1 + 100) = 0;
  }
LABEL_16:
  v13 = *(_QWORD *)(a1 + 144);
  if ( v13 && *(_DWORD *)(v13 - 4) )
  {
    v77[0] = 0;
    v77[2] = 1;
    v14 = *(_DWORD *)(v13 - 4);
    v77[1] = 0;
    v77[3] = 0;
    v78[0] = 0;
    v78[1] = 0;
    v78[2] = 1;
    v78[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v78, (int *)(v13 + 40LL * (unsigned int)(v14 - 1) + 8));
    v15 = *(_QWORD *)(a1 + 144);
    if ( v15 )
    {
      v16 = v15 + 40LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
      v17 = *(_QWORD *)v16;
    }
    else
    {
      v16 = 0x27FFFFFFD8LL;
      v17 = MEMORY[0x27FFFFFFD8];
    }
    v69 = (__int64 **)(a1 + 144);
    sub_25A130((char *)(v16 + 8));
    --*(_DWORD *)(*(_QWORD *)(a1 + 144) - 4LL);
    if ( *(_WORD *)(v17 + 4) )
    {
      v18 = a1 + 8;
      goto LABEL_22;
    }
    v39 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( !v39 )
    {
      v18 = a1 + 8;
      goto LABEL_22;
    }
    if ( *v39 == 5 )
    {
      v40 = v39[1];
      if ( v40 == 6 )
      {
        for ( i = 0; i < *(_DWORD *)(v17 + 24); ++i )
        {
          v47 = *(_QWORD *)(v17 + 8LL * i + 32);
          BYTE4(v87) &= 0xFCu;
          BYTE4(v89) &= 0xFCu;
          v86 = v47;
          LODWORD(v87) = 0;
          v88 = 0;
          LODWORD(v89) = 1;
          v90 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v87, (int *)v78);
          sub_B75F20(v69, (__int64)&v86);
          sub_25A130((char *)&v87);
        }
        goto LABEL_64;
      }
      if ( v40 != 9 || *(_DWORD *)(v17 + 24) != 2 )
      {
LABEL_68:
        if ( v39[1] != 9 || *(_DWORD *)(v17 + 24) != 2 )
        {
LABEL_69:
          v41 = v39[1];
          if ( v41 == 7 )
          {
            v18 = a1 + 8;
            if ( *(_DWORD *)(v17 + 24) == 2 )
            {
              v64 = *(_QWORD *)(v17 + 40);
              v65 = *(_QWORD *)(v17 + 32);
              BYTE4(v87) &= 0xFCu;
              BYTE4(v89) &= 0xFCu;
              v86 = v65;
              LODWORD(v87) = 0;
              v88 = 0;
              LODWORD(v89) = 1;
              v90 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v87, (int *)v78);
              sub_B75F20(v69, (__int64)&v86);
              sub_25A130((char *)&v87);
              sub_3EBD70((__int64)&v81, (__int64)v78);
              v86 = v64;
              LODWORD(v87) = v81;
              BYTE4(v87) = BYTE4(v81) & 3 | BYTE4(v87) & 0xFC;
              v66 = v82;
              v82 = 0;
              v88 = v66;
              LODWORD(v89) = v83;
              BYTE4(v89) = BYTE4(v83) & 3 | BYTE4(v89) & 0xFC;
              v67 = v84;
              v84 = 0;
              v90 = v67;
              sub_B75F20(v69, (__int64)&v86);
              sub_25A130((char *)&v87);
              sub_25A130((char *)&v81);
              goto LABEL_64;
            }
            goto LABEL_22;
          }
          v18 = a1 + 8;
          if ( v41 != 8 || *(_DWORD *)(v17 + 24) != 1 )
          {
LABEL_22:
            if ( (unsigned __int8)sub_1666AE0(v18, v17, v77, &v86) )
            {
              sub_3EBE30((__int64)&v86, (__int64)v77, (__int64)v78);
              sub_2FC4A0((__int64)qword_1C7F2C0, v1, (__int64)&v86, v1);
              sub_25A130((char *)&v86);
              goto LABEL_64;
            }
            if ( !*(_WORD *)(v17 + 4) && !*(_DWORD *)(v17 + 24) )
            {
              v19 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
              if ( !v19 || *v19 == -1 )
              {
                v79[0] = 0;
                v79[1] = 0;
                v80[0] = 1;
                v80[1] = 0;
                sub_182CBA0(qword_1C7F2C0, v80);
                BYTE4(v80[0]) &= ~1u;
                LODWORD(v80[0]) = 1;
                v81 = v17;
                v82 = 0;
                v83 = 0;
                v84 = 1;
                v85 = 0;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v82, (int *)v79);
                v87 = 0;
                v88 = 0;
                v86 = v81;
                v89 = 1;
                v90 = 0;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v87, (int *)&v82);
                v20 = *(unsigned int *)(a1 + 96);
                v21 = *(_DWORD *)(a1 + 104);
                if ( 3 * (int)v20 < (unsigned int)(4 * (v21 + *(_DWORD *)(a1 + 100))) )
                {
                  v70 = 2 * v20;
                  v73 = 2 * v20;
                  v22 = (_QWORD *)sub_7FF080(2 * (int)v20);
                  sub_7FF100(*(__int64 **)(a1 + 88), *(_DWORD *)(a1 + 96), (__int64)v22, v73);
                  v49 = *(char **)(a1 + 88);
                  v50 = v73;
                  v20 = v70;
                  if ( v49 )
                  {
                    v51 = *(unsigned int *)(a1 + 96);
                    if ( (_DWORD)v51 )
                    {
                      v74 = v70;
                      v52 = *(char **)(a1 + 88);
                      v71 = v1;
                      v53 = &v49[40 * v51];
                      v76 = v50;
                      do
                      {
                        v54 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, v52 + 8);
                        v55 = v52 + 24;
                        v52 += 40;
                        sub_182CBA0(v54, v55);
                      }
                      while ( v53 != v52 );
                      LODWORD(v20) = v74;
                      v1 = v71;
                      v50 = v76;
                    }
                    v72 = v50;
                    v75 = v20;
                    sub_186B220(v49);
                    v20 = v75;
                    v50 = v72;
                  }
                  v21 = 0;
                  *(_QWORD *)(a1 + 88) = v22;
                  *(_DWORD *)(a1 + 96) = v50;
                  *(_DWORD *)(a1 + 104) = 0;
                }
                else
                {
                  v22 = *(_QWORD **)(a1 + 88);
                }
                v23 = v86;
                v24 = v20 - 1;
                v25 = 40 * v20;
                v26 = *(_DWORD *)(v86 + 12);
                v27 = &v22[5 * v20];
                v28 = 40LL * (v26 & v24);
                v29 = &v22[(unsigned __int64)v28 / 8];
                if ( v28 != v25 )
                {
                  v30 = &v22[(unsigned __int64)v28 / 8];
                  v31 = nullptr;
                  while ( 1 )
                  {
                    v32 = *v30;
                    if ( *v30 > 1u )
                    {
                      if ( *(_DWORD *)(v32 + 12) == v26 && v86 == v32 )
                      {
                        v31 = v30;
                        goto LABEL_96;
                      }
                    }
                    else
                    {
                      if ( !v32 )
                      {
                        if ( v31 )
                          goto LABEL_105;
                        v31 = v30;
                        goto LABEL_106;
                      }
                      v31 = v30;
                    }
                    v30 += 5;
                    if ( v27 == v30 )
                      goto LABEL_77;
                  }
                }
                v31 = nullptr;
                while ( 1 )
                {
LABEL_77:
                  if ( v29 == v22 )
                  {
                    sub_1872CE0("");
                    sub_1873130(114, 461);
                  }
                  v45 = *v22;
                  if ( *v22 > 1u )
                  {
                    if ( *(_DWORD *)(v45 + 12) == v26 && v86 == v45 )
                    {
                      v31 = v22;
                      goto LABEL_96;
                    }
                  }
                  else
                  {
                    if ( !v45 )
                    {
                      if ( v31 )
LABEL_105:
                        *(_DWORD *)(a1 + 104) = v21 - 1;
                      else
                        v31 = v22;
LABEL_106:
                      v56 = *((_DWORD *)v31 + 2);
                      v57 = v87;
                      *v31 = v23;
                      *((_DWORD *)v31 + 2) = v57;
                      LODWORD(v87) = v56;
                      v58 = v31[2];
                      v31[2] = v88;
                      v88 = v58;
                      LOBYTE(v57) = *((_BYTE *)v31 + 12);
                      *((_BYTE *)v31 + 12) = BYTE4(v87) & 2 | v57 & 0xFD;
                      BYTE4(v87) = v57 & 2 | BYTE4(v87) & 0xFD;
                      v59 = *((_BYTE *)v31 + 12);
                      *((_BYTE *)v31 + 12) = BYTE4(v87) & 1 | v59 & 0xFE;
                      BYTE4(v87) = v59 & 1 | BYTE4(v87) & 0xFE;
                      LODWORD(v58) = *((_DWORD *)v31 + 6);
                      *((_DWORD *)v31 + 6) = v89;
                      LODWORD(v89) = v58;
                      v60 = v31[4];
                      v31[4] = v90;
                      v90 = v60;
                      LOBYTE(v57) = *((_BYTE *)v31 + 28);
                      *((_BYTE *)v31 + 28) = BYTE4(v89) & 2 | v57 & 0xFD;
                      BYTE4(v89) = v57 & 2 | BYTE4(v89) & 0xFD;
                      v61 = *((_BYTE *)v31 + 28) & 1;
                      *((_BYTE *)v31 + 28) = BYTE4(v89) & 1 | *((_BYTE *)v31 + 28) & 0xFE;
                      BYTE4(v89) = v61 | BYTE4(v89) & 0xFE;
                      ++*(_DWORD *)(a1 + 100);
LABEL_96:
                      sub_25A130((char *)&v87);
                      sub_25A130((char *)&v82);
                      sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(v31 + 1), (__int64)v78, (__int64)(v31 + 1));
                      sub_25A130((char *)v79);
LABEL_64:
                      sub_25A130((char *)v78);
                      sub_25A130((char *)v77);
                      goto LABEL_16;
                    }
                    v31 = v22;
                  }
                  v22 += 5;
                }
              }
            }
            sub_25A130((char *)v78);
            sub_25A130((char *)v77);
            return 0;
          }
          v42 = *(_QWORD *)(v17 + 32);
          sub_3EBD70((__int64)&v81, (__int64)v78);
          v86 = v42;
          LODWORD(v87) = v81;
          BYTE4(v87) = BYTE4(v81) & 3 | BYTE4(v87) & 0xFC;
          v43 = v82;
          v82 = 0;
          v88 = v43;
          LODWORD(v89) = v83;
          BYTE4(v89) = BYTE4(v83) & 3 | BYTE4(v89) & 0xFC;
          v44 = v84;
          v84 = 0;
          v90 = v44;
          sub_B75F20(v69, (__int64)&v86);
LABEL_73:
          sub_25A130((char *)&v87);
          sub_25A130((char *)&v81);
          goto LABEL_64;
        }
        v48 = *(_QWORD *)(v17 + 32);
        if ( !(unsigned __int8)sub_1666AE0(a1 + 8, *(_QWORD *)(v17 + 40), v77, &v81) )
        {
          v18 = a1 + 8;
          if ( *(_WORD *)(v17 + 4) )
            goto LABEL_22;
          v39 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
          if ( !v39 || *v39 != 5 )
            goto LABEL_22;
          goto LABEL_69;
        }
LABEL_107:
        sub_3EBE30((__int64)&v81, (__int64)v78, (__int64)v77);
        v86 = v48;
        LODWORD(v87) = v81;
        BYTE4(v87) = BYTE4(v81) & 3 | BYTE4(v87) & 0xFC;
        v62 = v82;
        v82 = 0;
        v88 = v62;
        LODWORD(v89) = v83;
        BYTE4(v89) = BYTE4(v83) & 3 | BYTE4(v89) & 0xFC;
        v63 = v84;
        v84 = 0;
        v90 = v63;
        sub_B75F20(v69, (__int64)&v86);
        goto LABEL_73;
      }
      v48 = *(_QWORD *)(v17 + 40);
      if ( (unsigned __int8)sub_1666AE0(a1 + 8, *(_QWORD *)(v17 + 32), v77, v79) )
        goto LABEL_107;
      v18 = a1 + 8;
      if ( *(_WORD *)(v17 + 4) )
        goto LABEL_22;
      v39 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
      if ( !v39 )
        goto LABEL_22;
    }
    if ( *v39 != 5 )
    {
      v18 = a1 + 8;
      goto LABEL_22;
    }
    goto LABEL_68;
  }
  v33 = *(_QWORD **)(a1 + 88);
  v34 = &v33[5 * *(unsigned int *)(a1 + 96)];
  if ( v33 == v34 )
    return 1;
  while ( *v33 <= 1u )
  {
    v33 += 5;
    if ( v34 == v33 )
      return 1;
  }
  if ( v34 == v33 )
    return 1;
  while ( 1 )
  {
    v81 = 0;
    v82 = 0;
    v83 = 1;
    v84 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v81, (int *)v33 + 2);
    if ( (_DWORD)v81 )
    {
      v35 = *v33;
      BYTE4(v87) &= 0xFCu;
      BYTE4(v89) &= 0xFCu;
      v86 = v35;
      LODWORD(v87) = 0;
      v88 = 0;
      LODWORD(v89) = 1;
      v90 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v87, (int *)&v81);
      sub_B75F20((__int64 **)(a1 + 144), (__int64)&v86);
      sub_25A130((char *)&v87);
      v36 = *(_QWORD *)(a1 + 144);
      if ( v36 )
      {
        if ( *(_DWORD *)(v36 - 4) > 2u )
          break;
      }
      if ( (v81 & 0x100000000LL) != 0
        || (_DWORD)v81 != 1 && (_DWORD)v81 != -1
        || (v83 & 0x100000000LL) != 0
        || (_DWORD)v83 != 1 )
      {
        break;
      }
    }
    sub_25A130((char *)&v81);
    v38 = v33 + 5;
    if ( v34 != v33 + 5 )
    {
      while ( 1 )
      {
        v33 = v38;
        if ( *v38 > 1u )
          break;
        v38 += 5;
        if ( v34 == v38 )
          return 1;
      }
      if ( v34 != v38 )
        continue;
    }
    return 1;
  }
  sub_25A130((char *)&v81);
  return 0;
}

