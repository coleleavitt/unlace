__int64 __fastcall sub_178F150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // di
  _BOOL4 v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int64 *v17; // rax
  __int64 *v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 *v21; // rdx
  __int64 v22; // rax

  result = 0;
  if ( !a1 )
    return result;
  v7 = *(unsigned __int8 *)(a1 + 29);
  if ( (v7 & 1) == 0 )
  {
    v14 = (v7 & 2) != 0;
LABEL_10:
    v15 = v7;
    LOBYTE(v15) = (unsigned __int8)v7 >> 1;
    return v14 & v15;
  }
  v9 = sub_B8C3D0(a1, a2, a3, a4, v7, a6);
  v11 = *v9;
  v12 = *v9 + 8LL * *((unsigned int *)v9 + 2);
  if ( *v9 >= v12 )
  {
    v7 = *(unsigned __int8 *)(a1 + 29);
    v13 = *(_BYTE *)(a1 + 29) & 1;
    if ( v11 == v12 )
    {
LABEL_8:
      v14 = (v7 & 2) != 0;
      goto LABEL_20;
    }
    while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 160 )
    {
      v12 += 8LL;
      if ( v11 == v12 )
        goto LABEL_8;
    }
  }
  else
  {
    a2 = *v9;
    while ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 160 )
    {
      a2 += 8;
      if ( v12 == a2 )
      {
        v7 = *(unsigned __int8 *)(a1 + 29);
        v13 = *(_BYTE *)(a1 + 29) & 1;
        goto LABEL_8;
      }
    }
    v7 = *(unsigned __int8 *)(a1 + 29);
    v13 = *(_BYTE *)(a1 + 29) & 1;
    if ( v12 == a2 )
      goto LABEL_8;
  }
  v16 = *(_QWORD *)v11;
  if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 160 )
  {
    v11 += 8;
    do
    {
      v16 = *(_QWORD *)v11;
      v11 += 8;
    }
    while ( *(_WORD *)(v16 + 36) != 160 );
  }
  v14 = (*(_BYTE *)(v16 + 38) & 4) != 0;
LABEL_20:
  if ( !v13 )
    goto LABEL_10;
  v17 = sub_B8C3D0(a1, a2, v11, v12, v7, v10);
  v18 = (__int64 *)*v17;
  v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
  if ( *v17 >= v19 )
  {
    if ( v18 == (__int64 *)v19 )
    {
LABEL_25:
      LODWORD(v7) = *(unsigned __int8 *)(a1 + 29);
      goto LABEL_10;
    }
    if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 165 )
    {
      v21 = (__int64 *)(v19 + 8);
      while ( v18 != v21 )
      {
        v22 = *v21++;
        if ( *(_WORD *)(v22 + 36) == 165 )
          goto LABEL_29;
      }
      goto LABEL_25;
    }
  }
  else
  {
    v20 = *v17;
    while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 165 )
    {
      v20 += 8LL;
      if ( v19 == v20 )
        goto LABEL_25;
    }
    if ( v19 == v20 )
      goto LABEL_25;
  }
LABEL_29:
  while ( *(_WORD *)(*v18 + 36) != 165 )
    ++v18;
  return (unsigned __int8)v14 & (unsigned __int8)(*(_BYTE *)(*v18 + 38) >> 2);
}
