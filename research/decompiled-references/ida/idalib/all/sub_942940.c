unsigned __int64 __fastcall sub_942940(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // r9
  __int64 v7; // r11
  unsigned int v8; // r14d
  unsigned int v9; // eax
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // r13d
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rax
  char v17; // cl
  unsigned int v18; // eax
  unsigned int *v19; // r8
  unsigned int v20; // eax
  _DWORD *v21; // r8
  unsigned int v22; // edx
  _DWORD *v23; // rdx
  int v24; // edi
  unsigned int v25; // eax
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // r15
  _QWORD *v28; // rdx
  unsigned __int64 v31; // rcx
  char *v32; // r14
  char *v33; // r15
  int v34; // eax
  int v35; // r8d
  unsigned int *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rbp
  char *v39; // rax
  _QWORD *v40; // r10
  unsigned int v41; // r12d
  __int64 v42; // r13
  unsigned __int64 v43; // rbx
  unsigned int v44; // r9d
  __int64 v45; // rax
  char *v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // r8
  char *v53; // r8
  unsigned __int64 v54; // r9
  unsigned int v55; // ebx
  unsigned int v56; // ebp
  unsigned int v57; // eax
  unsigned int v58; // ebp
  __int64 v59; // rcx
  char *v60; // rdx
  unsigned int *v61; // rax
  __int64 v62; // rsi
  unsigned int v63; // r12d
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // r15
  char **v66; // r13
  __int64 v67; // rbx
  char *v68; // rax
  char *v69; // rcx
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // r9
  char *v76; // r9
  _QWORD *v78; // rcx
  _QWORD *v79; // rsi
  _QWORD *v80; // r8
  signed __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdx
  __int64 v86; // rax
  _QWORD *v89; // r9
  _QWORD *v90; // rsi
  signed __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v95; // r9
  char **v96; // [rsp+0h] [rbp-90h]
  unsigned __int64 v97; // [rsp+0h] [rbp-90h]
  __int64 v98; // [rsp+0h] [rbp-90h]
  int v100; // [rsp+10h] [rbp-80h]
  char *v101; // [rsp+10h] [rbp-80h]
  unsigned __int64 v103; // [rsp+18h] [rbp-78h]
  char *v104; // [rsp+20h] [rbp-70h]
  __int64 v105; // [rsp+28h] [rbp-68h]
  int v106; // [rsp+34h] [rbp-5Ch]
  unsigned int v107; // [rsp+38h] [rbp-58h]
  _QWORD *v108; // [rsp+38h] [rbp-58h]
  __int64 v109; // [rsp+40h] [rbp-50h]
  char *v110; // [rsp+40h] [rbp-50h]
  __int64 v111; // [rsp+40h] [rbp-50h]
  _QWORD *v112; // [rsp+48h] [rbp-48h]
  unsigned int v113; // [rsp+50h] [rbp-40h]
  __int64 v114; // [rsp+50h] [rbp-40h]
  unsigned int v115; // [rsp+58h] [rbp-38h]
  unsigned int v116; // [rsp+5Ch] [rbp-34h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(_QWORD *)(a1 + 128);
  v7 = *(_QWORD *)(a1 + 112);
  v8 = (_DWORD)a2 - v4;
  v106 = (_DWORD)a2 - v4;
  v115 = *(_DWORD *)(a1 + 24);
  v9 = 1 << *(_DWORD *)(a1 + 260);
  v112 = (_QWORD *)(v4 + v115);
  v10 = v9 - 1;
  v11 = 1 << *(_DWORD *)(a1 + 256);
  v12 = (_DWORD)a2 - v4 - v11;
  if ( v11 >= (_DWORD)a2 - (_DWORD)v4 - v5 )
    v12 = *(_DWORD *)(a1 + 28);
  if ( !*(_DWORD *)(a1 + 40) )
    v5 = v12;
  v13 = (_DWORD)a2 - v4 - v9;
  if ( v9 >= v8 )
    v13 = 0;
  v14 = *(_QWORD *)(a1 + 248);
  v15 = 1 << *(_DWORD *)(a1 + 268);
  v96 = (char **)v14;
  v16 = (unsigned int)(-1640531535 * *(_DWORD *)a2) >> (34 - *(_BYTE *)(v14 + 264));
  v105 = 16 * v16;
  _mm_prefetch((const char *)(*(_QWORD *)(v14 + 112) + 16 * v16), 1);
  v109 = 4 * v16;
  v17 = 32 - *(_DWORD *)(a1 + 264);
  v100 = *(_DWORD *)(a1 + 300);
  v18 = *(_DWORD *)(a1 + 44);
  if ( v8 > v18 )
  {
    v19 = (unsigned int *)(v7 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)(v4 + v18)) >> v17));
    *(_DWORD *)(v6 + 4LL * (v18 & v10)) = *v19;
    *v19 = v18;
    v20 = v18 + 1;
    if ( !v100 )
    {
      v21 = (_DWORD *)(v4 + v20);
      while ( v8 != v20 )
      {
        v22 = -1640531535 * *v21;
        v21 = (_DWORD *)((char *)v21 + 1);
        v23 = (_DWORD *)(v7 + 4LL * (v22 >> v17));
        *(_DWORD *)(v6 + 4LL * (v20 & v10)) = *v23;
        *v23 = v20++;
      }
    }
  }
  *(_DWORD *)(a1 + 44) = v8;
  v24 = *(_DWORD *)a2;
  v25 = *(_DWORD *)(v7 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)a2) >> v17));
  v26 = 3;
  if ( v25 >= v5 && v15 )
  {
    v27 = a3 - 7;
    while ( 1 )
    {
      v28 = (_QWORD *)(v4 + v25);
      if ( *(_DWORD *)((char *)v28 + v26 - 3) != v24 )
        goto LABEL_15;
      if ( (unsigned __int64)a2 >= v27 )
      {
        v78 = a2;
      }
      else
      {
        if ( *v28 != *a2 )
        {
          _RCX = *a2 ^ *v28;
          __asm { tzcnt   rcx, rcx }
          v31 = (unsigned int)_RCX >> 3;
          goto LABEL_23;
        }
        v78 = a2 + 1;
        v108 = v28 + 1;
        if ( v27 <= (unsigned __int64)(a2 + 1) )
        {
          ++v28;
        }
        else
        {
          v82 = v28[1];
          v83 = a2[1];
          if ( v83 != v82 )
          {
LABEL_85:
            _RDX = v82 ^ v83;
            __asm { tzcnt   rdx, rdx }
            v31 = (char *)v78 + ((unsigned int)_RDX >> 3) - (char *)a2;
            goto LABEL_23;
          }
          v114 = v6;
          v95 = v108;
          while ( 1 )
          {
            ++v78;
            ++v95;
            if ( v27 <= (unsigned __int64)v78 )
              break;
            v83 = *v95;
            v82 = *v78;
            if ( *v95 != *v78 )
            {
              v6 = v114;
              goto LABEL_85;
            }
          }
          v28 = v95;
          v6 = v114;
        }
      }
      if ( (unsigned __int64)v78 < a3 - 3 && *(_DWORD *)v28 == *(_DWORD *)v78 )
      {
        v78 = (_QWORD *)((char *)v78 + 4);
        v28 = (_QWORD *)((char *)v28 + 4);
      }
      if ( (unsigned __int64)v78 < a3 - 1 && *(_WORD *)v28 == *(_WORD *)v78 )
      {
        v78 = (_QWORD *)((char *)v78 + 2);
        v28 = (_QWORD *)((char *)v28 + 2);
      }
      if ( a3 > (unsigned __int64)v78 )
        v78 = (_QWORD *)((char *)v78 + (*(_BYTE *)v28 == *(_BYTE *)v78));
      v31 = (char *)v78 - (char *)a2;
LABEL_23:
      if ( v31 > v26 )
      {
        v26 = v31;
        *a4 = v106 + 3 - v25;
        if ( (_QWORD *)a3 == (_QWORD *)((char *)a2 + v31) )
          break;
      }
LABEL_15:
      if ( v13 >= v25 )
        break;
      --v15;
      v25 = *(_DWORD *)(v6 + 4LL * (v10 & v25));
      if ( v25 < v5 || !v15 )
        break;
      v24 = *(_DWORD *)((char *)a2 + v26 - 3);
    }
  }
  v32 = v96[1];
  v33 = v96[14];
  v101 = *v96;
  v107 = (unsigned int)*v96 - (_DWORD)v32;
  v34 = 3;
  if ( v15 <= 3 )
    v34 = v15;
  v35 = v34;
  v36 = (unsigned int *)&v33[v105];
  do
  {
    v37 = *v36++;
    _mm_prefetch(&v32[v37], 1);
  }
  while ( &v33[v105 + 12] != (char *)v36 );
  _mm_prefetch(&v96[16][4 * (*(_DWORD *)&v33[v105 + 12] >> 8)], 1);
  if ( !v15 )
    return v26;
  v38 = *(unsigned int *)&v33[v105];
  v39 = &v32[v38];
  if ( !(_DWORD)v38 )
    return v26;
  v40 = a2;
  v41 = 0;
  v113 = v15;
  v42 = 4 * v109 + 4;
  v43 = a3;
  v44 = v35;
  v103 = (unsigned __int64)a2 + 4;
  while ( 1 )
  {
    if ( *(_DWORD *)v40 != *(_DWORD *)v39 )
    {
LABEL_32:
      if ( v44 <= ++v41 )
        break;
      goto LABEL_33;
    }
    v46 = v39 + 4;
    v47 = v103 + v101 - (v39 + 4);
    if ( v43 < v47 )
      v47 = v43;
    v48 = v47 - 7;
    if ( v103 >= v47 - 7 )
    {
      v79 = (_QWORD *)v103;
      v80 = v39 + 4;
    }
    else
    {
      v49 = *(_QWORD *)(v39 + 4);
      v50 = *(_QWORD *)((char *)v40 + 4);
      if ( v49 != v50 )
      {
        _RSI = v50 ^ v49;
        __asm { tzcnt   rsi, rsi }
        v53 = (char *)((unsigned int)_RSI >> 3);
        goto LABEL_40;
      }
      v79 = (_QWORD *)((char *)v40 + 12);
      v80 = v39 + 12;
      if ( v48 > (unsigned __int64)v40 + 12 )
      {
        v111 = *(_QWORD *)(v39 + 12);
        v86 = *(_QWORD *)((char *)v40 + 12);
        if ( v86 != v111 )
        {
          _RAX = v111 ^ v86;
LABEL_89:
          __asm { tzcnt   r8, rax }
          v53 = (char *)v79 + ((unsigned int)_R8 >> 3) - v103;
LABEL_40:
          if ( v101 != &v46[(_QWORD)v53] )
            goto LABEL_41;
LABEL_82:
          v116 = v44;
          v110 = v53;
          v81 = sub_92B7A0(&v53[v103], v112, v43);
          v44 = v116;
          v53 = &v110[v81];
          goto LABEL_41;
        }
        while ( 1 )
        {
          ++v79;
          ++v80;
          if ( v48 <= (unsigned __int64)v79 )
            break;
          if ( *v80 != *v79 )
          {
            _RAX = *v79 ^ *v80;
            goto LABEL_89;
          }
        }
      }
    }
    if ( (unsigned __int64)v79 < v47 - 3 && *(_DWORD *)v80 == *(_DWORD *)v79 )
    {
      v79 = (_QWORD *)((char *)v79 + 4);
      v80 = (_QWORD *)((char *)v80 + 4);
    }
    if ( (unsigned __int64)v79 < v47 - 1 && *(_WORD *)v80 == *(_WORD *)v79 )
    {
      v79 = (_QWORD *)((char *)v79 + 2);
      v80 = (_QWORD *)((char *)v80 + 2);
    }
    if ( v47 > (unsigned __int64)v79 )
      v79 = (_QWORD *)((char *)v79 + (*(_BYTE *)v80 == *(_BYTE *)v79));
    v53 = (char *)v79 - v103;
    if ( v101 == &v46[(_QWORD)v79 - v103] )
      goto LABEL_82;
LABEL_41:
    if ( (unsigned __int64)(v53 + 4) <= v26 )
      goto LABEL_32;
    v26 = (unsigned __int64)(v53 + 4);
    *a4 = v107 + v106 - v115 + 3 - (unsigned int)v38;
    if ( (char *)v43 == &v53[(_QWORD)v40 + 4] )
      return v26;
    ++v41;
    v33 = v96[14];
    if ( v44 <= v41 )
      break;
LABEL_33:
    v45 = *(unsigned int *)&v33[v42];
    v42 += 4;
    LODWORD(v38) = v45;
    v39 = &v32[v45];
    if ( !(_DWORD)v38 )
      return v26;
  }
  v54 = v43;
  v55 = v113 - v41;
  v56 = *(_DWORD *)&v33[v105 + 12];
  v57 = (unsigned __int8)v56;
  v58 = v56 >> 8;
  if ( v57 <= v113 - v41 )
    v55 = v57;
  if ( v55 )
  {
    v59 = v58;
    v60 = v96[16];
    v61 = (unsigned int *)&v60[4 * v58];
    do
    {
      v62 = *v61++;
      _mm_prefetch(&v32[v62], 1);
    }
    while ( &v60[4 * v58 + 4 + 4 * (unsigned __int64)(v55 - 1)] != (char *)v61 );
    v63 = v58 + v55;
    v64 = (unsigned __int64)v40 + 4;
    v65 = v54;
    v66 = v96;
    while ( 2 )
    {
      v67 = *(unsigned int *)&v60[4 * v59];
      v68 = &v32[v67];
      if ( *(_DWORD *)v40 != *(_DWORD *)&v32[v67] )
        goto LABEL_50;
      v69 = v68 + 4;
      v70 = v64 + v101 - (v68 + 4);
      if ( v65 < v70 )
        v70 = v65;
      v71 = v70 - 7;
      if ( v64 >= v70 - 7 )
      {
        v89 = v68 + 4;
        v90 = (_QWORD *)v64;
      }
      else
      {
        v72 = *(_QWORD *)(v68 + 4);
        v73 = *(_QWORD *)((char *)v40 + 4);
        if ( v72 != v73 )
        {
          _RSI = v73 ^ v72;
          __asm { tzcnt   rsi, rsi }
          v76 = (char *)((unsigned int)_RSI >> 3);
          goto LABEL_58;
        }
        v90 = (_QWORD *)((char *)v40 + 12);
        v89 = v68 + 12;
        if ( v71 > (unsigned __int64)v40 + 12 )
        {
          v98 = *(_QWORD *)(v68 + 12);
          v92 = *(_QWORD *)((char *)v40 + 12);
          if ( v92 != v98 )
          {
            _RAX = v98 ^ v92;
LABEL_104:
            __asm { tzcnt   r9, rax }
            v76 = (char *)v90 + ((unsigned int)_R9 >> 3) - v64;
LABEL_58:
            if ( v101 != &v69[(_QWORD)v76] )
            {
LABEL_59:
              if ( (unsigned __int64)(v76 + 4) > v26 )
              {
                v26 = (unsigned __int64)(v76 + 4);
                *a4 = v107 + v106 - v115 + 3 - (unsigned int)v67;
                if ( (char *)v65 == &v76[(_QWORD)v40 + 4] )
                  return v26;
              }
LABEL_50:
              if ( ++v58 == v63 )
                return v26;
              v60 = v66[16];
              v59 = v58;
              continue;
            }
LABEL_100:
            v97 = v64;
            v104 = v76;
            v91 = sub_92B7A0(&v76[v64], v112, v65);
            v64 = v97;
            v76 = &v104[v91];
            goto LABEL_59;
          }
          while ( 1 )
          {
            ++v90;
            ++v89;
            if ( v71 <= (unsigned __int64)v90 )
              break;
            if ( *v89 != *v90 )
            {
              _RAX = *v90 ^ *v89;
              goto LABEL_104;
            }
          }
        }
      }
      break;
    }
    if ( (unsigned __int64)v90 < v70 - 3 && *(_DWORD *)v89 == *(_DWORD *)v90 )
    {
      v90 = (_QWORD *)((char *)v90 + 4);
      v89 = (_QWORD *)((char *)v89 + 4);
    }
    if ( (unsigned __int64)v90 < v70 - 1 && *(_WORD *)v89 == *(_WORD *)v90 )
    {
      v90 = (_QWORD *)((char *)v90 + 2);
      v89 = (_QWORD *)((char *)v89 + 2);
    }
    if ( v70 > (unsigned __int64)v90 )
      v90 = (_QWORD *)((char *)v90 + (*(_BYTE *)v89 == *(_BYTE *)v90));
    v76 = (char *)v90 - v64;
    if ( v101 != &v69[(_QWORD)v90 - v64] )
      goto LABEL_59;
    goto LABEL_100;
  }
  return v26;
}
