unsigned __int64 __fastcall sub_943170(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // r9
  __int64 v7; // r13
  unsigned int v8; // r14d
  unsigned int v9; // eax
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // edx
  bool v14; // cf
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ebx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int *v21; // r8
  unsigned int v22; // eax
  __int64 *v23; // r8
  __int64 v24; // rdx
  _DWORD *v25; // rdx
  unsigned __int64 v26; // r11
  unsigned int v27; // eax
  unsigned __int64 v28; // r14
  _QWORD *v29; // rdx
  unsigned __int64 v32; // rcx
  char *v33; // r14
  char *v34; // r15
  int v35; // eax
  int v36; // r8d
  unsigned int *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbp
  char *v40; // rax
  _QWORD *v41; // r10
  unsigned int v42; // r12d
  __int64 v43; // r13
  unsigned __int64 v44; // rbx
  unsigned int v45; // r9d
  __int64 v46; // rax
  char *v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // r8
  char *v54; // r8
  unsigned __int64 v55; // r9
  unsigned int v56; // ebx
  unsigned int v57; // ebp
  unsigned int v58; // eax
  unsigned int v59; // ebp
  __int64 v60; // rcx
  char *v61; // rdx
  unsigned int *v62; // rax
  __int64 v63; // rsi
  unsigned int v64; // r12d
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // r15
  char **v67; // r13
  __int64 v68; // rbx
  char *v69; // rax
  char *v70; // rcx
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // r9
  char *v77; // r9
  _QWORD *v79; // rcx
  _QWORD *v80; // rsi
  _QWORD *v81; // r8
  signed __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // rdx
  __int64 v87; // rax
  _QWORD *v90; // r9
  _QWORD *v91; // rsi
  signed __int64 v92; // rax
  __int64 v93; // rax
  _QWORD *v96; // r9
  char **v97; // [rsp+0h] [rbp-90h]
  unsigned __int64 v98; // [rsp+0h] [rbp-90h]
  __int64 v99; // [rsp+0h] [rbp-90h]
  unsigned int v101; // [rsp+10h] [rbp-80h]
  char *v102; // [rsp+10h] [rbp-80h]
  unsigned __int64 v104; // [rsp+18h] [rbp-78h]
  int v105; // [rsp+20h] [rbp-70h]
  char *v106; // [rsp+20h] [rbp-70h]
  __int64 v107; // [rsp+28h] [rbp-68h]
  int v108; // [rsp+34h] [rbp-5Ch]
  unsigned int v109; // [rsp+38h] [rbp-58h]
  _QWORD *v110; // [rsp+38h] [rbp-58h]
  __int64 v111; // [rsp+40h] [rbp-50h]
  char *v112; // [rsp+40h] [rbp-50h]
  __int64 v113; // [rsp+40h] [rbp-50h]
  _QWORD *v114; // [rsp+48h] [rbp-48h]
  unsigned int v115; // [rsp+50h] [rbp-40h]
  __int64 v116; // [rsp+50h] [rbp-40h]
  unsigned int v117; // [rsp+58h] [rbp-38h]
  unsigned int v118; // [rsp+5Ch] [rbp-34h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(_QWORD *)(a1 + 128);
  v7 = *(_QWORD *)(a1 + 112);
  v8 = (_DWORD)a2 - v4;
  v108 = (_DWORD)a2 - v4;
  v117 = *(_DWORD *)(a1 + 24);
  v9 = 1 << *(_DWORD *)(a1 + 260);
  v114 = (_QWORD *)(v4 + v117);
  v10 = v9 - 1;
  v11 = 1 << *(_DWORD *)(a1 + 256);
  v12 = (_DWORD)a2 - v4 - v11;
  if ( v11 >= (_DWORD)a2 - (_DWORD)v4 - v5 )
    v12 = *(_DWORD *)(a1 + 28);
  if ( !*(_DWORD *)(a1 + 40) )
    v5 = v12;
  v13 = v8 - v9;
  v14 = v9 < v8;
  v15 = 0;
  if ( v14 )
    v15 = v13;
  v16 = *(_QWORD *)(a1 + 248);
  v17 = 1 << *(_DWORD *)(a1 + 268);
  v101 = v15;
  v97 = (char **)v16;
  v18 = (0xCF1BBCDCBF9B0000LL * *a2) >> (66 - *(_BYTE *)(v16 + 264));
  v107 = 16 * v18;
  _mm_prefetch((const char *)(*(_QWORD *)(v16 + 112) + 16 * v18), 1);
  v111 = 4 * v18;
  v105 = *(_DWORD *)(a1 + 300);
  v19 = *(_DWORD *)(a1 + 44);
  v20 = 64 - *(_DWORD *)(a1 + 264);
  if ( v8 > v19 )
  {
    v21 = (unsigned int *)(v7 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v4 + v19)) >> v20));
    *(_DWORD *)(v6 + 4LL * (v19 & v10)) = *v21;
    *v21 = v19;
    v22 = v19 + 1;
    if ( !v105 )
    {
      v23 = (__int64 *)(v4 + v22);
      while ( v8 != v22 )
      {
        v24 = *v23;
        v23 = (__int64 *)((char *)v23 + 1);
        v25 = (_DWORD *)(v7 + 4 * ((0xCF1BBCDCBF9B0000LL * v24) >> v20));
        *(_DWORD *)(v6 + 4LL * (v22 & v10)) = *v25;
        *v25 = v22++;
      }
    }
  }
  *(_DWORD *)(a1 + 44) = v8;
  v26 = 3;
  v27 = *(_DWORD *)(v7 + 4 * ((0xCF1BBCDCBF9B0000LL * *a2) >> v20));
  if ( v27 >= v5 && v17 )
  {
    v28 = (unsigned __int64)a3 - 7;
    while ( 1 )
    {
      v29 = (_QWORD *)(v4 + v27);
      if ( *(_DWORD *)((char *)a2 + v26 - 3) != *(_DWORD *)((char *)v29 + v26 - 3) )
        goto LABEL_15;
      if ( (unsigned __int64)a2 >= v28 )
      {
        v79 = a2;
      }
      else
      {
        if ( *v29 != *a2 )
        {
          _RCX = *a2 ^ *v29;
          __asm { tzcnt   rcx, rcx }
          v32 = (unsigned int)_RCX >> 3;
          goto LABEL_22;
        }
        v79 = a2 + 1;
        v110 = v29 + 1;
        if ( v28 <= (unsigned __int64)(a2 + 1) )
        {
          ++v29;
        }
        else
        {
          v83 = v29[1];
          v84 = a2[1];
          if ( v84 != v83 )
          {
LABEL_84:
            _RDX = v83 ^ v84;
            __asm { tzcnt   rdx, rdx }
            v32 = (char *)v79 + ((unsigned int)_RDX >> 3) - (char *)a2;
            goto LABEL_22;
          }
          v116 = v6;
          v96 = v110;
          while ( 1 )
          {
            ++v79;
            ++v96;
            if ( v28 <= (unsigned __int64)v79 )
              break;
            v84 = *v96;
            v83 = *v79;
            if ( *v96 != *v79 )
            {
              v6 = v116;
              goto LABEL_84;
            }
          }
          v29 = v96;
          v6 = v116;
        }
      }
      if ( v79 < (_QWORD *)((char *)a3 - 3) && *(_DWORD *)v29 == *(_DWORD *)v79 )
      {
        v79 = (_QWORD *)((char *)v79 + 4);
        v29 = (_QWORD *)((char *)v29 + 4);
      }
      if ( v79 < (_QWORD *)((char *)a3 - 1) && *(_WORD *)v29 == *(_WORD *)v79 )
      {
        v79 = (_QWORD *)((char *)v79 + 2);
        v29 = (_QWORD *)((char *)v29 + 2);
      }
      if ( a3 > v79 )
        v79 = (_QWORD *)((char *)v79 + (*(_BYTE *)v29 == *(_BYTE *)v79));
      v32 = (char *)v79 - (char *)a2;
LABEL_22:
      if ( v32 > v26 )
      {
        *a4 = v108 + 3 - v27;
        v26 = v32;
        if ( a3 == (_QWORD *)((char *)a2 + v32) )
          break;
      }
LABEL_15:
      if ( v101 < v27 )
      {
        --v17;
        v27 = *(_DWORD *)(v6 + 4LL * (v10 & v27));
        if ( v27 >= v5 )
        {
          if ( v17 )
            continue;
        }
      }
      break;
    }
  }
  v33 = v97[1];
  v34 = v97[14];
  v102 = *v97;
  v109 = (unsigned int)*v97 - (_DWORD)v33;
  v35 = 3;
  if ( v17 <= 3 )
    v35 = v17;
  v36 = v35;
  v37 = (unsigned int *)&v34[v107];
  do
  {
    v38 = *v37++;
    _mm_prefetch(&v33[v38], 1);
  }
  while ( &v34[v107 + 12] != (char *)v37 );
  _mm_prefetch(&v97[16][4 * (*(_DWORD *)&v34[v107 + 12] >> 8)], 1);
  if ( !v17 )
    return v26;
  v39 = *(unsigned int *)&v34[v107];
  v40 = &v33[v39];
  if ( !(_DWORD)v39 )
    return v26;
  v41 = a2;
  v42 = 0;
  v115 = v17;
  v43 = 4 * v111 + 4;
  v44 = (unsigned __int64)a3;
  v45 = v36;
  v104 = (unsigned __int64)a2 + 4;
  while ( 1 )
  {
    if ( *(_DWORD *)v41 != *(_DWORD *)v40 )
    {
LABEL_31:
      if ( v45 <= ++v42 )
        break;
      goto LABEL_32;
    }
    v47 = v40 + 4;
    v48 = v104 + v102 - (v40 + 4);
    if ( v44 < v48 )
      v48 = v44;
    v49 = v48 - 7;
    if ( v104 >= v48 - 7 )
    {
      v80 = (_QWORD *)v104;
      v81 = v40 + 4;
    }
    else
    {
      v50 = *(_QWORD *)(v40 + 4);
      v51 = *(_QWORD *)((char *)v41 + 4);
      if ( v50 != v51 )
      {
        _RSI = v51 ^ v50;
        __asm { tzcnt   rsi, rsi }
        v54 = (char *)((unsigned int)_RSI >> 3);
        goto LABEL_39;
      }
      v80 = (_QWORD *)((char *)v41 + 12);
      v81 = v40 + 12;
      if ( v49 > (unsigned __int64)v41 + 12 )
      {
        v113 = *(_QWORD *)(v40 + 12);
        v87 = *(_QWORD *)((char *)v41 + 12);
        if ( v87 != v113 )
        {
          _RAX = v113 ^ v87;
LABEL_88:
          __asm { tzcnt   r8, rax }
          v54 = (char *)v80 + ((unsigned int)_R8 >> 3) - v104;
LABEL_39:
          if ( v102 != &v47[(_QWORD)v54] )
            goto LABEL_40;
LABEL_81:
          v118 = v45;
          v112 = v54;
          v82 = sub_92B7A0(&v54[v104], v114, v44);
          v45 = v118;
          v54 = &v112[v82];
          goto LABEL_40;
        }
        while ( 1 )
        {
          ++v80;
          ++v81;
          if ( v49 <= (unsigned __int64)v80 )
            break;
          if ( *v81 != *v80 )
          {
            _RAX = *v80 ^ *v81;
            goto LABEL_88;
          }
        }
      }
    }
    if ( (unsigned __int64)v80 < v48 - 3 && *(_DWORD *)v81 == *(_DWORD *)v80 )
    {
      v80 = (_QWORD *)((char *)v80 + 4);
      v81 = (_QWORD *)((char *)v81 + 4);
    }
    if ( (unsigned __int64)v80 < v48 - 1 && *(_WORD *)v81 == *(_WORD *)v80 )
    {
      v80 = (_QWORD *)((char *)v80 + 2);
      v81 = (_QWORD *)((char *)v81 + 2);
    }
    if ( v48 > (unsigned __int64)v80 )
      v80 = (_QWORD *)((char *)v80 + (*(_BYTE *)v81 == *(_BYTE *)v80));
    v54 = (char *)v80 - v104;
    if ( v102 == &v47[(_QWORD)v80 - v104] )
      goto LABEL_81;
LABEL_40:
    if ( (unsigned __int64)(v54 + 4) <= v26 )
      goto LABEL_31;
    v26 = (unsigned __int64)(v54 + 4);
    *a4 = v109 + v108 - v117 + 3 - (unsigned int)v39;
    if ( (char *)v44 == &v54[(_QWORD)v41 + 4] )
      return v26;
    ++v42;
    v34 = v97[14];
    if ( v45 <= v42 )
      break;
LABEL_32:
    v46 = *(unsigned int *)&v34[v43];
    v43 += 4;
    LODWORD(v39) = v46;
    v40 = &v33[v46];
    if ( !(_DWORD)v39 )
      return v26;
  }
  v55 = v44;
  v56 = v115 - v42;
  v57 = *(_DWORD *)&v34[v107 + 12];
  v58 = (unsigned __int8)v57;
  v59 = v57 >> 8;
  if ( v58 <= v115 - v42 )
    v56 = v58;
  if ( v56 )
  {
    v60 = v59;
    v61 = v97[16];
    v62 = (unsigned int *)&v61[4 * v59];
    do
    {
      v63 = *v62++;
      _mm_prefetch(&v33[v63], 1);
    }
    while ( &v61[4 * v59 + 4 + 4 * (unsigned __int64)(v56 - 1)] != (char *)v62 );
    v64 = v59 + v56;
    v65 = (unsigned __int64)v41 + 4;
    v66 = v55;
    v67 = v97;
    while ( 2 )
    {
      v68 = *(unsigned int *)&v61[4 * v60];
      v69 = &v33[v68];
      if ( *(_DWORD *)v41 != *(_DWORD *)&v33[v68] )
        goto LABEL_49;
      v70 = v69 + 4;
      v71 = v65 + v102 - (v69 + 4);
      if ( v66 < v71 )
        v71 = v66;
      v72 = v71 - 7;
      if ( v65 >= v71 - 7 )
      {
        v90 = v69 + 4;
        v91 = (_QWORD *)v65;
      }
      else
      {
        v73 = *(_QWORD *)(v69 + 4);
        v74 = *(_QWORD *)((char *)v41 + 4);
        if ( v73 != v74 )
        {
          _RSI = v74 ^ v73;
          __asm { tzcnt   rsi, rsi }
          v77 = (char *)((unsigned int)_RSI >> 3);
          goto LABEL_57;
        }
        v91 = (_QWORD *)((char *)v41 + 12);
        v90 = v69 + 12;
        if ( v72 > (unsigned __int64)v41 + 12 )
        {
          v99 = *(_QWORD *)(v69 + 12);
          v93 = *(_QWORD *)((char *)v41 + 12);
          if ( v99 != v93 )
          {
            _RAX = v99 ^ v93;
LABEL_103:
            __asm { tzcnt   r9, rax }
            v77 = (char *)v91 + ((unsigned int)_R9 >> 3) - v65;
LABEL_57:
            if ( v102 != &v70[(_QWORD)v77] )
            {
LABEL_58:
              if ( (unsigned __int64)(v77 + 4) > v26 )
              {
                v26 = (unsigned __int64)(v77 + 4);
                *a4 = v109 + v108 - v117 + 3 - (unsigned int)v68;
                if ( (char *)v66 == &v77[(_QWORD)v41 + 4] )
                  return v26;
              }
LABEL_49:
              if ( ++v59 == v64 )
                return v26;
              v61 = v67[16];
              v60 = v59;
              continue;
            }
LABEL_99:
            v98 = v65;
            v106 = v77;
            v92 = sub_92B7A0(&v77[v65], v114, v66);
            v65 = v98;
            v77 = &v106[v92];
            goto LABEL_58;
          }
          while ( 1 )
          {
            ++v91;
            ++v90;
            if ( v72 <= (unsigned __int64)v91 )
              break;
            if ( *v90 != *v91 )
            {
              _RAX = *v91 ^ *v90;
              goto LABEL_103;
            }
          }
        }
      }
      break;
    }
    if ( (unsigned __int64)v91 < v71 - 3 && *(_DWORD *)v90 == *(_DWORD *)v91 )
    {
      v91 = (_QWORD *)((char *)v91 + 4);
      v90 = (_QWORD *)((char *)v90 + 4);
    }
    if ( (unsigned __int64)v91 < v71 - 1 && *(_WORD *)v90 == *(_WORD *)v91 )
    {
      v91 = (_QWORD *)((char *)v91 + 2);
      v90 = (_QWORD *)((char *)v90 + 2);
    }
    if ( v71 > (unsigned __int64)v91 )
      v91 = (_QWORD *)((char *)v91 + (*(_BYTE *)v90 == *(_BYTE *)v91));
    v77 = (char *)v91 - v65;
    if ( v102 != &v70[(_QWORD)v91 - v65] )
      goto LABEL_58;
    goto LABEL_99;
  }
  return v26;
}
