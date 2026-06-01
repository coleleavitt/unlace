__int64 __fastcall sub_54BE60(__int64 a1, __int64 a2)
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
  unsigned int *v15; // rdx
  unsigned int v16; // r8d
  unsigned int *v17; // r13
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 i; // rsi
  __int64 v21; // r14
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rax
  __int64 *v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r14
  _QWORD *v29; // rax
  _QWORD *v30; // r13
  _QWORD *v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // r13
  _QWORD *v35; // rdx
  __int64 *v36; // r15
  __int64 *v37; // r14
  _QWORD *v38; // rax
  int v39; // eax
  _QWORD *v40; // rcx
  unsigned int v41; // eax
  __int64 *v42; // r13
  __int64 *v43; // r14
  __int64 v44; // rsi
  unsigned int v45; // ecx
  size_t v46; // rsi
  unsigned int *v47; // rax
  unsigned int v48; // ecx
  size_t v49; // rsi
  unsigned int v50; // r12d
  unsigned int *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  char **exception; // r12
  char **v55; // r12
  __int64 v56; // [rsp+0h] [rbp-98h]
  unsigned int *v57; // [rsp+8h] [rbp-90h]
  unsigned int v58; // [rsp+8h] [rbp-90h]
  unsigned int v59; // [rsp+14h] [rbp-84h]
  __int64 *v60; // [rsp+18h] [rbp-80h]
  __int64 v61[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 8) + 40LL))(*(_QWORD *)(a2 + 8), a1 + 8);
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
  if ( v4 == sub_54A3A0 )
    v5 = *(_BYTE *)(a2 + 28);
  else
    v5 = v4(a2);
  if ( v5 )
    return v3;
  v7 = *(_QWORD *)(a2 + 40);
  v8 = nullptr;
  v56 = *(_QWORD *)(a2 + 32);
  if ( v7 )
  {
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
          v45 = (3 * v11 + 1) >> 1;
          v46 = 8 * v45 + 8;
          if ( 8 * v11 + 8 >= (unsigned int)v46 || v11 >= v45 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v61, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v61);
            sub_233E40((__int64)v61);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v58 = (3 * v11 + 1) >> 1;
          v47 = (unsigned int *)sub_186B300(v8 - 1, v46);
          v8 = (__int64 *)(v47 + 2);
          *v47 = v58;
          LODWORD(v47) = v47[1];
          v14 = &v8[(unsigned int)v47];
          v7 = *(_QWORD *)(a2 + 40);
          v13 = (_DWORD)v47 + 1;
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
        v53 = (_QWORD *)sub_186B270(0x18u);
        v14 = v53 + 1;
        *v53 = 2;
        v7 = *(_QWORD *)(a2 + 40);
        v13 = 1;
        v8 = v14;
      }
      *v14 = v10;
      ++v9;
      *((_DWORD *)v8 - 1) = v13;
    }
    while ( v7 );
  }
  v15 = *(unsigned int **)(a1 + 16);
  if ( v15 )
  {
    v16 = *(v15 - 1);
    if ( v16 > 1 )
    {
      v17 = *(unsigned int **)(a1 + 16);
      v18 = v8[*v15];
      v19 = (__int64)&v15[v16 - 1];
      for ( i = v18; ; i = v8[*v17] )
      {
        v21 = v8[v17[1]];
        v22 = *v17;
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        if ( i && (v23 = *(_DWORD *)(i + 8) == 1, --*(_DWORD *)(i + 8), v23) )
        {
          v60 = &v8[v22];
          v59 = v16;
          v57 = v15;
          sub_15D7BC0(v56, i);
          ++v17;
          v15 = v57;
          v16 = v59;
          *v60 = v21;
          if ( v17 == (unsigned int *)v19 )
          {
LABEL_24:
            v24 = v15[v16 - 1];
            if ( v18 )
              ++*(_DWORD *)(v18 + 8);
            v25 = &v8[v24];
            v26 = *v25;
            if ( *v25 )
            {
              v23 = (*(_DWORD *)(v26 + 8))-- == 1;
              if ( v23 )
                sub_15D7BC0(v56, v26);
            }
            *v25 = v18;
            break;
          }
        }
        else
        {
          ++v17;
          v8[v22] = v21;
          if ( v17 == (unsigned int *)v19 )
            goto LABEL_24;
        }
      }
    }
  }
  v27 = *(_QWORD *)(v3 + 16);
  *(_BYTE *)(v3 + 28) = 0;
  if ( !v27 )
  {
    v30 = *(_QWORD **)(v3 + 40);
    if ( v30 )
    {
      v28 = 0;
      v31 = &v30[*((unsigned int *)v30 - 1)];
      if ( v30 < v31 )
        goto LABEL_35;
      *((_DWORD *)v30 - 1) = 0;
    }
LABEL_66:
    if ( !v8 )
      return v3;
    goto LABEL_50;
  }
  v28 = *(unsigned int *)(v27 - 4);
  v29 = *(_QWORD **)(v3 + 40);
  v30 = v29;
  if ( v29 )
  {
    v31 = &v29[*((unsigned int *)v29 - 1)];
    if ( v29 >= v31 )
    {
LABEL_39:
      *((_DWORD *)v29 - 1) = 0;
      goto LABEL_40;
    }
    do
    {
LABEL_35:
      while ( 1 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = *(_QWORD *)(v3 + 32);
          v23 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v23 )
            break;
        }
        if ( ++v30 >= v31 )
          goto LABEL_38;
      }
      sub_15D7BC0(v33, v32);
      ++v30;
    }
    while ( v30 < v31 );
