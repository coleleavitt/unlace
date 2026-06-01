char __fastcall sub_8554B0(_QWORD *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // r15
  _QWORD *v4; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 *v18; // rcx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  void *v29; // r14
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // r14d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // r12d
  size_t v39; // rsi
  __int64 v40; // rcx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rax
  void *v48; // [rsp+8h] [rbp-70h]
  void *v49; // [rsp+8h] [rbp-70h]
  __int64 v50; // [rsp+20h] [rbp-58h] BYREF
  __int64 v51; // [rsp+28h] [rbp-50h]
  __int64 v52; // [rsp+30h] [rbp-48h] BYREF
  __int64 v53; // [rsp+38h] [rbp-40h]

  v3 = a2;
  v4 = a1 + 104;
  LOBYTE(v6) = sub_1668690(a1 + 104, a2);
  if ( (_BYTE)v6 )
  {
    v7 = a1[10];
    v8 = (_QWORD *)sub_180C100(v7 + 2144, 16);
    v9 = *(_QWORD **)(v7 + 2128);
    v10 = v8;
    *v8 = off_1C54DF0;
    v8[1] = a1 + 33;
    if ( v9 )
    {
      v11 = *((_DWORD *)v9 - 1);
      if ( v11 == *((_DWORD *)v9 - 2) )
      {
        v34 = (3 * v11 + 1) >> 1;
        v35 = 8 * v34 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v35 || v11 >= v34 )
          goto LABEL_46;
        v36 = (unsigned int *)sub_186B300(v9 - 1, v35);
        v37 = v36[1];
        v9 = v36 + 2;
        *(_QWORD *)(v7 + 2128) = v36 + 2;
        *v36 = v34;
        LODWORD(v36) = v37;
        v14 = &v9[v37];
        v13 = (_DWORD)v36 + 1;
      }
      else
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = &v9[v12];
      }
    }
    else
    {
      v46 = (_QWORD *)sub_186B270(0x18u);
      v9 = v46 + 1;
      *v46 = 2;
      v13 = 1;
      *(_QWORD *)(v7 + 2128) = v9;
      v14 = v9;
    }
    *v14 = v10;
    *((_DWORD *)v9 - 1) = v13;
    v15 = (__int64 *)a1[33];
    if ( !v15 )
    {
      v6 = sub_186B270(0x18u);
      v15 = (__int64 *)(v6 + 8);
      *(_QWORD *)v6 = 2;
      LODWORD(v6) = 1;
      a1[33] = v15;
      v18 = v15;
      goto LABEL_12;
    }
    v16 = *((_DWORD *)v15 - 1);
    if ( v16 != *((_DWORD *)v15 - 2) )
    {
      v17 = v16;
      LODWORD(v6) = v16 + 1;
      v18 = &v15[v17];
LABEL_12:
      *v18 = v3;
      *((_DWORD *)v15 - 1) = v6;
      goto LABEL_2;
    }
    v38 = (3 * v16 + 1) >> 1;
    v39 = 8 * v38 + 8;
    if ( 8 * v16 + 8 < (unsigned int)v39 && v16 < v38 )
    {
      v6 = sub_186B300(v15 - 1, v39);
      v40 = *(unsigned int *)(v6 + 4);
      v15 = (__int64 *)(v6 + 8);
      *(_DWORD *)v6 = v38;
      a1[33] = v6 + 8;
      LODWORD(v6) = v40;
      v18 = &v15[v40];
      LODWORD(v6) = v6 + 1;
      goto LABEL_12;
    }
LABEL_46:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v50, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v50);
    sub_233E40((__int64)&v50);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_2:
  if ( *(_WORD *)(v3 + 4) )
    return v6;
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
  if ( !v6 || *(_DWORD *)v6 != 5 )
    return v6;
  v19 = *(_DWORD *)(v6 + 4);
  if ( v19 == 10 )
  {
    if ( *(_DWORD *)(v3 + 24) == 2 )
      goto LABEL_37;
LABEL_31:
    if ( *(_DWORD *)(v6 + 4) != 22 || *(_DWORD *)(v3 + 24) != 2 )
      return v6;
    goto LABEL_37;
  }
  if ( v19 != 11 )
  {
    if ( v19 == 15 )
    {
      if ( *(_DWORD *)(v3 + 24) == 2 )
      {
        v50 = 0;
        v51 = 0;
        v52 = 1;
        v53 = 0;
        sub_182CBA0(qword_1C7F2C0, &v52);
        v44 = a1[105];
        BYTE4(v52) &= ~1u;
        LODWORD(v52) = 1;
        if ( !v44 )
        {
          sub_16669E0(v4);
          v44 = a1[105];
        }
        sub_166A700(v44, (unsigned int)&v50, 1, v41, v42, v43);
        v49 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v50);
        sub_182CBA0(v49, &v52);
        v45 = sub_15E1B70(a1[104]);
        v50 = 0;
        v51 = 0;
        v3 = v45;
        v52 = 1;
        v53 = 0;
        sub_182CBA0(qword_1C7F2C0, &v52);
        v28 = a1[105];
        BYTE4(v52) &= ~1u;
        LODWORD(v52) = 1;
        if ( !v28 )
        {
          sub_16669E0(v4);
          v28 = a1[105];
        }
LABEL_22:
        sub_166A700(v28, (unsigned int)&v50, 1, v25, v26, v27);
        v29 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v50);
        sub_182CBA0(v29, &v52);
        v6 = sub_15E1B70(a1[104]);
        goto LABEL_23;
      }
    }
    else if ( v19 == 16 )
    {
      if ( *(_DWORD *)(v3 + 24) != 2 )
        return v6;
      v50 = 0;
      v51 = 0;
      v52 = 1;
      v53 = 0;
      sub_182CBA0(qword_1C7F2C0, &v52);
      v23 = a1[105];
      BYTE4(v52) &= ~1u;
      LODWORD(v52) = 1;
      if ( !v23 )
      {
        sub_16669E0(v4);
        v23 = a1[105];
      }
      sub_166A700(v23, (unsigned int)&v50, 1, v20, v21, v22);
      v48 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v50);
      sub_182CBA0(v48, &v52);
      v24 = sub_15E1B70(a1[104]);
      v50 = 0;
      v51 = 0;
      v3 = v24;
      v52 = 1;
      v53 = 0;
      sub_182CBA0(qword_1C7F2C0, &v52);
      v28 = a1[105];
      BYTE4(v52) &= ~1u;
      LODWORD(v52) = 1;
      if ( !v28 )
      {
        sub_16669E0(v4);
        v28 = a1[105];
      }
      goto LABEL_22;
    }
    goto LABEL_31;
  }
  if ( *(_DWORD *)(v3 + 24) != 2 )
    goto LABEL_31;
LABEL_37:
  v6 = sub_15E1B70(a1[104]);
LABEL_23:
  if ( v6 )
  {
    v30 = sub_7E58D0((__int64)a1, v3, v6);
    LOBYTE(v6) = sub_7E5160((__int64)a1, v30, nullptr, v31, v32, v33);
  }
  return v6;
}

