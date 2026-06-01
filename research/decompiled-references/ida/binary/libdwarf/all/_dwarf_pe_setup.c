__int64 __fastcall dwarf_pe_setup(
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
  _DWORD *v14; // rax
  _DWORD *v15; // r12
  __int64 *v16; // rcx
  __int16 v17; // ax
  void *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rbx
  unsigned int inited; // ebp
  _QWORD *v22; // rbx
  __int64 *ptra; // [rsp+10h] [rbp-68h]
  int v26; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v26 = 0;
  v14 = calloc(0x2D0u, 1u);
  if ( !v14 )
    goto LABEL_15;
  v15 = v14;
  v16 = (__int64 *)calloc(0x10u, 1u);
  if ( !v16 )
    goto LABEL_14;
  v15[4] = a1;
  *(_WORD *)v15 = 12624;
  *((_QWORD *)v15 + 4) = a6;
  v15[6] = a5 == 64;
  LOBYTE(v17) = a5;
  HIBYTE(v17) = a5;
  *((_WORD *)v15 + 28) = v17;
  v15[15] = a3;
  if ( a4 == 2 )
  {
    v18 = dwarf_memcpy_noswap_bytes;
  }
  else
  {
    v18 = dwarf_memcpy_swap_bytes;
    a4 = 1;
  }
  v15[16] = a4;
  *((_QWORD *)v15 + 9) = v18;
  ptra = v16;
  if ( (unsigned int)sub_49EB0((__int64)v15, &v26) )
  {
    *ptra = (__int64)v15;
    ptra[1] = 0;
    sub_49DA0(ptra);
LABEL_11:
    inited = 1;
    _dwarf_error(0, a11, v26);
    return inited;
  }
  free(ptra);
  v19 = (__int64 *)malloc(0x10u);
  v20 = v19;
  if ( !v19 )
  {
LABEL_14:
    free(v15);
LABEL_15:
    v26 = 62;
    goto LABEL_11;
  }
  *v19 = (__int64)v15;
  v19[1] = (__int64)&off_B8BE0;
  inited = dwarf_object_init_b(v19, a8, a9, a7, a10, a11);
  if ( inited )
  {
    sub_49DA0(v20);
  }
  else
  {
    v22 = (_QWORD *)*v20;
    *(_QWORD *)(*(_QWORD *)a10 + 272LL) = v22[5];
    *(_QWORD *)(*(_QWORD *)a10 + 248LL) = v22[6];
    v22[1] = strdup(a2);
  }
  return inited;
}