LABEL_38:
    v29 = *(_QWORD **)(v3 + 40);
    if ( v29 )
      goto LABEL_39;
  }
LABEL_40:
  if ( !(_DWORD)v28 )
    goto LABEL_66;
  v34 = *v8;
  v35 = v29;
  v36 = v8;
  v37 = &v8[v28];
  if ( *v8 )
    ++*(_DWORD *)(v34 + 8);
  if ( v29 )
    goto LABEL_48;
  v38 = (_QWORD *)sub_186B270(0x18u);
  v35 = v38 + 1;
  *v38 = 2;
  v39 = 1;
  *(_QWORD *)(v3 + 40) = v35;
  v40 = v35;
  while ( 1 )
  {
    ++v36;
    *v40 = v34;
    *((_DWORD *)v35 - 1) = v39;
    if ( v36 == v37 )
      break;
    while ( 1 )
    {
      v34 = *v36;
      if ( *v36 )
        ++*(_DWORD *)(v34 + 8);
LABEL_48:
      v41 = *((_DWORD *)v35 - 1);
      if ( v41 == *((_DWORD *)v35 - 2) )
        break;
      ++v36;
      v35[v41] = v34;
      *((_DWORD *)v35 - 1) = v41 + 1;
      if ( v36 == v37 )
        goto LABEL_50;
    }
    v48 = (3 * v41 + 1) >> 1;
    v49 = 8 * v48 + 8;
    v50 = v48;
    if ( 8 * v41 + 8 >= (unsigned int)v49 || v41 >= v48 )
    {
      v55 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v61, "Overflow encountered when expanding vector");
      *v55 = (char *)off_1C63128;
      sub_2333C0(v55 + 1, v61);
      sub_233E40((__int64)v61);
      __cxa_throw(v55, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v51 = (unsigned int *)sub_186B300(v35 - 1, v49);
    v52 = v51[1];
    v35 = v51 + 2;
    *(_QWORD *)(v3 + 40) = v51 + 2;
    *v51 = v50;
    LODWORD(v51) = v52;
    v40 = &v35[v52];
    v39 = (_DWORD)v51 + 1;
  }
LABEL_50:
  v42 = v8;
  v43 = &v8[*((unsigned int *)v8 - 1)];
  if ( v8 < v43 )
  {
    do
    {
      while ( 1 )
      {
        v44 = *v42;
        if ( *v42 )
        {
          v23 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v23 )
            break;
        }
        if ( ++v42 >= v43 )
          goto LABEL_56;
      }
      ++v42;
      sub_15D7BC0(v56, v44);
    }
    while ( v42 < v43 );
  }
LABEL_56:
  sub_186B220(v8 - 1);
  return v3;
}

