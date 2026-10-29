bool __fastcall sub_2100550(__int64 a1, void *a2, size_t a3)
{
  size_t v4; // rax
  size_t v6; // rax
  int v7; // r12d
  __int64 v8; // r14
  int v9; // r12d
  unsigned int v10; // r13d
  __int64 v11; // r15
  int v12; // [rsp+Ch] [rbp-3Ch]

  v4 = j__strlen(".rodata.str");
  if ( v4 <= a3 && (!v4 || !memcmp(a2, ".rodata.str", v4)) )
    return 1;
  v6 = j__strlen(".rodata.cst");
  if ( v6 <= a3 && (!v6 || !memcmp(a2, ".rodata.cst", v6)) )
    return 1;
  v7 = *(_DWORD *)(a1 + 2424);
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(a1 + 2408);
  v9 = v7 - 1;
  v12 = 1;
  v10 = v9 & sub_2248890(a2, a3);
  while ( 1 )
  {
    v11 = v8 + 16LL * v10;
    if ( sub_E39ED0((char *)a2, a3, *(const void **)v11, *(_QWORD *)(v11 + 8)) )
      break;
    if ( sub_E39ED0(*(char **)v11, *(_QWORD *)(v11 + 8), (const void *)0xFFFFFFFFFFFFFFFFLL, 0) )
      return 0;
    v10 = v9 & (v12 + v10);
    ++v12;
  }
  return v11 != 0;
}
