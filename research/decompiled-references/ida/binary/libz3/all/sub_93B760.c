__int64 __fastcall sub_93B760(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
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
  __int64 v15; // rbp
  __int64 v16; // r14
  char v17; // al
  __int64 v18; // r8
  int v19; // edx
  unsigned int v20; // r15d
  __int64 v21; // r12
  int v22; // ebx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // r12d
  _DWORD *v27; // rbx
  unsigned int v28; // edx
  char *v29; // rcx
  __int64 v30; // rdx
  _DWORD *v31; // r9
  _DWORD *v32; // r15
  _DWORD *v33; // rbp
  __int64 v34; // rax
  _DWORD *v35; // r11
  _DWORD *v36; // r15
  int v37; // ebp
  __int64 v38; // r12
  _DWORD *v39; // r13
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rsi
  void *v44; // rdi
  bool v45; // al
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v50; // rsi
  __int64 v51; // r14
  __int64 v52; // rsi
  void *v53; // rdi
  bool v54; // al
  size_t v56; // r12
  __int64 v57; // rax
  __int64 v58; // r9
  size_t v59; // r11
  _DWORD *v60; // rbx
  _DWORD *v61; // r10
  size_t v62; // rax
  unsigned int v63; // r11d
  unsigned int v64; // r15d
  __int64 v65; // rcx
  _DWORD *v66; // rbp
  __int64 v67; // r10
  __int64 v68; // r13
  __int64 v69; // r9
  size_t v70; // r14
  size_t v71; // r12
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  _DWORD *v76; // r11
  unsigned int v77; // edi
  __int64 v78; // [rsp+8h] [rbp-80h]
  __int64 v79; // [rsp+8h] [rbp-80h]
  __int64 v80; // [rsp+10h] [rbp-78h]
  __int64 v81; // [rsp+10h] [rbp-78h]
  __int64 v82; // [rsp+18h] [rbp-70h]
  __int64 v83; // [rsp+18h] [rbp-70h]
  __int64 v84; // [rsp+28h] [rbp-60h]
  __int64 v85; // [rsp+30h] [rbp-58h]
  __int64 v86; // [rsp+30h] [rbp-58h]
  __int64 v87; // [rsp+38h] [rbp-50h]
  __int64 v88; // [rsp+38h] [rbp-50h]
  _DWORD *v89; // [rsp+40h] [rbp-48h]
  unsigned __int8 v90; // [rsp+4Bh] [rbp-3Dh]
  int v91; // [rsp+4Ch] [rbp-3Ch]

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
    v78 = a1;
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(v3 + 24);
      *(_QWORD *)(v3 + 16) = 0;
      v9 >>= 1;
      *(_DWORD *)(v3 + 24) = v9;
      v10 = v9;
      v11 = sub_186B270(8LL * v9);
      a1 = v78;
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
      v77 = v7 >> 1;
      *(_QWORD *)(v3 + 16) = 0;
      v10 = v77;
      *(_DWORD *)(v3 + 24) = v77;
      v11 = sub_186B270(8LL * v77);
      a1 = v78;
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
  if ( v14 && *(int *)(v14 - 4) > 0 )
  {
    v79 = *(unsigned int *)(v14 - 4);
    v15 = 0;
    v16 = a1;
    v90 = 0;
    while ( 1 )
    {
      if ( !*(_QWORD *)(v14 + 8 * v15)
        || (v80 = *(_QWORD *)(v14 + 8 * v15), v17 = sub_966310(v16, v80), v18 = v80, !v17) )
      {
LABEL_20:
        if ( v79 == ++v15 )
          return v90;
        goto LABEL_21;
      }
      v19 = *(_DWORD *)(v3 + 24);
      v20 = 2 * v19;
      if ( 3 * v19 < (unsigned int)(4 * (*(_DWORD *)(v3 + 28) + *(_DWORD *)(v3 + 32))) )
      {
        v56 = 8LL * v20;
        v57 = sub_186B270(v56);
        v18 = v80;
        v58 = v57;
        v59 = v57 + v56;
        if ( v20 )
        {
          if ( (v56 & 8) == 0 || (*(_DWORD *)(v57 + 4) = 0x80000000, v57 += 8, v57 != v59) )
          {
            do
            {
              *(_DWORD *)(v57 + 4) = 0x80000000;
              v57 += 16;
              *(_DWORD *)(v57 - 4) = 0x80000000;
            }
            while ( v57 != v59 );
          }
        }
        v60 = *(_DWORD **)(v3 + 16);
        v61 = &v60[2 * *(unsigned int *)(v3 + 24)];
        if ( v60 != v61 )
        {
          v62 = v59;
          v63 = v20;
          v64 = v20 - 1;
          v65 = v15;
          v66 = &v60[2 * *(unsigned int *)(v3 + 24)];
          v67 = v3;
          v68 = v58;
          v69 = v16;
          v70 = v56;
          v71 = v62;
          do
          {
            while ( v60[1] + 0x80000000 <= 1 )
            {
              v60 += 2;
              if ( v66 == v60 )
                goto LABEL_79;
            }
            v72 = 8LL * (*v60 & v64);
            v73 = v68 + v72;
            if ( v70 == v72 )
            {
LABEL_83:
              if ( v68 == v73 )
              {
LABEL_91:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v74 = v68;
              while ( *(_DWORD *)(v74 + 4) != 0x80000000 )
              {
                v74 += 8;
                if ( v73 == v74 )
                  goto LABEL_91;
              }
            }
            else
            {
              v74 = v68 + v72;
              while ( *(_DWORD *)(v74 + 4) != 0x80000000 )
              {
                v74 += 8;
                if ( v71 == v74 )
                  goto LABEL_83;
              }
            }
            v75 = *(_QWORD *)v60;
            v60 += 2;
            *(_QWORD *)v74 = v75;
          }
          while ( v66 != v60 );
LABEL_79:
          v16 = v69;
          v58 = v68;
          v3 = v67;
          v61 = *(_DWORD **)(v67 + 16);
          v15 = v65;
          v20 = v63;
        }
        if ( v61 )
        {
          v83 = v58;
          sub_186B220(v61);
          v58 = v83;
          v18 = v80;
        }
        *(_QWORD *)(v3 + 16) = v58;
        *(_DWORD *)(v3 + 24) = v20;
        *(_DWORD *)(v3 + 32) = 0;
      }
      v82 = v18;
      v91 = v15;
      v81 = 32 * v15;
      v21 = *(_QWORD *)(*(_QWORD *)v3 + 336LL) + 32 * v15;
      v22 = sub_182DB30(v21);
      v23 = sub_182DB30(v21 + 16);
      v24 = v82;
      LODWORD(v21) = 3 * v23;
      v25 = *(unsigned int *)(v3 + 24);
      v26 = v22 + v21;
      v27 = *(_DWORD **)(v3 + 16);
      v28 = v25 - 1;
      v25 *= 8;
      v29 = (char *)v27 + v25;
      v30 = 8LL * (v26 & v28);
      v31 = &v27[(unsigned __int64)v30 / 4];
      if ( v30 == v25 )
        break;
      v85 = v15;
      v27 = (_DWORD *)((char *)v27 + v30);
      v32 = v29;
      v33 = nullptr;
      v89 = v31;
      v87 = v16;
      while ( 1 )
      {
        while ( 1 )
        {
          v34 = (unsigned int)v27[1];
          if ( (unsigned int)v34 + 0x80000000 <= 1 )
            break;
          if ( *v27 == v26 )
          {
            v41 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL);
            v42 = v41 + v81;
            v43 = 32 * v34 + v41;
            v44 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v43 + 4) & 1) != 0 || (*(_BYTE *)(v42 + 4) & 1) != 0 )
            {
              v44 = qword_1C7F2C0;
              v45 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v43, v42) == 0;
            }
            else
            {
              v45 = *(_DWORD *)v43 == *(_DWORD *)v42;
            }
            if ( v45
              && ((*(_BYTE *)(v43 + 20) & 1) != 0 || (*(_BYTE *)(v42 + 20) & 1) != 0
                ? (unsigned int)sub_182C7B0(v44, v43 + 16, v42 + 16) == 0
                : *(_DWORD *)(v43 + 16) == *(_DWORD *)(v42 + 16)) )
            {
              v47 = v82;
              v15 = v85;
              v16 = v87;
              goto LABEL_50;
            }
          }
          v27 += 2;
          if ( v32 == v27 )
            goto LABEL_32;
        }
        if ( (_DWORD)v34 == 0x80000000 )
          break;
        v33 = v27;
        v27 += 2;
        if ( v32 == v27 )
        {
LABEL_32:
          v35 = v33;
          v24 = v82;
          v31 = v89;
          v15 = v85;
          v16 = v87;
          v27 = *(_DWORD **)(v3 + 16);
          goto LABEL_33;
        }
      }
      v76 = v33;
      v47 = v82;
      v15 = v85;
      v16 = v87;
      if ( v76 )
        goto LABEL_89;
