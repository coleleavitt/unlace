__int64 __fastcall sub_351A40(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  char *v11; // rdx
  int v12; // esi
  unsigned int v13; // ecx
  __int64 v14; // r8
  char *v15; // rcx
  __int64 v16; // r8
  char *v17; // rdi
  char *i; // r14
  __int64 v19; // rax
  void *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // rax
  void *v26; // rbx
  int v27; // eax
  int v28; // eax
  void (__fastcall ***v29)(void *); // rbx
  void *v30; // rdi
  int v31; // r11d
  _QWORD *v32; // rdi
  int v33; // ecx
  __int64 v34; // rsi
  _QWORD *v35; // rax
  _QWORD *v36; // rdx
  unsigned int v37; // r12d
  size_t v38; // rbx
  _OWORD *v39; // rdx
  _OWORD *v40; // rcx
  _OWORD *v41; // rax
  __int64 v42; // rdi
  _QWORD *v43; // r12
  int v44; // ecx
  unsigned int v45; // esi
  _QWORD *v46; // rdx
  _QWORD *v47; // rax
  char *v48; // rbx
  char *v49; // r14
  void *v50; // r15
  __int64 v51; // rax
  unsigned int v52; // ebx
  __int64 v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 result; // rax
  _QWORD *v57; // rbx
  _QWORD *v58; // r12
  void *v59; // r13
  __int64 v60; // rsi
  void *v61; // rdi
  __int64 v62; // rdx
  int v63; // ecx
  unsigned int v64; // r12d
  size_t v65; // rbx
  _OWORD *v66; // rdx
  _OWORD *v67; // rcx
  __int64 v68; // rax
  void *v69; // r15
  void *v70; // rdi
  int v71; // eax
  int v72; // eax
  void *v73; // r14
  int v74; // eax
  void *v75; // rbx
  int v76; // edx
  _DWORD *v77; // rax
  __int64 v78; // rax
  char v79; // al
  int v80; // eax
  size_t v81; // rsi
  size_t v82; // rsi
  unsigned int v83; // esi
  __int64 v84; // [rsp+10h] [rbp-A8h]
  void *v85; // [rsp+10h] [rbp-A8h]
  __int64 v86; // [rsp+18h] [rbp-A0h]
  __int64 v87; // [rsp+20h] [rbp-98h]
  __int64 v88; // [rsp+28h] [rbp-90h]
  void *v89; // [rsp+28h] [rbp-90h]
  int v90[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v91; // [rsp+38h] [rbp-80h]
  _QWORD v92[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v93; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v94[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v95[10]; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD **)(a1 + 272);
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
          v5 = *(_QWORD *)(a1 + 264);
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
    v2 = *(_QWORD **)(a1 + 272);
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v7 = **(_QWORD **)(a1 + 32);
  if ( !v7 )
    goto LABEL_32;
  v87 = v7 + 56LL * *(unsigned int *)(v7 - 4);
  if ( v7 == v87 )
    goto LABEL_32;
  do
  {
    v84 = v7 + 16;
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)v7;
    *(_QWORD *)v90 = 0;
    v86 = v8;
    v91 = 0;
    v92[0] = 1;
    v92[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v92);
    v10 = *(unsigned int *)(a1 + 224);
    BYTE4(v92[0]) &= ~1u;
    v94[0] = 0;
    v11 = *(char **)(a1 + 216);
    v95[0] = 1;
    v12 = *(_DWORD *)(v9 + 12);
    v13 = v10 - 1;
    v10 *= 40;
    v93 = v9;
    LODWORD(v92[0]) = 1;
    v94[1] = 0;
    v14 = 5LL * (v12 & v13);
    v15 = &v11[v10];
    v95[1] = 0;
    v16 = 8 * v14;
    v17 = &v11[v16];
    if ( v16 != v10 )
    {
      for ( i = &v11[v16]; v15 != i; i += 40 )
      {
        v19 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v19 + 12) == v12 && v9 == v19 )
            goto LABEL_111;
        }
        else if ( !v19 )
        {
          goto LABEL_19;
        }
      }
    }
    if ( v11 == v17 )
    {
LABEL_19:
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v94);
      sub_182CBA0(v20, v95);
      if ( !*(_WORD *)(v9 + 4) )
      {
        v76 = *(_DWORD *)(v9 + 24);
        v77 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
        if ( v76 )
        {
          if ( !v77 )
            goto LABEL_20;
          if ( *v77 )
            goto LABEL_20;
          if ( v77[1] != 8 )
            goto LABEL_20;
          if ( v76 != 1 )
            goto LABEL_20;
          v78 = *(_QWORD *)(v9 + 32);
          if ( *(_WORD *)(v78 + 4) || *(_DWORD *)(v78 + 24) )
            goto LABEL_20;
          v77 = *(_DWORD **)(*(_QWORD *)(v78 + 16) + 24LL);
        }
        if ( !v77 || *v77 == -1 )
        {
          ++*(_DWORD *)(v9 + 8);
          v23 = 0;
LABEL_25:
          sub_34FB60(a1, v9, v84);
          v85 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v90);
          sub_182CBA0(v85, v92);
          if ( v23 )
          {
            v6 = (*(_DWORD *)(v23 + 8))-- == 1;
            if ( v6 )
              sub_15D7BC0(v86, v23);
          }
          if ( v9 )
          {
            v6 = (*(_DWORD *)(v9 + 8))-- == 1;
            if ( v6 )
              sub_15D7BC0(v86, v9);
          }
          goto LABEL_31;
        }
      }
