__int64 __fastcall sub_3FA320(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, unsigned __int8 a5)
{
  char **v5; // r13
  _DWORD *v9; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // r12
  __int64 *v25; // r14
  __int64 *v26; // rbx
  __int64 *v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 *v33; // r12
  __int64 *v34; // r14
  __int64 *v35; // rbx
  __int64 *v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 *v40; // r13
  __int64 *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 *v45; // rax
  __int64 *v46; // r13
  _QWORD *v47; // rax
  __int64 *v48; // rbx
  char **exception; // r14
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // ecx
  __int64 v53; // rdx
  unsigned int v54; // r9d
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rsi
  unsigned int v60; // r8d
  size_t v61; // rsi
  unsigned int *v62; // rax
  unsigned __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 *v68; // r12
  __int64 *v69; // r15
  __int64 v70; // rsi
  __int64 v71; // [rsp+10h] [rbp-D0h]
  __int64 *v72; // [rsp+18h] [rbp-C8h]
  __int64 *v73; // [rsp+20h] [rbp-C0h]
  unsigned int v74; // [rsp+34h] [rbp-ACh]
  unsigned int v75; // [rsp+38h] [rbp-A8h]
  unsigned __int64 v76; // [rsp+38h] [rbp-A8h]
  __int64 *v77; // [rsp+40h] [rbp-A0h]
  __int64 v78; // [rsp+40h] [rbp-A0h]
  __int64 v79; // [rsp+40h] [rbp-A0h]
  _QWORD *v80; // [rsp+40h] [rbp-A0h]
  __int64 v81; // [rsp+40h] [rbp-A0h]
  __int64 *v83; // [rsp+48h] [rbp-98h]
  __int64 *v84; // [rsp+48h] [rbp-98h]
  char v85[8]; // [rsp+58h] [rbp-88h] BYREF
  __int64 *v86; // [rsp+60h] [rbp-80h] BYREF
  int v87[2]; // [rsp+68h] [rbp-78h] BYREF
  __int64 v88; // [rsp+70h] [rbp-70h]
  __int64 v89; // [rsp+80h] [rbp-60h] BYREF
  __int64 v90; // [rsp+88h] [rbp-58h]
  __int64 v91; // [rsp+90h] [rbp-50h] BYREF
  char v92; // [rsp+98h] [rbp-48h]

  v91 = 0;
  sub_1360C00(v85, a2, &v91);
  sub_18572D0(&v91);
  sub_1360B80(v85, a5);
  sub_1361190(v85, a3, a4);
  v9 = *(_DWORD **)(sub_15D1F10(a3) + 24);
  if ( !v9 || *((_DWORD *)a1 + 2) != *v9 || v9[1] )
    return sub_13606C0(v85);
  v11 = *a1;
  v89 = 0;
  v71 = v11;
  v88 = v11;
  v90 = v11;
  v86 = nullptr;
  v12 = sub_3FAC20((_DWORD)a1, a2, *a4, (unsigned int)&v86, (unsigned int)&v89, 0);
  v73 = v86;
  if ( !v12 )
  {
    v30 = v89;
    if ( v89 )
    {
      v31 = v90;
      v19 = (*(_DWORD *)(v89 + 8))-- == 1;
      if ( v19 )
        sub_15D7BC0(v31, v30);
    }
    if ( !v73 )
      return sub_13606C0(v85);
    v32 = *((unsigned int *)v73 - 1);
    if ( !(_DWORD)v32 )
      goto LABEL_30;
    v33 = v73;
    v34 = &v73[2 * v32];
    while ( 1 )
    {
      v35 = (__int64 *)v33[1];
      if ( v35 )
      {
        v36 = &v35[*((unsigned int *)v35 - 1)];
        if ( v35 >= v36 )
          goto LABEL_45;
        do
        {
          while ( 1 )
          {
            v37 = *v35;
            if ( *v35 )
            {
              v38 = *v33;
              v19 = (*(_DWORD *)(v37 + 8))-- == 1;
              if ( v19 )
                break;
            }
            if ( ++v35 >= v36 )
              goto LABEL_44;
          }
          sub_15D7BC0(v38, v37);
          ++v35;
        }
        while ( v35 < v36 );
LABEL_44:
        v35 = (__int64 *)v33[1];
        if ( v35 )
LABEL_45:
          sub_186B220(v35 - 1);
      }
      v33 += 2;
      if ( v34 == v33 )
        goto LABEL_30;
    }
  }
  v13 = v89;
  v14 = sub_15D1F10(a3);
  *(_QWORD *)v87 = v13;
  v91 = v14;
  v15 = a1[2];
  v92 = 1;
  v16 = sub_15DCAD0(v15, (int)v87, 0);
  sub_15D0DF0(&v91);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = *a4;
  if ( *a4 )
  {
    v18 = a4[1];
    v19 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v18, v17);
  }
  *a4 = v16;
  if ( !v73 )
  {
    v21 = v89;
    if ( !v89 )
      return sub_13606C0(v85);
    v22 = v90;
    v19 = (*(_DWORD *)(v89 + 8))-- == 1;
    if ( !v19 )
      return sub_13606C0(v85);
LABEL_16:
    sub_15D7BC0(v22, v21);
    goto LABEL_17;
  }
  v77 = a4;
  LODWORD(v20) = *((_DWORD *)v73 - 1);
  while ( 1 )
  {
    if ( !(_DWORD)v20 )
    {
      v21 = v89;
      if ( !v89 )
        goto LABEL_18;
      v22 = v90;
      v19 = (*(_DWORD *)(v89 + 8))-- == 1;
      if ( !v19 )
        goto LABEL_18;
      goto LABEL_16;
    }
    v20 = (unsigned int)(v20 - 1);
    v39 = 2 * v20;
    v40 = &v73[2 * v20];
    v41 = (__int64 *)v40[1];
    if ( v41 )
      break;
    if ( v89 != MEMORY[0x7FFFFFFF8] )
    {
      v84 = v77;
      v45 = v73;
      goto LABEL_65;
    }
LABEL_62:
    *((_DWORD *)v73 - 1) = v20;
  }
  v42 = *((unsigned int *)v41 - 1);
  if ( v89 == v41[(unsigned int)(v42 - 1)] )
  {
    v83 = &v41[v42];
    if ( v41 >= v83 )
      goto LABEL_60;
    do
    {
      while ( 1 )
      {
        v43 = *v41;
        if ( *v41 )
        {
          v44 = *v40;
          v19 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v41 >= v83 )
          goto LABEL_59;
      }
      sub_15D7BC0(v44, v43);
      ++v41;
    }
    while ( v41 < v83 );
LABEL_59:
    v41 = (__int64 *)v40[1];
    if ( v41 )
LABEL_60:
      sub_186B220(v41 - 1);
    LODWORD(v20) = *((_DWORD *)v73 - 1) - 1;
    goto LABEL_62;
  }
  v84 = v77;
  v45 = v73;
