_QWORD *__fastcall sub_618A10(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **v3; // r12
  char **v4; // r12
  char **exception; // r12
  char **v6; // r12
  char **v7; // r12
  int v8; // r8d
  _QWORD *v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rdx
  __int64 v14; // r12
  _DWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  unsigned int v19; // r15d
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned int v27; // eax
  unsigned int v28; // edx
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // r15
  unsigned int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int64 *v35; // rdx
  int v36; // edi
  __int64 v37; // rax
  _QWORD *v38; // rcx
  unsigned int v39; // edx
  _QWORD *v40; // rsi
  __int64 v41; // rdx
  _QWORD *v42; // r8
  _QWORD *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // edx
  size_t v47; // rsi
  unsigned int *v48; // rax
  unsigned int v49; // r13d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  unsigned int v54; // edx
  __int64 *v55; // rbx
  unsigned __int64 v56; // r15
  __int64 v57; // rsi
  bool v58; // zf
  _QWORD *v60; // rcx
  unsigned int v61; // eax
  __int64 v62; // rdx
  int v63; // eax
  __int64 *v64; // rdx
  __int64 *v65; // r13
  unsigned __int64 v66; // r15
  __int64 v67; // rsi
  unsigned int v68; // r8d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // r14
  __int64 v76; // [rsp+8h] [rbp-C8h]
  unsigned int v78; // [rsp+1Ch] [rbp-B4h]
  __int64 v80; // [rsp+30h] [rbp-A0h]
  unsigned int i; // [rsp+38h] [rbp-98h]
  unsigned int v82; // [rsp+3Ch] [rbp-94h]
  unsigned int v83; // [rsp+40h] [rbp-90h]
  unsigned int v84; // [rsp+40h] [rbp-90h]
  _QWORD *v85; // [rsp+40h] [rbp-90h]
  _QWORD *v86; // [rsp+40h] [rbp-90h]
  __int64 v88; // [rsp+60h] [rbp-70h] BYREF
  _QWORD *v89; // [rsp+68h] [rbp-68h]
  __int64 v90; // [rsp+70h] [rbp-60h]
  __int64 v91[10]; // [rsp+80h] [rbp-50h] BYREF

  v8 = *(_DWORD *)(a3 + 24);
  v76 = *(_QWORD *)(a2 + 24);
  v88 = v76;
  if ( !v8 )
  {
    v89 = nullptr;
    sub_617C70(a1, a2, (_QWORD *)a3, (__int64)&v88);
    return a1;
  }
  v82 = 0;
  v9 = nullptr;
  do
  {
    v14 = *(_QWORD *)(a3 + 8LL * v82 + 32);
    v15 = *(_DWORD **)(sub_15D1F10(v14) + 24);
    if ( !v15 || *(_DWORD *)(a2 + 40) != *v15 || v15[1] )
    {
      ++*(_DWORD *)(v14 + 8);
      if ( v9 )
      {
        v10 = *((_DWORD *)v9 - 1);
        if ( v10 != *((_DWORD *)v9 - 2) )
          goto LABEL_5;
        v49 = (3 * v10 + 1) >> 1;
        v50 = 8 * v49 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v50 || v10 >= v49 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v91, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v91);
          sub_233E40((__int64)v91);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v51 = (unsigned int *)sub_186B300(v9 - 1, v50);
LABEL_53:
        v52 = v51[1];
        v9 = v51 + 2;
        *v51 = v49;
        v53 = v52;
        v13 = &v9[v52];
        v12 = v53 + 1;
      }
      else
      {
        v74 = (_QWORD *)sub_186B270(0x18u);
        v9 = v74 + 1;
        *v74 = 2;
        v12 = 1;
        v13 = v9;
      }
LABEL_6:
      *v13 = v14;
      *((_DWORD *)v9 - 1) = v12;
      goto LABEL_7;
    }
    for ( i = 0;
          i < (unsigned int)sub_1859980(
                              **(_QWORD **)(*(_QWORD *)(a2 + 32) + 32LL),
                              "xform.instantiate_arrays.nb_quantifier",
                              *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                              1);
          ++i )
    {
      v16 = *(_QWORD *)(a2 + 24);
      ++*(_DWORD *)(v14 + 8);
      v80 = v16;
      v90 = v16;
      v17 = (_QWORD *)sub_186B270(0x18u);
      v17[1] = v14;
      v18 = v17 + 1;
      v19 = 0;
      *v17 = 0x100000002LL;
      while ( 1 )
      {
        v20 = *(_QWORD *)(sub_15D1F10(v14) + 24);
        v21 = -1;
        if ( v20 )
        {
          v22 = *(_QWORD *)(v20 + 8);
          if ( v22 )
            v21 = *(_DWORD *)(v22 - 4) - 1;
        }
        v23 = *(_QWORD *)(a2 + 24);
        if ( v19 >= v21 )
          break;
        v24 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v14) + 24) + 8LL) + 16LL * v19;
        if ( *(_BYTE *)(v24 + 8) != 1 )
          sub_A8ADA((__int64)"std::get: wrong index for variant");
        v25 = sub_15DB5C0(v23, *(unsigned int *)(a2 + 168), *(_QWORD *)v24);
        v26 = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        v27 = *((_DWORD *)v18 - 1);
        if ( v27 == *((_DWORD *)v18 - 2) )
        {
          v28 = (3 * v27 + 1) >> 1;
          v29 = 8 * v28 + 8;
          if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v91, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v91);
            sub_233E40((__int64)v91);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v83 = (3 * v27 + 1) >> 1;
          v30 = (unsigned int *)sub_186B300(v18 - 1, v29);
          v18 = v30 + 2;
          *v30 = v83;
          v27 = v30[1];
        }
        ++v19;
        v18[v27] = v26;
        *((_DWORD *)v18 - 1) = v27 + 1;
        ++*(_DWORD *)(a2 + 168);
      }
      v31 = sub_15DCAD0(*(_QWORD *)(a2 + 48), (int)v18, 0);
      if ( v31 )
        *(_DWORD *)(v31 + 8) += 2;
      if ( v9 )
      {
        v32 = *((_DWORD *)v9 - 1);
        if ( v32 == *((_DWORD *)v9 - 2) )
        {
          v46 = (3 * v32 + 1) >> 1;
          v47 = 8 * v46 + 8;
          if ( 8 * v32 + 8 >= (unsigned int)v47 || v32 >= v46 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v91, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v91);
            sub_233E40((__int64)v91);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v84 = (3 * v32 + 1) >> 1;
          v48 = (unsigned int *)sub_186B300(v9 - 1, v47);
          v9 = v48 + 2;
          *v48 = v84;
          LODWORD(v48) = v48[1];
          v35 = &v9[(unsigned int)v48];
          v34 = (_DWORD)v48 + 1;
        }
        else
        {
          v33 = v32;
          v34 = v32 + 1;
          v35 = &v9[v33];
        }
      }
      else
      {
        v73 = (_QWORD *)sub_186B270(0x18u);
        v9 = v73 + 1;
        *v73 = 2;
        v34 = 1;
        v35 = v9;
      }
      *v35 = v31;
      *((_DWORD *)v9 - 1) = v34;
      sub_616E40(a2 + 80, v14);
      v36 = *(_DWORD *)(v14 + 12);
      v37 = *(unsigned int *)(a2 + 88);
      v38 = *(_QWORD **)(a2 + 80);
      v39 = v37 - 1;
      v37 *= 16;
      v40 = (_QWORD *)((char *)v38 + v37);
      v41 = 16LL * (v36 & v39);
      v42 = &v38[(unsigned __int64)v41 / 8];
      if ( v41 == v37 )
      {
LABEL_39:
        while ( v42 != v38 )
        {
          v45 = *v38;
          if ( *v38 > 1u )
          {
            if ( *(_DWORD *)(v45 + 12) == v36 && v14 == v45 )
            {
              v43 = v38;
              goto LABEL_69;
            }
          }
          else if ( !v45 )
          {
            break;
          }
          v38 += 2;
        }
LABEL_95:
        BUG();
      }
      v43 = &v38[(unsigned __int64)v41 / 8];
      while ( 1 )
      {
        while ( 1 )
        {
          v44 = *v43;
          if ( *v43 > 1u )
            break;
          if ( !v44 )
            goto LABEL_95;
          v43 += 2;
          if ( v40 == v43 )
            goto LABEL_39;
        }
        if ( *(_DWORD *)(v44 + 12) == v36 && v14 == v44 )
          break;
        v43 += 2;
        if ( v40 == v43 )
          goto LABEL_39;
      }
