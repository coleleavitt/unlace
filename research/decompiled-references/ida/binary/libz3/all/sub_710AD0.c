__int64 __fastcall sub_710AD0(__int64 *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 *i; // rax
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 *j; // rax
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 *k; // rax
  __int64 v21; // rdi
  __int64 *v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 *m; // rax
  __int64 v26; // rdi
  char *v27; // rdi
  int v28; // ecx
  __int64 v29; // rsi
  char *v30; // rax
  char *v31; // rdx
  unsigned int v32; // r12d
  size_t v33; // rbx
  _OWORD *v34; // rdx
  _OWORD *v35; // rcx
  _OWORD *v36; // rax
  char *v37; // rdi
  int v38; // ecx
  __int64 v39; // rsi
  char *v40; // rax
  char *v41; // rdx
  unsigned int v42; // r12d
  size_t v43; // rbx
  _OWORD *v44; // rdx
  _OWORD *v45; // rcx
  _OWORD *v46; // rax
  char *v47; // rdi
  int v48; // ecx
  __int64 v49; // rsi
  char *v50; // rax
  char *v51; // rdx
  unsigned int v52; // r12d
  size_t v53; // rbx
  _OWORD *v54; // rdx
  _OWORD *v55; // rcx
  _OWORD *v56; // rax
  char *v57; // rdi
  int v58; // ecx
  __int64 v59; // rsi
  char *v60; // rax
  char *v61; // rdx
  unsigned int v62; // r12d
  size_t v63; // rbx
  _OWORD *v64; // rdx
  _OWORD *v65; // rcx
  _OWORD *v66; // rax
  _QWORD *v67; // rdi
  int v68; // ecx
  __int64 v69; // rsi
  _QWORD *v70; // rax
  _QWORD *v71; // rdx
  unsigned int v72; // ebx
  __int64 v73; // r12
  __int64 v74; // rsi
  _QWORD *v75; // rax
  _QWORD *v76; // rbx
  _QWORD *v77; // r12
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 result; // rax
  _QWORD *v81; // r13
  _QWORD *v82; // r12
  __int64 *v83; // rbx
  __int64 *v84; // r14
  __int64 v85; // rsi
  __int64 v86; // rdi
  size_t v87; // rsi
  size_t v88; // rsi
  size_t v89; // rsi
  size_t v90; // rsi

  v2 = (_QWORD *)a1[18];
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[17];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (_QWORD *)a1[18];
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v7 = (__int64 *)a1[5];
  v8 = &v7[2 * *((unsigned int *)a1 + 12)];
  if ( v7 != v8 )
  {
    while ( (unsigned __int64)*v7 <= 1 )
    {
      v7 += 2;
      if ( v8 == v7 )
        goto LABEL_23;
    }
    if ( v8 != v7 )
    {
      v9 = *v7;
      if ( *v7 )
        goto LABEL_21;
LABEL_16:
      for ( i = v7 + 2; v8 != v7 + 2; i = v7 + 2 )
      {
        while ( 1 )
        {
          v9 = *i;
          v7 = i;
          if ( (unsigned __int64)*i > 1 )
            break;
          i += 2;
          if ( v8 == i )
            goto LABEL_23;
        }
        if ( v8 == i )
          break;
LABEL_21:
        v11 = *a1;
        v6 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( !v6 )
          goto LABEL_16;
        sub_15D7BC0(v11, v9);
      }
    }
  }
LABEL_23:
  v12 = (__int64 *)a1[8];
  v13 = &v12[2 * *((unsigned int *)a1 + 18)];
  if ( v12 != v13 )
  {
    while ( (unsigned __int64)*v12 <= 1 )
    {
      v12 += 2;
      if ( v13 == v12 )
        goto LABEL_36;
    }
    if ( v13 != v12 )
    {
      v14 = *v12;
      if ( *v12 )
        goto LABEL_34;
LABEL_29:
      for ( j = v12 + 2; v13 != v12 + 2; j = v12 + 2 )
      {
        while ( 1 )
        {
          v14 = *j;
          v12 = j;
          if ( (unsigned __int64)*j > 1 )
            break;
          j += 2;
          if ( v13 == j )
            goto LABEL_36;
        }
        if ( v13 == j )
          break;
LABEL_34:
        v16 = *a1;
        v6 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( !v6 )
          goto LABEL_29;
        sub_15D7BC0(v16, v14);
      }
    }
  }
LABEL_36:
  v17 = (__int64 *)a1[11];
  v18 = &v17[2 * *((unsigned int *)a1 + 24)];
  if ( v17 != v18 )
  {
    while ( (unsigned __int64)*v17 <= 1 )
    {
      v17 += 2;
      if ( v18 == v17 )
        goto LABEL_49;
    }
    if ( v18 != v17 )
    {
      v19 = *v17;
      if ( *v17 )
        goto LABEL_47;
LABEL_42:
      for ( k = v17 + 2; v18 != v17 + 2; k = v17 + 2 )
      {
        while ( 1 )
        {
          v19 = *k;
          v17 = k;
          if ( (unsigned __int64)*k > 1 )
            break;
          k += 2;
          if ( v18 == k )
            goto LABEL_49;
        }
        if ( v18 == k )
          break;
LABEL_47:
        v21 = *a1;
        v6 = (*(_DWORD *)(v19 + 8))-- == 1;
        if ( !v6 )
          goto LABEL_42;
        sub_15D7BC0(v21, v19);
      }
    }
  }
LABEL_49:
  v22 = (__int64 *)a1[14];
  v23 = &v22[2 * *((unsigned int *)a1 + 30)];
  if ( v22 != v23 )
  {
    while ( (unsigned __int64)*v22 <= 1 )
    {
      v22 += 2;
      if ( v23 == v22 )
        goto LABEL_62;
    }
    if ( v23 != v22 )
    {
      v24 = *v22;
      if ( *v22 )
        goto LABEL_60;
LABEL_55:
      for ( m = v22 + 2; v23 != v22 + 2; m = v22 + 2 )
      {
        while ( 1 )
        {
          v24 = *m;
          v22 = m;
          if ( (unsigned __int64)*m > 1 )
            break;
          m += 2;
          if ( v23 == m )
            goto LABEL_62;
        }
        if ( v23 == m )
          break;
LABEL_60:
        v26 = *a1;
        v6 = (*(_DWORD *)(v24 + 8))-- == 1;
        if ( !v6 )
          goto LABEL_55;
        sub_15D7BC0(v26, v24);
      }
    }
  }
LABEL_62:
  if ( *((_DWORD *)a1 + 19) || *((_DWORD *)a1 + 20) )
  {
    v27 = (char *)a1[8];
    v28 = 0;
    v29 = *((unsigned int *)a1 + 18);
    v30 = v27;
    v31 = &v27[16 * v29];
    if ( v27 == v31 )
      goto LABEL_77;
    do
    {
      while ( *(_QWORD *)v30 )
      {
        *(_QWORD *)v30 = 0;
        v30 += 16;
        if ( v31 == v30 )
          goto LABEL_69;
      }
      v30 += 16;
      ++v28;
    }
    while ( v31 != v30 );
LABEL_69:
    if ( (unsigned int)v29 <= 0x10 || 3 * (int)v29 >= (unsigned int)(4 * v28) )
      goto LABEL_77;
    if ( v27 )
    {
      sub_186B220(v27);
      v32 = *((_DWORD *)a1 + 18);
      a1[8] = 0;
      v32 >>= 1;
      *((_DWORD *)a1 + 18) = v32;
      v33 = v32;
      v34 = (_OWORD *)sub_186B270(v33 * 16);
      if ( !v32 )
      {
LABEL_76:
        a1[8] = (__int64)v34;
LABEL_77:
        *(__int64 *)((char *)a1 + 76) = 0;
        goto LABEL_78;
      }
    }
    else
    {
      v89 = (unsigned int)v29 >> 1;
      a1[8] = 0;
      *((_DWORD *)a1 + 18) = v89;
      v33 = v89;
      v34 = (_OWORD *)sub_186B270(16 * v89);
    }
    v35 = &v34[v33];
    v36 = v34;
    if ( ((v33 * 16) & 0x10) == 0 || (v36 = v34 + 1, *v34 = 0, v34 + 1 != v35) )
    {
      do
      {
        *v36 = 0;
        v36 += 2;
        *(v36 - 1) = 0;
      }
      while ( v36 != v35 );
    }
    goto LABEL_76;
  }
LABEL_78:
  if ( *((_DWORD *)a1 + 13) || *((_DWORD *)a1 + 14) )
  {
    v37 = (char *)a1[5];
    v38 = 0;
    v39 = *((unsigned int *)a1 + 12);
    v40 = v37;
    v41 = &v37[16 * v39];
    if ( v37 == v41 )
      goto LABEL_93;
    do
    {
      while ( *(_QWORD *)v40 )
      {
        *(_QWORD *)v40 = 0;
        v40 += 16;
        if ( v41 == v40 )
          goto LABEL_85;
      }
      v40 += 16;
      ++v38;
    }
    while ( v41 != v40 );
LABEL_85:
    if ( (unsigned int)v39 <= 0x10 || 3 * (int)v39 >= (unsigned int)(4 * v38) )
      goto LABEL_93;
    if ( v37 )
    {
      sub_186B220(v37);
      v42 = *((_DWORD *)a1 + 12);
      a1[5] = 0;
      v42 >>= 1;
      *((_DWORD *)a1 + 12) = v42;
      v43 = v42;
      v44 = (_OWORD *)sub_186B270(v43 * 16);
      if ( !v42 )
      {
LABEL_92:
        a1[5] = (__int64)v44;
LABEL_93:
        *(__int64 *)((char *)a1 + 52) = 0;
        goto LABEL_94;
      }
    }
    else
    {
      v87 = (unsigned int)v39 >> 1;
      a1[5] = 0;
      *((_DWORD *)a1 + 12) = v87;
      v43 = v87;
      v44 = (_OWORD *)sub_186B270(16 * v87);
    }
    v45 = &v44[v43];
    v46 = v44;
    if ( ((v43 * 16) & 0x10) == 0 || (v46 = v44 + 1, *v44 = 0, v44 + 1 != v45) )
    {
      do
      {
        *v46 = 0;
        v46 += 2;
        *(v46 - 1) = 0;
      }
      while ( v46 != v45 );
    }
    goto LABEL_92;
  }
LABEL_94:
  if ( *((_DWORD *)a1 + 25) || *((_DWORD *)a1 + 26) )
  {
    v47 = (char *)a1[11];
    v48 = 0;
    v49 = *((unsigned int *)a1 + 24);
    v50 = v47;
    v51 = &v47[16 * v49];
    if ( v47 == v51 )
      goto LABEL_109;
    do
    {
      while ( *(_QWORD *)v50 )
      {
        *(_QWORD *)v50 = 0;
        v50 += 16;
        if ( v51 == v50 )
          goto LABEL_101;
      }
      v50 += 16;
      ++v48;
    }
    while ( v51 != v50 );
LABEL_101:
    if ( (unsigned int)v49 <= 0x10 || 3 * (int)v49 >= (unsigned int)(4 * v48) )
      goto LABEL_109;
    if ( v47 )
    {
      sub_186B220(v47);
      v52 = *((_DWORD *)a1 + 24);
      a1[11] = 0;
      v52 >>= 1;
      *((_DWORD *)a1 + 24) = v52;
      v53 = v52;
      v54 = (_OWORD *)sub_186B270(v53 * 16);
      if ( !v52 )
      {
LABEL_108:
        a1[11] = (__int64)v54;
LABEL_109:
        *(__int64 *)((char *)a1 + 100) = 0;
        goto LABEL_110;
      }
    }
    else
    {
      v90 = (unsigned int)v49 >> 1;
      a1[11] = 0;
      *((_DWORD *)a1 + 24) = v90;
      v53 = v90;
      v54 = (_OWORD *)sub_186B270(16 * v90);
    }
    v55 = &v54[v53];
    v56 = v54;
    if ( ((v53 * 16) & 0x10) == 0 || (v56 = v54 + 1, *v54 = 0, v55 != v54 + 1) )
    {
      do
      {
        *v56 = 0;
        v56 += 2;
        *(v56 - 1) = 0;
      }
      while ( v55 != v56 );
    }
    goto LABEL_108;
  }
LABEL_110:
  if ( *((_DWORD *)a1 + 31) || *((_DWORD *)a1 + 32) )
  {
    v57 = (char *)a1[14];
    v58 = 0;
    v59 = *((unsigned int *)a1 + 30);
    v60 = v57;
    v61 = &v57[16 * v59];
    if ( v57 == v61 )
      goto LABEL_125;
    do
    {
      while ( *(_QWORD *)v60 )
      {
        *(_QWORD *)v60 = 0;
        v60 += 16;
        if ( v61 == v60 )
          goto LABEL_117;
      }
      v60 += 16;
      ++v58;
    }
    while ( v61 != v60 );
LABEL_117:
    if ( (unsigned int)v59 <= 0x10 || 3 * (int)v59 >= (unsigned int)(4 * v58) )
      goto LABEL_125;
    if ( v57 )
    {
      sub_186B220(v57);
      v62 = *((_DWORD *)a1 + 30);
      a1[14] = 0;
      v62 >>= 1;
      *((_DWORD *)a1 + 30) = v62;
      v63 = v62;
      v64 = (_OWORD *)sub_186B270(v63 * 16);
      if ( !v62 )
      {
LABEL_124:
        a1[14] = (__int64)v64;
LABEL_125:
        *(__int64 *)((char *)a1 + 124) = 0;
        goto LABEL_126;
      }
    }
    else
    {
      v88 = (unsigned int)v59 >> 1;
      a1[14] = 0;
      *((_DWORD *)a1 + 30) = v88;
      v63 = v88;
      v64 = (_OWORD *)sub_186B270(16 * v88);
    }
    v65 = &v64[v63];
    v66 = v64;
    if ( ((v63 * 16) & 0x10) == 0 || (v66 = v64 + 1, *v64 = 0, v65 != v64 + 1) )
    {
      do
      {
        *v66 = 0;
        v66 += 2;
        *(v66 - 1) = 0;
      }
      while ( v65 != v66 );
    }
    goto LABEL_124;
  }
LABEL_126:
  if ( !*((_DWORD *)a1 + 45) && !*((_DWORD *)a1 + 46) )
    goto LABEL_141;
  v67 = (_QWORD *)a1[21];
  v68 = 0;
  v69 = *((unsigned int *)a1 + 44);
  v70 = v67;
  v71 = &v67[2 * v69];
  if ( v67 != v71 )
  {
    do
    {
      while ( *v70 )
      {
        *v70 = 0;
        v70 += 2;
        if ( v71 == v70 )
          goto LABEL_133;
      }
      v70 += 2;
      ++v68;
    }
    while ( v71 != v70 );
LABEL_133:
    if ( (unsigned int)v69 > 0x10 && 3 * (int)v69 < (unsigned int)(4 * v68) )
    {
      if ( v67 )
      {
        sub_186B220(v67);
        v72 = *((_DWORD *)a1 + 44);
        a1[21] = 0;
        v72 >>= 1;
        *((_DWORD *)a1 + 44) = v72;
        v73 = v72;
        v74 = sub_186B270(16LL * v72);
        if ( !v72 )
        {
LABEL_139:
          a1[21] = v74;
          goto LABEL_140;
        }
      }
      else
      {
        a1[21] = 0;
        *((_DWORD *)a1 + 44) = (unsigned int)v69 >> 1;
        v73 = (unsigned int)v69 >> 1;
        v74 = sub_186B270(16 * v73);
      }
      v75 = (_QWORD *)v74;
      do
      {
        *v75 = 0;
        v75 += 2;
        *(v75 - 1) = -1;
      }
      while ( (_QWORD *)(v74 + 16 * v73) != v75 );
      goto LABEL_139;
    }
  }
LABEL_140:
  *(__int64 *)((char *)a1 + 180) = 0;
LABEL_141:
  v76 = (_QWORD *)a1[3];
  if ( v76 )
  {
    v77 = &v76[*((unsigned int *)v76 - 1)];
    if ( v76 >= v77 )
      goto LABEL_149;
    do
    {
      while ( 1 )
      {
        v78 = *v76;
        if ( *v76 )
        {
          v79 = a1[2];
          v6 = (*(_DWORD *)(v78 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v76 >= v77 )
          goto LABEL_148;
      }
      sub_15D7BC0(v79, v78);
      ++v76;
    }
    while ( v76 < v77 );
LABEL_148:
    v76 = (_QWORD *)a1[3];
    if ( v76 )
LABEL_149:
      *((_DWORD *)v76 - 1) = 0;
  }
  result = a1[4];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v81 = (_QWORD *)a1[1];
  if ( v81 )
  {
    result = *((unsigned int *)v81 - 1);
    if ( (_DWORD)result )
    {
      result *= 16;
      v82 = (_QWORD *)((char *)v81 + result);
      do
      {
        v83 = (__int64 *)v81[1];
        if ( v83 )
        {
          result = *((unsigned int *)v83 - 1);
          v84 = &v83[result];
          if ( v83 >= v84 )
            goto LABEL_163;
          do
          {
            while ( 1 )
            {
              v85 = *v83;
              if ( *v83 )
              {
                v86 = *v81;
                v6 = (*(_DWORD *)(v85 + 8))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v83 >= v84 )
                goto LABEL_162;
            }
            result = sub_15D7BC0(v86, v85);
            ++v83;
          }
          while ( v83 < v84 );
LABEL_162:
          v83 = (__int64 *)v81[1];
          if ( v83 )
LABEL_163:
            result = sub_186B220(v83 - 1);
        }
        v81 += 2;
      }
      while ( v81 != v82 );
      v81 = (_QWORD *)a1[1];
    }
    *((_DWORD *)v81 - 1) = 0;
  }
  return result;
}

