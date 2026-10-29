char __fastcall Z3_mk_datatypes(__int64 a1, __int64 a2, char **a3, __int64 a4, __int64 **a5)
{
  char **exception; // r12
  int v7; // r13d
  char v9; // dl
  char *v12; // rbx
  __int64 **v13; // r14
  __int64 **v14; // r12
  _QWORD *v15; // rbx
  __int64 *v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  size_t v23; // rsi
  unsigned int v24; // r13d
  unsigned int *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // r13
  unsigned int v30; // r12d
  __int64 *v31; // r13
  __int64 v32; // rcx
  _QWORD *v33; // r9
  unsigned int i; // edx
  __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // r10
  bool v38; // zf
  __int64 j; // r13
  __int64 k; // r13
  _QWORD *v41; // rbp
  __int64 v42; // rsi
  char *v43; // rdi
  _QWORD *v44; // rax
  __int64 v46; // [rsp+0h] [rbp-C8h]
  __int64 v47; // [rsp+0h] [rbp-C8h]
  __int64 v48; // [rsp+0h] [rbp-C8h]
  char *v49; // [rsp+8h] [rbp-C0h]
  _QWORD *v50; // [rsp+8h] [rbp-C0h]
  __int64 v52; // [rsp+18h] [rbp-B0h]
  unsigned int v53; // [rsp+24h] [rbp-A4h]
  __int64 v54; // [rsp+28h] [rbp-A0h]
  __int64 **v55; // [rsp+30h] [rbp-98h]
  char v57; // [rsp+4Bh] [rbp-7Dh]
  int v58; // [rsp+4Ch] [rbp-7Ch]
  _BYTE v59[32]; // [rsp+50h] [rbp-78h] BYREF
  char *v60; // [rsp+70h] [rbp-58h] BYREF
  _QWORD *v61; // [rsp+78h] [rbp-50h]

  v7 = a2;
  v9 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v57 = v9;
  if ( v9 )
  {
    sub_295840(a1, a2, a3);
    v55 = a5;
    v54 = a4;
    v58 = a2;
  }
  else
  {
    v55 = nullptr;
    v54 = 0;
    v58 = 0;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  v12 = *(char **)(a1 + 232);
  v49 = v12;
  sub_24FC40(a1);
  sub_15F01E0(v59, v12);
  if ( (_DWORD)a2 )
  {
    v13 = a5;
    v14 = &a5[(unsigned int)a2];
    v15 = nullptr;
    do
    {
      v17 = **v13;
      if ( v17 )
        v18 = *(_DWORD *)(v17 - 4);
      else
        v18 = 0;
      v19 = sub_24D140(a1, *a3, v18, v17);
      v20 = v19;
      if ( v15 )
      {
        v21 = *((_DWORD *)v15 - 1);
        if ( v21 == *((_DWORD *)v15 - 2) )
        {
          v22 = (3 * v21 + 1) >> 1;
          v23 = 8 * v22 + 8;
          v24 = v22;
          if ( 8 * v21 + 8 >= (unsigned int)v23 || v21 >= v22 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_A64A2(&v60);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v60);
            sub_233E40((__int64)&v60);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v46 = v20;
          v25 = (unsigned int *)sub_186B300(v15 - 1, v23);
          v26 = v25[1];
          v15 = v25 + 2;
          v20 = v46;
          *v25 = v24;
          LODWORD(v25) = v26;
          v16 = &v15[v26];
          v7 = (_DWORD)v25 + 1;
        }
        else
        {
          v7 = v21 + 1;
          v16 = &v15[v21];
        }
      }
      else
      {
        v46 = v19;
        v44 = (_QWORD *)sub_186B270(0x18u);
        v15 = v44 + 1;
        v20 = v46;
        *v44 = 2;
        v7 = 1;
        v16 = v44 + 1;
      }
      ++v13;
      *v16 = v20;
      ++a3;
      *((_DWORD *)v15 - 1) = v7;
    }
    while ( v14 != v13 );
    v27 = *(_QWORD *)(a1 + 1480);
    v61 = nullptr;
    v60 = v49;
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 1480);
    v15 = nullptr;
    v61 = nullptr;
    v60 = v49;
  }
  LOBYTE(v28) = sub_15FA930(v27, v7, (_DWORD)v15, 0, 0, (unsigned int)&v60, v46, (_DWORD)v49);
  if ( (_BYTE)v28 )
  {
    v29 = v61;
    if ( v61 )
    {
      v30 = 0;
      do
      {
        if ( v30 >= *((_DWORD *)v29 - 1) )
        {
          if ( v57 && v58 )
            goto LABEL_31;
          goto LABEL_36;
        }
        v47 = v29[v30];
        sub_251EF0(a1, v47);
        *(_QWORD *)(a4 + 8LL * v30) = v47;
        v31 = a5[v30];
        v28 = sub_15F6BE0(v59, v47);
        v32 = *v31;
        v33 = (_QWORD *)v28;
        for ( i = 0; v32; ++i )
        {
          if ( i >= *(_DWORD *)(v32 - 4) )
            break;
          v35 = *(_QWORD *)(v32 + 8LL * i);
          v28 = *(_QWORD *)(*v33 + 8LL * i);
          if ( v28 )
            ++*(_DWORD *)(v28 + 8);
          v36 = *(_QWORD *)(v35 + 48);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v35 + 56);
            v38 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v38 )
            {
              v53 = i;
              v52 = v35;
              v50 = v33;
              v48 = v28;
              sub_15D7BC0(v37, v36);
              v32 = *v31;
              i = v53;
              v35 = v52;
              v33 = v50;
              v28 = v48;
            }
          }
          *(_QWORD *)(v35 + 48) = v28;
        }
        v29 = v61;
        ++v30;
      }
      while ( v61 );
      if ( !v57 )
        goto LABEL_60;
      if ( !v58 )
        goto LABEL_44;
    }
    else
    {
      if ( !v57 )
      {
LABEL_60:
        if ( v15 )
          LOBYTE(v28) = sub_186B220(v15 - 1);
        return v28;
      }
      if ( !v58 )
      {
        if ( v15 )
          sub_186B220(v15 - 1);
LABEL_58:
        LOBYTE(v28) = byte_1C7EBA0;
        byte_1C7EBA0 = 1;
        return v28;
      }
    }