LABEL_65:
  v46 = &v45[v39 + 1];
  v72 = v45 - 1;
  v47 = (_QWORD *)sub_186B270(0x18u);
  *v47 = 2;
  v48 = v47 + 1;
  while ( 2 )
  {
    if ( !*((_DWORD *)v48 - 2) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v91, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v91);
      sub_233E40((__int64)&v91);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    *((_DWORD *)v48 - 1) = 1;
    *v48 = 0;
    v50 = *v84;
    if ( *v84 )
      ++*(_DWORD *)(v50 + 8);
LABEL_70:
    *v48 = v50;
    v51 = *v46;
    v52 = 0;
    if ( !*v46 )
      goto LABEL_76;
    do
    {
LABEL_71:
      if ( v52 >= *(_DWORD *)(v51 - 4) )
        break;
      v53 = *(_QWORD *)(v51 + 8LL * v52);
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      v54 = *((_DWORD *)v48 - 1);
      if ( v54 == *((_DWORD *)v48 - 2) )
      {
        v60 = (3 * v54 + 1) >> 1;
        v61 = 8 * v60 + 8;
        if ( 8 * v54 + 8 >= (unsigned int)v61 || v54 >= v60 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v91, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, &v91);
          sub_233E40((__int64)&v91);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v74 = (3 * v54 + 1) >> 1;
        v75 = v52;
        v79 = v53;
        v62 = (unsigned int *)sub_186B300(v48 - 1, v61);
        v54 = v62[1];
        v48 = (__int64 *)(v62 + 2);
        v53 = v79;
        v52 = v75;
        *v62 = v74;
        v51 = *v46;
      }
      ++v52;
      v48[v54] = v53;
      *((_DWORD *)v48 - 1) = v54 + 1;
    }
    while ( v51 );
LABEL_76:
    v55 = sub_15DCAD0(a1[2], (int)v48, 0);
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    v56 = *v84;
    if ( *v84 )
    {
      v57 = v84[1];
      v19 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v19 )
      {
        v81 = v55;
        sub_15D7BC0(v57, v56);
        v55 = v81;
      }
    }
    v46 -= 2;
    *v84 = v55;
    if ( v72 != v46 )
    {
      v58 = *((unsigned int *)v48 - 1);
      if ( (unsigned int)v58 > 1 )
      {
        v63 = (unsigned __int64)&v48[v58];
        v64 = v48 + 1;
        if ( (unsigned __int64)(v48 + 1) < v63 )
        {
          do
          {
            while ( 1 )
            {
              v65 = *v64;
              if ( *v64 )
              {
                v19 = (*(_DWORD *)(v65 + 8))-- == 1;
                if ( v19 )
                  break;
              }
              if ( (unsigned __int64)++v64 >= v63 )
                goto LABEL_99;
            }
            v76 = v63;
            v80 = v64;
            sub_15D7BC0(v71, v65);
            v63 = v76;
            v64 = v80 + 1;
          }
          while ( (unsigned __int64)(v80 + 1) < v76 );
LABEL_99:
          LODWORD(v58) = *((_DWORD *)v48 - 1);
          goto LABEL_83;
        }
      }
      else
      {
LABEL_83:
        if ( !(_DWORD)v58 )
          continue;
      }
      v59 = *v48;
      *((_DWORD *)v48 - 1) = 1;
      v50 = *v84;
      if ( *v84 )
        ++*(_DWORD *)(v50 + 8);
      if ( !v59 )
        goto LABEL_70;
      v19 = (*(_DWORD *)(v59 + 8))-- == 1;
      if ( !v19 )
        goto LABEL_70;
      v78 = v50;
      sub_15D7BC0(v71, v59);
      v52 = 0;
      *v48 = v78;
      v51 = *v46;
      if ( *v46 )
        goto LABEL_71;
      goto LABEL_76;
    }
    break;
  }
  v66 = v89;
  if ( v89 )
  {
    v67 = v90;
    v19 = (*(_DWORD *)(v89 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v67, v66);
  }
  v68 = &v48[*((unsigned int *)v48 - 1)];
  if ( v48 < v68 )
  {
    v69 = v48;
    do
    {
      while ( 1 )
      {
        v70 = *v69;
        if ( *v69 )
        {
          v19 = (*(_DWORD *)(v70 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v69 >= v68 )
          goto LABEL_109;
      }
      sub_15D7BC0(v71, v70);
      ++v69;
    }
    while ( v69 < v68 );
  }
LABEL_109:
  sub_186B220(v48 - 1);
LABEL_17:
  if ( v73 )
  {
LABEL_18:
    v23 = *((unsigned int *)v73 - 1);
    if ( (_DWORD)v23 )
    {
      v24 = v73;
      v25 = &v73[2 * v23];
      do
      {
        v26 = (__int64 *)v24[1];
        if ( v26 )
        {
          v27 = &v26[*((unsigned int *)v26 - 1)];
          if ( v26 >= v27 )
            goto LABEL_28;
          do
          {
            while ( 1 )
            {
              v28 = *v26;
              if ( *v26 )
              {
                v29 = *v24;
                v19 = (*(_DWORD *)(v28 + 8))-- == 1;
                if ( v19 )
                  break;
              }
              if ( ++v26 >= v27 )
                goto LABEL_27;
            }
            sub_15D7BC0(v29, v28);
            ++v26;
          }
          while ( v26 < v27 );
LABEL_27:
          v26 = (__int64 *)v24[1];
          if ( v26 )
LABEL_28:
            sub_186B220(v26 - 1);
        }
        v24 += 2;
      }
      while ( v25 != v24 );
    }
LABEL_30:
    sub_186B220(v73 - 1);
  }
  return sub_13606C0(v85);
}

