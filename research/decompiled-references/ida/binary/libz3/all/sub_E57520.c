__int64 __fastcall sub_E57520(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 *v7; // r12
  _QWORD *v8; // rax
  __int64 *v9; // rax
  int v10; // ecx
  __int64 *v11; // r14
  __int64 *v12; // rdi
  unsigned int v13; // ecx
  _QWORD *v14; // rbp
  __int64 *v15; // r14
  __int64 (__fastcall *v16)(); // rax
  __int64 v17; // r15
  _QWORD *v18; // rax
  __int64 *v19; // rax
  int v20; // ecx
  __int64 *v21; // r13
  __int64 *v22; // rdi
  unsigned int v23; // ecx
  __int64 v24; // rbp
  __int64 *v25; // r15
  __int64 (__fastcall *v26)(); // rax
  __int64 v27; // rax
  __int64 v28; // r14
  _QWORD *v29; // rax
  __int64 *v30; // rsi
  __int64 *v31; // r12
  __int64 *v32; // r15
  int v33; // eax
  __int64 *v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 *v37; // rbx
  unsigned int v38; // ebp
  unsigned __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rdi
  bool v42; // zf
  __int64 *v43; // rbx
  __int64 *v44; // r12
  __int64 v45; // rsi
  __int64 *v46; // rbx
  __int64 *v47; // r12
  __int64 v48; // rsi
  unsigned int v50; // r15d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rax
  int v54; // ecx
  unsigned int v55; // r8d
  size_t v56; // rsi
  unsigned int v57; // r12d
  unsigned int *v58; // rax
  __int64 v59; // rax
  int v60; // ecx
  unsigned int v61; // r8d
  size_t v62; // rsi
  unsigned int v63; // r13d
  unsigned int *v64; // rax
  __int64 v65; // rsi
  char **v66; // rbp
  char **exception; // rbp
  char **v68; // rbp
  __int64 v69; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v70; // [rsp+28h] [rbp-80h]
  __int64 v71; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v72; // [rsp+38h] [rbp-70h]
  __int64 v73; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v74; // [rsp+48h] [rbp-60h]
  __int64 v75[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 96);
  v70 = nullptr;
  v69 = v5;
  if ( a2 )
  {
    v6 = *a3;
    v7 = a3;
    if ( *a3 )
      ++*(_DWORD *)(v6 + 8);
    v8 = (_QWORD *)sub_186B270(0x18u);
    *v8 = 2;
    v9 = v8 + 1;
    v10 = 1;
    v70 = v9;
    v11 = &v7[a2];
    v12 = v9;
    while ( 1 )
    {
      ++v7;
      *v9 = v6;
      *((_DWORD *)v12 - 1) = v10;
      if ( v7 == v11 )
        break;
      while ( 1 )
      {
        v6 = *v7;
        if ( *v7 )
          ++*(_DWORD *)(v6 + 8);
        v13 = *((_DWORD *)v12 - 1);
        if ( v13 == *((_DWORD *)v12 - 2) )
          break;
        ++v7;
        v12[v13] = v6;
        *((_DWORD *)v12 - 1) = v13 + 1;
        if ( v7 == v11 )
          goto LABEL_10;
      }
      v50 = (3 * v13 + 1) >> 1;
      v51 = 8 * v50 + 8;
      if ( 8 * v13 + 8 >= (unsigned int)v51 || v13 >= v50 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v75, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v75);
        sub_233E40((__int64)v75);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v52 = (unsigned int *)sub_186B300(v12 - 1, v51);
      v12 = (__int64 *)(v52 + 2);
      *v52 = v50;
      v53 = v52[1];
      v70 = v12;
      v54 = v53;
      v9 = &v12[v53];
      v10 = v54 + 1;
    }
  }
LABEL_10:
  sub_E54900(a1, &v69);
  v14 = *(_QWORD **)(a1 + 104);
  v15 = v70;
  v16 = *(__int64 (__fastcall **)())(*v14 + 368LL);
  if ( v16 == sub_E57520 )
  {
    v72 = nullptr;
    v71 = v14[12];
    if ( a2 )
    {
      v17 = *v70;
      if ( *v70 )
        ++*(_DWORD *)(v17 + 8);
      v18 = (_QWORD *)sub_186B270(0x18u);
      *v18 = 2;
      v19 = v18 + 1;
      v20 = 1;
      v72 = v19;
      v21 = &v15[a2];
      v22 = v19;
      while ( 1 )
      {
        ++v15;
        *v19 = v17;
        *((_DWORD *)v22 - 1) = v20;
        if ( v15 == v21 )
          break;
        while ( 1 )
        {
          v17 = *v15;
          if ( *v15 )
            ++*(_DWORD *)(v17 + 8);
          v23 = *((_DWORD *)v22 - 1);
          if ( v23 == *((_DWORD *)v22 - 2) )
            break;
          ++v15;
          v22[v23] = v17;
          *((_DWORD *)v22 - 1) = v23 + 1;
          if ( v15 == v21 )
            goto LABEL_20;
        }
        v55 = (3 * v23 + 1) >> 1;
        v56 = 8 * v55 + 8;
        v57 = v55;
        if ( 8 * v23 + 8 >= (unsigned int)v56 || v23 >= v55 )
        {
          v66 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v75, "Overflow encountered when expanding vector");
          *v66 = (char *)off_1C63128;
          sub_2333C0(v66 + 1, v75);
          sub_233E40((__int64)v75);
          __cxa_throw(v66, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v58 = (unsigned int *)sub_186B300(v22 - 1, v56);
        v22 = (__int64 *)(v58 + 2);
        *v58 = v57;
        v59 = v58[1];
        v72 = v22;
        v60 = v59;
        v19 = &v22[v59];
        v20 = v60 + 1;
      }
    }
LABEL_20:
    sub_E54900((__int64)v14, &v71);
    v24 = v14[13];
    v25 = v72;
    v26 = *(__int64 (__fastcall **)())(*(_QWORD *)v24 + 368LL);
    if ( v26 == sub_E57520 )
    {
      v27 = *(_QWORD *)(v24 + 96);
      v74 = nullptr;
      v73 = v27;
      if ( a2 )
      {
        v28 = *v72;
        if ( *v72 )
          ++*(_DWORD *)(v28 + 8);
        v29 = (_QWORD *)sub_186B270(0x18u);
        v30 = v29 + 1;
        *v29 = 2;
        v31 = v25;
        v74 = v30;
        v32 = &v25[a2];
        v33 = 1;
        v34 = v30;
        while ( 1 )
        {
          ++v31;
          *v30 = v28;
          *((_DWORD *)v34 - 1) = v33;
          if ( v31 == v32 )
            break;
          while ( 1 )
          {
            v28 = *v31;
            if ( *v31 )
              ++*(_DWORD *)(v28 + 8);
            v35 = *((_DWORD *)v34 - 1);
            if ( v35 == *((_DWORD *)v34 - 2) )
              break;
            ++v31;
            v34[v35] = v28;
            *((_DWORD *)v34 - 1) = v35 + 1;
            if ( v31 == v32 )
              goto LABEL_30;
          }
          v61 = (3 * v35 + 1) >> 1;
          v62 = 8 * v61 + 8;
          v63 = v61;
          if ( 8 * v35 + 8 >= (unsigned int)v62 || v35 >= v61 )
          {
            v68 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v75, "Overflow encountered when expanding vector");
            *v68 = (char *)off_1C63128;
            sub_2333C0(v68 + 1, v75);
            sub_233E40((__int64)v75);
            __cxa_throw(v68, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v64 = (unsigned int *)sub_186B300(v34 - 1, v62);
          v65 = v64[1];
          v34 = (__int64 *)(v64 + 2);
          *v64 = v63;
          v74 = v34;
          LODWORD(v64) = v65;
          v30 = &v34[v65];
          v33 = (_DWORD)v64 + 1;
        }
      }
LABEL_30:
      sub_E54900(v24, &v73);
      v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v24 + 104) + 368LL))(
              *(_QWORD *)(v24 + 104),
              a2,
              v74);
      v37 = v74;
      v38 = v36;
      if ( v74 )
      {
        v39 = (unsigned __int64)&v74[*((unsigned int *)v74 - 1)];
        if ( (unsigned __int64)v74 >= v39 )
          goto LABEL_38;
        do
        {
          while ( 1 )
          {
            v40 = *v37;
            if ( *v37 )
            {
              v41 = v73;
              v42 = (*(_DWORD *)(v40 + 8))-- == 1;
              if ( v42 )
                break;
            }
            if ( (unsigned __int64)++v37 >= v39 )
              goto LABEL_37;
          }
          sub_15D7BC0(v41, v40);
          ++v37;
        }
        while ( (unsigned __int64)v37 < v39 );
LABEL_37:
        v37 = v74;
        if ( v74 )
LABEL_38:
          sub_186B220(v37 - 1);
      }
    }
    else
    {
      v38 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))v26)(v24, a2, v72);
    }
    v43 = v72;
    if ( v72 )
    {
      v44 = &v72[*((unsigned int *)v72 - 1)];
      if ( v72 >= v44 )
        goto LABEL_47;
      do
      {
        while ( 1 )
        {
          v45 = *v43;
          if ( *v43 )
          {
            v42 = (*(_DWORD *)(v45 + 8))-- == 1;
            if ( v42 )
              break;
          }
          if ( ++v43 >= v44 )
            goto LABEL_46;
        }
        sub_15D7BC0(v71, v45);
        ++v43;
      }
      while ( v43 < v44 );
LABEL_46:
      v43 = v72;
      if ( v72 )
LABEL_47:
        sub_186B220(v43 - 1);
    }
  }
  else
  {
    v38 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 *))v16)(v14, a2, v70);
  }
  v46 = v70;
  if ( v70 )
  {
    v47 = &v70[*((unsigned int *)v70 - 1)];
    if ( v70 >= v47 )
      goto LABEL_56;
    do
    {
      while ( 1 )
      {
        v48 = *v46;
        if ( *v46 )
        {
          v42 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v42 )
            break;
        }
        if ( ++v46 >= v47 )
          goto LABEL_55;
      }
      sub_15D7BC0(v69, v48);
      ++v46;
    }
    while ( v46 < v47 );
LABEL_55:
    v46 = v70;
    if ( v70 )
LABEL_56:
      sub_186B220(v46 - 1);
  }
  return v38;
}

