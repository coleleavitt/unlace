unsigned int *__fastcall sub_D3E1E0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r11
  __int64 *v13; // rsi
  __int64 v14; // r12
  __int64 *v15; // r10
  __int64 *i; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // r13
  int v24; // eax
  unsigned int v25; // edi
  __int64 *v26; // rcx
  __int64 *v27; // r10
  int v28; // edx
  __int64 v29; // r12
  __int64 *v30; // rsi
  __int64 *v31; // r12
  __int64 *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rbp
  __int64 v36; // rax
  __int64 *j; // rax
  __int64 v38; // rdx
  __int64 *k; // rbp
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // r12d
  unsigned int v45; // ecx
  unsigned int *v46; // rax
  __int64 v47; // rcx
  __int64 *v48; // rax
  __int64 *v49; // rdx
  __int64 v50; // rax
  char *v51; // rdx
  unsigned __int64 *v52; // r12
  char *v53; // r13
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 *v56; // rsi
  unsigned __int64 *v57; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  char *v61; // r12
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rdx
  __int64 v67; // rax
  unsigned int *result; // rax
  unsigned int v69; // r12d
  unsigned int v70; // ecx
  unsigned int *v71; // rax
  unsigned int v72; // r12d
  unsigned int v73; // ecx
  unsigned int *v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rax
  char **exception; // rbp
  __int64 v84; // rdx
  unsigned int v85; // [rsp+8h] [rbp-A0h]
  __int64 *v86; // [rsp+8h] [rbp-A0h]
  __int64 *v87; // [rsp+8h] [rbp-A0h]
  size_t v88; // [rsp+10h] [rbp-98h]
  char *v89; // [rsp+10h] [rbp-98h]
  __int64 *v90; // [rsp+10h] [rbp-98h]
  __int64 *v91; // [rsp+18h] [rbp-90h]
  __int64 *v92; // [rsp+18h] [rbp-90h]
  __int64 *v93; // [rsp+18h] [rbp-90h]
  __int64 *v94; // [rsp+18h] [rbp-90h]
  __int64 *v95; // [rsp+18h] [rbp-90h]
  __int64 *v96; // [rsp+18h] [rbp-90h]
  unsigned __int64 *v97; // [rsp+20h] [rbp-88h]
  unsigned __int64 *v98; // [rsp+20h] [rbp-88h]
  unsigned __int64 *v99; // [rsp+20h] [rbp-88h]
  __int64 *v100; // [rsp+20h] [rbp-88h]
  __int64 *v101; // [rsp+20h] [rbp-88h]
  __int64 v102; // [rsp+28h] [rbp-80h]
  int v103; // [rsp+34h] [rbp-74h]
  __int64 *v104; // [rsp+38h] [rbp-70h]
  __int64 *v105; // [rsp+38h] [rbp-70h]
  __int64 *v106; // [rsp+38h] [rbp-70h]
  __int64 v107[11]; // [rsp+50h] [rbp-58h] BYREF

  v8 = *(unsigned int *)(a1 + 112);
  v9 = *(__int64 **)(a1 + 104);
  v10 = *(_DWORD *)(a3 + 12);
  v11 = v10 & (unsigned int)(v8 - 1);
  v12 = 24 * v8;
  v13 = &v9[3 * v8];
  v14 = 24 * v11;
  v15 = &v9[3 * v11];
  if ( 24 * v11 != 24 * v8 )
  {
    for ( i = &v9[3 * v11]; v13 != i; i += 3 )
    {
      v17 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v17 + 12) == v10 && a3 == v17 )
          goto LABEL_23;
      }
      else if ( !v17 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v9 != v15 )
  {
    for ( j = v9; v15 != j; j += 3 )
    {
      v38 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v38 + 12) == v10 && a3 == v38 )
          goto LABEL_23;
      }
      else if ( !v38 )
      {
        break;
      }
    }
  }
