__int64 __fastcall sub_A57ED0(__int64 a1, _BYTE *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebp
  int v5; // eax
  __int64 v6; // rcx
  int v7; // edx
  unsigned int v8; // eax
  _BYTE *v9; // rsi
  int i; // esi
  _BYTE *v11; // rdi
  __int64 v13; // rax
  __int64 *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 *j; // rax
  __int64 v22; // rcx

  LOBYTE(v3) = sub_A57A50(a1, a2);
  if ( !(_BYTE)v3 )
    return 0;
  v4 = v3;
  if ( (a2[29] & 1) == 0 )
  {
LABEL_3:
    v5 = *(_DWORD *)(a1 + 22768);
    v6 = *(_QWORD *)(a1 + 22752);
    if ( v5 )
    {
      v7 = v5 - 1;
      v8 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v9 = *(_BYTE **)(v6 + 8LL * v8);
      if ( a2 == v9 )
        return v4;
      if ( v9 != (_BYTE *)-4096LL )
      {
        for ( i = 1; ; ++i )
        {
          v8 = v7 & (i + v8);
          v11 = *(_BYTE **)(v6 + 8LL * v8);
          if ( a2 == v11 )
            break;
          if ( v11 == (_BYTE *)-4096LL )
            return 0;
        }
        return v4;
      }
    }
    return 0;
  }
  v13 = sub_B68690(a2);
  v14 = *(__int64 **)v13;
  v15 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
  if ( *(_QWORD *)v13 >= v15 )
  {
    if ( v14 != (__int64 *)v15 )
    {
      if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 224 )
        return v4;
      for ( j = (__int64 *)(v15 + 8); v14 != j; ++j )
      {
        v22 = *j;
        if ( *(_WORD *)(v22 + 36) == 224 )
          return v4;
      }
    }
  }
  else
  {
    v16 = *(__int64 **)v13;
    while ( *(_WORD *)(*v16 + 36) != 224 )
    {
      if ( (__int64 *)v15 == ++v16 )
        goto LABEL_15;
    }
    if ( (__int64 *)v15 != v16 )
      return v4;
  }
LABEL_15:
  if ( (a2[29] & 1) == 0 )
    goto LABEL_3;
  v17 = sub_B68690(a2);
  v18 = *(_QWORD *)v17;
  v19 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
  if ( *(_QWORD *)v17 >= v19 )
  {
    if ( v18 == v19 )
      goto LABEL_3;
    while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 163 )
    {
      v19 += 8LL;
      if ( v18 == v19 )
        goto LABEL_3;
    }
  }
  else
  {
    v20 = *(_QWORD *)v17;
    while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 163 )
    {
      v20 += 8;
      if ( v19 == v20 )
        goto LABEL_3;
    }
    if ( v19 == v20 )
      goto LABEL_3;
  }
  return v4;
}

