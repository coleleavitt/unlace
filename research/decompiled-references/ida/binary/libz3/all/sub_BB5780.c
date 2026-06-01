void __fastcall sub_BB5780(__int64 a1, int a2)
{
  char **v2; // rbp
  __int64 v3; // rdx
  char **exception; // rbp
  __int64 v5; // rdx
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // esi
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 i; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r13d
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rdi
  _QWORD *v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // r13d
  unsigned int v38; // r14d
  size_t v39; // rsi
  unsigned int *v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // rdi
  int v47; // esi
  __int64 v48; // rcx
  unsigned int v49; // edx
  int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // r15d
  __int64 v53; // r8
  _OWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  const double *v57; // r14
  unsigned int v58; // r10d
  __int64 v59; // r9
  double *v60; // rcx
  __int64 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r14
  __int64 *v67; // r13
  __int64 v68; // rsi
  __int64 v69; // rdi
  bool v70; // zf
  _QWORD *v71; // rax
  unsigned __int64 v72; // r14
  __int64 *v73; // r13
  __int64 v74; // rsi
  __int64 v75; // rdi
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // [rsp+0h] [rbp-78h]
  __int64 v79[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  v10 = *(_QWORD **)(a1 + 40);
  v11 = *(_DWORD *)(v8 + 4LL * (unsigned int)(v9 - a2));
  if ( !v10 )
    goto LABEL_75;
  v12 = *(_DWORD *)(v8 + 4LL * (unsigned int)(v9 - a2));
  if ( v11 >= *((_DWORD *)v10 - 1) )
  {
LABEL_14:
    v26 = *((unsigned int *)v10 - 1);
    if ( v11 < (unsigned int)v26 )
    {
      v66 = (unsigned __int64)&v10[v26];
      v67 = &v10[v11];
      if ( (unsigned __int64)v67 < v66 )
      {
        do
        {
          while ( 1 )
          {
            v68 = *v67;
            if ( *v67 )
            {
              v69 = *(_QWORD *)(a1 + 32);
              v70 = (*(_DWORD *)(v68 + 8))-- == 1;
              if ( v70 )
                break;
            }
            if ( (unsigned __int64)++v67 >= v66 )
              goto LABEL_74;
          }
          sub_15D7BC0(v69, v68);
          ++v67;
        }
        while ( (unsigned __int64)v67 < v66 );
LABEL_74:
        v10 = *(_QWORD **)(a1 + 40);
        if ( !v10 )
          goto LABEL_75;
      }
    }
    v27 = *((_DWORD *)v10 - 1);
    if ( v27 < v11 )
    {
LABEL_20:
      while ( 1 )
      {
        v31 = *((_DWORD *)v10 - 2);
        if ( v31 >= v11 )
          break;
        v28 = (3 * v31 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v29 || v31 >= v28 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v79, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v79);
          sub_233E40((__int64)v79);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = (unsigned int *)sub_186B300(v10 - 1, v29);
        v10 = v30 + 2;
        *v30 = v28;
        *(_QWORD *)(a1 + 40) = v30 + 2;
      }
      *((_DWORD *)v10 - 1) = v11;
      v32 = 8LL * v27;
      v33 = 8LL * v11;
      v34 = &v10[(unsigned __int64)v32 / 8];
      if ( v32 != v33 )
        memset(v34, 0, v33 - v32);
    }
    else
    {
      *((_DWORD *)v10 - 1) = v11;
    }
    v35 = *(_QWORD **)(a1 + 56);
    if ( !v35 )
      goto LABEL_84;
    v36 = *((unsigned int *)v35 - 1);
    if ( v11 >= (unsigned int)v36 )
      goto LABEL_25;
    v72 = (unsigned __int64)&v35[v36];
    v73 = &v35[v11];
    if ( (unsigned __int64)v73 >= v72 )
      goto LABEL_88;
    do
    {
LABEL_80:
      while ( 1 )
      {
        v74 = *v73;
        if ( *v73 )
        {
          v75 = *(_QWORD *)(a1 + 48);
          v70 = (*(_DWORD *)(v74 + 8))-- == 1;
          if ( v70 )
            break;
        }
        if ( (unsigned __int64)++v73 >= v72 )
          goto LABEL_83;
      }
      sub_15D7BC0(v75, v74);
      ++v73;
    }
    while ( (unsigned __int64)v73 < v72 );
LABEL_83:
    v35 = *(_QWORD **)(a1 + 56);
    if ( v35 )
    {
LABEL_25:
      v37 = *((_DWORD *)v35 - 1);
      if ( v37 >= v11 )
        goto LABEL_88;
    }
    else
    {
LABEL_84:
      if ( !v11 )
        goto LABEL_33;
      v37 = 0;
      v76 = (_QWORD *)sub_186B270(0x18u);
      v35 = v76 + 1;
      *v76 = 2;
      *(_QWORD *)(a1 + 56) = v76 + 1;
    }
    while ( 1 )
    {
      v41 = *((_DWORD *)v35 - 2);
      if ( v41 >= v11 )
        break;
      v38 = (3 * v41 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v41 + 8 >= (unsigned int)v39 || v41 >= v38 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v79, "Overflow encountered when expanding vector", v3);
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v79);
        sub_233E40((__int64)v79);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v35 - 1, v39);
      v35 = v40 + 2;
      *v40 = v38;
      *(_QWORD *)(a1 + 56) = v40 + 2;
    }
    *((_DWORD *)v35 - 1) = v11;
    v42 = 8LL * v37;
    v43 = &v35[(unsigned __int64)v42 / 8];
    v44 = 8LL * v11;
    if ( v42 != v44 )
      memset(v43, 0, v44 - v42);
LABEL_33:
    v45 = *(_QWORD *)(a1 + 64);
    v46 = (_QWORD *)(a1 + 64);
    if ( !v45 )
      goto LABEL_89;
    goto LABEL_34;
  }
  while ( 2 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v10[v12];
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v12);
    v16 = *(_DWORD *)(v14 + 12);
    v17 = (*(_DWORD *)(v15 + 12) - v16) ^ (v16 << 8);
    v18 = ((v17 ^ ((v16 - v17) << 16)) + v17 - v16) ^ ((v16 - v17) << 10);
    v19 = *(unsigned int *)(a1 + 16);
    v20 = v19 - 1;
    v19 *= 24;
    v21 = v13 + v19;
    v22 = 24LL * (v18 & v20);
    v23 = v13 + v22;
    if ( v22 == v19 )
    {
LABEL_57:
      if ( v13 != v23 )
      {
        for ( i = *(_QWORD *)(a1 + 8); v23 != i; i += 24 )
        {
          v65 = *(_QWORD *)(i + 8);
          if ( v65 > 1 )
          {
            if ( *(_DWORD *)i == v18 && v14 == v65 && v15 == *(_QWORD *)(i + 16) )
              goto LABEL_37;
          }
          else if ( !v65 )
          {
            ++v12;
            goto LABEL_13;
          }
        }
      }
LABEL_12:
      ++v12;
      goto LABEL_13;
    }
    i = v13 + v22;
    while ( 1 )
    {
      v25 = *(_QWORD *)(i + 8);
      if ( v25 > 1 )
        break;
      if ( !v25 )
        goto LABEL_12;
LABEL_9:
      i += 24;
      if ( v21 == i )
        goto LABEL_57;
    }
    if ( *(_DWORD *)i != v18 || v14 != v25 || v15 != *(_QWORD *)(i + 16) )
      goto LABEL_9;
