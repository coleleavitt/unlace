/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_apply
// Address: 0x0000000100072950

//----- (0000000100072950) ----------------------------------------------------
__int64 __fastcall cliopts_t_apply(__int64 a1, int a2, const char **a3, __int64 a4)
{
  const char **v4; // r13
  int v5; // r14d
  __int64 v6; // r15
  const char *v7; // rbx
  size_t v8; // rax
  size_t v9; // r12
  unsigned __int64 v10; // r13
  void *v11; // rax
  int v12; // ebx
  int v13; // ecx
  const char *v14; // r13
  unsigned __int8 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r12
  const char *v18; // rdi
  char *v19; // r13
  const char **v20; // rsi
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // r14d
  int v26; // [rsp+8h] [rbp-48h]
  const char **v27; // [rsp+10h] [rbp-40h]
  const char **v28; // [rsp+10h] [rbp-40h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = *a3;
  if ( *a3 && (v8 = strlen(*a3)) != 0 )
  {
    v9 = v8;
    v27 = v4;
    v10 = v8 + 1;
    v11 = *(void **)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < v10 )
    {
      v11 = qvector_reserve(a1 + 24, v11, v10, 1u);
      *(_QWORD *)(a1 + 24) = v11;
    }
    *(_QWORD *)(a1 + 32) = v10;
    memmove(v11, v7, v9);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9) = 0;
    v4 = v27;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  v12 = a2;
  if ( a2 < 2 )
    return (unsigned int)(v5 - v12);
  v13 = a2;
  while ( 1 )
  {
    v28 = v4;
    v14 = v4[1];
    if ( (*(unsigned __int8 *)v14 | 2) != 0x2F )
    {
      v12 = v13;
      return (unsigned int)(v5 - v12);
    }
    v26 = v13;
    v15 = v14[1];
    if ( v15 != 45 )
      break;
    v16 = *(_QWORD *)(v6 + 8);
    if ( !v16 )
      goto LABEL_35;
    v17 = *(_QWORD *)a1;
    while ( 1 )
    {
      v18 = *(const char **)(v17 + 8);
      if ( v18 )
      {
        if ( !strcmp(v18, v14 + 2) )
          break;
      }
      v17 += 40;
      if ( !--v16 )
        goto LABEL_35;
    }
LABEL_16:
    if ( !v17 )
      goto LABEL_35;
    v19 = (char *)(v14 + 2);
    if ( v15 == 45 )
      v19 += strlen(*(const char **)(v17 + 8));
    v5 = a2;
    v6 = a1;
    v20 = v28 + 1;
    v12 = v26 - 1;
    v21 = *(_DWORD *)(v17 + 32);
    switch ( v21 )
    {
      case 0:
        v19 = nullptr;
LABEL_32:
        (*(void (__fastcall **)(char *, __int64))(v17 + 24))(v19, a4);
        break;
      case 1:
        if ( !*v19 )
        {
          if ( v26 <= 2 )
            cliopts_t_usage((__int64 *)a1, 1u);
          v19 = (char *)v28[2];
          v20 = v28 + 2;
          v12 = v26 - 2;
        }
        goto LABEL_32;
      case -1:
        (*(void (__fastcall **)(_QWORD, const char **, __int64))(v17 + 24))((unsigned int)v12, v20, a4);
        return (unsigned int)(v5 - v12);
    }
    v13 = v12;
    v4 = v20;
    if ( v12 <= 1 )
      return (unsigned int)(v5 - v12);
  }
  v22 = *(_QWORD *)(v6 + 8);
  if ( v22 )
  {
    v17 = *(_QWORD *)a1;
    while ( *(_BYTE *)v17 != v15 )
    {
      v17 += 40;
      if ( !--v22 )
        goto LABEL_35;
    }
    goto LABEL_16;
  }
LABEL_35:
  v23 = 0;
  if ( *(_BYTE *)(a1 + 80) == 1 )
    cliopts_t_usage((__int64 *)a1, 1u);
  return v23;
}
