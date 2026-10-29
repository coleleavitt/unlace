char __fastcall sub_B576F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  char v5; // dl
  unsigned __int64 v6; // rax
  char result; // al
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 i; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) == 26
    || (v8 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v8 + 16) == 26)
    && (v4 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v8, a4)) != 0 )
  {
    v5 = *(_BYTE *)(v4 + 19);
    if ( (v5 & 0x40) != 0 )
    {
      v6 = (v4 + ((v5 >> 5) & 4) + 8LL * *(unsigned __int16 *)(v4 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v6 + 1) & 4) != 0 && (*(_BYTE *)(v6 + 8) & 0x1C) != 0 )
        return 1;
    }
  }
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v9 = sub_B68690(a1);
  v10 = *(_QWORD *)v9;
  v11 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
  if ( *(_QWORD *)v9 >= v11 )
  {
    if ( v10 == v11 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 137 )
    {
      v11 += 8LL;
      if ( v10 == v11 )
        return 0;
    }
  }
  else
  {
    v12 = *(_QWORD *)v9;
    while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 137 )
    {
      v12 += 8;
      if ( v11 == v12 )
        return 0;
    }
    if ( v11 == v12 )
      return 0;
  }
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_55;
  v13 = sub_B68690(a1);
  v14 = *(_QWORD **)v13;
  v15 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
  if ( (unsigned __int64)v14 >= v15 )
  {
    if ( v14 != (_QWORD *)v15 )
    {
      if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 137 )
        goto LABEL_34;
      v16 = v15 + 8;
      for ( i = v16; (_QWORD *)v16 != v14; i = v16 )
      {
        v16 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)i + 36LL) == 137 )
          goto LABEL_34;
      }
    }
LABEL_55:
    BUG();
  }
  v18 = v14;
  while ( *(_WORD *)(*v18 + 36LL) != 137 )
  {
    if ( (_QWORD *)v15 == ++v18 )
      goto LABEL_55;
  }
  if ( (_QWORD *)v15 == v18 )
    goto LABEL_55;
LABEL_34:
  v19 = *v14;
  if ( *(_WORD *)(*v14 + 36LL) != 137 )
  {
    v20 = v14 + 1;
    do
      v19 = *v20++;
    while ( *(_WORD *)(v19 + 36) != 137 );
  }
  v21 = *(_QWORD *)(v19 + 48);
  v22 = 16LL * *(unsigned int *)(v19 + 40);
  v23 = v21 + v22;
  v24 = v22 >> 6;
  if ( v24 )
  {
    v25 = v21 + (v24 << 6);
    while ( !(unsigned __int8)sub_B4E350("za", v21) )
    {
      v26 = v21 + 16;
      if ( (unsigned __int8)sub_B4E350("za", v21 + 16) )
        return v23 != v26;
      v26 = v21 + 32;
      if ( (unsigned __int8)sub_B4E350("za", v21 + 32) )
        return v23 != v26;
      v26 = v21 + 48;
      if ( (unsigned __int8)sub_B4E350("za", v21 + 48) )
        return v23 != v26;
      v21 += 64;
      if ( v25 == v21 )
        goto LABEL_46;
    }
    return v23 != v21;
  }
LABEL_46:
  v27 = (v23 - v21) >> 4;
  if ( v27 != 2 )
  {
    if ( v27 != 3 )
    {
      if ( v27 == 1 )
        goto LABEL_49;
      return 0;
    }
    if ( (unsigned __int8)sub_B4E350("za", v21) )
      return v23 != v21;
    v21 += 16;
  }
  if ( (unsigned __int8)sub_B4E350("za", v21) )
    return v23 != v21;
  v21 += 16;
LABEL_49:
  result = sub_B4E350("za", v21);
  if ( result )
    return v23 != v21;
  return result;
}

