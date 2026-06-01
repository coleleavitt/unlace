__int64 __fastcall sub_DA0F40(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rax
  char *j; // rbx
  unsigned int v7; // r15d
  size_t v8; // rsi
  unsigned int *v9; // rax
  unsigned int v10; // eax
  size_t v11; // rdx
  char *v12; // r14
  char *v13; // rbp
  _QWORD *v14; // r12
  __int64 v15; // r15
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  int v19; // esi
  __int64 *v20; // rcx
  unsigned int v21; // edx
  __int64 *v22; // r11
  __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 *v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // r13d
  char *v28; // rbp
  char *v29; // r12
  __int64 v30; // rsi
  bool v31; // zf
  __int64 v33; // rsi
  __int64 v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // rax
  _DWORD *v39; // rax
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // r10
  int v47; // edi
  __int64 v48; // rax
  __int64 *v49; // rcx
  unsigned int v50; // edx
  __int64 *v51; // rsi
  __int64 v52; // rdx
  __int64 *v53; // r8
  __int64 *i; // rax
  __int64 v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // rbp
  __int64 v62; // rax
  _DWORD *v63; // rax
  char **exception; // r12
  int v65; // [rsp+0h] [rbp-88h]
  __int64 v66; // [rsp+8h] [rbp-80h]
  unsigned __int64 v68; // [rsp+10h] [rbp-78h]
  __int64 v70; // [rsp+18h] [rbp-70h]
  __int64 *v71; // [rsp+18h] [rbp-70h]
  int v72; // [rsp+20h] [rbp-68h]
  char v73; // [rsp+28h] [rbp-60h]
  __int64 v74; // [rsp+30h] [rbp-58h] BYREF
  int v75; // [rsp+38h] [rbp-50h]
  int v76; // [rsp+40h] [rbp-48h]
  void *v77; // [rsp+48h] [rbp-40h]

  v4 = *(unsigned int *)(a2 + 24);
  if ( !(_DWORD)v4 )
  {
    v45 = *(_QWORD *)(a2 + 16);
    v46 = *(_QWORD *)a1[2];
    v47 = *(_DWORD *)(v45 + 12);
    v48 = *(unsigned int *)(v46 + 32);
    v49 = *(__int64 **)(v46 + 24);
    v50 = v48 - 1;
    v48 *= 24;
    v51 = (__int64 *)((char *)v49 + v48);
    v52 = 24LL * (v47 & v50);
    v53 = (__int64 *)((char *)v49 + v52);
    if ( v52 != v48 )
    {
      for ( i = (__int64 *)((char *)v49 + v52); v51 != i; i += 3 )
      {
        v52 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v52 + 12) == v47 && v45 == v52 )
            goto LABEL_66;
        }
        else if ( !v52 )
        {
          goto LABEL_59;
        }
      }
    }
    if ( v49 != v53 )
    {
      v58 = *v49;
      if ( (unsigned __int64)*v49 <= 1 )
        goto LABEL_74;
LABEL_70:
      if ( *(_DWORD *)(v58 + 12) == v47 && v45 == v58 )
      {
        i = v49;
LABEL_66:
        v55 = i[2];
        if ( v55 )
        {
LABEL_60:
          ++*(_DWORD *)(v55 + 8);
LABEL_61:
          v56 = *a3;
          if ( *a3 )
          {
            v57 = a3[1];
            v31 = (*(_DWORD *)(v56 + 8))-- == 1;
            if ( v31 )
              sub_15D7BC0(v57, v56);
          }
          v27 = 1;
          *a3 = v55;
          return v27;
        }
      }
      else
      {
        do
        {
          v49 += 3;
          if ( v53 == v49 )
            break;
          v58 = *v49;
          if ( (unsigned __int64)*v49 > 1 )
            goto LABEL_70;
LABEL_74:
          ;
        }
        while ( v58 );
      }
    }
