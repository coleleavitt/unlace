__int64 __fastcall sub_39AF20(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  unsigned __int64 *v5; // r13
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r10d
  __int64 v21; // rdi
  __int64 v22; // rdx
  int v23; // r9d
  int v24; // eax
  char v25; // dl
  unsigned int v26; // ebp
  int v27; // esi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax

  v3 = *a2;
  v4 = *(_QWORD *)(*a2 + 24);
  *((_BYTE *)a2 + 16) = 0;
  a2[1] = v4;
  if ( *(_QWORD *)(v3 + 48) < *(_QWORD *)(v4 + 32) )
  {
    *((_BYTE *)a2 + 16) = 1;
    v5 = (unsigned __int64 *)(v3 + 48);
  }
  else
  {
    v5 = (unsigned __int64 *)(v4 + 32);
    a2[1] = std::_Rb_tree_increment(v4);
  }
  v6 = *v5;
  v7 = std::_Rb_tree_decrement(v3 + 8);
  v8 = *(_QWORD *)(a1 + 696);
  v9 = *(_QWORD *)(a1 + 688);
  v10 = *(_QWORD *)(v7 + 32);
  if ( v10 < *(_QWORD *)(v3 + 48) )
    v10 = *(_QWORD *)(v3 + 48);
  v11 = v9 + 16LL * *(_QWORD *)(a1 + 696);
  if ( v9 == v11 )
  {
LABEL_10:
    v13 = -1;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 688);
    while ( (*(_BYTE *)(v12 + 10) & 1) == 0 )
    {
      v12 += 16;
      if ( v11 == v12 )
        goto LABEL_10;
    }
    v13 = *(_QWORD *)v12;
  }
  v14 = *(_QWORD *)(a1 + 696);
  v15 = v9 + 16 * (v8 - 1);
  while ( v14 )
  {
    v16 = v15;
    --v14;
    v15 -= 16;
    if ( (*(_BYTE *)(v16 + 10) & 1) != 0 )
    {
      v29 = v10;
      if ( v6 >= v10 )
        v29 = v6;
      if ( v29 < v13 )
        return (unsigned int)-1;
      v30 = v10;
      if ( v6 <= v10 )
        v30 = v6;
      if ( *(_QWORD *)v16 < v30 )
        return (unsigned int)-1;
      goto LABEL_17;
    }
  }
  v17 = v10;
  if ( v6 >= v10 )
    v17 = v6;
  if ( v17 < v13 )
    return (unsigned int)-1;
LABEL_17:
  if ( !v8 )
  {
    v25 = *(_BYTE *)(a1 + 783);
    v21 = 784;
    v23 = -1;
    if ( v25 < 0 )
      v25 = 0;
    LODWORD(v19) = 0;
    goto LABEL_37;
  }
  v18 = *(_QWORD *)(a1 + 688);
  v19 = 0;
  while ( 1 )
  {
    if ( v6 != *(_QWORD *)v9 )
    {
      if ( v6 < *(_QWORD *)v9 )
        goto LABEL_40;
      goto LABEL_20;
    }
    if ( (*(_BYTE *)(v9 + 10) & 1) != 0 )
      break;
LABEL_20:
    ++v19;
    v9 += 16;
    if ( v8 == v19 )
    {
LABEL_40:
      v21 = 784;
      LODWORD(v19) = 0;
      v20 = -1;
      goto LABEL_26;
    }
  }
  v20 = v19;
  if ( (int)v19 < 0 )
    LODWORD(v19) = 0;
  v21 = (int)v19 + 784LL;
LABEL_26:
  v22 = 0;
  while ( 2 )
  {
    if ( *(_QWORD *)v18 == v10 )
    {
      if ( (*(_BYTE *)(v18 + 10) & 1) != 0 )
      {
        v23 = v22;
        if ( (int)v22 >= 0 )
        {
          v24 = 0;
          if ( v20 < 0 )
            goto LABEL_33;
          goto LABEL_50;
        }
LABEL_49:
        v23 = v8 - 1;
        v24 = 0;
        if ( v20 < 0 )
          goto LABEL_52;
        goto LABEL_50;
      }
      goto LABEL_28;
    }
    if ( v10 >= *(_QWORD *)v18 )
    {
LABEL_28:
      ++v22;
      v18 += 16;
      if ( v8 == v22 )
        goto LABEL_49;
      continue;
    }
    break;
  }
  v23 = v8 - 1;
  v24 = 0;
  if ( v20 < 0 )
    goto LABEL_52;
LABEL_50:
  v24 = v19 + 1;
  if ( (int)v19 + 1 >= v8 )
    v24 = v8 - 1;
LABEL_52:
  if ( v24 > v23 )
  {
    v27 = 1;
    v26 = 0;
    goto LABEL_38;
  }
LABEL_33:
  v25 = 0;
  do
  {
    if ( v25 < *(char *)(a1 + v24 + 784) )
      v25 = *(_BYTE *)(a1 + v24 + 784);
    ++v24;
  }
  while ( v24 <= v23 );
LABEL_37:
  v26 = v25;
  v27 = v25 + 1;
LABEL_38:
  memset((void *)(a1 + v21), v27, v23 + 1 - (int)v19);
  return v26;
}
