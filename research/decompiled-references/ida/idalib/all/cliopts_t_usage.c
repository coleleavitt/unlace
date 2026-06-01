void __fastcall __noreturn cliopts_t_usage(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r15
  _BYTE *v7; // rsi
  __int64 v8; // r14
  const void *v9; // r14
  const char *v10; // rdi
  __int64 v11; // r13
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // r11
  _BYTE *v15; // rsi
  size_t v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // r15
  _BYTE *v20; // rsi
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rdx
  _BYTE *v25; // rsi
  int (**v26)(const char *, ...); // rbx
  const char *v27; // r12
  const char *v28; // rdi
  const char *v29; // rax
  __int64 v30; // [rsp+0h] [rbp-78h]
  __int64 v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+8h] [rbp-70h]
  size_t v33; // [rsp+8h] [rbp-70h]
  __int64 v34; // [rsp+8h] [rbp-70h]
  size_t v35; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v38; // [rsp+28h] [rbp-50h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v38 = 0;
  ptr = nullptr;
  v30 = v3;
  if ( !v3 )
  {
    v26 = *(int (***)(const char *, ...))(a1 + 72);
    v27 = haystack;
    if ( v26 )
      goto LABEL_30;
    goto LABEL_36;
  }
  v4 = 0;
  while ( 1 )
  {
    v21 = *(_QWORD *)a1 + 40 * v4;
    if ( *(_BYTE *)v21 )
    {
      sub_35A910((__int64 *)&ptr);
      goto LABEL_15;
    }
    v22 = v38;
    if ( (_QWORD)v38 )
    {
      v23 = v38 + 7;
      v24 = v38 + 8;
      v25 = ptr;
      v22 = v38 - 1;
      if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)(v38 + 8) )
        goto LABEL_26;
    }
    else
    {
      v25 = ptr;
      v24 = 9;
      v23 = 8;
      if ( *((_QWORD *)&v38 + 1) < 9u )
      {
LABEL_26:
        v34 = v24;
        ptr = (void *)qvector_reserve(&ptr, v25, v24, 1);
        v24 = v34;
        v25 = ptr;
      }
    }
    *(_QWORD *)&v38 = v24;
    v25[v23] = 0;
    *(_QWORD *)((char *)ptr + v22) = 0x2020202020202020LL;
LABEL_15:
    if ( *(_QWORD *)(v21 + 8) )
      sub_35A910((__int64 *)&ptr);
    v8 = v38;
    if ( (_QWORD)v38 )
    {
      v5 = v38 + 1;
      v6 = v38;
      v7 = ptr;
      v8 = v38 - 1;
      if ( *((_QWORD *)&v38 + 1) >= (unsigned __int64)(v38 + 1) )
        goto LABEL_4;
    }
    else
    {
      v7 = ptr;
      v5 = 2;
      v6 = 1;
      if ( *((_QWORD *)&v38 + 1) >= 2u )
        goto LABEL_4;
    }
    v31 = v5;
    ptr = (void *)qvector_reserve(&ptr, v7, v5, 1);
    v5 = v31;
    v7 = ptr;
LABEL_4:
    *(_QWORD *)&v38 = v5;
    v7[v6] = 0;
    *((_BYTE *)ptr + v8) = 32;
    v9 = *(const void **)(v21 + 16);
    if ( v9 )
    {
      v10 = *(const char **)(v21 + 16);
      v11 = v38;
      v12 = strlen(v10);
      v13 = v12;
      v14 = v12;
      if ( v11 )
      {
        --v11;
        v14 = v12 + v11;
      }
      v15 = ptr;
      v16 = v14 + 1;
      if ( *((_QWORD *)&v38 + 1) < v14 + 1 )
      {
        v35 = v14;
        v33 = v14 + 1;
        ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
        v14 = v35;
        v15 = ptr;
        v16 = v33;
      }
      *(_QWORD *)&v38 = v16;
      v15[v14] = 0;
      memmove((char *)ptr + v11, v9, v13);
    }
    v17 = v38;
    if ( (_QWORD)v38 )
    {
      v18 = v38 + 1;
      v19 = v38;
      v20 = ptr;
      v17 = v38 - 1;
      if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)(v38 + 1) )
        goto LABEL_21;
    }
    else
    {
      v20 = ptr;
      v18 = 2;
      v19 = 1;
      if ( *((_QWORD *)&v38 + 1) < 2u )
      {
LABEL_21:
        v32 = v17;
        ptr = (void *)qvector_reserve(&ptr, v20, v18, 1);
        v17 = v32;
        v20 = ptr;
      }
    }
    *(_QWORD *)&v38 = v18;
    ++v4;
    v20[v19] = 0;
    *((_BYTE *)ptr + v17) = 10;
    if ( v30 == v4 )
    {
      v26 = *(int (***)(const char *, ...))(a1 + 72);
      if ( v26 )
      {
LABEL_28:
        v27 = haystack;
        if ( (_QWORD)v38 )
          v27 = (const char *)ptr;
LABEL_30:
        v28 = haystack;
        if ( *(_QWORD *)(a1 + 32) )
          v28 = *(const char **)(a1 + 24);
        v29 = (const char *)qbasename(v28);
        ((void (*)(const char *, ...))v26)("Usage: %s [options]\n%s", v29, v27);
        if ( *(_QWORD *)(a1 + 56) > 1u )
          ((void (*)(const char *, ...))v26)("\n%s\n", *(const char **)(a1 + 48));
        qexit(a2);
      }
LABEL_36:
      v26 = &printf;
      goto LABEL_28;
    }
  }
}