LABEL_69:
      v60 = (_QWORD *)v43[1];
      if ( v60 )
      {
        v61 = *((_DWORD *)v60 - 1);
        if ( v61 == *((_DWORD *)v60 - 2) )
        {
          v68 = (3 * v61 + 1) >> 1;
          v69 = 8 * v68 + 8;
          if ( 8 * v61 + 8 >= (unsigned int)v69 || v61 >= v68 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v91, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v91);
            sub_233E40((__int64)v91);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v78 = (3 * v61 + 1) >> 1;
          v85 = v43;
          v70 = (unsigned int *)sub_186B300(v60 - 1, v69);
          v60 = v70 + 2;
          v85[1] = v70 + 2;
          v71 = v70[1];
          *v70 = v78;
          LODWORD(v70) = v71;
          v64 = &v60[v71];
          v63 = (_DWORD)v70 + 1;
        }
        else
        {
          v62 = v61;
          v63 = v61 + 1;
          v64 = &v60[v62];
        }
      }
      else
      {
        v86 = v43;
        v72 = (_QWORD *)sub_186B270(0x18u);
        v60 = v72 + 1;
        *v72 = 2;
        v63 = 1;
        v86[1] = v60;
        v64 = v60;
      }
      *v64 = v31;
      *((_DWORD *)v60 - 1) = v63;
      if ( v31 )
      {
        v58 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v58 )
          sub_15D7BC0(v23, v31);
      }
      v65 = v18;
      v66 = (unsigned __int64)&v18[*((unsigned int *)v18 - 1)];
      if ( (unsigned __int64)v18 < v66 )
      {
        do
        {
          while ( 1 )
          {
            v67 = *v65;
            if ( *v65 )
            {
              v58 = (*(_DWORD *)(v67 + 8))-- == 1;
              if ( v58 )
                break;
            }
            if ( (unsigned __int64)++v65 >= v66 )
              goto LABEL_81;
          }
          ++v65;
          sub_15D7BC0(v80, v67);
        }
        while ( (unsigned __int64)v65 < v66 );
      }
