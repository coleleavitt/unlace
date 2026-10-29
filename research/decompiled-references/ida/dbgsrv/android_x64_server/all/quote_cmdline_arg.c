/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: quote_cmdline_arg
// Address: 0x00000000000B2940

//----- (00000000000B2940) ----------------------------------------------------
char __fastcall quote_cmdline_arg(__int64 a1)
{
  __int64 v1; // rbp
  const char *v2; // r12
  char v3; // bl
  unsigned __int64 v4; // rdx
  char *v5; // rax
  char *v6; // rcx
  unsigned __int64 v7; // rbp
  char *v8; // rax
  char v9; // r14
  __int64 v10; // r13
  unsigned __int8 v11; // al
  char *v12; // rbp
  void *v13; // rax
  char *v14; // rax
  char *v15; // rbp
  void *v16; // rax
  __int64 v17; // rcx
  void *v18; // rdi
  __int128 v19; // xmm0
  char *v21; // rax
  void *ptr[11]; // [rsp+10h] [rbp-58h] BYREF

  ptr[4] = (void *)__readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    v2 = *(const char **)a1;
  else
    v2 = s1;
  v3 = *v2;
  if ( *v2 && !strpbrk(v2, " \t?*[]()<>;&$|^#") )
  {
    v21 = (char *)(v2 + 1);
    while ( v3 != 39 && v3 != 34 )
    {
      v3 = *v21++;
      if ( !v3 )
        return 0;
    }
  }
  v4 = v1 + 1;
  memset(ptr, 0, 24);
  if ( !v1 )
    v4 = 2;
  if ( !v4 )
  {
    v6 = nullptr;
    v5 = nullptr;
    goto LABEL_12;
  }
  v5 = (char *)qvector_reserve((__int64)ptr, nullptr, v4, 1u);
  ptr[0] = v5;
  v6 = (char *)ptr[2];
  if ( !ptr[1] )
  {
LABEL_12:
    v7 = 0;
    goto LABEL_13;
  }
  v7 = (unsigned __int64)ptr[1] - 1;
LABEL_13:
  if ( (unsigned __int64)v6 < v7 + 2 )
  {
    v5 = (char *)qvector_reserve((__int64)ptr, v5, v7 + 2, 1u);
    ptr[0] = v5;
  }
  ptr[1] = (void *)(v7 + 2);
  v8 = &v5[v7];
  v9 = 39;
  v10 = 0x400000000000021LL;
  while ( 1 )
  {
    *v8 = v9;
    *((_BYTE *)ptr[0] + v7 + 1) = 0;
    v9 = *v2;
    v11 = *v2 - 34;
    if ( v11 > 0x3Au || !_bittest64(&v10, v11) )
      break;
    v12 = (char *)ptr[1] - 1;
    if ( !ptr[1] )
      v12 = nullptr;
    v13 = ptr[0];
    if ( ptr[2] < v12 + 2 )
    {
      v13 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)(v12 + 2), 1u);
      ptr[0] = v13;
    }
    ptr[1] = v12 + 2;
    v12[(_QWORD)v13] = 92;
    *((_BYTE *)ptr[0] + (unsigned __int64)v12 + 1) = 0;
    v9 = *v2;
LABEL_25:
    v7 = (unsigned __int64)ptr[1] - 1;
    if ( !ptr[1] )
      v7 = 0;
    v14 = (char *)ptr[0];
    if ( ptr[2] < (void *)(v7 + 2) )
    {
      v14 = (char *)qvector_reserve((__int64)ptr, (char *)ptr[0], v7 + 2, 1u);
      ptr[0] = v14;
    }
    ++v2;
    ptr[1] = (void *)(v7 + 2);
    v8 = &v14[v7];
  }
  if ( v9 )
    goto LABEL_25;
  v15 = (char *)ptr[1] - 1;
  if ( !ptr[1] )
    v15 = nullptr;
  v16 = ptr[0];
  if ( ptr[2] >= v15 + 2 )
  {
    v17 = a1;
  }
  else
  {
    v16 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)(v15 + 2), 1u);
    v17 = a1;
    ptr[0] = v16;
  }
  ptr[1] = v15 + 2;
  v15[(_QWORD)v16] = 39;
  *((_BYTE *)ptr[0] + (unsigned __int64)v15 + 1) = 0;
  v18 = *(void **)v17;
  v19 = *(_OWORD *)(v17 + 8);
  *(void **)v17 = ptr[0];
  *(void **)(v17 + 8) = ptr[1];
  *(void **)(v17 + 16) = ptr[2];
  ptr[0] = v18;
  *(_OWORD *)&ptr[1] = v19;
  if ( v18 )
  {
    ptr[1] = nullptr;
    qfree(v18);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return 1;
}
