__int64 __fastcall sub_93AE20(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  char *v4; // r8
  int v5; // esi
  char *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rbp
  char v17; // al
  __int64 v18; // r9
  int v19; // edx
  unsigned int v20; // r14d
  __int64 v21; // rbx
  int v22; // r13d
  int v23; // r14d
  int v24; // r13d
  int v25; // eax
  int *v26; // rbx
  __int64 v27; // r9
  int v28; // r13d
  __int64 v29; // rax
  int v30; // r13d
  unsigned int v31; // edx
  int *v32; // r14
  __int64 v33; // rdx
  int *v34; // r15
  __int64 v35; // rax
  int v36; // r12d
  int *v37; // rbp
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  int *v41; // r8
  int *v42; // r14
  __int64 v43; // rbp
  int v44; // r12d
  int *v45; // r13
  __int64 v46; // rax
  __int64 v47; // r15
  void *v48; // rdi
  __int64 v49; // r9
  __int64 v50; // r15
  bool v51; // al
  int v52; // eax
  bool v53; // al
  void *v54; // rdi
  int v55; // eax
  bool v56; // al
  __int64 v58; // r9
  int v59; // eax
  __int64 v61; // r10
  void *v62; // rdi
  __int64 v63; // r15
  __int64 v64; // r10
  bool v65; // al
  bool v66; // al
  void *v67; // rdi
  bool v68; // al
  int v70; // eax
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // r10
  _DWORD *v75; // rbx
  _DWORD *v76; // r11
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  int *v83; // r8
  int v84; // r13d
  __int64 v85; // rax
  unsigned int v86; // edi
  __int64 v87; // [rsp+0h] [rbp-88h]
  __int64 i; // [rsp+0h] [rbp-88h]
  __int64 v89; // [rsp+8h] [rbp-80h]
  __int64 v90; // [rsp+10h] [rbp-78h]
  __int64 v91; // [rsp+10h] [rbp-78h]
  __int64 v92; // [rsp+18h] [rbp-70h]
  __int64 v93; // [rsp+18h] [rbp-70h]
  void *v94; // [rsp+18h] [rbp-70h]
  void *v95; // [rsp+18h] [rbp-70h]
  __int64 v96; // [rsp+18h] [rbp-70h]
  __int64 v97; // [rsp+18h] [rbp-70h]
  __int64 v98; // [rsp+20h] [rbp-68h]
  __int64 v99; // [rsp+20h] [rbp-68h]
  __int64 v100; // [rsp+20h] [rbp-68h]
  __int64 v101; // [rsp+20h] [rbp-68h]
  __int64 v102; // [rsp+30h] [rbp-58h]
  __int64 v103; // [rsp+30h] [rbp-58h]
  __int64 v104; // [rsp+38h] [rbp-50h]
  __int64 v105; // [rsp+38h] [rbp-50h]
  int *v106; // [rsp+40h] [rbp-48h]
  unsigned __int8 v107; // [rsp+4Bh] [rbp-3Dh]
  int v108; // [rsp+4Ch] [rbp-3Ch]

  v3 = a2;
  if ( *(_DWORD *)(a2 + 28) || *(_DWORD *)(a2 + 32) )
  {
    v4 = *(char **)(a2 + 16);
    v5 = 0;
    v6 = &v4[8 * *(unsigned int *)(v3 + 24)];
    v7 = *(_DWORD *)(v3 + 24);
    v8 = *(_QWORD *)(v3 + 16);
    if ( v4 == v6 )
      goto LABEL_16;
    do
    {
      while ( *(_DWORD *)(v8 + 4) != 0x80000000 )
      {
        *(_DWORD *)(v8 + 4) = 0x80000000;
        v8 += 8;
        if ( v6 == (char *)v8 )
          goto LABEL_8;
      }
      v8 += 8;
      ++v5;
    }
    while ( v6 != (char *)v8 );
LABEL_8:
    if ( v7 <= 0x10 || 3 * v7 >= 4 * v5 )
      goto LABEL_16;
    v87 = a1;
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(v3 + 24);
      *(_QWORD *)(v3 + 16) = 0;
      v9 >>= 1;
      *(_DWORD *)(v3 + 24) = v9;
      v10 = v9;
      v11 = sub_186B270(8LL * v9);
      a1 = v87;
      if ( !v9 )
      {
LABEL_15:
        *(_QWORD *)(v3 + 16) = v11;
LABEL_16:
        *(_QWORD *)(v3 + 28) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)(v3 + 16) = 0;
      v86 = v7 >> 1;
      v10 = v86;
      *(_DWORD *)(v3 + 24) = v86;
      v11 = sub_186B270(8LL * v86);
      a1 = v87;
    }
    v12 = v11 + 8 * v10;
    v13 = v11;
    if ( (v10 & 1) == 0 || (v13 = v11 + 8, *(_DWORD *)(v11 + 4) = 0x80000000, v11 + 8 != v12) )
    {
      do
      {
        *(_DWORD *)(v13 + 4) = 0x80000000;
        v13 += 16;
        *(_DWORD *)(v13 - 4) = 0x80000000;
      }
      while ( v13 != v12 );
    }
    goto LABEL_15;
  }