LABEL_8:
  v18 = *(_QWORD **)(a1 + 32);
  ++*(_DWORD *)(a3 + 8);
  if ( v18 )
  {
    v19 = *((_DWORD *)v18 - 1);
    if ( v19 == *((_DWORD *)v18 - 2) )
    {
      v44 = (3 * v19 + 1) >> 1;
      v45 = 8 * v44 + 8;
      if ( 8 * v19 + 8 >= v45 || v19 >= v44 )
        goto LABEL_161;
      v46 = (unsigned int *)sub_186B300(v18 - 1, v45);
      v47 = v46[1];
      v18 = v46 + 2;
      *v46 = v44;
      *(_QWORD *)(a1 + 32) = v46 + 2;
      LODWORD(v46) = v47;
      v22 = &v18[v47];
      v21 = (_DWORD)v46 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v18[v20];
    }
  }
  else
  {
    v80 = (_QWORD *)sub_186B270(0x18u);
    *v80 = 2;
    v21 = 1;
    v18 = v80 + 1;
    *(_QWORD *)(a1 + 32) = v18;
    v22 = v18;
  }
  *v22 = a3;
  *((_DWORD *)v18 - 1) = v21;
  v23 = *(unsigned int *)(a1 + 112);
  v24 = *(_DWORD *)(a1 + 116) + *(_DWORD *)(a1 + 120);
  v107[0] = a3;
  v25 = 2 * v23;
  v107[1] = 0;
  v103 = 2 * v23;
  v107[2] = 0;
  if ( 3 * (int)v23 < (unsigned int)(4 * v24) )
  {
    v88 = 24LL * v25;
    v102 = v88;
    v48 = (__int64 *)sub_186B270(v88);
    v26 = v48;
    if ( v25 )
    {
      v49 = &v48[6 * (v23 & 0x7FFFFFFF)];
      do
      {
        *(_OWORD *)v48 = 0;
        v48 += 6;
        *((_OWORD *)v48 - 2) = 0;
        *((_OWORD *)v48 - 1) = 0;
      }
      while ( v49 != v48 );
    }
    v50 = *(unsigned int *)(a1 + 112);
    v51 = *(char **)(a1 + 104);
    v85 = v103 - 1;
    v52 = (unsigned __int64 *)(v51 + 16);
    v53 = &v51[24 * (unsigned int)v50];
    v27 = &v26[v88 / 8];
    if ( v51 == v53 )
    {
LABEL_106:
      if ( v53 )
      {
        if ( (_DWORD)v50 )
        {
          v61 = v53;
          v89 = &v53[24 * v50];
          do
          {
            while ( 1 )
            {
              v62 = *((_QWORD *)v61 + 2);
              if ( v62 )
              {
                v100 = v27;
                v94 = v26;
                sub_186B220((void *)(v62 - 8));
                v27 = v100;
                v26 = v94;
              }
              v63 = *((_QWORD *)v61 + 1);
              if ( !v63 )
                break;
              v101 = v27;
              v61 += 24;
              v95 = v26;
              sub_186B220((void *)(v63 - 8));
              v26 = v95;
              v27 = v101;
              if ( v89 == v61 )
                goto LABEL_113;
            }
            v61 += 24;
          }
          while ( v61 != v89 );
        }
LABEL_113:
        v96 = v27;
        v90 = v26;
        sub_186B220(v53);
        v26 = v90;
        v27 = v96;
      }
      *(_QWORD *)(a1 + 104) = v26;
      *(_DWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 112) = v103;
      goto LABEL_13;
    }
    while ( 1 )
    {
      v54 = *(v52 - 2);
      if ( v54 <= 1 )
        goto LABEL_79;
      v55 = 24LL * (*(_DWORD *)(v54 + 12) & v85);
      v56 = &v26[(unsigned __int64)v55 / 8];
      if ( v88 == v55 )
      {
LABEL_94:
        if ( v26 == v56 )
        {
LABEL_138:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v57 = (unsigned __int64 *)v26;
        while ( *v57 )
        {
          v57 += 3;
          if ( v56 == (__int64 *)v57 )
            goto LABEL_138;
        }
        *v57 = v54;
        if ( v57 + 1 != v52 - 1 )
        {
          v60 = v57[1];
          if ( v60 )
          {
            v106 = v27;
            v99 = v57;
            v93 = v26;
            sub_186B220((void *)(v60 - 8));
            v27 = v106;
            v57 = v99;
            v26 = v93;
          }
          v57[1] = 0;
          v57[1] = *(v52 - 1);
          *(v52 - 1) = 0;
        }
        if ( v52 != v57 + 2 )
        {
          v59 = v57[2];
          if ( v59 )
          {
LABEL_92:
            v105 = v27;
            v98 = v57;
            v92 = v26;
            sub_186B220((void *)(v59 - 8));
            v27 = v105;
            v57 = v98;
            v26 = v92;
          }
LABEL_93:
          v57[2] = 0;
          v57[2] = *v52;
          *v52 = 0;
        }
      }
      else
      {
        v57 = (unsigned __int64 *)&v26[(unsigned __int64)v55 / 8];
        while ( *v57 )
        {
          v57 += 3;
          if ( v27 == (__int64 *)v57 )
            goto LABEL_94;
        }
        *v57 = v54;
        if ( v57 + 1 != v52 - 1 )
        {
          v58 = v57[1];
          if ( v58 )
          {
            v104 = v27;
            v97 = v57;
            v91 = v26;
            sub_186B220((void *)(v58 - 8));
            v27 = v104;
            v57 = v97;
            v26 = v91;
          }
          v57[1] = 0;
          v57[1] = *(v52 - 1);
          *(v52 - 1) = 0;
        }
        if ( v52 != v57 + 2 )
        {
          v59 = v57[2];
          if ( v59 )
            goto LABEL_92;
          goto LABEL_93;
        }
      }
LABEL_79:
      if ( v53 == (char *)(v52 + 1) )
      {
        v50 = *(unsigned int *)(a1 + 112);
        v53 = *(char **)(a1 + 104);
        goto LABEL_106;
      }
      v52 += 3;
    }
  }
  v26 = *(__int64 **)(a1 + 104);
  v85 = v23 - 1;
  v102 = 24 * v23;
  v27 = &v26[3 * v23];
LABEL_13:
  v28 = *(_DWORD *)(a3 + 12);
  v29 = v28 & v85;
  v30 = &v26[3 * v29];
  if ( 24 * v29 == v102 )
  {
    v32 = nullptr;
    while ( 1 )
    {
LABEL_67:
      if ( v30 == v26 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v43 = *v26;
      if ( (unsigned __int64)*v26 > 1 )
      {
        if ( *(_DWORD *)(v43 + 12) == v28 && a3 == v43 )
        {
          v81 = v26[1];
          *v26 = a3;
          if ( v81 )
          {
            v86 = v26;
            sub_186B220((void *)(v81 - 8));
            v26 = v86;
          }
          v82 = v26[2];
          v26[1] = 0;
          if ( v82 )
          {
            v87 = v26;
            sub_186B220((void *)(v82 - 8));
            v26 = v87;
          }
          v26[2] = 0;
          goto LABEL_22;
        }
      }
      else
      {
        if ( !v43 )
        {
          if ( v32 )
            --*(_DWORD *)(a1 + 120);
          else
            v32 = v26;
          v75 = v32[1];
          *v32 = a3;
          if ( v75 )
            sub_186B220((void *)(v75 - 8));
          v65 = v32[2];
          v32[1] = 0;
          if ( v65 )
            goto LABEL_122;
          goto LABEL_123;
        }
        v32 = v26;
      }
      v26 += 3;
    }
  }
  v31 = &v26[3 * v29];
  v32 = nullptr;
  while ( 1 )
  {
    v33 = *v31;
    if ( (unsigned __int64)*v31 <= 1 )
      break;
    if ( *(_DWORD *)(v33 + 12) == v28 && a3 == v33 )
    {
      v78 = v31[1];
      *v31 = a3;
      if ( v78 )
        sub_186B220((void *)(v78 - 8));
      v31[1] = 0;
      v79 = v31[2];
      if ( v79 )
        sub_186B220((void *)(v79 - 8));
      v31[2] = 0;
      goto LABEL_22;
    }
LABEL_17:
    v31 += 3;
    if ( v31 == v27 )
      goto LABEL_67;
  }
  if ( v33 )
  {
    v32 = v31;
    goto LABEL_17;
  }
  if ( v32 )
    --*(_DWORD *)(a1 + 120);
  else
    v32 = v31;
  v64 = v32[1];
  *v32 = a3;
  if ( v64 )
    sub_186B220((void *)(v64 - 8));
  v65 = v32[2];
  v32[1] = 0;
  if ( !v65 )
    goto LABEL_123;
LABEL_122:
  sub_186B220((void *)(v65 - 8));
LABEL_123:
  v32[2] = 0;
  ++*(_DWORD *)(a1 + 116);
LABEL_22:
  v34 = *(unsigned int *)(a1 + 112);
  v10 = *(_DWORD *)(a3 + 12);
  v9 = *(__int64 **)(a1 + 104);
  v12 = 24 * v34;
  v13 = &v9[3 * v34];
  v14 = 24LL * (v10 & (unsigned int)(v34 - 1));
  v15 = &v9[(unsigned __int64)v14 / 8];
LABEL_23:
  if ( a4 )
  {
    if ( v14 == v12 )
    {
LABEL_48:
      while ( v9 != v15 )
      {
        v41 = *v9;
        if ( (unsigned __int64)*v9 > 1 )
        {
          if ( *(_DWORD *)(v41 + 12) == v10 && a3 == v41 )
          {
            v35 = v9;
            goto LABEL_133;
          }
        }
        else if ( !v41 )
        {
          break;
        }
        v9 += 3;
      }
LABEL_31:
      BUG();
    }
    v35 = v15;
    while ( 1 )
    {
      v36 = *v35;
      if ( (unsigned __int64)*v35 > 1 )
      {
        if ( *(_DWORD *)(v36 + 12) == v10 && a3 == v36 )
        {
LABEL_133:
          v66 = (_QWORD *)v35[1];
          if ( !v66 )
          {
            v77 = (_QWORD *)sub_186B270(0x10u);
            *v77 = 2;
            v66 = v77 + 1;
            v35[1] = (__int64)(v77 + 1);
            result = (unsigned int *)(v77 + 1);
            goto LABEL_128;
          }
          v67 = *((unsigned int *)v66 - 1);
          if ( (_DWORD)v67 == *((_DWORD *)v66 - 2) )
          {
            v72 = (unsigned int)(3 * v67 + 1) >> 1;
            v73 = 4 * v72 + 8;
            if ( 4 * (int)v67 + 8 < v73 && (unsigned int)v67 < v72 )
            {
              v74 = (unsigned int *)sub_186B300(v66 - 1, v73);
              v66 = v74 + 2;
              v35[1] = (__int64)(v74 + 2);
              *v74 = v72;
              result = &v74[v74[1] + 2];
              goto LABEL_128;
            }
LABEL_161:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_167E90(v107, "Overflow encountered when expanding vector", v84);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v107);
            sub_233E40((__int64)v107);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_127:
          result = (unsigned int *)v66 + v67;
          goto LABEL_128;
        }
      }
      else if ( !v36 )
      {
        goto LABEL_31;
      }
      v35 += 3;
      if ( v35 == v13 )
        goto LABEL_48;
    }
  }
  if ( v14 != v12 )
  {
    for ( k = v15; k != v13; k += 3 )
    {
      v40 = *k;
      if ( (unsigned __int64)*k > 1 )
      {
        if ( *(_DWORD *)(v40 + 12) == v10 && a3 == v40 )
          goto LABEL_125;
      }
      else if ( !v40 )
      {
        goto LABEL_47;
      }
    }
  }
  if ( v9 == v15 )
LABEL_47:
    BUG();
  while ( 2 )
  {
    v42 = *v9;
    if ( (unsigned __int64)*v9 <= 1 )
    {
      if ( !v42 )
        goto LABEL_47;
      goto LABEL_60;
    }
    if ( *(_DWORD *)(v42 + 12) != v10 || a3 != v42 )
    {
LABEL_60:
      v9 += 3;
      if ( v9 == v15 )
        goto LABEL_47;
      continue;
    }
    break;
  }
  k = v9;
LABEL_125:
  v66 = (_QWORD *)k[2];
  if ( !v66 )
  {
    v76 = (_QWORD *)sub_186B270(0x10u);
    *v76 = 2;
    v66 = v76 + 1;
    k[2] = (__int64)(v76 + 1);
    result = (unsigned int *)(v76 + 1);
    goto LABEL_128;
  }
  v67 = *((unsigned int *)v66 - 1);
  if ( (_DWORD)v67 != *((_DWORD *)v66 - 2) )
    goto LABEL_127;
  v69 = (unsigned int)(3 * v67 + 1) >> 1;
  v70 = 4 * v69 + 8;
  if ( 4 * (int)v67 + 8 >= v70 || (unsigned int)v67 >= v69 )
    goto LABEL_161;
  v71 = (unsigned int *)sub_186B300(v66 - 1, v70);
  v66 = v71 + 2;
  k[2] = (__int64)(v71 + 2);
  *v71 = v69;
  result = &v71[v71[1] + 2];
LABEL_128:
  *result = a2;
  ++*((_DWORD *)v66 - 1);
  return result;
}

