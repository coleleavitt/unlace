bool __fastcall sub_77C880(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __int64 *v6; // rbx
  bool v7; // zf
  __int64 *v8; // rax
  __int64 *v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // r12
  __int64 *i; // rax
  unsigned __int64 v14; // rax

  v1 = (_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*v1 + 17LL) & 4) != 0 )
    return 1;
  v3 = sub_B07C80(*v1);
  if ( v3 )
  {
    if ( (*(_QWORD *)(v3 + 24) & 0xFFFFFFFFFFFFFFF8LL) <= 0xF && (*(_BYTE *)(v3 + 17) & 4) == 0 )
      return 1;
  }
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v4 = sub_79A2B0(a1);
    v5 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      v6 = *(__int64 **)sub_79A2B0(a1);
    else
      v6 = nullptr;
  }
  else
  {
    v5 = 0;
    v6 = nullptr;
  }
  v7 = v6 == (__int64 *)v5;
  if ( (unsigned __int64)v6 >= v5 )
    goto LABEL_18;
LABEL_9:
  v8 = v6;
  while ( 1 )
  {
    v9 = v8;
    if ( *(_WORD *)(*v8 + 32) == 118 )
      break;
    if ( (__int64 *)v5 == ++v8 )
    {
LABEL_26:
      if ( v5 < (unsigned __int64)v6 )
        goto LABEL_29;
LABEL_32:
      while ( *(_WORD *)(*v6 + 32) != 118 )
      {
        if ( (__int64 *)v5 == ++v6 )
          return 0;
      }
      return v6 != (__int64 *)v5;
    }
  }
  v10 = v5;
  while ( v9 != (__int64 *)v10 )
  {
    v11 = *v6;
    v12 = (unsigned __int64)(v6 + 1);
    for ( i = v6 + 1; *(_WORD *)(v11 + 32) != 118; ++i )
      v11 = *i;
    if ( sub_727560(v11) )
      break;
    ++v6;
    v7 = v12 == v5;
    if ( v12 < v5 )
      goto LABEL_9;
LABEL_18:
    if ( v7 )
      return 0;
    v14 = v5;
    while ( 1 )
    {
      v10 = v14;
      if ( *(_WORD *)(*(_QWORD *)v14 + 32LL) == 118 )
        break;
      v14 += 8LL;
      if ( v6 == (__int64 *)v14 )
        goto LABEL_26;
    }
    v9 = v6;
  }
  if ( v5 >= (unsigned __int64)v6 )
  {
    if ( v6 != (__int64 *)v5 )
      goto LABEL_32;
    return 0;
  }
LABEL_29:
  while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 118 )
  {
    v5 += 8LL;
    if ( v6 == (__int64 *)v5 )
      return 0;
  }
  return v6 != (__int64 *)v5;
}

