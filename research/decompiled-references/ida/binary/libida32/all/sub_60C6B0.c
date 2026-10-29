__int64 __fastcall sub_60C6B0(unsigned int a1, const char *a2, int a3, __int64 *a4)
{
  __int64 v7; // rcx
  char **v8; // r15
  __int64 v9; // rax
  char *v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r9
  char **v13; // r8
  unsigned __int64 v14; // r11
  char *v15; // rax
  char *v16; // rsi
  char *v17; // r14
  size_t v18; // rax
  size_t v19; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  void *v23; // rdi
  size_t v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // [rsp+0h] [rbp-E8h]

  v7 = *a4;
  v8 = (char **)(v7 + 2248);
  v27 = (_QWORD *)v7;
  v9 = operator new(0x48u);
  *(_DWORD *)(v9 + 8) = a1;
  v10 = (char *)v9;
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = 0;
  *(_DWORD *)(v9 + 64) = -1;
  *(_OWORD *)(v9 + 24) = 0;
  *(_OWORD *)(v9 + 48) = 0;
  if ( v27[284] )
  {
    v11 = v27[282];
    v12 = a1;
    v13 = *(char ***)(v27[281] + 8 * (a1 % v11));
    v14 = a1 % v11;
    if ( !v13 )
      goto LABEL_17;
    v15 = *v13;
    if ( a1 != *((_DWORD *)*v13 + 2) )
    {
      while ( 1 )
      {
        v16 = *(char **)v15;
        if ( !*(_QWORD *)v15 )
          break;
        v13 = (char **)v15;
        if ( *((unsigned int *)v16 + 2) % v11 != a1 % v11 )
          break;
        v15 = *(char **)v15;
        if ( a1 == *((_DWORD *)v16 + 2) )
          goto LABEL_7;
      }
LABEL_17:
      v17 = sub_60C4F0(v8, v14, v12, v10, 1u);
      *((_DWORD *)v17 + 16) = *((_DWORD *)a4 + 2);
      if ( !a2 )
        goto LABEL_18;
LABEL_12:
      v18 = strlen(a2);
      v19 = v18;
      if ( v18 )
      {
        v23 = *((void **)v17 + 2);
        v24 = v18 + 1;
        if ( *((_QWORD *)v17 + 4) < v18 + 1 )
        {
          v26 = qvector_reserve(v17 + 16, *((_QWORD *)v17 + 2), v24, 1);
          *((_QWORD *)v17 + 2) = v26;
          v23 = (void *)v26;
        }
        *((_QWORD *)v17 + 3) = v24;
        memmove(v23, a2, v19);
        *(_BYTE *)(*((_QWORD *)v17 + 2) + v19) = 0;
      }
      else
      {
        *((_QWORD *)v17 + 3) = 0;
      }
      return 1;
    }
LABEL_7:
    if ( !v13 )
      goto LABEL_17;
    v17 = *v13;
    if ( !*v13 )
      goto LABEL_17;
    if ( v10 )
      goto LABEL_10;
  }
  else
  {
    v17 = (char *)v27[283];
    if ( !v17 )
    {
LABEL_16:
      v12 = a1;
      v14 = (unsigned __int64)a1 % v27[282];
      goto LABEL_17;
    }
    while ( a1 != *((_DWORD *)v17 + 2) )
    {
      v17 = *(char **)v17;
      if ( !v17 )
        goto LABEL_16;
    }
    if ( v9 )
LABEL_10:
      operator delete(v10, 0x48u);
  }
  *((_DWORD *)v17 + 16) = *((_DWORD *)a4 + 2);
  if ( a2 )
    goto LABEL_12;
LABEL_18:
  v21 = *((_QWORD *)v17 + 6);
  v22 = *((_QWORD *)v17 + 5);
  if ( *((_QWORD *)v17 + 7) < (unsigned __int64)(v21 + 1) )
  {
    v25 = qvector_reserve(v17 + 40, v22, v21 + 1, 4);
    *((_QWORD *)v17 + 5) = v25;
    v22 = v25;
    v21 = *((_QWORD *)v17 + 6);
  }
  *(_DWORD *)(v22 + 4 * v21) = a3;
  ++*((_QWORD *)v17 + 6);
  return 1;
}

