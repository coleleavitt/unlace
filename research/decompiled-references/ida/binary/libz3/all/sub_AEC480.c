void __fastcall sub_AEC480(_QWORD *a1, unsigned int a2, __int64 a3, _DWORD **a4)
{
  char **v4; // r13
  char **exception; // r14
  _QWORD *v6; // rbx
  _QWORD *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  _DWORD *v13; // r15
  _DWORD *i; // rbp
  __int64 v15; // rbx
  _DWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rbx
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // r12
  __int64 v33; // rax
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rbx
  unsigned int v37; // ecx
  size_t v38; // rsi
  unsigned int v39; // r12d
  unsigned int *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // r12d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  int v47; // [rsp+0h] [rbp-78h]
  int v48; // [rsp+8h] [rbp-70h]
  int v50; // [rsp+10h] [rbp-68h]
  int v51; // [rsp+18h] [rbp-60h]
  __int64 v52[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !*((_BYTE *)a1 + 40) )
    return;
  v6 = (_QWORD *)a1[3];
  if ( v6 )
  {
    v9 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v9 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v10 = *v6;
        if ( *v6 )
        {
          v11 = a1[2];
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v6 >= v9 )
          goto LABEL_10;
      }
      sub_15D7BC0(v11, v10);
      ++v6;
    }
    while ( v6 < v9 );
LABEL_10:
    v6 = (_QWORD *)a1[3];
    if ( v6 )
LABEL_11:
      *((_DWORD *)v6 - 1) = 0;
  }
  v13 = *a4;
  if ( *a4 )
  {
    for ( i = &v13[*(v13 - 1)]; i != v13; *(_DWORD *)(v23 + 4) = 1 )
    {
      while ( 1 )
      {
        v21 = *v13 ^ 1;
        v22 = *(_QWORD *)(*a1 + 104LL);
        if ( v21 != dword_1C7ED00 )
          break;
        v15 = *(_QWORD *)(v22 + 856);
        if ( v15 )
          goto LABEL_18;
        v16 = (_DWORD *)a1[3];
        if ( !v16 )
          goto LABEL_26;
LABEL_20:
        v17 = *(v16 - 1);
        if ( v17 == *(v16 - 2) )
        {
          v37 = (3 * v17 + 1) >> 1;
          v38 = 8 * v37 + 8;
          v39 = v37;
          if ( 8 * v17 + 8 >= (unsigned int)v38 || v17 >= v37 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v52, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v52);
            sub_233E40((__int64)v52);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v40 = (unsigned int *)sub_186B300(v16 - 2, v38);
          v41 = v40[1];
          v16 = v40 + 2;
          *v40 = v39;
          a1[3] = v40 + 2;
          LODWORD(v40) = v41;
          v20 = (__int64 *)&v16[2 * v41];
          v19 = (_DWORD)v40 + 1;
        }
        else
        {
          v18 = v17;
          v19 = v17 + 1;
          v20 = (__int64 *)&v16[2 * v18];
        }
        ++v13;
        *v20 = v15;
        *(v16 - 1) = v19;
        if ( i == v13 )
          goto LABEL_27;
      }
      if ( v21 == dword_1C7ECFC )
      {
        v15 = *(_QWORD *)(v22 + 864);
        if ( v15 )
          goto LABEL_18;
      }
      else
      {
        v15 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (v21 >> 1));
        if ( (v21 & 1) == 0 )
        {
          if ( !v15 )
            goto LABEL_19;
LABEL_18:
          ++*(_DWORD *)(v15 + 8);
          goto LABEL_19;
        }
        v15 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
        if ( v15 )
          goto LABEL_18;
      }
LABEL_19:
      v16 = (_DWORD *)a1[3];
      if ( v16 )
        goto LABEL_20;
LABEL_26:
      v23 = sub_186B270(0x18u);
      *(_QWORD *)v23 = 2;
      ++v13;
      a1[3] = v23 + 8;
      *(_QWORD *)(v23 + 8) = v15;
    }
  }
LABEL_27:
  v24 = *(_QWORD *)(*a1 + 104LL);
  if ( a2 == dword_1C7ED00 )
  {
    v25 = *(_QWORD *)(v24 + 856);
    if ( !v25 )
      goto LABEL_32;
    goto LABEL_31;
  }
  if ( a2 == dword_1C7ECFC )
  {
    v25 = *(_QWORD *)(v24 + 864);
    if ( !v25 )
      goto LABEL_32;
    goto LABEL_31;
  }
  v25 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (a2 >> 1));
  if ( (a2 & 1) != 0 )
  {
    v25 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
    if ( !v25 )
      goto LABEL_32;
    goto LABEL_31;
  }
  if ( v25 )
LABEL_31:
    ++*(_DWORD *)(v25 + 8);
LABEL_32:
  v26 = (_QWORD *)a1[3];
  if ( v26 )
  {
    v27 = *((_DWORD *)v26 - 1);
    if ( v27 == *((_DWORD *)v26 - 2) )
    {
      v42 = (3 * v27 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v43 || v27 >= v42 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v52, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v52);
        sub_233E40((__int64)v52);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = (unsigned int *)sub_186B300(v26 - 1, v43);
      v45 = v44[1];
      v26 = v44 + 2;
      *v44 = v42;
      a1[3] = v44 + 2;
      LODWORD(v44) = v45;
      v30 = &v26[v45];
      v29 = (_DWORD)v44 + 1;
    }
    else
    {
      v28 = v27;
      v29 = v27 + 1;
      v30 = &v26[v28];
    }
  }
  else
  {
    v46 = (_QWORD *)sub_186B270(0x18u);
    v26 = v46 + 1;
    *v46 = 2;
    v29 = 1;
    a1[3] = v26;
    v30 = v26;
  }
  v31 = a1[1];
  *v30 = v25;
  *((_DWORD *)v26 - 1) = v29;
  v32 = *(_QWORD *)(v31 + 848);
  sub_180C5A0(v52, "smt");
  v33 = sub_15E3760(v31, (int)v52, 0, 0, v32, v47, v48, v50, v51, v52[0], (void *)v52[1]);
  v36 = v33;
  if ( v33 )
  {
    ++*(_DWORD *)(v33 + 8);
    sub_AEAD60(a1, (__int64 *)((char *)&dword_0 + 2), (__int64)(a1 + 2), v33, v34, v35);
    v12 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v31, v36);
  }
  else
  {
    sub_AEAD60(a1, (__int64 *)((char *)&dword_0 + 2), (__int64)(a1 + 2), 0, v34, v35);
  }
}