LABEL_20:
      v21 = sub_300BE0(a1, "soft");
      v88 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v22 = sub_15E1B70(*(_QWORD *)(a1 + 8));
      v23 = v22;
      if ( v22 )
      {
        v24 = *(_DWORD *)(v22 + 8);
        v93 = v23;
        *(_DWORD *)(v23 + 8) = v24 + 2;
      }
      else
      {
        v93 = 0;
      }
      sub_349180((_QWORD *)(a1 + 208), &v93);
      v25 = sub_2FF8B0(a1);
      sub_E5EBF0(v25, v23);
      v9 = v88;
      goto LABEL_25;
    }
    while ( 1 )
    {
      v68 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 > 1u )
        break;
      if ( !v68 )
        goto LABEL_19;
LABEL_106:
      v11 += 40;
      if ( v17 == v11 )
        goto LABEL_19;
    }
    if ( *(_DWORD *)(v68 + 12) != v12 || v9 != v68 )
      goto LABEL_106;
    i = v11;
LABEL_111:
    v69 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v94);
    sub_182CBA0(v69, v95);
    v70 = qword_1C7F2C0;
    if ( (i[12] & 1) != 0 )
    {
      v89 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v90, i + 8);
      v70 = v89;
    }
    else
    {
      v71 = *((_DWORD *)i + 2);
      LOBYTE(v90[1]) &= ~1u;
      v90[0] = v71;
    }
    if ( (i[28] & 1) != 0 )
    {
      sub_182C690(v70, v92, i + 24);
      v74 = *(_DWORD *)(v7 + 16);
      v73 = qword_1C7F2C0;
      if ( !v74 )
        goto LABEL_132;
LABEL_115:
      if ( v90[0] )
      {
        if ( (v92[0] & 0x100000000LL) != 0
          || LODWORD(v92[0]) != 1
          || (*(_BYTE *)(v7 + 36) & 1) != 0
          || *(_DWORD *)(v7 + 32) != 1 )
        {
          sub_1851D20(v73, v90, v84, v90);
        }
        else
        {
          sub_1831A80(v73, v90, v84, v90);
          sub_182CBA0(v73, v92);
          BYTE4(v92[0]) &= ~1u;
          LODWORD(v92[0]) = 1;
        }
        goto LABEL_119;
      }
      if ( (*(_BYTE *)(v7 + 20) & 1) != 0 )
      {
        sub_182C690(v73, v90, v84);
        if ( (*(_BYTE *)(v7 + 36) & 1) == 0 )
          goto LABEL_138;
      }
      else
      {
        LOBYTE(v90[1]) &= ~1u;
        v90[0] = v74;
        if ( (*(_BYTE *)(v7 + 36) & 1) == 0 )
        {
LABEL_138:
          v80 = *(_DWORD *)(v7 + 32);
          BYTE4(v92[0]) &= ~1u;
          LODWORD(v92[0]) = v80;
          goto LABEL_119;
        }
      }
      sub_182C690(v73, v92, v7 + 32);
      goto LABEL_119;
    }
    v72 = *((_DWORD *)i + 6);
    BYTE4(v92[0]) &= ~1u;
    v73 = qword_1C7F2C0;
    LODWORD(v92[0]) = v72;
    v74 = *(_DWORD *)(v7 + 16);
    if ( v74 )
      goto LABEL_115;
LABEL_132:
    if ( (v90[1] & 1) != 0 )
    {
      sub_182C690(v73, v90, v90);
      v79 = BYTE4(v92[0]);
      if ( (v92[0] & 0x100000000LL) != 0 )
        goto LABEL_148;
LABEL_134:
      BYTE4(v92[0]) = v79 & 0xFE;
    }
    else
    {
      LOBYTE(v90[1]) &= ~1u;
      v79 = BYTE4(v92[0]);
      if ( (v92[0] & 0x100000000LL) == 0 )
        goto LABEL_134;
LABEL_148:
      sub_182C690(v73, v92, v92);
    }
