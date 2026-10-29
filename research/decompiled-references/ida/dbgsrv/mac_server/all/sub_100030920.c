/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100030920
// Address: 0x0000000100030920

//----- (0000000100030920) ----------------------------------------------------
__int64 __fastcall sub_100030920(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  int v3; // r14d
  const char *v4; // r15
  char *i; // rax
  int v6; // r13d
  int v7; // r12d
  __int64 v8; // r14
  _BYTE *v9; // rax
  int v10; // r12d
  char *v11; // r13
  int v12; // eax
  unsigned __int8 v13; // r15
  __int64 v14; // rsi
  int v15; // edx
  bool v16; // zf
  int v17; // edx
  int v18; // eax
  unsigned int v19; // eax
  int v20; // ebx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rbx
  char v28; // cl
  char *j; // r12
  int v30; // eax
  const char *v31; // r13
  const char *v32; // r15
  const char *v33; // r13
  __int64 v34; // rax
  int v35; // eax
  int v36; // eax
  const char *v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  const char *v42; // rcx
  __int64 v43; // rax
  char *v44; // rdi
  signed __int64 v45; // r10
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  char v48; // r8
  bool v49; // cc
  __int64 v50; // r15
  signed __int64 v51; // rax
  size_t v52; // rdx
  const char *v53; // r13
  size_t v54; // rax
  __int64 v55; // rcx
  char v56; // r12
  __int64 v57; // r15
  __int64 v58; // r14
  _BYTE *v59; // rax
  char k; // bl
  __int64 v61; // r14
  _BYTE *v62; // rax
  char v63; // r15
  char *v64; // r12
  int v65; // r13d
  __int64 v66; // r14
  _BYTE *v67; // rax
  __int64 v68; // r15
  char *v69; // rcx
  char *v70; // r12
  char v71; // r13
  __int64 v72; // r14
  _BYTE *v73; // rax
  __int64 v74; // r15
  int v75; // r12d
  __int64 v76; // r14
  _BYTE *v77; // rax
  const char *v79; // [rsp+0h] [rbp-4A0h]
  int v80; // [rsp+8h] [rbp-498h]
  size_t v81; // [rsp+10h] [rbp-490h]
  int v82; // [rsp+10h] [rbp-490h]
  __int64 v83; // [rsp+10h] [rbp-490h]
  __int64 v84; // [rsp+18h] [rbp-488h]
  char *v85; // [rsp+20h] [rbp-480h]
  __int64 v86; // [rsp+20h] [rbp-480h]
  char *v87; // [rsp+20h] [rbp-480h]
  unsigned __int64 v88; // [rsp+28h] [rbp-478h]
  size_t v89; // [rsp+28h] [rbp-478h]
  _BYTE v90[9]; // [rsp+30h] [rbp-470h]
  int v91; // [rsp+30h] [rbp-470h]
  int v92; // [rsp+30h] [rbp-470h]
  int v93; // [rsp+30h] [rbp-470h]
  int v94; // [rsp+3Ch] [rbp-464h]
  __int64 v95; // [rsp+40h] [rbp-460h]
  unsigned int v96; // [rsp+4Ch] [rbp-454h]
  _OWORD v97[2]; // [rsp+50h] [rbp-450h] BYREF
  char __s[1023]; // [rsp+70h] [rbp-430h] BYREF
  char v99; // [rsp+46Fh] [rbp-31h] BYREF
  _QWORD v100[6]; // [rsp+470h] [rbp-30h] BYREF

  memset(v97, 0, 24);
  v94 = *(_DWORD *)(a2 + 8);
  if ( v94 <= 0 )
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  else
  {
    v2 = _s1;
    if ( *(_QWORD *)(a1 + 16) )
      v2 = *(const char **)(a1 + 8);
    v84 = a2;
    v95 = a1 + 32;
    v96 = 0;
    v3 = 0;
LABEL_5:
    v4 = v2 + 1;
    for ( i = (char *)(v2 + 2); ; i = v85 + 1 )
    {
      v6 = *((unsigned __int8 *)v4 - 1);
      if ( !*(v4 - 1) )
        break;
      if ( v6 == 37 )
      {
        v10 = 0;
        v11 = i;
        while ( 2 )
        {
          v13 = *(v11 - 1);
          switch ( v13 )
          {
            case ' ':
              v12 = 4;
              goto LABEL_15;
            case '#':
              v12 = 8;
              goto LABEL_15;
            case '*':
              if ( --v94 <= 0 )
              {
                v18 = 0;
                a2 = v84;
                if ( v96 )
                  goto LABEL_209;
              }
              else
              {
                a2 = v84;
                if ( (unsigned int)idcv_long((unsigned __int8 *)v95) )
                  goto LABEL_209;
                v18 = *(_DWORD *)(v95 + 8);
                v95 += 32;
              }
              v15 = -v18;
              if ( v18 > 0 )
                v15 = v18;
              v10 |= (unsigned int)v18 >> 31;
              v13 = *v11;
              v19 = 0;
LABEL_36:
              v14 = -1;
              if ( v13 == 46 )
              {
                v13 = v11[1];
                if ( v13 == 42 )
                {
                  if ( --v94 <= 0 )
                  {
                    a2 = v84;
                    if ( v19 )
                      goto LABEL_209;
                    v14 = 0;
                  }
                  else
                  {
                    v20 = v15;
                    a2 = v84;
                    if ( (unsigned int)idcv_long((unsigned __int8 *)v95) )
                      goto LABEL_209;
                    v15 = v20;
                    v14 = *(_QWORD *)(v95 + 8);
                    v95 += 32;
                  }
                  v13 = v11[2];
                  v11 += 2;
                  v96 = 0;
                }
                else
                {
                  ++v11;
                  v96 = v19;
                  if ( (v13 & 0x80u) != 0 )
                  {
                    v14 = 0;
                  }
                  else
                  {
                    v14 = 0;
                    do
                    {
                      if ( (_DefaultRuneLocale.__runetype[v13] & 0x400) == 0 )
                        break;
                      v14 = v13 + 10 * v14 - 48;
                      v13 = *++v11;
                    }
                    while ( (v13 & 0x80u) == 0 );
                  }
                }
              }
              else
              {
                v96 = v19;
              }
LABEL_51:
              v21 = (unsigned int)v13 - 70;
              v80 = v15;
              v86 = v14;
              if ( (unsigned int)v21 <= 0x26 )
              {
                v22 = 0x4400000141LL;
                if ( _bittest64(&v22, v21) )
                  v13 = *++v11;
              }
              break;
            case '+':
              v12 = 2;
              goto LABEL_15;
            case '-':
              v12 = 1;
LABEL_15:
              v10 |= v12;
              ++v11;
              continue;
            case '0':
              LOBYTE(v10) = (16 * ~(_BYTE)v10) & 0x10 | v10;
              v13 = *v11;
              goto LABEL_22;
            default:
              --v11;
LABEL_22:
              v14 = -1;
              v15 = -1;
              if ( (v13 & 0x80u) != 0 )
                goto LABEL_51;
              while ( (_DefaultRuneLocale.__runetype[v13] & 0x400) != 0 )
              {
                v16 = v15 == -1;
                v17 = 10 * v15 - 48;
                if ( v16 )
                  v17 = -48;
                v15 = v13 + v17;
                v13 = *++v11;
                if ( (v13 & 0x80u) != 0 )
                  goto LABEL_51;
              }
              v19 = v96;
              goto LABEL_36;
          }
          break;
        }
        v90[8] = v10;
        v79 = v11 + 1;
        switch ( v13 )
        {
          case '%':
            __s[0] = 37;
            v89 = 1;
            v11 = __s;
            goto LABEL_163;
          case 'E':
          case 'G':
          case 'e':
          case 'f':
          case 'g':
            --v94;
            v23 = v96;
            if ( v94 <= 0 )
              goto LABEL_70;
            v23 = idcv_float((unsigned __int8 *)v95);
            if ( v23 )
              goto LABEL_70;
            v24 = v80;
            if ( v80 == -1 )
              v24 = 0;
            v25 = v86;
            if ( v86 <= 0 )
              v25 = 0;
            v26 = v25 << 16;
            if ( !v24 )
              v26 = 0;
            v80 = v24;
            realtoasc(__s, 1024, v95 + 8, v26 | (v24 << 8) | 0xF);
            v27 = v95 + 32;
            v28 = v10;
            for ( j = __s; ; ++j )
            {
              v30 = (unsigned __int8)*j;
              if ( v30 != 32 )
                break;
            }
            if ( v30 == 45 )
            {
              v11 = j + 1;
              v32 = "-";
            }
            else
            {
              if ( (v28 & 2) != 0 )
              {
                v32 = "+";
              }
              else
              {
                v32 = " ";
                if ( (v28 & 4) == 0 )
                  v32 = &_s;
              }
              v11 = j;
            }
            v89 = strlen(v11);
            v96 = 0;
            LOBYTE(v10) = v90[8];
            goto LABEL_165;
          case 'X':
          case 'x':
            v88 = 16;
            if ( (v10 & 8) == 0 )
              goto LABEL_93;
            v31 = "0X";
            if ( v13 == 120 )
              v31 = "0x";
            goto LABEL_94;
          case 'a':
            if ( --v94 <= 0 )
            {
              if ( v96 )
              {
LABEL_210:
                a2 = v84;
                goto LABEL_209;
              }
              v39 = 0;
              v40 = v95;
            }
            else
            {
              if ( (unsigned int)idcv_long((unsigned __int8 *)v95) )
                goto LABEL_210;
              v39 = *(_QWORD *)(v95 + 8);
              v40 = v95 + 32;
            }
            v95 = v40;
            v11 = __s;
            if ( qword_1000AC100[3] )
              ((void (__fastcall *)(char *, __int64, __int64))qword_1000AC100[3])(__s, 1024, v39);
            else
              qsnprintf(__s, 1024, "%a", 0.0);
LABEL_158:
            v51 = strlen(v11);
            v52 = v14;
            if ( v51 < v14 )
              v52 = v51;
            if ( v14 < 0 )
              v52 = v51;
            v89 = v52;
            v96 = 0;
LABEL_163:
            v32 = &_s;
LABEL_164:
            v27 = v95;
LABEL_165:
            v87 = v11;
            v95 = v27;
            v81 = strlen(v32);
            if ( (v10 & 0x10) != 0 )
            {
              v53 = v32;
              for ( k = *v32; k; k = *v53 )
              {
                v92 = v3;
                v61 = 0;
                if ( *((_QWORD *)&v97[0] + 1) )
                  v61 = *((_QWORD *)&v97[0] + 1) - 1LL;
                v62 = *(_BYTE **)&v97[0];
                if ( *(_QWORD *)&v97[1] < (unsigned __int64)(v61 + 2) )
                {
                  v62 = qvector_reserve((__int64)v97, *(void **)&v97[0], v61 + 2, 1u);
                  *(_QWORD *)&v97[0] = v62;
                }
                *((_QWORD *)&v97[0] + 1) = v61 + 2;
                v62[v61] = k;
                *(_BYTE *)(*(_QWORD *)&v97[0] + v61 + 1) = 0;
                v3 = v92 + 1;
                ++v53;
              }
            }
            else
            {
              v53 = v32;
            }
            v54 = v89 + v81;
            v55 = v80 - (v89 + v81);
            if ( (v10 & 1) == 0 && --v55 >= 0 )
            {
              v91 = v3;
              v56 = v10 & 0x10 | 0x20;
              v82 = v89 + v81;
              v57 = v80 - v54;
              do
              {
                v58 = 0;
                if ( *((_QWORD *)&v97[0] + 1) )
                  v58 = *((_QWORD *)&v97[0] + 1) - 1LL;
                v59 = *(_BYTE **)&v97[0];
                if ( *(_QWORD *)&v97[1] < (unsigned __int64)(v58 + 2) )
                {
                  v59 = qvector_reserve((__int64)v97, *(void **)&v97[0], v58 + 2, 1u);
                  *(_QWORD *)&v97[0] = v59;
                }
                *((_QWORD *)&v97[0] + 1) = v58 + 2;
                v59[v58] = v56;
                *(_BYTE *)(*(_QWORD *)&v97[0] + v58 + 1) = 0;
                --v57;
              }
              while ( v57 > 0 );
              v55 = -1;
              v3 = v91 + v80 - v82;
            }
            v83 = v55;
            v63 = *v53;
            if ( *v53 )
            {
              v64 = (char *)(v53 + 1);
              do
              {
                v65 = v3;
                v66 = 0;
                if ( *((_QWORD *)&v97[0] + 1) )
                  v66 = *((_QWORD *)&v97[0] + 1) - 1LL;
                v67 = *(_BYTE **)&v97[0];
                if ( *(_QWORD *)&v97[1] < (unsigned __int64)(v66 + 2) )
                {
                  v67 = qvector_reserve((__int64)v97, *(void **)&v97[0], v66 + 2, 1u);
                  *(_QWORD *)&v97[0] = v67;
                }
                *((_QWORD *)&v97[0] + 1) = v66 + 2;
                v67[v66] = v63;
                *(_BYTE *)(*(_QWORD *)&v97[0] + v66 + 1) = 0;
                v3 = v65 + 1;
                v63 = *v64++;
              }
              while ( v63 );
            }
            v68 = v89;
            if ( (__int64)(v89 - 1) >= 0 )
            {
              v93 = v3;
              v69 = v87;
              do
              {
                v70 = v69;
                v71 = *v69;
                v72 = 0;
                if ( *((_QWORD *)&v97[0] + 1) )
                  v72 = *((_QWORD *)&v97[0] + 1) - 1LL;
                v73 = *(_BYTE **)&v97[0];
                if ( *(_QWORD *)&v97[1] < (unsigned __int64)(v72 + 2) )
                {
                  v73 = qvector_reserve((__int64)v97, *(void **)&v97[0], v72 + 2, 1u);
                  *(_QWORD *)&v97[0] = v73;
                }
                v69 = v70 + 1;
                *((_QWORD *)&v97[0] + 1) = v72 + 2;
                v73[v72] = v71;
                *(_BYTE *)(*(_QWORD *)&v97[0] + v72 + 1) = 0;
                --v68;
              }
              while ( v68 > 0 );
              v3 = v89 + v93;
            }
            v74 = v83;
            if ( v83 - 1 >= 0 )
            {
              v75 = v3;
              do
              {
                v76 = 0;
                if ( *((_QWORD *)&v97[0] + 1) )
                  v76 = *((_QWORD *)&v97[0] + 1) - 1LL;
                v77 = *(_BYTE **)&v97[0];
                if ( *(_QWORD *)&v97[1] < (unsigned __int64)(v76 + 2) )
                {
                  v77 = qvector_reserve((__int64)v97, *(void **)&v97[0], v76 + 2, 1u);
                  *(_QWORD *)&v97[0] = v77;
                }
                *((_QWORD *)&v97[0] + 1) = v76 + 2;
                v77[v76] = 32;
                *(_BYTE *)(*(_QWORD *)&v97[0] + v76 + 1) = 0;
                --v74;
              }
              while ( v74 > 0 );
              v3 = v83 + v75;
            }
            v2 = v79;
            break;
          case 'b':
            v37 = "0b";
            if ( (v10 & 8) == 0 )
              v37 = &_s;
            *(_QWORD *)v90 = v37;
            v34 = 2;
            goto LABEL_98;
          case 'c':
            --v94;
            v35 = v96;
            if ( v94 > 0 )
            {
              v35 = idcv_long((unsigned __int8 *)v95);
              if ( !v35 )
              {
                v27 = v95 + 32;
                __s[0] = *(_BYTE *)(v95 + 8);
                v89 = 1;
                v96 = 0;
                v11 = __s;
                v32 = &_s;
                goto LABEL_165;
              }
            }
            __s[0] = 0;
            if ( !v35 )
            {
              v89 = 1;
              v96 = 0;
              v11 = __s;
              v32 = &_s;
              v27 = v95;
              goto LABEL_165;
            }
            *(_QWORD *)v90 = &_s;
            if ( v35 != 1531 )
              goto LABEL_210;
            goto LABEL_149;
          case 'd':
          case 'i':
            if ( --v94 > 0 && (*(_BYTE *)v95 == 2 || (v96 = idcv_int64((unsigned __int8 *)v95)) == 0) )
            {
              v38 = *(_QWORD *)(v95 + 8);
              v95 += 32;
              v23 = 64;
              if ( v38 < 0 )
              {
                v41 = -v38;
                v88 = 10;
                *(_QWORD *)v90 = "-";
                goto LABEL_128;
              }
              goto LABEL_118;
            }
            v23 = v96;
            if ( !v96 )
            {
              v38 = 0;
LABEL_118:
              v96 = v23;
              v88 = 10;
              if ( (v10 & 2) != 0 )
              {
                *(_QWORD *)v90 = "+";
              }
              else
              {
                v42 = " ";
                if ( (v10 & 4) == 0 )
                  v42 = &_s;
                *(_QWORD *)v90 = v42;
              }
              goto LABEL_123;
            }
LABEL_70:
            *(_QWORD *)v90 = &_s;
            if ( v23 != 1531 )
              goto LABEL_210;
LABEL_149:
            v27 = v95 + 32;
            v89 = 5;
            v96 = 1531;
            v11 = "<obj>";
            v32 = *(const char **)v90;
            goto LABEL_165;
          case 'o':
            v33 = "0";
            if ( (v10 & 8) == 0 )
              v33 = &_s;
            *(_QWORD *)v90 = v33;
            v34 = 8;
LABEL_98:
            v88 = v34;
            goto LABEL_99;
          case 's':
            if ( --v94 <= 0 )
            {
              v11 = nullptr;
            }
            else
            {
              v36 = idcv_string(v95);
              if ( v36 == 1531 )
              {
                *(_QWORD *)v90 = &_s;
                goto LABEL_149;
              }
              if ( v36 )
                goto LABEL_210;
              if ( *(_QWORD *)(v95 + 16) )
                v11 = *(char **)(v95 + 8);
              else
                v11 = (char *)_s1;
              v95 += 32;
            }
            if ( !v11 )
              v11 = "(null)";
            goto LABEL_158;
          case 'u':
            v88 = 10;
LABEL_93:
            v31 = &_s;
LABEL_94:
            *(_QWORD *)v90 = v31;
LABEL_99:
            if ( --v94 <= 0 )
              goto LABEL_103;
            if ( *(_BYTE *)v95 == 2 )
            {
              v38 = *(_QWORD *)(v95 + 8);
              v95 += 32;
              v96 = 64;
            }
            else
            {
              v96 = idcv_int64((unsigned __int8 *)v95);
              if ( v96 )
              {
LABEL_103:
                if ( v96 == 1531 )
                  goto LABEL_149;
                if ( v96 )
                  goto LABEL_210;
                v38 = 0;
              }
              else
              {
                v38 = *(_QWORD *)(v95 + 8);
                v95 += 32;
                v96 = 64;
              }
            }
LABEL_123:
            if ( !(v86 | v38) )
            {
              v96 = 0;
              v89 = 0;
              v32 = &_s;
              v11 = nullptr;
              goto LABEL_164;
            }
            v43 = ~(-1LL << v96);
            if ( v96 >= 0x40 )
              v43 = -1;
            v41 = v43 & v38;
LABEL_128:
            v44 = &v99;
            v45 = 0;
            v27 = v95;
            do
            {
              if ( HIDWORD(v41) )
              {
                v46 = v41 / v88;
                v47 = v41 % v88;
              }
              else
              {
                v47 = (unsigned int)v41 % (unsigned int)v88;
                v46 = (unsigned int)v41 / (unsigned int)v88;
              }
              v48 = (32 * (v13 != 88)) | 7;
              if ( v47 < 0xA )
                v48 = 0;
              *v44 = v47 + v48 + 48;
              ++v45;
              --v44;
              v49 = v88 <= v41;
              v41 = v46;
            }
            while ( v49 );
            v50 = v86;
            if ( v86 >= 1024 )
              v50 = 1024;
            v96 = 0;
            if ( v50 <= v45 )
            {
              v89 = v45;
              v11 = (char *)v100 - v45;
            }
            else
            {
              v11 = (char *)v100 - v50;
              memset((char *)v100 - v50, 48, v50 - v45);
              v89 = v50;
            }
            v32 = *(const char **)v90;
            LOBYTE(v10) = v90[8];
            goto LABEL_165;
          default:
            v89 = strlen(v11);
            v32 = &_s;
            v79 = &_s;
            goto LABEL_164;
        }
        goto LABEL_5;
      }
      v85 = i;
      v7 = v3;
      v8 = 0;
      if ( *((_QWORD *)&v97[0] + 1) )
        v8 = *((_QWORD *)&v97[0] + 1) - 1LL;
      v9 = *(_BYTE **)&v97[0];
      if ( *(_QWORD *)&v97[1] < (unsigned __int64)(v8 + 2) )
      {
        v9 = qvector_reserve((__int64)v97, *(void **)&v97[0], v8 + 2, 1u);
        *(_QWORD *)&v97[0] = v9;
      }
      *((_QWORD *)&v97[0] + 1) = v8 + 2;
      v9[v8] = v6;
      *(_BYTE *)(*(_QWORD *)&v97[0] + v8 + 1) = 0;
      v3 = v7 + 1;
      ++v4;
    }
    a2 = v84;
    *(_QWORD *)(v84 + 8) = v3;
  }
LABEL_209:
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)&v97[0];
  *(_OWORD *)(a2 + 16) = *(_OWORD *)((char *)v97 + 8);
  return 0;
}
// 1000AC100: using guessed type __int64 qword_1000AC100[4];
// 1000AC118: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