LABEL_31:
    for ( j = 0; j != v58; ++j )
      sub_2BB770(*(_QWORD *)(v54 + 8 * j), 3, (unsigned int)j);
    for ( k = 0; k != v58; ++k )
      LOBYTE(v28) = sub_2BB770(v55[k], 4, (unsigned int)k);
  }
  else
  {
    LOBYTE(v28) = sub_24EA30(a1, 3, 0);
  }
  v29 = v61;
  if ( v61 )
  {
LABEL_36:
    v28 = *((unsigned int *)v29 - 1);
    v41 = &v29[v28];
    if ( v29 >= v41 )
      goto LABEL_43;
    do
    {
      while ( 1 )
      {
        v42 = *v29;
        if ( *v29 )
        {
          v43 = v60;
          v38 = (*(_DWORD *)(v42 + 8))-- == 1;
          if ( v38 )
            break;
        }
        if ( ++v29 >= v41 )
          goto LABEL_42;
      }
      LOBYTE(v28) = sub_15D7BC0(v43, v42);
      ++v29;
    }
    while ( v29 < v41 );
LABEL_42:
    v29 = v61;
    if ( v61 )
LABEL_43:
      LOBYTE(v28) = sub_186B220(v29 - 1);
  }
LABEL_44:
  if ( v15 )
    LOBYTE(v28) = sub_186B220(v15 - 1);
  if ( v57 )
    goto LABEL_58;
  return v28;
}