LABEL_81:
      sub_186B220(v18 - 1);
    }
    if ( !(unsigned __int8)sub_1859630(
                             **(_QWORD **)(*(_QWORD *)(a2 + 32) + 32LL),
                             "xform.instantiate_arrays.enforce",
                             *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                             0) )
    {
      ++*(_DWORD *)(v14 + 8);
      if ( v9 )
      {
        v10 = *((_DWORD *)v9 - 1);
        if ( v10 == *((_DWORD *)v9 - 2) )
        {
          v49 = (3 * v10 + 1) >> 1;
          v54 = 8 * v49 + 8;
          if ( 8 * v10 + 8 >= v54 || v10 >= v49 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v91, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v91);
            sub_233E40((__int64)v91);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v51 = (unsigned int *)sub_186B300(v9 - 1, v54);
          goto LABEL_53;
        }
LABEL_5:
        v11 = v10;
        v12 = v10 + 1;
        v13 = &v9[v11];
      }
      else
      {
        v75 = (_QWORD *)sub_186B270(0x18u);
        *v75 = 2;
        v12 = 1;
        v9 = v75 + 1;
        v13 = v9;
      }
      goto LABEL_6;
    }
LABEL_7:
    ++v82;
  }
  while ( v82 < *(_DWORD *)(a3 + 24) );
  v89 = v9;
  sub_617C70(a1, a2, (_QWORD *)a3, (__int64)&v88);
  if ( v9 )
  {
    v55 = v9;
    if ( v9 < &v9[*((unsigned int *)v9 - 1)] )
    {
      v56 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
      do
      {
        while ( 1 )
        {
          v57 = *v55;
          if ( *v55 )
          {
            v58 = (*(_DWORD *)(v57 + 8))-- == 1;
            if ( v58 )
              break;
          }
          if ( (unsigned __int64)++v55 >= v56 )
            goto LABEL_67;
        }
        ++v55;
        sub_15D7BC0(v76, v57);
      }
      while ( (unsigned __int64)v55 < v56 );
    }
LABEL_67:
    sub_186B220(v9 - 1);
  }
  return a1;
}

