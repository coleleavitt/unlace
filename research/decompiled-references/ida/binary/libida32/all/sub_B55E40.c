bool __fastcall sub_B55E40(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // rbx
  __int64 **v13; // rax
  int v14; // eax
  __int64 v15; // rbx
  size_t v16; // rax
  _DWORD *v17; // rdi

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v2 = sub_B68690(a1);
  v3 = *(__int64 **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( *(_QWORD *)v2 < v4 )
  {
    v11 = *(__int64 **)v2;
    while ( *(_WORD *)(*v11 + 36) != 163 )
    {
      if ( (__int64 *)v4 == ++v11 )
        goto LABEL_9;
    }
    if ( (__int64 *)v4 != v11 )
      return 1;
  }
  else if ( v3 != (__int64 *)v4 )
  {
    v5 = (__int64 *)(v4 + 8);
    if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) == 163 )
      return 1;
    while ( v3 != v5 )
    {
      v6 = *v5++;
      if ( *(_WORD *)(v6 + 36) == 163 )
        return 1;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = sub_B68690(a1);
  v8 = *(_QWORD **)v7;
  v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
  if ( (unsigned __int64)v8 < v9 )
  {
    v10 = v8;
    while ( *(_WORD *)(*v10 + 36LL) != 64 )
    {
      if ( (_QWORD *)v9 == ++v10 )
        return 0;
    }
    if ( (_QWORD *)v9 != v10 )
      goto LABEL_23;
    return 0;
  }
  if ( v8 == (_QWORD *)v9 )
    return 0;
  while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 64 )
  {
    v9 += 8LL;
    if ( v8 == (_QWORD *)v9 )
      return 0;
  }
LABEL_23:
  v12 = (__int64 *)*v8;
  if ( *(_WORD *)(*v8 + 36LL) != 64 )
  {
    v13 = (__int64 **)(v8 + 1);
    do
      v12 = *v13++;
    while ( *((_WORD *)v12 + 18) != 64 );
  }
  if ( (*((_BYTE *)v12 + 34) & 0xF0) == 0xF0 )
    v14 = sub_F83A90(v12);
  else
    v14 = *((_BYTE *)v12 + 34) >> 4;
  if ( v14 == 12 )
    return 1;
  v15 = *v12;
  if ( !v15 )
    return 0;
  v16 = j__strlen("kernel");
  v17 = *(_DWORD **)(v15 + 16);
  if ( v16 != *v17 )
    return 0;
  if ( !v16 )
    return 1;
  return memcmp(v17 + 4, "kernel", v16) == 0;
}

