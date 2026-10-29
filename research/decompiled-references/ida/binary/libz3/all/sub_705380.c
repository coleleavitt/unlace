__int64 __fastcall sub_705380(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned int v4; // ecx
  _DWORD *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  _DWORD *v8; // rdi
  _DWORD *v9; // rsi
  _DWORD *v10; // rax
  int v11; // ecx
  __int64 result; // rax
  int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned int *v15; // rax
  __int64 v16; // rdx
  unsigned int *v17; // rsi
  __int64 v18; // r9
  unsigned int v19; // edi
  __int64 v20; // r13
  __int64 v21; // rbp
  unsigned int *v22; // rdx
  unsigned int v23; // edx
  __int64 v24; // r10
  __int64 v25; // rdx
  __int64 v26; // r14
  _QWORD *v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r13
  __int64 v33; // rsi
  int v34; // eax
  unsigned __int64 *v35; // rsi
  _QWORD *v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // r9d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // rax
  char **exception; // rbp
  char **v45; // rbp
  _QWORD *v46; // [rsp+0h] [rbp-78h]
  _QWORD *v47; // [rsp+0h] [rbp-78h]
  unsigned int v48; // [rsp+8h] [rbp-70h]
  unsigned int *v50; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v51; // [rsp+20h] [rbp-58h] BYREF
  int v52; // [rsp+28h] [rbp-50h]

  v2 = a2 >> 1;
  v4 = *(_DWORD *)(a1 + 192);
  v5 = *(_DWORD **)(a1 + 184);
  v6 = 20LL * ((a2 >> 1) & (v4 - 1));
  v7 = 20LL * v4;
  v8 = &v5[(unsigned __int64)v6 / 4];
  v9 = &v5[(unsigned __int64)v7 / 4];
  if ( v6 != v7 )
  {
    v10 = &v5[(unsigned __int64)v6 / 4];
    do
    {
      v11 = v10[1];
      if ( v11 == 2 )
      {
        if ( v2 == *v10 && v2 == v10[2] )
          return *(_QWORD *)(v10 + 3);
      }
      else if ( !v11 )
      {
        goto LABEL_18;
      }
      v10 += 5;
    }
    while ( v9 != v10 );
  }
  for ( ; v8 != v5; v5 += 5 )
  {
    v13 = v5[1];
    if ( v13 == 2 )
    {
      if ( v2 == *v5 && v2 == v5[2] )
      {
        v10 = v5;
        return *(_QWORD *)(v10 + 3);
      }
    }
    else if ( !v13 )
    {
      break;
    }
  }
LABEL_18:
  v50 = nullptr;
  sub_1144BD0(a1 + 40, a2, &v50);
  v15 = v50;
  if ( !v50 || (v16 = 4LL * *(v50 - 1), v17 = &v50[(unsigned __int64)v16 / 4], v50 == &v50[(unsigned __int64)v16 / 4]) )
  {
LABEL_67:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_6FFCA0((__int64 *)&v51, "level not in NRA");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v51);
    sub_233E40((__int64)&v51);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v18 = *(_QWORD *)(a1 + 176);
  if ( !v18 )
  {
    v43 = 0;
    if ( (v16 & 4) == 0 || (v43 = 4, v16 != 4) )
    {
      do
        v43 += 8;
      while ( v16 != v43 );
    }
    goto LABEL_67;
  }
  v19 = *(_DWORD *)(v18 - 4);
  v20 = 0xFFFFFFFFLL;
  v21 = 0xFFFFFFFFLL;
  do
  {
    while ( 1 )
    {
      v25 = *v15;
      if ( (unsigned int)v25 < v19 )
        goto LABEL_22;
      if ( (_DWORD)v21 == -1 )
        break;
LABEL_32:
      if ( ++v15 == v17 )
        goto LABEL_40;
    }
    while ( (_DWORD)v20 != -1 )
    {
      if ( ++v15 == v17 )
        goto LABEL_68;
      v25 = *v15;
      if ( (unsigned int)v25 < v19 )
        goto LABEL_22;
    }
    do
    {
      if ( v17 == ++v15 )
        goto LABEL_68;
      v25 = *v15;
    }
    while ( (unsigned int)v25 >= v19 );
    v21 = 0xFFFFFFFFLL;
LABEL_22:
    v22 = (unsigned int *)(v18 + 8 * v25);
    v14 = *v22;
    v23 = v22[1];
    if ( (_DWORD)v21 == -1 )
    {
      v21 = (unsigned int)v14;
    }
    else
    {
      v24 = (unsigned int)v14;
      if ( (unsigned int)v21 >= (unsigned int)v14 )
        v24 = v21;
      if ( (_DWORD)v14 != -1 )
        v21 = v24;
    }
    if ( (_DWORD)v20 != -1 )
    {
      v14 = v23;
      if ( (unsigned int)v20 >= v23 )
        v14 = (unsigned int)v20;
      if ( v23 != -1 )
        v20 = (unsigned int)v14;
      goto LABEL_32;
    }
    ++v15;
    v20 = v23;
  }
  while ( v15 != v17 );
LABEL_40:
  if ( (_DWORD)v21 == -1 )
  {
LABEL_68:
    v26 = (unsigned int)v20;
    LODWORD(v21) = -1;
    if ( (_DWORD)v20 != -1 )
      goto LABEL_45;
    goto LABEL_67;
  }
  v26 = (unsigned int)v20;
  if ( (unsigned int)v21 >= (unsigned int)v20 )
    v26 = v21;
  if ( (_DWORD)v20 == -1 )
    v26 = v21;
LABEL_45:
  v27 = *(_QWORD **)(a1 + 168);
  if ( !v27 || (unsigned int)v26 >= *((_DWORD *)v27 - 1) )
  {
    do
    {
      v36 = (_QWORD *)sub_186B270(0x10u);
      v27 = *(_QWORD **)(a1 + 168);
      *v36 = a1 + 40;
      v14 = (unsigned __int64)v36;
      v36[1] = 0;
      if ( v27 )
      {
        v37 = *((_DWORD *)v27 - 1);
        if ( v37 == *((_DWORD *)v27 - 2) )
        {
          v38 = (3 * v37 + 1) >> 1;
          v39 = 8 * v38 + 8;
          if ( 8 * v37 + 8 >= (unsigned int)v39 || v37 >= v38 )
          {
            v45 = (char **)__cxa_allocate_exception(0x28u);
            sub_6FFCA0((__int64 *)&v51, "Overflow encountered when expanding vector");
            *v45 = (char *)off_1C63128;
            sub_2333C0(v45 + 1, &v51);
            sub_233E40((__int64)&v51);
            __cxa_throw(v45, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v48 = (3 * v37 + 1) >> 1;
          v46 = (_QWORD *)v14;
          v40 = (unsigned int *)sub_186B300(v27 - 1, v39);
          v41 = v40[1];
          v27 = v40 + 2;
          *(_QWORD *)(a1 + 168) = v40 + 2;
          v14 = (unsigned __int64)v46;
          *v40 = v48;
          LODWORD(v40) = v41;
          v35 = &v27[v41];
          v34 = (_DWORD)v40 + 1;
        }
        else
        {
          v33 = v37;
          v34 = v37 + 1;
          v35 = &v27[v33];
        }
      }
      else
      {
        v47 = v36;
        v42 = (_QWORD *)sub_186B270(0x18u);
        v27 = v42 + 1;
        *v42 = 2;
        v14 = (unsigned __int64)v47;
        v34 = 1;
        *(_QWORD *)(a1 + 168) = v27;
        v35 = v27;
      }
      *v35 = v14;
      *((_DWORD *)v27 - 1) = v34;
    }
    while ( (unsigned int)v26 >= *((_DWORD *)v27 - 1) );
  }
  v28 = v27[v26];
  sub_11420C0(*(_QWORD *)v28, v2, v27, v14);
  v30 = *(_QWORD *)(v28 + 8);
  if ( !v30 || (v31 = *(unsigned int *)(v30 - 4), (_DWORD)v31 == *(_DWORD *)(v30 - 8)) )
  {
    sub_692C60((unsigned int **)(v28 + 8));
    v30 = *(_QWORD *)(v28 + 8);
    v31 = *(unsigned int *)(v30 - 4);
  }
  *(_DWORD *)(v30 + 4 * v31) = a2 & 0xFFFFFFFE;
  ++*(_DWORD *)(v30 - 4);
  sub_11420C0(a1 + 40, v2, v31, v29);
  v51 = __PAIR64__(v21, v2);
  v52 = v20;
  sub_705040(a1 + 184, (__int32 *)&v51);
  v32 = v20 << 32;
  result = v32 | (unsigned int)v21;
  if ( v50 )
  {
    sub_186B220(v50 - 2);
    return v32 | (unsigned int)v21;
  }
  return result;
}