LABEL_17:
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 - 4);
    if ( v15 > 0 )
    {
      v107 = 0;
      v89 = (unsigned int)v15;
      v16 = 0;
      for ( i = a1; ; v14 = *(_QWORD *)(i + 32) )
      {
        if ( !*(_QWORD *)(v14 + 8 * v16) )
          goto LABEL_20;
        v90 = *(_QWORD *)(v14 + 8 * v16);
        v17 = sub_966310(i, v90);
        v18 = v90;
        if ( !v17 )
          goto LABEL_20;
        v19 = *(_DWORD *)(v3 + 24);
        v20 = 2 * v19;
        if ( 3 * v19 < (unsigned int)(4 * (*(_DWORD *)(v3 + 28) + *(_DWORD *)(v3 + 32))) )
        {
          v72 = sub_186B270(8LL * v20);
          v18 = v90;
          v73 = v72;
          v74 = v72 + 8LL * v20;
          if ( v20 )
          {
            if ( ((8 * (_BYTE)v20) & 8) == 0 || (*(_DWORD *)(v72 + 4) = 0x80000000, v72 += 8, v72 != v74) )
            {
              do
              {
                *(_DWORD *)(v72 + 4) = 0x80000000;
                v72 += 16;
                *(_DWORD *)(v72 - 4) = 0x80000000;
              }
              while ( v72 != v74 );
            }
          }
          v75 = *(_DWORD **)(v3 + 16);
          v76 = &v75[2 * *(unsigned int *)(v3 + 24)];
          if ( v75 != v76 )
          {
            do
            {
              while ( v75[1] + 0x80000000 <= 1 )
              {
                v75 += 2;
                if ( v76 == v75 )
                  goto LABEL_95;
              }
              v77 = 8LL * (*v75 & (v20 - 1));
              v78 = v73 + v77;
              if ( 8LL * v20 == v77 )
              {
LABEL_99:
                if ( v73 == v78 )
                {
LABEL_110:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v79 = v73;
                while ( *(_DWORD *)(v79 + 4) != 0x80000000 )
                {
                  v79 += 8;
                  if ( v78 == v79 )
                    goto LABEL_110;
                }
              }
              else
              {
                v79 = v73 + v77;
                while ( *(_DWORD *)(v79 + 4) != 0x80000000 )
                {
                  v79 += 8;
                  if ( v74 == v79 )
                    goto LABEL_99;
                }
              }
              v80 = *(_QWORD *)v75;
              v75 += 2;
              *(_QWORD *)v79 = v80;
            }
            while ( v76 != v75 );
LABEL_95:
            v76 = *(_DWORD **)(v3 + 16);
          }
          if ( v76 )
          {
            v97 = v73;
            sub_186B220(v76);
            v73 = v97;
            v18 = v90;
          }
          *(_QWORD *)(v3 + 16) = v73;
          *(_DWORD *)(v3 + 24) = v20;
          *(_DWORD *)(v3 + 32) = 0;
        }
        v92 = v18;
        v108 = v16;
        v91 = v16 << 6;
        v21 = *(_QWORD *)(*(_QWORD *)v3 + 400LL) + (v16 << 6);
        v22 = sub_182DB30(v21);
        v23 = v22 + 3 * sub_182DB30(v21 + 16);
        v24 = sub_182DB30(v21 + 32);
        v25 = sub_182DB30(v21 + 48);
        v26 = *(int **)(v3 + 16);
        v27 = v92;
        v28 = v24 + 3 * v25 + 1;
        v29 = *(unsigned int *)(v3 + 24);
        v30 = v23 ^ v28;
        v31 = v29 - 1;
        v29 *= 8;
        v32 = (int *)((char *)v26 + v29);
        v33 = 8LL * (v30 & v31);
        v34 = &v26[(unsigned __int64)v33 / 4];
        if ( v33 != v29 )
          break;
        v41 = nullptr;
LABEL_33:
        if ( v34 == v26 )
        {
LABEL_40:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v105 = v16;
        v42 = v41;
        v43 = v3;
        v44 = v30;
        v103 = v27;
        v45 = v34;
        while ( 1 )
        {
          while ( 1 )
          {
            v46 = (unsigned int)v26[1];
            if ( (unsigned int)v46 + 0x80000000 <= 1 )
              break;
            if ( *v26 == v44 )
            {
              v61 = *(_QWORD *)(*(_QWORD *)(v43 + 8) + 400LL);
              v62 = qword_1C7F2C0;
              v63 = v61 + v91;
              v64 = (v46 << 6) + v61;
              if ( (*(_BYTE *)(v64 + 4) & 1) != 0 || (*(_BYTE *)(v63 + 4) & 1) != 0 )
              {
                v100 = v64;
                v95 = qword_1C7F2C0;
                v70 = sub_182C7B0(qword_1C7F2C0, v64, v63);
                v62 = v95;
                v64 = v100;
                v65 = v70 == 0;
              }
              else
              {
                v65 = *(_DWORD *)v64 == *(_DWORD *)v63;
              }
              if ( v65 )
              {
                if ( (*(_BYTE *)(v64 + 20) & 1) != 0 || (*(_BYTE *)(v63 + 20) & 1) != 0 )
                {
                  v96 = v64;
                  v71 = sub_182C7B0(v62, v64 + 16, v63 + 16);
                  v64 = v96;
                  v66 = v71 == 0;
                }
                else
                {
                  v66 = *(_DWORD *)(v64 + 16) == *(_DWORD *)(v63 + 16);
                }
                if ( v66 )
                {
                  v67 = qword_1C7F2C0;
                  if ( (*(_BYTE *)(v64 + 36) & 1) != 0 || (*(_BYTE *)(v63 + 36) & 1) != 0 )
                  {
                    v101 = v64;
                    v81 = sub_182C7B0(qword_1C7F2C0, v64 + 32, v63 + 32);
                    v64 = v101;
                    v68 = v81 == 0;
                  }
                  else
                  {
                    v68 = *(_DWORD *)(v64 + 32) == *(_DWORD *)(v63 + 32);
                  }
                  if ( v68
                    && ((*(_BYTE *)(v64 + 52) & 1) != 0 || (*(_BYTE *)(v63 + 52) & 1) != 0
                      ? (unsigned int)sub_182C7B0(v67, v64 + 48, v63 + 48) == 0
                      : *(_DWORD *)(v64 + 48) == *(_DWORD *)(v63 + 48)) )
                  {
                    v3 = v43;
                    v58 = v103;
                    v16 = v105;
                    goto LABEL_108;
                  }
                }
              }
            }
            v26 += 2;
            if ( v45 == v26 )
              goto LABEL_40;
          }
          if ( (_DWORD)v46 == 0x80000000 )
            break;
          v42 = v26;
          v26 += 2;
          if ( v45 == v26 )
            goto LABEL_40;
        }
        v84 = v44;
        v58 = v103;
        v3 = v43;
        v83 = v42;
        v16 = v105;
        if ( v42 )
          goto LABEL_106;
LABEL_107:
        *v26 = v84;
        v26[1] = v108;
        ++*(_DWORD *)(v3 + 28);
LABEL_108:
        v85 = (unsigned int)v26[1];
        if ( (_DWORD)v85 != (_DWORD)v16 )
          v107 |= sub_966370(i, v58, *(_QWORD *)(*(_QWORD *)(i + 32) + 8 * v85));
LABEL_20:
        if ( v89 == ++v16 )
          return v107;
      }
      v35 = v3;
      v104 = v16;
      v36 = v30;
      v102 = v92;
      v26 = (int *)((char *)v26 + v33);
      v37 = nullptr;
      v38 = v35;
      v106 = v34;
      while ( 1 )
      {
        while ( 1 )
        {
          v39 = (unsigned int)v26[1];
          if ( (unsigned int)v39 + 0x80000000 <= 1 )
            break;
          if ( *v26 == v36 )
          {
            v47 = *(_QWORD *)(*(_QWORD *)(v38 + 8) + 400LL);
            v48 = qword_1C7F2C0;
            v49 = v47 + v91;
            v50 = (v39 << 6) + v47;
            if ( (*(_BYTE *)(v50 + 4) & 1) != 0 || (*(_BYTE *)(v49 + 4) & 1) != 0 )
            {
              v99 = v49;
              v94 = qword_1C7F2C0;
              v59 = sub_182C7B0(qword_1C7F2C0, v50, v49);
              v48 = v94;
              v49 = v99;
              v51 = v59 == 0;
            }
            else
            {
              v51 = *(_DWORD *)v50 == *(_DWORD *)v49;
            }
            if ( v51 )
            {
              if ( (*(_BYTE *)(v50 + 20) & 1) != 0 || (*(_BYTE *)(v49 + 20) & 1) != 0 )
              {
                v93 = v49;
                v52 = sub_182C7B0(v48, v50 + 16, v49 + 16);
                v49 = v93;
                v53 = v52 == 0;
              }
              else
              {
                v53 = *(_DWORD *)(v50 + 16) == *(_DWORD *)(v49 + 16);
              }
              if ( v53 )
              {
                v54 = qword_1C7F2C0;
                if ( (*(_BYTE *)(v50 + 36) & 1) != 0 || (*(_BYTE *)(v49 + 36) & 1) != 0 )
                {
                  v98 = v49;
                  v55 = sub_182C7B0(qword_1C7F2C0, v50 + 32, v49 + 32);
                  v49 = v98;
                  v56 = v55 == 0;
                }
                else
                {
                  v56 = *(_DWORD *)(v50 + 32) == *(_DWORD *)(v49 + 32);
                }
                if ( v56
                  && ((*(_BYTE *)(v50 + 52) & 1) != 0 || (*(_BYTE *)(v49 + 52) & 1) != 0
                    ? (unsigned int)sub_182C7B0(v54, v50 + 48, v49 + 48) == 0
                    : *(_DWORD *)(v50 + 48) == *(_DWORD *)(v49 + 48)) )
                {
                  v58 = v102;
                  v16 = v104;
                  v3 = v38;
                  goto LABEL_108;
                }
              }
            }
          }
          v26 += 2;
          if ( v32 == v26 )
            goto LABEL_32;
        }
        if ( (_DWORD)v39 == 0x80000000 )
          break;
        v37 = v26;
        v26 += 2;
        if ( v32 == v26 )
        {
LABEL_32:
          v40 = v38;
          v41 = v37;
          v27 = v102;
          v34 = v106;
          v16 = v104;
          v26 = *(int **)(v38 + 16);
          v30 = v36;
          v3 = v40;
          goto LABEL_33;
        }
      }
      v82 = v38;
      v83 = v37;
      v84 = v36;
      v58 = v102;
      v16 = v104;
      v3 = v82;
      if ( !v83 )
        goto LABEL_107;
LABEL_106:
      --*(_DWORD *)(v3 + 32);
      v26 = v83;
      goto LABEL_107;
    }
  }
  return 0;
}