LABEL_119:
    sub_34F3C0((char **)(a1 + 216), v9, (__int64)v90);
    v75 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v90);
    sub_182CBA0(v75, v92);
LABEL_31:
    v7 += 56;
  }
  while ( v87 != v7 );
LABEL_32:
  v26 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, a1 + 288, a1 + 104);
  }
  else
  {
    v27 = *(_DWORD *)(a1 + 104);
    *(_BYTE *)(a1 + 292) &= ~1u;
    *(_DWORD *)(a1 + 288) = v27;
  }
  if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
  {
    sub_182C690(v26, a1 + 304, a1 + 120);
  }
  else
  {
    v28 = *(_DWORD *)(a1 + 120);
    *(_BYTE *)(a1 + 308) &= ~1u;
    *(_DWORD *)(a1 + 304) = v28;
  }
  *(_BYTE *)(a1 + 532) = 0;
  sub_34CEE0(a1);
  v29 = *(void (__fastcall ****)(void *))(a1 + 320);
  if ( v29 )
  {
    v6 = (*((_DWORD *)v29 + 4))-- == 1;
    if ( v6 )
    {
      (**v29)(v29);
      sub_186B220(v29);
    }
  }
  *(_BYTE *)(a1 + 644) &= ~1u;
  v30 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 528) = 0;
  *(_DWORD *)(a1 + 640) = 0;
  sub_182CBA0(v30, a1 + 656);
  v31 = *(_DWORD *)(a1 + 604);
  *(_BYTE *)(a1 + 660) &= ~1u;
  *(_DWORD *)(a1 + 656) = 1;
  if ( v31 || *(_DWORD *)(a1 + 608) )
  {
    v32 = *(_QWORD **)(a1 + 592);
    v33 = 0;
    v34 = *(unsigned int *)(a1 + 600);
    v35 = v32;
    v36 = &v32[2 * v34];
    if ( v32 != v36 )
    {
      do
      {
        while ( *v35 )
        {
          *v35 = 0;
          v35 += 2;
          if ( v36 == v35 )
            goto LABEL_46;
        }
        v35 += 2;
        ++v33;
      }
      while ( v36 != v35 );
LABEL_46:
      if ( (unsigned int)v34 > 0x10 && 3 * (int)v34 < (unsigned int)(4 * v33) )
      {
        if ( v32 )
        {
          sub_186B220(v32);
          v37 = *(_DWORD *)(a1 + 600);
          *(_QWORD *)(a1 + 592) = 0;
          v37 >>= 1;
          *(_DWORD *)(a1 + 600) = v37;
          v38 = v37;
          v39 = (_OWORD *)sub_186B270(v38 * 16);
          if ( v37 )
            goto LABEL_50;
        }
        else
        {
          *(_QWORD *)(a1 + 592) = 0;
          v81 = (unsigned int)v34 >> 1;
          *(_DWORD *)(a1 + 600) = v81;
          v38 = v81;
          v39 = (_OWORD *)sub_186B270(16 * v81);
LABEL_50:
          v40 = &v39[v38];
          v41 = v39;
          if ( ((v38 * 16) & 0x10) == 0 || (v41 = v39 + 1, *v39 = 0, v40 != v39 + 1) )
          {
            do
            {
              *v41 = 0;
              v41 += 2;
              *(v41 - 1) = 0;
            }
            while ( v40 != v41 );
          }
        }
        *(_QWORD *)(a1 + 592) = v39;
      }
    }
    *(_QWORD *)(a1 + 604) = 0;
  }
  if ( *(_DWORD *)(a1 + 628) || *(_DWORD *)(a1 + 632) )
  {
    v42 = *(unsigned int *)(a1 + 624);
    v43 = *(_QWORD **)(a1 + 616);
    v44 = 0;
    v45 = *(_DWORD *)(a1 + 624);
    v46 = &v43[7 * v42];
    v47 = v43;
    if ( v43 != v46 )
    {
      do
      {
        while ( *v47 )
        {
          *v47 = 0;
          v47 += 7;
          if ( v46 == v47 )
            goto LABEL_62;
        }
        v47 += 7;
        ++v44;
      }
      while ( v46 != v47 );
LABEL_62:
      if ( v45 > 0x10 && 3 * v45 < 4 * v44 )
      {
        if ( !v43 )
        {
          *(_QWORD *)(a1 + 616) = 0;
          v83 = v45 >> 1;
          v53 = v83;
          *(_DWORD *)(a1 + 624) = v83;
          v54 = sub_186B270(56LL * v83);
          goto LABEL_69;
        }
        v48 = (char *)v43;
        v49 = (char *)&v43[7 * v42];
        do
        {
          while ( 1 )
          {
            v50 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v48 + 24);
            sub_182CBA0(v50, v48 + 40);
            v51 = *((_QWORD *)v48 + 1);
            if ( !v51 )
              break;
            v48 += 56;
            sub_186B220((void *)(v51 - 8));
            if ( v48 == v49 )
              goto LABEL_68;
          }
          v48 += 56;
        }
        while ( v48 != v49 );
LABEL_68:
        sub_186B220(v43);
        v52 = *(_DWORD *)(a1 + 624);
        *(_QWORD *)(a1 + 616) = 0;
        v52 >>= 1;
        v53 = v52;
        *(_DWORD *)(a1 + 624) = v52;
        v54 = sub_186B270(56LL * v52);
        if ( v52 )
        {
LABEL_69:
          v55 = v54;
          do
          {
            *(_OWORD *)(v55 + 40) = 0;
            v55 += 56;
            *(_OWORD *)(v55 - 32) = 0;
            *(_QWORD *)(v55 - 56) = 0;
            *(_OWORD *)(v55 - 48) = 0;
            *(_BYTE *)(v55 - 28) = 0;
            *(_DWORD *)(v55 - 16) = 1;
            *(_BYTE *)(v55 - 12) = 0;
          }
          while ( v55 != v54 + 56 * v53 );
        }
        *(_QWORD *)(a1 + 616) = v54;
      }
    }
    *(_QWORD *)(a1 + 628) = 0;
  }
  result = *(_QWORD *)(a1 + 672);
  v57 = (_QWORD *)result;
  v58 = (_QWORD *)(result + 16LL * *(unsigned int *)(a1 + 680));
  if ( (_QWORD *)result == v58 )
  {
    if ( *(_DWORD *)(a1 + 684) )
      goto LABEL_100;
  }
  else
  {
    while ( *v57 <= 1u )
    {
      v57 += 2;
      if ( v58 == v57 )
        goto LABEL_154;
    }
    if ( v57 == v58 )
    {
LABEL_154:
      if ( !*(_DWORD *)(a1 + 684) )
        goto LABEL_86;
      v61 = *(void **)(a1 + 672);
      v60 = *(unsigned int *)(a1 + 680);
      v62 = result + 16 * v60;
      goto LABEL_88;
    }
    do
    {
      v59 = (void *)v57[1];
      if ( v59 )
      {
        sub_359F60(v57[1]);
        sub_186B220(v59);
      }
      result = (__int64)(v57 + 2);
      if ( v58 == v57 + 2 )
        break;
      while ( 1 )
      {
        v57 = (_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 16;
        if ( v58 == (_QWORD *)result )
          goto LABEL_85;
      }
    }
    while ( (_QWORD *)result != v58 );
LABEL_85:
    if ( *(_DWORD *)(a1 + 684) )
      goto LABEL_87;
  }
LABEL_86:
  if ( *(_DWORD *)(a1 + 688) )
  {
LABEL_87:
    result = *(_QWORD *)(a1 + 672);
    v60 = *(unsigned int *)(a1 + 680);
    v61 = (void *)result;
    v62 = result + 16 * v60;
    if ( result == v62 )
      goto LABEL_100;
LABEL_88:
    v63 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v62 == result )
          goto LABEL_92;
      }
      result += 16;
      ++v63;
    }
    while ( v62 != result );