LABEL_59:
    v55 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, __int64 *))(*(_QWORD *)v46 + 40LL))(
            v46,
            *(_QWORD *)(v45 + 40),
            v52,
            v49,
            v53);
    if ( !v55 )
      goto LABEL_61;
    goto LABEL_60;
  }
  v66 = *a1;
  v5 = (_QWORD *)sub_186B270(0x18u);
  *v5 = 2;
  for ( j = (char *)(v5 + 1); ; j = (char *)(v9 + 2) )
  {
    v10 = *((_DWORD *)j - 2);
    if ( v10 >= (unsigned int)v4 )
      break;
    v7 = (3 * v10 + 1) >> 1;
    v8 = 8 * v7 + 8;
    if ( 8 * v10 + 8 >= (unsigned int)v8 || v10 >= v7 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v74, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v74);
      sub_233E40((__int64)&v74);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v9 = (unsigned int *)sub_186B300(j - 8, v8);
    *v9 = v7;
  }
  *((_DWORD *)j - 1) = v4;
  v11 = 8 * v4;
  v12 = j;
  v13 = &j[8 * v4];
  memset(j, 0, v11);
  v14 = (_QWORD *)(a2 + 32);
  do
  {
    v15 = *v14;
    if ( (unsigned __int8)sub_15D26C0(*a1, *v14) )
      goto LABEL_27;
    v18 = *((unsigned int *)a1 + 156);
    v19 = *(_DWORD *)(v15 + 12);
    v20 = (__int64 *)a1[77];
    v21 = v18 - 1;
    v18 *= 16;
    v22 = (__int64 *)((char *)v20 + v18);
    v23 = 16LL * (v19 & v21);
    v24 = &v20[(unsigned __int64)v23 / 8];
    if ( v23 == v18 )
    {
LABEL_44:
      while ( v24 != v20 )
      {
        v44 = *v20;
        if ( (unsigned __int64)*v20 > 1 )
        {
          if ( *(_DWORD *)(v44 + 12) == v19 && v15 == v44 )
          {
            v25 = v20;
            goto LABEL_26;
          }
        }
        else if ( !v44 )
        {
          break;
        }
        v20 += 2;
      }
LABEL_16:
      v27 = 0;
      goto LABEL_17;
    }
    v25 = &v20[(unsigned __int64)v23 / 8];
    while ( 1 )
    {
      v26 = *v25;
      if ( (unsigned __int64)*v25 > 1 )
        break;
      if ( !v26 )
        goto LABEL_16;
LABEL_13:
      v25 += 2;
      if ( v22 == v25 )
        goto LABEL_44;
    }
    if ( *(_DWORD *)(v26 + 12) != v19 || v15 != v26 )
      goto LABEL_13;
LABEL_26:
    v15 = v25[1];
LABEL_27:
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v33 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 )
    {
      v31 = (*(_DWORD *)(v33 + 8))-- == 1;
      if ( v31 )
        sub_15D7BC0(v66, v33);
    }
    *(_QWORD *)v12 = v15;
    v12 += 8;
    ++v14;
  }
  while ( v12 != v13 );
  v34 = *(_QWORD *)(a2 + 16);
  v35 = *(unsigned int **)(v34 + 24);
  if ( !*(_WORD *)(a2 + 4) )
  {
    if ( v35 )
    {
      v37 = *v35;
      if ( v37 != -1 )
      {
        v36 = a1[82];
        goto LABEL_36;
      }
    }
    goto LABEL_80;
  }
  v36 = a1[82];
  if ( v35 )
    v37 = *v35;
  else
    v37 = -1;
LABEL_36:
  v38 = sub_15D2690(v36, v37);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v38 + 160LL))(v38, *(_QWORD *)(a2 + 16)) )
  {
    v34 = *(_QWORD *)(a2 + 16);
LABEL_80:
    v59 = *a1;
    v60 = sub_15DC610(
            *a1,
            v34,
            *(_DWORD *)(v34 + 32),
            (int)j,
            v16,
            v17,
            v65,
            v66,
            a2,
            (int)a3,
            v72,
            v73,
            v74,
            v75,
            v76,
            v77);
    v61 = v60;
    if ( v60 )
      ++*(_DWORD *)(v60 + 8);
    if ( (unsigned __int8)sub_DA0460(a1, v68, v60, v71) )
    {
      if ( v61 )
      {
        v31 = (*(_DWORD *)(v61 + 8))-- == 1;
        if ( v31 )
          sub_15D7BC0(v59, v61);
      }
      goto LABEL_43;
    }
    if ( v61 )
    {
      v31 = (*(_DWORD *)(v61 + 8))-- == 1;
      if ( v31 )
        sub_15D7BC0(v59, v61);
    }
    goto LABEL_16;
  }
  if ( !*(_WORD *)(a2 + 4) )
  {
    v39 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v39 )
    {
      if ( *((_DWORD *)a1 + 168) == *v39 && v39[1] == 1 )
      {
        v62 = *(_QWORD *)(a2 + 32);
        if ( !*(_WORD *)(v62 + 4) && !*(_DWORD *)(v62 + 24) )
        {
          v63 = *(_DWORD **)(*(_QWORD *)(v62 + 16) + 24LL);
          if ( !v63 || *v63 == -1 )
            goto LABEL_16;
        }
      }
    }
  }
  v40 = *a1;
  v41 = sub_15DC610(
          *a1,
          *(_QWORD *)(a2 + 16),
          *((_DWORD *)j - 1),
          (int)j,
          v16,
          v17,
          v65,
          v66,
          a2,
          (int)a3,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
  v42 = a1[53];
  v43 = v41;
  if ( v41 )
  {
    ++*(_DWORD *)(v41 + 8);
    sub_1361190(v42, v41, v70);
    v31 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(v40, v43);
  }
  else
  {
    sub_1361190(v42, 0, v70);
  }
LABEL_43:
  v27 = 1;
LABEL_17:
  v28 = j;
  v29 = &j[8 * *((unsigned int *)j - 1)];
  if ( j < v29 )
  {
    do
    {
      while ( 1 )
      {
        v30 = *(_QWORD *)v28;
        if ( *(_QWORD *)v28 )
        {
          v31 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v31 )
            break;
        }
        v28 += 8;
        if ( v28 >= v29 )
          goto LABEL_23;
      }
      v28 += 8;
      sub_15D7BC0(v66, v30);
    }
    while ( v28 < v29 );
  }
LABEL_23:
  sub_186B220(j - 8);
  return v27;
}