LABEL_37:
    v48 = i + 24;
    if ( v21 == i + 24 )
      v48 = *(_QWORD *)(a1 + 8);
    v49 = *(_DWORD *)(a1 + 20) - 1;
    if ( !*(_QWORD *)(v48 + 8) )
    {
      *(_QWORD *)(i + 8) = 0;
      ++v12;
      *(_DWORD *)(a1 + 20) = v49;
LABEL_13:
      if ( v12 >= *((_DWORD *)v10 - 1) )
        goto LABEL_14;
      continue;
    }
    break;
  }
  *(_QWORD *)(i + 8) = 1;
  v50 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 20) = v49;
  v51 = v50 + 1;
  if ( v49 < 0x40 )
    v49 = 64;
  *(_DWORD *)(a1 + 24) = v51;
  if ( v49 >= v51 )
    goto LABEL_12;
  if ( !(unsigned __int8)sub_186AF10(v10) )
  {
    v52 = *(_DWORD *)(a1 + 16);
    v53 = sub_186B270(24LL * v52);
    v54 = (_OWORD *)(v53 + 8);
    v55 = v53 + 24LL * v52 + 8;
    if ( v52 )
    {
      if ( ((24 * (_BYTE)v52) & 8) == 0 || (v54 = (_OWORD *)(v53 + 32), *(_OWORD *)(v53 + 8) = 0, v55 != v53 + 32) )
      {
        do
        {
          *v54 = 0;
          v54 += 3;
          *(_OWORD *)((char *)v54 - 24) = 0;
        }
        while ( (_OWORD *)v55 != v54 );
      }
    }
    v56 = *(unsigned int *)(a1 + 16);
    v57 = *(const double **)(a1 + 8);
    v58 = v56 - 1;
    v59 = 24 * v56;
    v60 = (double *)&v57[3 * v56];
    v61 = v53 + 24 * v56;
    if ( v57 != v60 )
    {
      do
      {
        if ( *((_QWORD *)v57 + 1) > 1u )
        {
          v62 = 24LL * (*(_DWORD *)v57 & v58);
          v63 = v53 + v62;
          if ( v59 == v62 )
          {
LABEL_97:
            if ( v53 == v63 )
            {
LABEL_104:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v64 = v53;
            while ( *(_QWORD *)(v64 + 8) )
            {
              v64 += 24;
              if ( v63 == v64 )
                goto LABEL_104;
            }
          }
          else
          {
            v64 = v53 + v62;
            while ( *(_QWORD *)(v64 + 8) )
            {
              v64 += 24;
              if ( v61 == v64 )
                goto LABEL_97;
            }
          }
          *(_DWORD *)v64 = *(_DWORD *)v57;
          *(__m128 *)(v64 + 8) = _mm_loadh_ps(v57 + 2);
        }
        v57 += 3;
      }
      while ( v60 != v57 );
      v60 = *(double **)(a1 + 8);
    }
    if ( v60 )
    {
      v78 = v53;
      sub_186B220(v60);
      v53 = v78;
    }
    *(_QWORD *)(a1 + 8) = v53;
    *(_DWORD *)(a1 + 24) = 0;
  }
  v10 = *(_QWORD **)(a1 + 40);
  if ( v10 )
    goto LABEL_12;
LABEL_75:
  if ( v11 )
  {
    v27 = 0;
    v71 = (_QWORD *)sub_186B270(0x18u);
    v10 = v71 + 1;
    *v71 = 2;
    *(_QWORD *)(a1 + 40) = v71 + 1;
    goto LABEL_20;
  }
  v35 = *(_QWORD **)(a1 + 56);
  if ( !v35 )
    goto LABEL_33;
  v77 = *((unsigned int *)v35 - 1);
  if ( (_DWORD)v77 )
  {
    v72 = (unsigned __int64)&v35[v77];
    if ( (unsigned __int64)v35 < v72 )
    {
      v73 = *(__int64 **)(a1 + 56);
      goto LABEL_80;
    }
  }
LABEL_88:
  v45 = *(_QWORD *)(a1 + 64);
  *((_DWORD *)v35 - 1) = v11;
  v46 = (_QWORD *)(a1 + 64);
  if ( !v45 )
  {
LABEL_89:
    v47 = 0;
    goto LABEL_35;
  }
LABEL_34:
  v47 = *(_DWORD *)(v45 - 4);
LABEL_35:
  sub_83BF90(v46, v47 - a2);
}

