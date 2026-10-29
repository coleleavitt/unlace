__int64 __fastcall sub_774D00(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edx
  _DWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v11; // rsi
  __int64 *v12; // r13
  int v13; // r14d
  __int64 v14; // rcx
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  unsigned int v19; // edx
  int v20; // edx
  unsigned __int8 v21; // al
  _QWORD *v22; // rax
  int v23; // edx
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rsi
  int v31; // ecx
  int v32; // r13d
  int v33; // edx
  __int64 v34; // rsi
  __int64 v35; // r14
  unsigned int v36; // ecx
  int v37; // edx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rdi
  _QWORD *v42; // rax
  unsigned int v43; // r13d
  size_t v44; // rsi
  __int64 v45; // rax
  _DWORD *v46; // rdx
  unsigned int v47; // r13d
  unsigned int v48; // edx
  unsigned int *v49; // rdx
  _QWORD *v50; // rax
  char **exception; // rbp
  __int64 v52; // [rsp+8h] [rbp-60h]
  __int64 v53; // [rsp+8h] [rbp-60h]
  __int64 v54; // [rsp+8h] [rbp-60h]
  __int64 v55[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_DWORD *)(a3 + 8);
  v5 = 0;
  if ( (v4 & 0xFFFFFFC0) != 0x40 )
    return v5;
  if ( *(_WORD *)(a2 + 4) )
    return v5;
  v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v8 || *v8 || v8[1] != 4 )
    return v5;
  v9 = (_QWORD *)a1[7];
  v11 = a1[1];
  v12 = &v9[*(unsigned int *)(a3 + 12)];
  v13 = *(_DWORD *)(a3 + 12);
  if ( *v12 == *(_QWORD *)(v11 + 856) )
  {
    v14 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    if ( *(_QWORD *)(v11 + 864) != *v12 )
      return v5;
    v14 = *(_QWORD *)(a2 + 48);
  }
  v5 = 0;
  if ( !v14 )
    return v5;
  if ( !v9 )
    goto LABEL_46;
  v15 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
  if ( (unsigned __int64)v12 >= v15 )
    goto LABEL_19;
  do
  {
    v16 = *v12;
    if ( *v12 )
    {
      v17 = a1[6];
      v18 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v18 )
      {
        v52 = v14;
        sub_15D7BC0(v17, v16);
        v14 = v52;
      }
    }
    ++v12;
  }
  while ( (unsigned __int64)v12 < v15 );
  v9 = (_QWORD *)a1[7];
  if ( v9 )
  {
LABEL_19:
    *((_DWORD *)v9 - 1) = v13;
    ++*(_DWORD *)(v14 + 8);
    v19 = *((_DWORD *)v9 - 2);
    if ( *((_DWORD *)v9 - 1) == v19 )
    {
      v43 = (3 * v19 + 1) >> 1;
      v44 = 8 * v43 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v44 || v19 >= v43 )
        goto LABEL_59;
      v54 = v14;
      v45 = sub_186B300(v9 - 1, v44);
      v14 = v54;
      v46 = (_DWORD *)v45;
      v9 = (_QWORD *)(v45 + 8);
      a1[7] = v9;
      *v46 = v43;
    }
  }
  else
  {
LABEL_46:
    ++*(_DWORD *)(v14 + 8);
    v53 = v14;
    v42 = (_QWORD *)sub_186B270(0x18u);
    v14 = v53;
    *v42 = 2;
    v9 = v42 + 1;
    a1[7] = v9;
  }
  v20 = *((_DWORD *)v9 - 1);
  v9[v20] = v14;
  *((_DWORD *)v9 - 1) = v20 + 1;
  v21 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
  *(_BYTE *)(a3 + 8) = v21;
  if ( (unsigned __int8)sub_773C40((__int64)a1, v14, (v21 >> 4) & 3) )
  {
    v22 = (_QWORD *)a1[7];
    if ( v22 )
      v23 = *((_DWORD *)v22 - 1);
    else
      v23 = 0;
    v24 = v22[v23 - 1];
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v25 = a1[60];
    if ( v25 )
    {
      v26 = a1[61];
      v18 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v18 )
      {
        sub_15D7BC0(v26, v25);
        v22 = (_QWORD *)a1[7];
      }
    }
    v27 = *((_DWORD *)v22 - 1);
    v28 = a1[6];
    a1[60] = v24;
    v29 = (unsigned int)(v27 - 1);
    v30 = v22[v29];
    *((_DWORD *)v22 - 1) = v29;
    if ( v30
      && (v31 = *(_DWORD *)(v30 + 8), v32 = v31 - 1, *(_DWORD *)(v30 + 8) = v31 - 1, v31 == 1)
      && (sub_15D7BC0(v28, v30), v22 = (_QWORD *)a1[7], v28 = a1[6], !v22) )
    {
      v33 = MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    else
    {
      v32 = *((_DWORD *)v22 - 1);
      v33 = v32;
    }
    v34 = v22[v32 - 1];
    *((_DWORD *)v22 - 1) = v33 - 1;
    if ( v34 && (v18 = *(_DWORD *)(v34 + 8) == 1, --*(_DWORD *)(v34 + 8), v18) )
    {
      sub_15D7BC0(v28, v34);
      v35 = a1[60];
      v22 = (_QWORD *)a1[7];
      if ( !v35 )
      {
LABEL_35:
        if ( !v22 )
        {
          v50 = (_QWORD *)sub_186B270(0x18u);
          *v50 = 2;
          v22 = v50 + 1;
          a1[7] = v22;
          goto LABEL_37;
        }
        goto LABEL_36;
      }
    }
    else
    {
      v35 = a1[60];
      if ( !v35 )
      {
LABEL_36:
        v36 = *((_DWORD *)v22 - 2);
        if ( *((_DWORD *)v22 - 1) != v36 )
        {
LABEL_37:
          v37 = *((_DWORD *)v22 - 1);
          v22[v37] = v35;
          *((_DWORD *)v22 - 1) = v37 + 1;
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            sub_1584390(a1, a2, 0, a1[60]);
          v38 = a1[5];
          v39 = *(_DWORD *)(v38 - 4);
          *(_DWORD *)(v38 - 4) = v39 - 1;
          if ( v39 != 1 )
            *(_BYTE *)(v38 + 16LL * (unsigned int)(v39 - 2) + 8) |= 2u;
          goto LABEL_41;
        }
        v47 = (3 * v36 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v36 + 8 < v48 && v36 < v47 )
        {
          v49 = (unsigned int *)sub_186B300(v22 - 1, v48);
          v22 = v49 + 2;
          a1[7] = v49 + 2;
          *v49 = v47;
          goto LABEL_37;
        }
LABEL_59:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_76A180(v55, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v55);
        sub_233E40((__int64)v55);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    ++*(_DWORD *)(v35 + 8);
    goto LABEL_35;
  }
LABEL_41:
  v40 = a1[60];
  if ( v40 )
  {
    v41 = a1[61];
    v18 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v41, v40);
  }
  a1[60] = 0;
  return 1;
}

