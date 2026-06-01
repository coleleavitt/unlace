__int64 __fastcall dwarf_elf_nlsetup(
        int a1,
        const char *a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _WORD *v14; // rax
  _WORD *v15; // r15
  __int64 *v16; // rbx
  __int16 v17; // ax
  void *(*v18)(void *, const void *, size_t); // rax
  unsigned int inited; // r12d
  unsigned __int64 i; // r14
  __int64 v21; // rdx
  __int64 v22; // rax
  const char *v23; // r13
  __int64 v24; // rdx
  __int64 *v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rbx
  char *v29; // rax
  __int64 v30; // rsi
  int v32; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v32 = 0;
  v14 = calloc(0x208u, 1u);
  if ( !v14 )
    goto LABEL_30;
  v15 = v14;
  v16 = (__int64 *)calloc(0x10u, 1u);
  if ( !v16 )
  {
LABEL_29:
    free(v15);
LABEL_30:
    v32 = 62;
    goto LABEL_21;
  }
  *((_DWORD *)v15 + 4) = a1;
  *v15 = 12614;
  *((_QWORD *)v15 + 5) = a6;
  *((_DWORD *)v15 + 7) = a5 == 64;
  LOBYTE(v17) = a5;
  HIBYTE(v17) = a5;
  v15[28] = v17;
  *((_DWORD *)v15 + 15) = a3;
  if ( a4 == 2 )
  {
    v18 = dwarf_memcpy_noswap_bytes;
  }
  else
  {
    v18 = (void *(*)(void *, const void *, size_t))dwarf_memcpy_swap_bytes;
    a4 = 1;
  }
  *((_DWORD *)v15 + 8) = a4;
  *((_QWORD *)v15 + 12) = v18;
  inited = _dwarf_load_elf_header(v15, &v32);
  if ( inited || (inited = _dwarf_load_elf_sectheaders(v15, &v32)) != 0 )
  {
    *v16 = (__int64)v15;
    v16[1] = 0;
    sub_1D560(v16);
    if ( inited == -1 )
      return inited;
LABEL_21:
    inited = 1;
    _dwarf_error(0, a11, v32);
    return inited;
  }
  if ( (unsigned int)_dwarf_load_elf_symstr(v15, &v32) == 1
    || (unsigned int)_dwarf_load_elf_symtab_symbols(v15, &v32) == 1 )
  {
LABEL_27:
    *v16 = (__int64)v15;
    v16[1] = 0;
    sub_1D560(v16);
    goto LABEL_21;
  }
  for ( i = 1; i < *((_QWORD *)v15 + 21); ++i )
  {
    v22 = *((_QWORD *)v15 + 24) + 184 * i;
    v23 = *(const char **)(v22 + 16);
    v24 = *(_QWORD *)(v22 + 24);
    if ( v23 )
    {
      if ( v24 == 9 )
        goto LABEL_19;
      if ( v24 == 4 )
      {
LABEL_12:
        v21 = 1;
        goto LABEL_13;
      }
      if ( !strncmp(".rel.", *(const char **)(v22 + 16), 5u) )
      {
LABEL_19:
        v21 = 2;
LABEL_13:
        if ( (unsigned int)_dwarf_load_elf_relx(v15, i, v21, &v32) == 1 )
          goto LABEL_27;
        continue;
      }
      if ( !strncmp(".rela.", v23, 6u) )
        goto LABEL_12;
    }
  }
  free(v16);
  v26 = (__int64 *)malloc(0x10u);
  v27 = v26;
  if ( !v26 )
    goto LABEL_29;
  *v26 = (__int64)v15;
  v26[1] = (__int64)&off_B7180;
  inited = dwarf_object_init_b(v26, a8, a9, a7, a10, a11);
  if ( inited )
  {
    sub_1D560(v27);
  }
  else
  {
    v28 = *v27;
    v29 = strdup(a2);
    v30 = *(unsigned int *)(v28 + 20);
    *(_QWORD *)(v28 + 8) = v29;
    *(_QWORD *)(*(_QWORD *)a10 + 248LL) = v30;
    *(_QWORD *)(*(_QWORD *)a10 + 256LL) = *(int *)(v28 + 60);
    *(_QWORD *)(*(_QWORD *)a10 + 272LL) = *(_QWORD *)(v28 + 48);
  }
  return inited;
}

