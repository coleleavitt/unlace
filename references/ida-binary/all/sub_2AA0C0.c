__int64 __fastcall sub_2AA0C0(__int64 a1, __int64 *a2, int a3, char a4)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // r13d
  __int64 v13; // rbp
  const char *v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // r13
  const void *v18; // r15
  void *v19; // rdi
  __int64 v20; // rbp
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // r13d
  __int64 v25; // rdx
  const char *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax

  if ( a2 )
    a2[1] = 0;
  v7 = sub_2B70C0(a1);
  if ( !v7 )
    return -1;
  if ( a3 < 0 )
    return -1;
  v8 = *(_QWORD *)(a1 + 440);
  if ( (unsigned __int64)a3 >= *(_QWORD *)(v8 + 24) )
    return -1;
  v9 = *(_QWORD *)(v8 + 16) + 24LL * a3;
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
    return -1;
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 104) + a3) & 1) == 0 )
  {
    v22 = *(_QWORD **)v9;
    if ( !a4 )
      v22 = &v22[34 * v10 - 34];
    v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 128LL))(*v22);
    v20 = v23;
    if ( !a2 )
      return v20;
    if ( (unsigned __int8)generate_disasm_line(a2, v23, 0) )
      goto LABEL_27;
    return -1;
  }
  if ( a4 )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      v26 = &s1;
      v27 = *(_QWORD *)v9 + 272 * v25;
      if ( *(_QWORD *)(v27 + 16) )
        v26 = *(const char **)(v27 + 8);
      if ( tag_strlen(v26) )
      {
        v13 = 272LL * v24;
        goto LABEL_15;
      }
      v25 = ++v24;
    }
    while ( (unsigned __int64)v24 < *(_QWORD *)(v9 + 8) );
    v13 = 272LL * v24;
  }
  else
  {
    v11 = v10 - 1;
    v12 = v11;
    if ( v11 <= 0 )
    {
      v13 = 272LL * v11;
    }
    else
    {
      v13 = 272LL * (unsigned int)v11;
      while ( 1 )
      {
        v14 = &s1;
        v15 = v13 + *(_QWORD *)v9;
        if ( *(_QWORD *)(v15 + 16) )
          v14 = *(const char **)(v15 + 8);
        if ( tag_strlen(v14) )
          break;
        v13 -= 272;
        if ( !--v12 )
        {
          v13 = 0;
          break;
        }
      }
    }
  }
LABEL_15:
  v16 = (_QWORD *)(v13 + *(_QWORD *)v9);
  if ( a2 )
  {
    if ( a2 != v16 + 1 )
    {
      v17 = v16[2];
      if ( v17 < 2 )
      {
        a2[1] = 0;
        v16 = (_QWORD *)(v13 + *(_QWORD *)v9);
      }
      else
      {
        v18 = (const void *)v16[1];
        v19 = (void *)*a2;
        if ( a2[2] < v17 )
        {
          v28 = qvector_reserve(a2, *a2, v16[2], 1);
          *a2 = v28;
          v19 = (void *)v28;
        }
        a2[1] = v17;
        memmove(v19, v18, v17 - 1);
        *(_BYTE *)(*a2 + v17 - 1) = 0;
        v16 = (_QWORD *)(v13 + *(_QWORD *)v9);
      }
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 128LL))(*v16);
LABEL_27:
    if ( (unsigned __int64)a2[1] > 1 )
      tag_remove(a2, *a2, 0);
    return v20;
  }
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 128LL))(*v16);
}