LABEL_92:
    if ( (unsigned int)v60 > 0x10 )
    {
      result = (unsigned int)(3 * v60);
      if ( (unsigned int)result < 4 * v63 )
      {
        if ( v61 )
        {
          sub_186B220(v61);
          v64 = *(_DWORD *)(a1 + 680);
          *(_QWORD *)(a1 + 672) = 0;
          v64 >>= 1;
          *(_DWORD *)(a1 + 680) = v64;
          v65 = v64;
          result = sub_186B270(v65 * 16);
          v66 = (_OWORD *)result;
          if ( v64 )
            goto LABEL_96;
        }
        else
        {
          *(_QWORD *)(a1 + 672) = 0;
          v82 = (unsigned int)v60 >> 1;
          *(_DWORD *)(a1 + 680) = v82;
          v65 = v82;
          v66 = (_OWORD *)sub_186B270(16 * v82);
LABEL_96:
          v67 = &v66[v65];
          result = (__int64)v66;
          if ( ((v65 * 16) & 0x10) == 0 || (result = (__int64)(v66 + 1), *v66 = 0, v67 != v66 + 1) )
          {
            do
            {
              *(_OWORD *)result = 0;
              result += 32;
              *(_OWORD *)(result - 16) = 0;
            }
            while ( v67 != (_OWORD *)result );
          }
        }
        *(_QWORD *)(a1 + 672) = v66;
      }
    }
LABEL_100:
    *(_QWORD *)(a1 + 684) = 0;
  }
  return result;
}

