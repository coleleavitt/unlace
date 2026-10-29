__int64 __fastcall sub_140C1F0(_BYTE **a1, __m128i a2, double a3)
{
  unsigned int v4; // r13d
  _BYTE *v5; // rdi
  int v6; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  bool v11; // r10
  bool v12; // dl
  bool v13; // r9
  bool v14; // r11
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  void **v18; // rcx
  void **v19; // rax
  void **v20; // rdi
  void **v21; // rdi
  void **v22; // rax
  unsigned __int64 v23; // rax
  void **v24; // rcx
  void **v25; // rax
  void **v26; // rdi
  void **v27; // rdi
  void **v28; // rax
  void *v29; // rdi
  bool v30; // bl
  int v31; // esi
  bool v32; // r9
  bool v33; // r9
  bool v34; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  void *v38; // rdi
  void **v39; // rdi
  void **v40; // rdi
  void **v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  void **v44; // [rsp+8h] [rbp-C0h]
  void **v45; // [rsp+8h] [rbp-C0h]
  void **v46; // [rsp+8h] [rbp-C0h]
  void **v47; // [rsp+8h] [rbp-C0h]
  __int64 v48; // [rsp+8h] [rbp-C0h]
  void **v49; // [rsp+8h] [rbp-C0h]
  void **v50; // [rsp+10h] [rbp-B8h]
  void **v51; // [rsp+10h] [rbp-B8h]
  void **v52; // [rsp+10h] [rbp-B8h]
  void **v53; // [rsp+10h] [rbp-B8h]
  __int64 v54; // [rsp+10h] [rbp-B8h]
  void **v55; // [rsp+10h] [rbp-B8h]
  void **v56; // [rsp+18h] [rbp-B0h]
  int v57; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v58; // [rsp+24h] [rbp-A4h]
  __int64 v59; // [rsp+28h] [rbp-A0h]
  __int16 v60; // [rsp+30h] [rbp-98h]
  char v61; // [rsp+32h] [rbp-96h]
  unsigned __int64 v62; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v63; // [rsp+48h] [rbp-80h]
  __int64 v64; // [rsp+50h] [rbp-78h]
  void *v65; // [rsp+60h] [rbp-68h]
  _BYTE v66[16]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v67; // [rsp+80h] [rbp-48h]

  v4 = *((_DWORD *)a1 + 19);
  while ( 2 )
  {
    a1[9] = (_BYTE *)(&dword_0 + 3);
    v5 = *a1;
    *((_DWORD *)a1 + 20) = 0;
    a1[11] = nullptr;
    sub_13DB5F0(v5, (__int64)&v57, a2, a3);
    v6 = v57;
    *((_DWORD *)a1 + 19) = v57;
    switch ( v60 )
    {
      case 1:
        goto LABEL_22;
      case 4:
        continue;
      case 6:
        v8 = v58;
        v9 = v59;
        v10 = v58 == 8;
        a1[11] = (_BYTE *)v59;
        *((_DWORD *)a1 + 20) = v8;
        v11 = v8 != 7;
        if ( v8 == 13 )
        {
          if ( *(_QWORD *)v9 != 0x6D5F6769666E6F63LL
            || *(_DWORD *)(v9 + 8) != 1869767521
            || (v12 = 1, v13 = 1, *(_BYTE *)(v9 + 12) != 115) )
          {
            v12 = 0;
            v13 = 1;
          }
          goto LABEL_27;
        }
        if ( v8 == 8 )
        {
          if ( *(_QWORD *)v9 != 0x7463696C666E6F63LL )
          {
            v31 = 2;
            if ( *(_QWORD *)v9 == 0x746963696C707865LL )
              v31 = 8;
            v12 = *(_QWORD *)v9 == 0x746963696C707865LL;
            v13 = 1;
            goto LABEL_110;
          }
          v30 = 1;
          v13 = 1;
          v31 = 2;
          goto LABEL_178;
        }
        v13 = v8 != 6;
        if ( v8 != 7 )
        {
          v12 = 0;
LABEL_27:
          v14 = v12 || v13;
          goto LABEL_86;
        }
        if ( *(_DWORD *)v9 == 1818458213 && *(_WORD *)(v9 + 4) == 25717 )
        {
          v30 = 1;
          v31 = 7;
          if ( *(_BYTE *)(v9 + 6) == 101 )
          {
LABEL_178:
            v12 = 1;
            goto LABEL_159;
          }
        }
        v14 = v8 != 6;
        v12 = 0;
LABEL_86:
        v30 = v8 != 9;
        if ( !v14 )
        {
          if ( *(_DWORD *)v9 != 1869641829 || *(_WORD *)(v9 + 4) != 29810 )
          {
            v31 = 1;
            goto LABEL_140;
          }
          v12 = 1;
          v31 = 9;
LABEL_110:
          if ( v12 || v13 )
          {
LABEL_111:
            v32 = v12 || v8 != 4;
            goto LABEL_93;
          }
          v12 = 0;
          goto LABEL_141;
        }
        if ( v12 || v8 != 9 )
        {
          v31 = 1;
LABEL_159:
          if ( v12 || v13 )
          {
            if ( !v30 && !v12 )
              goto LABEL_91;
            goto LABEL_110;
          }
          v12 = 0;
LABEL_140:
          if ( *(_DWORD *)v9 == 1702131813 && *(_WORD *)(v9 + 4) == 28274 )
          {
            v12 = 1;
            v31 = 11;
            goto LABEL_111;
          }
LABEL_141:
          if ( *(_DWORD *)v9 == 1684104552 && *(_WORD *)(v9 + 4) == 29285 )
          {
            v12 = 1;
            v31 = 4;
          }
          else if ( *(_DWORD *)v9 == 1969516397 && *(_WORD *)(v9 + 4) == 25964 )
          {
            v12 = 1;
            v31 = 14;
            v34 = v8 != 3;
            goto LABEL_98;
          }
          goto LABEL_96;
        }
        if ( *(_QWORD *)v9 == 0x615F74726F707865LL )
        {
          v12 = v14;
          v31 = 10;
          if ( *(_BYTE *)(v9 + 8) == 115 )
            goto LABEL_111;
        }
        v31 = 1;
LABEL_91:
        if ( *(_QWORD *)v9 == 0x726F77656D617266LL && *(_BYTE *)(v9 + 8) == 107 )
        {
          v31 = 12;
          v12 = 1;
          goto LABEL_94;
        }
        v32 = v8 != 4;
        v12 = 0;
LABEL_93:
        if ( !v32 )
        {
          v33 = v11 || v12;
          if ( *(_DWORD *)v9 == 1802398060 )
          {
            v12 = 1;
            v31 = 13;
            goto LABEL_96;
          }
          goto LABEL_95;
        }
LABEL_94:
        v33 = v11 || v12;
LABEL_95:
        if ( !v33 )
        {
          if ( *(_DWORD *)v9 == 1986622064 && *(_WORD *)(v9 + 4) == 29793 && *(_BYTE *)(v9 + 6) == 101 )
          {
            v12 = 1;
            v31 = 16;
            v34 = v8 != 3;
            goto LABEL_98;
          }
          v34 = v8 != 3;
          goto LABEL_147;
        }
LABEL_96:
        if ( !v12 && v10 )
        {
          if ( *(_QWORD *)v9 == 0x7365726975716572LL )
          {
            v31 = 19;
            goto LABEL_101;
          }
          if ( *(_QWORD *)v9 == 0x616C6C6572626D75LL )
          {
            v31 = 17;
            goto LABEL_101;
          }
          goto LABEL_99;
        }
        v34 = v8 != 3;
        if ( !v12 && !v11 )
        {
          v12 = 0;
LABEL_147:
          if ( *(_DWORD *)v9 == 1954047348 && *(_WORD *)(v9 + 4) == 24949 && *(_BYTE *)(v9 + 6) == 108 )
          {
            v31 = 23;
            goto LABEL_101;
          }
        }
LABEL_98:
        if ( v12 || v34 )
        {
LABEL_99:
          if ( !v12 )
            v31 = 5;
          goto LABEL_101;
        }
        if ( *(_WORD *)v9 != 29557 || (v31 = 18, *(_BYTE *)(v9 + 2) != 101) )
          v31 = 5;
LABEL_101:
        *((_DWORD *)a1 + 18) = v31;
        return v4;
      case 7:
        if ( !(unsigned __int8)sub_2247970(v59, v58, 0, &v62) )
        {
          v15 = v62;
          *((_DWORD *)a1 + 18) = 22;
          a1[11] = (_BYTE *)v15;
          return v4;
        }
        sub_FC70B0((__int64)&v62, (__int64)a1[1], *((_DWORD *)a1 + 19), 1095);
        if ( (_BYTE)v67 )
        {
          sub_FC7790(v64, (__int64 *)&v62, SHIBYTE(v67));
          v64 = 0;
          v67 = 0;
        }
        if ( v65 != v66 )
          operator delete(v65);
        v16 = v62;
        v56 = (void **)v62;
        if ( !v62 )
          goto LABEL_51;
        v17 = v63;
        if ( !v63 )
          goto LABEL_51;
        if ( v62 >= v63 && v62 <= v63 + 14848 )
        {
LABEL_164:
          v42 = *(unsigned int *)(v17 + 14976);
          *(_DWORD *)(v17 + 14976) = v42 + 1;
          *(_QWORD *)(v17 + 8 * v42 + 14848) = v16;
          goto LABEL_51;
        }
        v36 = *(_QWORD *)(v62 + 528);
        v37 = v36 + ((unsigned __int64)*(unsigned int *)(v62 + 536) << 6);
        while ( v36 != v37 )
        {
          while ( 1 )
          {
            v37 -= 64;
            v38 = *(void **)(v37 + 24);
            if ( v38 == (void *)(v37 + 40) )
              break;
            v54 = v36;
            v48 = v37;
            operator delete(v38);
            v37 = v48;
            v36 = v54;
            if ( v54 == v48 )
              goto LABEL_127;
          }
        }
LABEL_127:
        v39 = (void **)v56[66];
        if ( v39 != v56 + 68 )
          free(v39);
        v40 = (void **)v56[52];
        if ( v40 != v56 + 54 )
          free(v40);
        v41 = v56 + 48;
        v49 = v56 + 8;
        do
        {
          while ( *v41 != v41 + 2 )
          {
            v55 = v41;
            operator delete(*v41);
            v41 = v55 - 4;
            if ( v55 - 4 == v49 )
              goto LABEL_50;
          }
          v41 -= 4;
        }
        while ( v41 != v49 );
        goto LABEL_50;
      case 14:
        if ( (v61 & 0x20) == 0 )
        {
          v43 = v59;
          *((_DWORD *)a1 + 18) = 21;
          a1[11] = (_BYTE *)(v43 + 1);
          *((_DWORD *)a1 + 20) = v58 - 2;
          return v4;
        }
        sub_FC70B0((__int64)&v62, (__int64)a1[1], v6, 29);
        if ( (_BYTE)v67 )
        {
          sub_FC7790(v64, (__int64 *)&v62, SHIBYTE(v67));
          v64 = 0;
          v67 = 0;
        }
        if ( v65 != v66 )
          operator delete(v65);
        v16 = v62;
        v56 = (void **)v62;
        if ( !v62 )
          goto LABEL_51;
        v17 = v63;
        if ( !v63 )
          goto LABEL_51;
        if ( v62 >= v63 && v62 <= v63 + 14848 )
          goto LABEL_164;
        v18 = *(void ***)(v62 + 528);
        v19 = &v18[8 * (unsigned __int64)*(unsigned int *)(v62 + 536)];
        if ( v18 != v19 )
        {
          do
          {
            while ( 1 )
            {
              v19 -= 8;
              v20 = (void **)v19[3];
              if ( v20 == v19 + 5 )
                break;
              v50 = v18;
              v44 = v19;
              operator delete(v20);
              v19 = v44;
              v18 = v50;
              if ( v50 == v44 )
                goto LABEL_42;
            }
          }
          while ( v18 != v19 );
LABEL_42:
          v19 = (void **)v56[66];
        }
        if ( v19 != v56 + 68 )
          free(v19);
        v21 = (void **)v56[52];
        v22 = v56 + 52;
        if ( v21 != v56 + 54 )
        {
          free(v21);
          v22 = v56 + 52;
        }
        v45 = v56 + 12;
        do
        {
          while ( 1 )
          {
            v22 -= 4;
            if ( *v22 == v22 + 2 )
              break;
            v51 = v22;
            operator delete(*v22);
            v22 = v51;
            if ( v45 == v51 )
              goto LABEL_50;
          }
        }
        while ( v45 != v22 );
        goto LABEL_50;
      case 20:
        *((_DWORD *)a1 + 18) = 26;
        return v4;
      case 21:
        *((_DWORD *)a1 + 18) = 27;
        return v4;
      case 24:
        *((_DWORD *)a1 + 18) = 24;
        return v4;
      case 25:
        *((_DWORD *)a1 + 18) = 25;
        return v4;
      case 26:
        *((_DWORD *)a1 + 18) = 15;
        return v4;
      case 31:
        *((_DWORD *)a1 + 18) = 20;
        return v4;
      case 41:
        *((_DWORD *)a1 + 18) = 6;
        return v4;
      case 66:
        *((_DWORD *)a1 + 18) = 0;
        return v4;
      case 67:
        sub_13DB5F0(*a1, (__int64)&v57, a2, a3);
        if ( (v61 & 1) == 0 && v60 == 6 && v58 == 6 && *(_DWORD *)v59 == 1734439536 && *(_WORD *)(v59 + 4) == 24941 )
        {
          sub_13DB5F0(*a1, (__int64)&v57, a2, a3);
          if ( (v61 & 1) == 0 && v60 == 6 && v58 == 5 && *(_DWORD *)v59 == 1851878499 && *(_BYTE *)(v59 + 4) == 103 )
          {
            sub_13DB5F0(*a1, (__int64)&v57, a2, a3);
            if ( (v61 & 1) == 0 && v60 == 6 && v58 == 6 && *(_DWORD *)v59 == 1969516397 && *(_WORD *)(v59 + 4) == 25964 )
            {
              sub_13DB5F0(*a1, (__int64)&v57, a2, a3);
              if ( (v61 & 1) == 0 && v60 == 6 && v58 == 8 && *(_QWORD *)v59 == 0x73746E65746E6F63LL )
              {
LABEL_22:
                *((_DWORD *)a1 + 18) = 3;
                return v4;
              }
            }
          }
        }
        v6 = *((_DWORD *)a1 + 19);
LABEL_61:
        sub_FC70B0((__int64)&v62, (__int64)a1[1], v6, 1095);
        if ( (_BYTE)v67 )
        {
          sub_FC7790(v64, (__int64 *)&v62, SHIBYTE(v67));
          v64 = 0;
          v67 = 0;
        }
        if ( v65 != v66 )
          operator delete(v65);
        v56 = (void **)v62;
        if ( v62 )
        {
          v23 = v63;
          if ( v63 )
          {
            if ( v62 < v63 || v62 > v63 + 14848 )
            {
              v24 = *(void ***)(v62 + 528);
              v25 = &v24[8 * (unsigned __int64)*(unsigned int *)(v62 + 536)];
              if ( v24 != v25 )
              {
                do
                {
                  while ( 1 )
                  {
                    v25 -= 8;
                    v26 = (void **)v25[3];
                    if ( v26 == v25 + 5 )
                      break;
                    v52 = v24;
                    v46 = v25;
                    operator delete(v26);
                    v25 = v46;
                    v24 = v52;
                    if ( v52 == v46 )
                      goto LABEL_71;
                  }
                }
                while ( v24 != v25 );
LABEL_71:
                v25 = (void **)v56[66];
              }
              if ( v25 != v56 + 68 )
                free(v25);
              v27 = (void **)v56[52];
              v28 = v56 + 52;
              if ( v27 != v56 + 54 )
              {
                free(v27);
                v28 = v56 + 52;
              }
              v47 = v56 + 12;
              while ( 1 )
              {
                v28 -= 4;
                v29 = *v28;
                if ( *v28 != v28 + 2 )
                  break;
LABEL_80:
                if ( v47 == v28 )
                  goto LABEL_50;
              }
              while ( 1 )
              {
                v53 = v28;
                operator delete(v29);
                if ( v47 == v53 )
                  break;
                v28 = v53 - 4;
                v29 = *(v53 - 4);
                if ( *v28 == v28 + 2 )
                  goto LABEL_80;
              }
LABEL_50:
              operator delete(v56, 0x3A0u);
            }
            else
            {
              v35 = *(unsigned int *)(v63 + 14976);
              *(_DWORD *)(v63 + 14976) = v35 + 1;
              *(_QWORD *)(v23 + 8 * v35 + 14848) = v56;
            }
          }
        }
LABEL_51:
        *((_BYTE *)a1 + 64) = 1;
        continue;
      default:
        goto LABEL_61;
    }
  }
}
