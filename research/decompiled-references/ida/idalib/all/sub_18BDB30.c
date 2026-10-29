void __fastcall sub_18BDB30(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 *v15; // rcx
  __int64 v16; // rdi
  __int64 *v17; // rdx
  __int64 *v18; // rax
  __int64 *v19; // rdx
  unsigned __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rax

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 || (*(_BYTE *)(v6 + 28) & 0x7F) != 0x2B )
    return;
  v7 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v6 + 16) & 4) != 0 )
    v7 = *(_QWORD *)v7;
  if ( (*(_BYTE *)(v7 + 8) & 0x7Fu) - 34 > 5 || v7 == 72 )
    goto LABEL_17;
  if ( (*(_BYTE *)(v7 - 43) & 1) != 0 )
  {
    v20 = sub_B8C3D0(v7 - 72, a2, v7, a4, a5, a6);
    v7 = *v20;
    a4 = *v20 + 8LL * *((unsigned int *)v20 + 2);
    if ( *v20 < a4 )
    {
      v23 = (unsigned __int64 *)*v20;
      while ( 1 )
      {
        v7 = *v23;
        if ( *(_WORD *)(*v23 + 36) == 100 )
          break;
        if ( (unsigned __int64 *)a4 == ++v23 )
          goto LABEL_8;
      }
      if ( (unsigned __int64 *)a4 != v23 )
        goto LABEL_17;
    }
    else if ( v7 != a4 )
    {
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 100 )
        goto LABEL_17;
      v21 = (__int64 *)(a4 + 8);
      while ( 1 )
      {
        a4 = (unsigned __int64)v21;
        if ( (__int64 *)v7 == v21 )
          break;
        v22 = *v21++;
        if ( *(_WORD *)(v22 + 36) == 100 )
          goto LABEL_17;
      }
    }
  }
LABEL_8:
  if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
    return;
  v8 = sub_B8C3D0(v6, a2, v7, a4, a5, a6);
  v9 = (__int64 *)*v8;
  v10 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( *v8 >= v10 )
  {
    if ( v9 == (__int64 *)v10 )
      return;
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 100 )
    {
      v11 = (__int64 *)(v10 + 8);
      while ( v9 != v11 )
      {
        v12 = *v11++;
        if ( *(_WORD *)(v12 + 36) == 100 )
          goto LABEL_17;
      }
      return;
    }
    goto LABEL_17;
  }
  v24 = *v8;
  while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 100 )
  {
    v24 += 8LL;
    if ( v10 == v24 )
      return;
  }
  if ( v10 != v24 )
  {
LABEL_17:
    v13 = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)v13 )
      return;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v13 - 8);
    if ( !v14 )
      return;
    if ( !*(_BYTE *)(v14 + 644) )
      goto LABEL_35;
    v15 = *(__int64 **)(v14 + 624);
    v16 = *(unsigned int *)(v14 + 636);
    v17 = &v15[v16];
    if ( v15 != v17 )
    {
      v18 = *(__int64 **)(v14 + 624);
      if ( v6 == *v15 )
        goto LABEL_27;
      do
      {
        if ( v17 == ++v18 )
          break;
      }
      while ( v6 != *v18 );
    }
    if ( (unsigned int)v16 < *(_DWORD *)(v14 + 632) )
    {
      *(_DWORD *)(v14 + 636) = v16 + 1;
      *v17 = v6;
      v15 = *(__int64 **)(v14 + 624);
      v18 = &v15[v16];
    }
    else
    {
LABEL_35:
      v18 = (__int64 *)sub_2236760(v14 + 624, v6);
      v15 = *(__int64 **)(v14 + 624);
      if ( !*(_BYTE *)(v14 + 644) )
      {
        v19 = &v15[*(unsigned int *)(v14 + 632)];
        goto LABEL_37;
      }
    }
LABEL_27:
    v19 = &v15[*(unsigned int *)(v14 + 636)];
LABEL_37:
    if ( v18 != v19 && (unsigned __int64)(*v18 + 2) <= 1 )
    {
      do
        ++v18;
      while ( v19 != v18 && (unsigned __int64)*v18 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
}
