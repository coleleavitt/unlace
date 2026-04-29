__int64 __fastcall sub_20F160(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v9; // rbp
  char *v10; // r12
  char *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // rbx
  size_t v17; // r12
  char *v18; // rbp
  __int64 v19; // r13
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-80h]
  __int64 v27; // [rsp+10h] [rbp-78h] BYREF
  __int64 v28; // [rsp+18h] [rbp-70h] BYREF
  __int128 v29; // [rsp+20h] [rbp-68h] BYREF
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  int v31; // [rsp+38h] [rbp-50h]
  __int16 v32; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a4 + 72);
  if ( !*(_QWORD *)(v4 + 32) )
    return 0;
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)v5 != 10 )
    return 0;
  v7 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)v7 != 6 )
    return 0;
  if ( get_ea_name(a2, *(_QWORD *)(v7 + 8), 0, 0) <= 0 )
    return 0;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
    return 0;
  if ( (unsigned __int64)(v9 - 1) <= 5 )
    return 0;
  v10 = *(char **)a2;
  v11 = *(char **)a2;
  if ( strncmp(*(const char **)a2, "RTYPE_", 6u) )
    return 0;
  v14 = 1;
  v15 = 0;
  if ( v9 != 7 )
  {
    v11 = v10;
    v14 = v9 - 6;
    memmove(v10, v10 + 6, v9 - 7);
    v10 = *(char **)a2;
    v15 = v9 - 7;
  }
  if ( *(_QWORD *)(a2 + 16) < v14 )
  {
    v11 = (char *)a2;
    v26 = v15;
    v22 = qvector_reserve(a2, v10, v14, 1);
    v15 = v26;
    *(_QWORD *)a2 = v22;
    v10 = (char *)v22;
  }
  *(_QWORD *)(a2 + 8) = v14;
  v10[v15] = 0;
  if ( *(_QWORD *)(a2 + 8) <= 1u )
    return 0;
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)&v29 + 1) = *(_QWORD *)a2;
    LOWORD(v30) = 0;
    *(_QWORD *)&v29 = get_idati(v11, 0, v12, v13);
    create_tinfo(a3, 61, 61, &v29);
  }
  v27 = 0;
  v29 = 0;
  v28 = 0;
  copy_tinfo_t((char *)&v29 + 8, &v28);
  v30 = 0;
  copy_tinfo_t(&v30, &v27);
  v31 = 0;
  v32 = 0;
  clear_tinfo_t(&v28);
  clear_tinfo_t(&v27);
  copy_tinfo_t(&v29, a3);
  create_tinfo(a3, 10, 10, &v29);
  clear_tinfo_t(&v30);
  clear_tinfo_t((char *)&v29 + 8);
  clear_tinfo_t(&v29);
  v16 = *(_QWORD *)(a2 + 8);
  if ( v16 )
  {
    v17 = v16 - 1;
    v18 = *(char **)a2;
    if ( (unsigned __int64)(v16 - 1) <= 7 || strncmp(*(const char **)a2, "runtime_", 8u) )
    {
LABEL_19:
      v19 = v16 + 1;
      v20 = v16 + 2;
      if ( *(_QWORD *)(a2 + 16) >= v20 )
        goto LABEL_20;
      goto LABEL_26;
    }
    v23 = 1;
    v24 = 0;
    if ( v16 != 9 )
    {
      v24 = v16 - 9;
      v23 = v16 - 8;
      memmove(v18, v18 + 8, v16 - 9);
      v18 = *(char **)a2;
    }
    if ( *(_QWORD *)(a2 + 16) < v23 )
    {
      v25 = qvector_reserve(a2, v18, v23, 1);
      *(_QWORD *)a2 = v25;
      v18 = (char *)v25;
    }
    *(_QWORD *)(a2 + 8) = v23;
    v18[v24] = 0;
    v16 = *(_QWORD *)(a2 + 8);
    if ( v16 )
    {
      v18 = *(char **)a2;
      v17 = v16 - 1;
      goto LABEL_19;
    }
  }
  v18 = *(char **)a2;
  if ( *(_QWORD *)(a2 + 16) <= 2u )
  {
    v20 = 3;
    v19 = 2;
    v17 = 0;
LABEL_26:
    v21 = qvector_reserve(a2, v18, v20, 1);
    *(_QWORD *)a2 = v21;
    v18 = (char *)v21;
LABEL_20:
    *(_QWORD *)(a2 + 8) = v20;
    v18[v19] = 0;
    if ( v17 )
      memmove((void *)(*(_QWORD *)a2 + 2LL), *(const void **)a2, v17);
    goto LABEL_22;
  }
  *(_QWORD *)(a2 + 8) = 3;
  v18[2] = 0;
LABEL_22:
  **(_WORD **)a2 = 24432;
  return 1;
}
