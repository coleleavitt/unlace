__int64 __fastcall sub_B4DC70(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  unsigned __int8 v3; // bl
  __int64 v4; // rax
  __int64 *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v9; // rax
  __int64 *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rax

  v3 = *(_BYTE *)(a1 + 29) & 1;
  if ( a2 )
  {
LABEL_2:
    if ( v3 )
    {
      v4 = sub_B68690(a1);
      v5 = *(__int64 **)v4;
      v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
      if ( *(_QWORD *)v4 < v6 )
      {
        v7 = *(__int64 **)v4;
        while ( *(_WORD *)(*v7 + 36) != 396 )
        {
          if ( (__int64 *)v6 == ++v7 )
            goto LABEL_7;
        }
        if ( (__int64 *)v6 == v7 )
          goto LABEL_7;
LABEL_21:
        v14 = *v5;
        if ( *(_WORD *)(*v5 + 36) != 396 )
        {
          v15 = v5 + 1;
          do
            v14 = *v15++;
          while ( *(_WORD *)(v14 + 36) != 396 );
        }
        v2 = dword_23C0840[*(unsigned int *)(v14 + 40)];
        return ((unsigned __int64)v3 << 32) | v2;
      }
      if ( v5 != (__int64 *)v6 )
      {
        while ( *(_WORD *)(*(_QWORD *)v6 + 36LL) != 396 )
        {
          v6 += 8LL;
          if ( v5 == (__int64 *)v6 )
            goto LABEL_7;
        }
        goto LABEL_21;
      }
    }
LABEL_7:
    v3 = 0;
    return ((unsigned __int64)v3 << 32) | v2;
  }
  if ( !v3 )
    goto LABEL_7;
  v9 = sub_B68690(a1);
  v10 = *(__int64 **)v9;
  v11 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
  if ( *(_QWORD *)v9 < v11 )
  {
    v16 = *(__int64 **)v9;
    while ( *(_WORD *)(*v16 + 36) != 385 )
    {
      if ( (__int64 *)v11 == ++v16 )
        goto LABEL_16;
    }
    if ( (__int64 *)v11 == v16 )
      goto LABEL_16;
  }
  else
  {
    if ( v10 == (__int64 *)v11 )
    {
LABEL_16:
      v3 = *(_BYTE *)(a1 + 29) & 1;
      goto LABEL_2;
    }
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 385 )
    {
      v12 = (__int64 *)(v11 + 8);
      while ( v10 != v12 )
      {
        v13 = *v12++;
        if ( *(_WORD *)(v13 + 36) == 385 )
          goto LABEL_30;
      }
      goto LABEL_16;
    }
  }
LABEL_30:
  v17 = *v10;
  if ( *(_WORD *)(*v10 + 36) != 385 )
  {
    v18 = v10 + 1;
    do
      v17 = *v18++;
    while ( *(_WORD *)(v17 + 36) != 385 );
  }
  return dword_23C0840[*(unsigned int *)(v17 + 40)] | 0x100000000LL;
}

