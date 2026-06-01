void __fastcall sub_AEB810(_QWORD *a1, unsigned int *a2, unsigned int a3)
{
  char **v3; // r14
  char **exception; // r13
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  unsigned int *v13; // r14
  __int64 v14; // rbx
  _DWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rbx
  __int64 *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // r12
  _QWORD *v33; // rax
  unsigned int v34; // r8d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // ecx
  size_t v39; // rsi
  unsigned int v40; // r14d
  unsigned int *v41; // rax
  __int64 v42; // rcx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rbx
  __int64 v46; // rdi
  unsigned int *v47; // [rsp+0h] [rbp-98h]
  __int64 v48; // [rsp+0h] [rbp-98h]
  unsigned int v49; // [rsp+8h] [rbp-90h]
  int v50; // [rsp+14h] [rbp-84h]
  __int64 v51; // [rsp+18h] [rbp-80h]
  __int64 v52[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v53[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( !*((_BYTE *)a1 + 40) )
    return;
  v8 = (_QWORD *)a1[3];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_10;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[2];
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_9;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_9:
    v8 = (_QWORD *)a1[3];
    if ( v8 )
LABEL_10:
      *((_DWORD *)v8 - 1) = 0;
  }
  if ( a3 )
  {
    v13 = a2;
    v47 = &a2[a3];
    do
    {
      while ( 1 )
      {
        v20 = v13[2];
        v21 = *(_QWORD *)(*a1 + 104LL);
        if ( v20 != dword_1C7ED00 )
          break;
        v14 = *(_QWORD *)(v21 + 856);
        if ( v14 )
          goto LABEL_16;
        v15 = (_DWORD *)a1[3];
        if ( !v15 )
          goto LABEL_24;
LABEL_18:
        v16 = *(v15 - 1);
        if ( v16 == *(v15 - 2) )
        {
          v34 = (3 * v16 + 1) >> 1;
          v35 = 8 * v34 + 8;
          if ( 8 * v16 + 8 >= (unsigned int)v35 || v16 >= v34 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v53, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v53);
            sub_233E40((__int64)v53);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v49 = (3 * v16 + 1) >> 1;
          v36 = (unsigned int *)sub_186B300(v15 - 2, v35);
          v37 = v36[1];
          v15 = v36 + 2;
          a1[3] = v36 + 2;
          *v36 = v49;
          LODWORD(v36) = v37;
          v19 = (__int64 *)&v15[2 * v37];
          v18 = (_DWORD)v36 + 1;
        }
        else
        {
          v17 = v16;
          v18 = v16 + 1;
          v19 = (__int64 *)&v15[2 * v17];
        }
        *v19 = v14;
        ++v13;
        *(v15 - 1) = v18;
        if ( v47 == v13 )
          goto LABEL_25;
      }
      if ( v20 == dword_1C7ECFC )
      {
        v14 = *(_QWORD *)(v21 + 864);
        if ( v14 )
          goto LABEL_16;
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (v20 >> 1));
        if ( (v20 & 1) == 0 )
        {
          if ( !v14 )
            goto LABEL_17;
LABEL_16:
          ++*(_DWORD *)(v14 + 8);
          goto LABEL_17;
        }
        v14 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
        if ( v14 )
          goto LABEL_16;
      }
LABEL_17:
      v15 = (_DWORD *)a1[3];
      if ( v15 )
        goto LABEL_18;
LABEL_24:
      v22 = sub_186B270(0x18u);
      *(_QWORD *)v22 = 2;
      ++v13;
      a1[3] = v22 + 8;
      *(_QWORD *)(v22 + 8) = v14;
      *(_DWORD *)(v22 + 4) = 1;
    }
    while ( v47 != v13 );
  }
LABEL_25:
  sub_AE9120(v52, a1, 0, 0);
  v51 = v52[1];
  v48 = v52[0];
  sub_AEAD60(a1, nullptr, (__int64)(a1 + 2), v52[0], v23, v24);
  while ( a3 < *a2 )
  {
    v31 = a2[a3 + 2];
    v32 = *(_QWORD *)(*a1 + 104LL);
    if ( dword_1C7ED00 != v31 )
    {
      if ( dword_1C7ECFC == v31 )
      {
        v25 = *(_QWORD *)(v32 + 864);
        if ( !v25 )
          goto LABEL_30;
      }
      else
      {
        v25 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (v31 >> 1));
        if ( (v31 & 1) == 0 )
        {
          if ( v25 )
            goto LABEL_29;
LABEL_30:
          v26 = (__int64 *)a1[3];
          if ( !v26 )
            goto LABEL_38;
          goto LABEL_31;
        }
        v25 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
        if ( !v25 )
          goto LABEL_30;
      }
LABEL_29:
      ++*(_DWORD *)(v25 + 8);
      goto LABEL_30;
    }
    v25 = *(_QWORD *)(v32 + 856);
    if ( v25 )
      goto LABEL_29;
    v26 = (__int64 *)a1[3];
    if ( !v26 )
    {
LABEL_38:
      v33 = (_QWORD *)sub_186B270(0x18u);
      v26 = v33 + 1;
      *v33 = 2;
      v29 = 1;
      a1[3] = v26;
      v30 = v26;
      goto LABEL_33;
    }
LABEL_31:
    v27 = *((_DWORD *)v26 - 1);
    if ( v27 == *((_DWORD *)v26 - 2) )
    {
      v38 = (3 * v27 + 1) >> 1;
      v39 = 8 * v38 + 8;
      v40 = v38;
      if ( 8 * v27 + 8 >= (unsigned int)v39 || v27 >= v38 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v53, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v53);
        sub_233E40((__int64)v53);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = (unsigned int *)sub_186B300(v26 - 1, v39);
      v42 = v41[1];
      v26 = (__int64 *)(v41 + 2);
      *v41 = v40;
      a1[3] = v41 + 2;
      LODWORD(v41) = v42;
      v30 = &v26[v42];
      v29 = (_DWORD)v41 + 1;
    }
    else
    {
      v28 = v27;
      v29 = v27 + 1;
      v30 = &v26[v28];
    }
LABEL_33:
    *v30 = v25;
    ++a3;
    *((_DWORD *)v26 - 1) = v29;
  }
  sub_AE9120(v53, a1, 4, 0);
  v45 = v53[0];
  if ( v48 )
  {
    v46 = v53[1];
    v50 = *(_DWORD *)(v48 + 8);
    *(_DWORD *)(v48 + 8) = v50 - 1;
    if ( v50 == 1 )
      sub_15D7BC0(v46, v48);
  }
  sub_AEAD60(a1, (__int64 *)&byte_4, (__int64)(a1 + 2), v45, v43, v44);
  if ( v45 )
  {
    v12 = (*(_DWORD *)(v45 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v51, v45);
  }
}

