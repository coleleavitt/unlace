/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_apply
// Address: 0x00000000000B3680

//----- (00000000000B3680) ----------------------------------------------------
__int64 __fastcall cliopts_t_apply(__int64 a1, int a2, const char **a3, __int64 a4)
{
  const char **v4; // rbp
  int v5; // r12d
  __int64 *v6; // r13
  const char *v7; // rbx
  size_t v8; // rax
  size_t v9; // r15
  char **v10; // r14
  size_t v11; // rbp
  char *v12; // rdi
  int v13; // r14d
  int v14; // ecx
  const char *v15; // rbx
  char v16; // r14
  unsigned __int64 v17; // r12
  __int64 v18; // r15
  unsigned __int64 v19; // r13
  const char *v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  const char *v23; // rbx
  int v24; // eax
  char *v25; // rdi
  unsigned int v26; // r12d
  __int64 *v28; // [rsp+0h] [rbp-58h]
  const char **v29; // [rsp+10h] [rbp-48h]
  const char **v30; // [rsp+10h] [rbp-48h]
  int v32; // [rsp+20h] [rbp-38h]

  v4 = a3;
  v5 = a2;
  v6 = (__int64 *)a1;
  v7 = *a3;
  if ( *a3 && (v8 = strlen(*a3)) != 0 )
  {
    v9 = v8;
    v29 = v4;
    v10 = (char **)(a1 + 24);
    v11 = v8 + 1;
    if ( *(_QWORD *)(a1 + 40) >= v8 + 1 )
    {
      v12 = *v10;
    }
    else
    {
      v12 = (char *)qvector_reserve(a1 + 24, *v10, v8 + 1, 1u);
      *v10 = v12;
    }
    v6[4] = v11;
    memmove(v12, v7, v9);
    *(_BYTE *)(v6[3] + v9) = 0;
    v4 = v29;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  v13 = a2;
  if ( a2 < 2 )
    return (unsigned int)(v5 - v13);
  v14 = a2;
  v28 = v6;
  while ( 1 )
  {
    v15 = v4[1];
    if ( (*v15 | 2) != 0x2F )
    {
      v13 = v14;
      return (unsigned int)(v5 - v13);
    }
    v32 = v14;
    v30 = v4;
    v16 = v15[1];
    if ( v16 == 45 )
    {
      v17 = v6[1];
      if ( !v17 )
        break;
      v18 = *v28;
      v19 = 0;
      while ( 1 )
      {
        v20 = *(const char **)(v18 + 8);
        if ( v20 )
        {
          if ( !strcmp(v20, v15 + 2) )
            break;
        }
        ++v19;
        v18 += 40;
        if ( v19 >= v17 )
          goto LABEL_38;
      }
    }
    else
    {
      v21 = v6[1];
      if ( !v21 )
        break;
      v18 = *v28;
      v22 = 0;
      while ( *(_BYTE *)v18 != v16 )
      {
        ++v22;
        v18 += 40;
        if ( v22 >= v21 )
          goto LABEL_38;
      }
    }
    if ( !v18 )
      break;
    v23 = v15 + 2;
    if ( v16 == 45 )
      v23 += strlen(*(const char **)(v18 + 8));
    v5 = a2;
    v6 = v28;
    ++v4;
    v13 = v32 - 1;
    v24 = *(_DWORD *)(v18 + 32);
    switch ( v24 )
    {
      case 0:
        v25 = nullptr;
LABEL_35:
        (*(void (__fastcall **)(char *, __int64))(v18 + 24))(v25, a4);
        break;
      case 1:
        if ( !*v23 )
        {
          if ( v13 <= 1 )
            cliopts_t_usage(v28, 1);
          v23 = v30[2];
          v4 = v30 + 2;
          v13 = v32 - 2;
        }
        v25 = (char *)v23;
        goto LABEL_35;
      case -1:
        (*(void (__fastcall **)(_QWORD, const char **, __int64))(v18 + 24))((unsigned int)v13, v30 + 1, a4);
        return (unsigned int)(v5 - v13);
    }
    v14 = v13;
    if ( v13 <= 1 )
      return (unsigned int)(v5 - v13);
  }
LABEL_38:
  v26 = 0;
  if ( *((_BYTE *)v28 + 80) )
    cliopts_t_usage(v28, 1);
  return v26;
}
