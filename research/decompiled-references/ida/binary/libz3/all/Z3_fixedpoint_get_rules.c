_QWORD *__fastcall Z3_fixedpoint_get_rules(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char v4; // r14
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 *v8; // r12
  __int64 *v9; // r14
  __int64 v10; // r13
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  int v13; // eax
  _QWORD *v14; // rsi
  unsigned int v15; // eax
  _QWORD *v16; // r12
  _QWORD *v17; // r15
  __int64 v18; // rsi
  int v19; // eax
  __int64 *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r13
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // r9d
  size_t v26; // rsi
  unsigned int v27; // r14d
  unsigned int *v28; // rax
  __int64 v29; // rsi
  __int64 *v30; // rbp
  unsigned __int64 v31; // r12
  __int64 v32; // rsi
  bool v33; // zf
  __int64 *v34; // rbp
  __int64 *v35; // r12
  __int64 v36; // rsi
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int v40; // r15d
  unsigned int *v41; // rax
  __int64 v42; // rsi
  _QWORD *v43; // rax
  char v44; // [rsp+Fh] [rbp-99h]
  __int64 v45; // [rsp+28h] [rbp-80h] BYREF
  __int64 v46; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v47; // [rsp+38h] [rbp-70h]
  __int64 v48; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v49; // [rsp+48h] [rbp-60h]
  __int64 v50[11]; // [rsp+50h] [rbp-58h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v44 = v4;
  if ( v4 )
    sub_2A0190(a1);
  v5 = *(_QWORD *)(a1 + 232);
  v6 = (_QWORD *)sub_186B270(0x28u);
  sub_2518F0((__int64)v6, a1);
  v6[3] = v5;
  *v6 = &off_1C4CA20;
  v6[4] = 0;
  sub_24FBE0(a1, (__int64)v6);
  v7 = *(_QWORD *)(a2 + 24);
  v46 = v5;
  v48 = v5;
  v47 = nullptr;
  v49 = nullptr;
  v45 = 0;
  sub_64F660(v7 + 48, &v46, &v48, &v45);
  v8 = v47;
  if ( v47 )
  {
    v9 = &v47[*((unsigned int *)v47 - 1)];
    if ( v47 != v9 )
    {
      v10 = *v47;
      v11 = (_QWORD *)v6[4];
      if ( *v47 )
        ++*(_DWORD *)(v10 + 8);
      if ( v11 )
        goto LABEL_12;
      v12 = (_QWORD *)sub_186B270(0x18u);
      v11 = v12 + 1;
      *v12 = 2;
      v13 = 1;
      v6[4] = v11;
      v14 = v11;
      while ( 1 )
      {
        ++v8;
        *v14 = v10;
        *((_DWORD *)v11 - 1) = v13;
        if ( v9 == v8 )
          break;
        while ( 1 )
        {
          v10 = *v8;
          if ( *v8 )
            ++*(_DWORD *)(v10 + 8);
LABEL_12:
          v15 = *((_DWORD *)v11 - 1);
          if ( v15 == *((_DWORD *)v11 - 2) )
            break;
          ++v8;
          v11[v15] = v10;
          *((_DWORD *)v11 - 1) = v15 + 1;
          if ( v9 == v8 )
            goto LABEL_14;
        }
        v38 = (3 * v15 + 1) >> 1;
        v39 = 8 * v38 + 8;
        v40 = v38;
        if ( 8 * v15 + 8 >= (unsigned int)v39 || v15 >= v38 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v50, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v50);
          sub_233E40((__int64)v50);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v11 - 1, v39);
        v42 = v41[1];
        v11 = v41 + 2;
        *v41 = v40;
        v6[4] = v41 + 2;
        LODWORD(v41) = v42;
        v14 = &v11[v42];
        v13 = (_DWORD)v41 + 1;
      }
    }
  }
LABEL_14:
  if ( v49 )
  {
    v16 = &v49[*((unsigned int *)v49 - 1)];
    if ( v16 != v49 )
    {
      v17 = v49;
      while ( 1 )
      {
        v21 = sub_15E1A70(v5);
        v22 = v21;
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        v23 = (_QWORD *)v6[4];
        if ( !v23 )
          break;
        v24 = *((_DWORD *)v23 - 1);
        if ( v24 == *((_DWORD *)v23 - 2) )
        {
          v25 = (3 * v24 + 1) >> 1;
          v26 = 8 * v25 + 8;
          v27 = v25;
          if ( 8 * v24 + 8 >= (unsigned int)v26 || v24 >= v25 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v50, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v50);
            sub_233E40((__int64)v50);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = (unsigned int *)sub_186B300(v23 - 1, v26);
          v29 = v28[1];
          *v28 = v27;
          ++v17;
          v6[4] = v28 + 2;
          *(_QWORD *)&v28[2 * v29 + 2] = v22;
          v28[1] = v29 + 1;
          if ( v16 == v17 )
            goto LABEL_26;
        }
        else
        {
          v18 = v24;
          v19 = v24 + 1;
          v20 = &v23[v18];
LABEL_18:
          ++v17;
          *v20 = v22;
          *((_DWORD *)v23 - 1) = v19;
          if ( v16 == v17 )
            goto LABEL_26;
        }
      }
      v43 = (_QWORD *)sub_186B270(0x18u);
      v23 = v43 + 1;
      *v43 = 2;
      v19 = 1;
      v6[4] = v23;
      v20 = v23;
      goto LABEL_18;
    }
  }
LABEL_26:
  if ( v44 )
    sub_2BB620(v6);
  if ( v45 )
    sub_186B220((void *)(v45 - 8));
  v30 = v49;
  if ( v49 )
  {
    v31 = (unsigned __int64)&v49[*((unsigned int *)v49 - 1)];
    if ( (unsigned __int64)v49 >= v31 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v33 )
            break;
        }
        if ( (unsigned __int64)++v30 >= v31 )
          goto LABEL_37;
      }
      sub_15D7BC0(v48, v32);
      ++v30;
    }
    while ( (unsigned __int64)v30 < v31 );
LABEL_37:
    v30 = v49;
    if ( v49 )
LABEL_38:
      sub_186B220(v30 - 1);
  }
  v34 = v47;
  if ( v47 )
  {
    v35 = &v47[*((unsigned int *)v47 - 1)];
    if ( v47 >= v35 )
      goto LABEL_47;
    do
    {
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 )
        {
          v33 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v33 )
            break;
        }
        if ( ++v34 >= v35 )
          goto LABEL_46;
      }
      sub_15D7BC0(v46, v36);
      ++v34;
    }
    while ( v34 < v35 );
LABEL_46:
    v34 = v47;
    if ( v47 )
LABEL_47:
      sub_186B220(v34 - 1);
  }
  if ( v44 )
    byte_1C7EBA0 = 1;
  return v6;
}

