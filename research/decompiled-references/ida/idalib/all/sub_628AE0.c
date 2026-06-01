__int64 __fastcall sub_628AE0(unsigned __int64 a1, const char *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rcx
  char **v8; // r15
  __int64 v9; // rax
  char *v10; // r12
  unsigned __int64 v11; // r8
  char **v12; // r11
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rsi
  char *v15; // rax
  char *v16; // rdi
  char *v17; // rbx
  size_t v18; // rax
  size_t v19; // rbp
  __int64 v21; // rax
  __int64 v22; // rsi
  void *v23; // rdi
  size_t v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // [rsp+0h] [rbp-E8h]

  v7 = *a4;
  v8 = (char **)(v7 + 2336);
  v27 = (_QWORD *)v7;
  v9 = operator new(0x48u);
  *(_QWORD *)(v9 + 8) = a1;
  v10 = (char *)v9;
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = 0;
  *(_DWORD *)(v9 + 64) = -1;
  *(_OWORD *)(v9 + 24) = 0;
  *(_OWORD *)(v9 + 48) = 0;
  if ( v27[295] )
  {
    v11 = v27[293];
    v12 = *(char ***)(v27[292] + 8 * (a1 % v11));
    v13 = a1 % v11;
    v14 = a1 % v11;
    if ( !v12 )
      goto LABEL_17;
    v15 = *v12;
    if ( a1 != *((_QWORD *)*v12 + 1) )
    {
      while ( 1 )
      {
        v16 = *(char **)v15;
        if ( !*(_QWORD *)v15 )
          break;
        v12 = (char **)v15;
        if ( *((_QWORD *)v16 + 1) % v11 != v13 )
          break;
        v15 = *(char **)v15;
        if ( a1 == *((_QWORD *)v16 + 1) )
          goto LABEL_7;
      }
LABEL_17:
      v17 = sub_628910(v8, v14, a1, v10, 1u);
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
    if ( !v12 )
      goto LABEL_17;
    v17 = *v12;
    if ( !*v12 )
      goto LABEL_17;
    if ( v10 )
      goto LABEL_10;
  }
  else
  {
    v17 = (char *)v27[294];
    if ( !v17 )
    {
LABEL_16:
      v14 = a1 % v27[293];
      goto LABEL_17;
    }
    while ( a1 != *((_QWORD *)v17 + 1) )
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
    v25 = qvector_reserve(v17 + 40, v22, v21 + 1, 8);
    *((_QWORD *)v17 + 5) = v25;
    v22 = v25;
    v21 = *((_QWORD *)v17 + 6);
  }
  *(_QWORD *)(v22 + 8 * v21) = a3;
  ++*((_QWORD *)v17 + 6);
  return 1;
}
