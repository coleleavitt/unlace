__int64 __fastcall sub_54C6A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 (__fastcall *v4)(__int64); // rax
  char v5; // al
  __int64 v7; // rcx
  __int64 *v8; // rbx
  unsigned int v9; // r12d
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  __int64 *v14; // rsi
  _DWORD *v15; // r9
  int v16; // r8d
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  __int64 v19; // r14
  unsigned int v20; // r14d
  __int64 *v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 *v24; // r10
  __int64 v25; // rsi
  bool v26; // zf
  unsigned int v27; // r14d
  unsigned int v28; // r13d
  size_t v29; // rsi
  unsigned int *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r14
  _QWORD *v35; // rax
  _QWORD *v36; // r13
  _QWORD *v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // r13
  _QWORD *v41; // rdx
  __int64 *v42; // r15
  __int64 *v43; // r14
  _QWORD *v44; // rax
  int v45; // eax
  _QWORD *v46; // rcx
  unsigned int v47; // eax
  __int64 *v48; // r13
  __int64 *v49; // r14
  __int64 v50; // rsi
  unsigned int v51; // ecx
  size_t v52; // rsi
  unsigned int *v53; // rax
  unsigned int v54; // ecx
  size_t v55; // rsi
  unsigned int v56; // r12d
  unsigned int *v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 *v61; // r15
  __int64 *v62; // r13
  __int64 v63; // rsi
  int v64; // r15d
  __int64 v65; // r14
  __int64 *v66; // rcx
  __int64 v67; // rsi
  char **v68; // r12
  char **exception; // r12
  char **v70; // r12
  __int64 v71; // [rsp+8h] [rbp-A0h]
  unsigned int v72; // [rsp+10h] [rbp-98h]
  _DWORD *v73; // [rsp+10h] [rbp-98h]
  int v74; // [rsp+10h] [rbp-98h]
  int v75; // [rsp+18h] [rbp-90h]
  __int64 *v76; // [rsp+20h] [rbp-88h]
  __int64 *v77; // [rsp+28h] [rbp-80h]
  __int64 v78[11]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 8) + 40LL))(*(_QWORD *)(a2 + 8), a1 + 8);
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
  if ( v4 == sub_54A3A0 )
    v5 = *(_BYTE *)(a2 + 28);
  else
    v5 = v4(a2);
  if ( v5 )
    return v3;
  v7 = *(_QWORD *)(a2 + 40);
  v71 = *(_QWORD *)(a2 + 32);
  if ( !v7 )
  {
    v8 = *(__int64 **)(a1 + 16);
    if ( v8 )
    {
      v19 = (unsigned int)-*((_DWORD *)v8 - 1);
      if ( *((_DWORD *)v8 - 1) )
      {
LABEL_83:
        v60 = (_QWORD *)sub_186B270(0x18u);
        *v60 = 2;
        v8 = v60 + 1;
        v17 = 0;
        goto LABEL_37;
      }
      v33 = *(_QWORD *)(v3 + 16);
      *(_BYTE *)(v3 + 28) = 0;
      v8 = nullptr;
      if ( v33 )
        goto LABEL_41;
    }
    else
    {
      v33 = *(_QWORD *)(v3 + 16);
      *(_BYTE *)(v3 + 28) = 0;
      if ( v33 )
        goto LABEL_41;
    }
    v36 = *(_QWORD **)(v3 + 40);
    if ( !v36 )
      return v3;
    goto LABEL_69;
  }
  v8 = nullptr;
  v9 = 0;
  do
  {
    if ( v9 >= *(_DWORD *)(v7 - 4) )
      break;
    v10 = *(_QWORD *)(v7 + 8LL * v9);
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    if ( v8 )
    {
      v11 = *((_DWORD *)v8 - 1);
      if ( v11 == *((_DWORD *)v8 - 2) )
      {
        v51 = (3 * v11 + 1) >> 1;
        v52 = 8 * v51 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v52 || v11 >= v51 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v78, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v78);
          sub_233E40((__int64)v78);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v72 = (3 * v11 + 1) >> 1;
        v53 = (unsigned int *)sub_186B300(v8 - 1, v52);
        v8 = (__int64 *)(v53 + 2);
        *v53 = v72;
        LODWORD(v53) = v53[1];
        v14 = &v8[(unsigned int)v53];
        v7 = *(_QWORD *)(a2 + 40);
        v13 = (_DWORD)v53 + 1;
      }
      else
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = &v8[v12];
      }
    }
    else
    {
      v59 = (_QWORD *)sub_186B270(0x18u);
      v14 = v59 + 1;
      *v59 = 2;
      v7 = *(_QWORD *)(a2 + 40);
      v13 = 1;
      v8 = v14;
    }
    *v14 = v10;
    ++v9;
    *((_DWORD *)v8 - 1) = v13;
  }
  while ( v7 );
  v15 = *(_DWORD **)(a1 + 16);
  if ( !v15 || (v16 = *(v15 - 1)) == 0 )
  {
    v33 = *(_QWORD *)(v3 + 16);
    *(_BYTE *)(v3 + 28) = 0;
    if ( !v33 )
    {
      v36 = *(_QWORD **)(v3 + 40);
      if ( !v36 )
        goto LABEL_71;
      goto LABEL_69;
    }
    goto LABEL_41;
  }
  if ( !v8 )
  {
    v19 = (unsigned int)-v16;
    goto LABEL_83;
  }
  v17 = *((_DWORD *)v8 - 1);
  v18 = *v15 + 1;
  v19 = v17 - v16;
  if ( v18 < v17 )
  {
    v20 = 1;
    v21 = &v8[v18];
    if ( v16 != 1 && v15[1] == v18 )
      goto LABEL_29;
    while ( 1 )
    {
      v22 = *v21;
      v23 = v18 - v20;
      if ( *v21 )
        ++*(_DWORD *)(v22 + 8);
      v24 = &v8[v23];
      v25 = *v24;
      if ( *v24 )
      {
        v26 = (*(_DWORD *)(v25 + 8))-- == 1;
        if ( v26 )
        {
          v77 = &v8[v23];
          v76 = v21;
          v75 = v16;
          v73 = v15;
          sub_15D7BC0(v71, v25);
          v15 = v73;
          v16 = v75;
          v21 = v76;
          v24 = v77;
        }
      }
      ++v18;
      *v24 = v22;
      if ( v18 >= v17 )
        break;
      if ( v16 == v20 )
      {
        v64 = v18 - v16;
        do
        {
          v65 = v8[v18];
          if ( v65 )
            ++*(_DWORD *)(v65 + 8);
          v66 = &v8[v64];
          v67 = *v66;
          if ( *v66 )
          {
            v26 = (*(_DWORD *)(v67 + 8))-- == 1;
            if ( v26 )
            {
              v74 = v16;
              sub_15D7BC0(v71, v67);
              v16 = v74;
              v66 = &v8[v64];
            }
          }
          ++v18;
          *v66 = v65;
          ++v64;
        }
        while ( v18 < v17 );
        break;
      }
      while ( 1 )
      {
        ++v21;
        if ( v16 == v20 || v15[v20] != v18 )
          break;
LABEL_29:
        ++v18;
        ++v20;
        if ( v18 >= v17 )
          goto LABEL_30;
      }
    }
LABEL_30:
    v27 = v17;
    v17 = *((_DWORD *)v8 - 1);
    v19 = v27 - v16;
  }
  if ( (unsigned int)v19 < v17 )
  {
    v61 = &v8[v17];
    v62 = &v8[(unsigned int)v19];
    if ( v62 >= v61 )
    {
LABEL_87:
      v33 = *(_QWORD *)(v3 + 16);
      *((_DWORD *)v8 - 1) = v19;
      *(_BYTE *)(v3 + 28) = 0;
      if ( !v33 )
        goto LABEL_88;
LABEL_41:
      v34 = *(unsigned int *)(v33 - 4);
      v35 = *(_QWORD **)(v3 + 40);
      v36 = v35;
      if ( !v35 )
        goto LABEL_50;
      v37 = &v35[*((unsigned int *)v35 - 1)];
      if ( v35 < v37 )
      {
        do
        {
LABEL_45:
          while ( 1 )
          {
            v38 = *v36;
            if ( *v36 )
            {
              v39 = *(_QWORD *)(v3 + 32);
              v26 = (*(_DWORD *)(v38 + 8))-- == 1;
              if ( v26 )
                break;
            }
            if ( ++v36 >= v37 )
              goto LABEL_48;
          }
          sub_15D7BC0(v39, v38);
          ++v36;
        }
        while ( v36 < v37 );
LABEL_48:
        v35 = *(_QWORD **)(v3 + 40);
        if ( !v35 )
        {
LABEL_50:
          if ( (_DWORD)v34 )
          {
            v40 = *v8;
            v41 = v35;
            v42 = v8;
            v43 = &v8[v34];
            if ( *v8 )
              ++*(_DWORD *)(v40 + 8);
            if ( v35 )
              goto LABEL_58;
            v44 = (_QWORD *)sub_186B270(0x18u);
            v41 = v44 + 1;
            *v44 = 2;
            v45 = 1;
            *(_QWORD *)(v3 + 40) = v41;
            v46 = v41;
            while ( 1 )
            {
              ++v42;
              *v46 = v40;
              *((_DWORD *)v41 - 1) = v45;
              if ( v42 == v43 )
                goto LABEL_60;
              while ( 1 )
              {
                v40 = *v42;
                if ( *v42 )
                  ++*(_DWORD *)(v40 + 8);
LABEL_58:
                v47 = *((_DWORD *)v41 - 1);
                if ( v47 == *((_DWORD *)v41 - 2) )
                  break;
                ++v42;
                v41[v47] = v40;
                *((_DWORD *)v41 - 1) = v47 + 1;
                if ( v42 == v43 )
                  goto LABEL_60;
              }
              v54 = (3 * v47 + 1) >> 1;
              v55 = 8 * v54 + 8;
              v56 = v54;
              if ( 8 * v47 + 8 >= (unsigned int)v55 || v47 >= v54 )
              {
                v70 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v78, "Overflow encountered when expanding vector");
                *v70 = (char *)off_1C63128;
                sub_2333C0(v70 + 1, v78);
                sub_233E40((__int64)v78);
                __cxa_throw(v70, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v57 = (unsigned int *)sub_186B300(v41 - 1, v55);
              v58 = v57[1];
              v41 = v57 + 2;
              *(_QWORD *)(v3 + 40) = v57 + 2;
              *v57 = v56;
              LODWORD(v57) = v58;
              v46 = &v41[v58];
              v45 = (_DWORD)v57 + 1;
            }
          }
LABEL_71:
          if ( !v8 )
            return v3;
          goto LABEL_60;
        }
      }
      *((_DWORD *)v35 - 1) = 0;
      goto LABEL_50;
    }
    do
    {
      v63 = *v62;
      if ( *v62 )
      {
        v26 = (*(_DWORD *)(v63 + 8))-- == 1;
        if ( v26 )
          sub_15D7BC0(v71, v63);
      }
      ++v62;
    }
    while ( v62 < v61 );
    v17 = *((_DWORD *)v8 - 1);
  }
  if ( v17 >= (unsigned int)v19 )
    goto LABEL_87;
LABEL_37:
  while ( 1 )
  {
    v31 = *((_DWORD *)v8 - 2);
    if ( v31 >= (unsigned int)v19 )
      break;
    v28 = (3 * v31 + 1) >> 1;
    v29 = 8 * v28 + 8;
    if ( 8 * v31 + 8 >= (unsigned int)v29 || v31 >= v28 )
    {
      v68 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v78, "Overflow encountered when expanding vector");
      *v68 = (char *)off_1C63128;
      sub_2333C0(v68 + 1, v78);
      sub_233E40((__int64)v78);
      __cxa_throw(v68, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v30 = (unsigned int *)sub_186B300(v8 - 1, v29);
    *v30 = v28;
    v8 = (__int64 *)(v30 + 2);
  }
  *((_DWORD *)v8 - 1) = v19;
  v32 = v17;
  if ( v32 != v19 )
    memset(&v8[v32], 0, 8 * v19 - v32 * 8);
  v33 = *(_QWORD *)(v3 + 16);
  *(_BYTE *)(v3 + 28) = 0;
  if ( v33 )
    goto LABEL_41;
LABEL_88:
  v36 = *(_QWORD **)(v3 + 40);
  if ( v36 )
  {
LABEL_69:
    v34 = 0;
    v37 = &v36[*((unsigned int *)v36 - 1)];
    if ( v36 < v37 )
      goto LABEL_45;
    *((_DWORD *)v36 - 1) = 0;
    goto LABEL_71;
  }
LABEL_60:
  v48 = v8;
  v49 = &v8[*((unsigned int *)v8 - 1)];
  if ( v8 < v49 )
  {
    do
    {
      while ( 1 )
      {
        v50 = *v48;
        if ( *v48 )
        {
          v26 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v48 >= v49 )
          goto LABEL_66;
      }
      ++v48;
      sub_15D7BC0(v71, v50);
    }
    while ( v48 < v49 );
  }
LABEL_66:
  sub_186B220(v8 - 1);
  return v3;
}