LABEL_90:
      *v27 = v26;
      v27[1] = v91;
      ++*(_DWORD *)(v3 + 28);
LABEL_50:
      v48 = (unsigned int)v27[1];
      if ( (_DWORD)v48 == (_DWORD)v15 )
        goto LABEL_20;
      ++v15;
      v90 |= sub_966370(v16, v47, *(_QWORD *)(*(_QWORD *)(v16 + 32) + 8 * v48));
      if ( v79 == v15 )
        return v90;
LABEL_21:
      v14 = *(_QWORD *)(v16 + 32);
    }
    v35 = nullptr;
LABEL_33:
    if ( v31 == v27 )
    {
LABEL_40:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v86 = v15;
    v36 = v35;
    v37 = v26;
    v38 = v3;
    v84 = v24;
    v39 = v31;
    v88 = v16;
    while ( 1 )
    {
      while ( 1 )
      {
        v40 = (unsigned int)v27[1];
        if ( (unsigned int)v40 + 0x80000000 <= 1 )
          break;
        if ( *v27 == v37 )
        {
          v50 = *(_QWORD *)(*(_QWORD *)(v38 + 8) + 336LL);
          v51 = v50 + v81;
          v52 = 32 * v40 + v50;
          v53 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v52 + 4) & 1) != 0 || (*(_BYTE *)(v51 + 4) & 1) != 0 )
          {
            v53 = qword_1C7F2C0;
            v54 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v52, v51) == 0;
          }
          else
          {
            v54 = *(_DWORD *)v52 == *(_DWORD *)v51;
          }
          if ( v54
            && ((*(_BYTE *)(v52 + 20) & 1) != 0 || (*(_BYTE *)(v51 + 20) & 1) != 0
              ? (unsigned int)sub_182C7B0(v53, v52 + 16, v51 + 16) == 0
              : *(_DWORD *)(v52 + 16) == *(_DWORD *)(v51 + 16)) )
          {
            v47 = v84;
            v15 = v86;
            v3 = v38;
            v16 = v88;
            goto LABEL_50;
          }
        }
        v27 += 2;
        if ( v39 == v27 )
          goto LABEL_40;
      }
      if ( (_DWORD)v40 == 0x80000000 )
        break;
      v36 = v27;
      v27 += 2;
      if ( v39 == v27 )
        goto LABEL_40;
    }
    v3 = v38;
    v47 = v84;
    v26 = v37;
    v16 = v88;
    v15 = v86;
    v76 = v36;
    if ( !v36 )
      goto LABEL_90;
LABEL_89:
    --*(_DWORD *)(v3 + 32);
    v27 = v76;
    goto LABEL_90;
  }
  return 0;
}

