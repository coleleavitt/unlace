void __fastcall sub_FEA80(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r11
  __int64 v6; // r9
  __int64 v7; // r10
  _QWORD *v8; // rsi
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rbx
  int v17; // edx
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx

  v3 = a1[1];
  if ( !v3 )
    return;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = (_QWORD *)(v6 + *a1);
    v9 = (_QWORD *)*v8;
    if ( *v8 )
    {
      if ( v8[1] )
      {
        v10 = v9[1];
        if ( v9 != (_QWORD *)v10 )
          break;
      }
    }
LABEL_15:
    ++v7;
    v6 += 24;
    if ( v3 == v7 )
      return;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v10 + 68) != -1 )
    {
      v11 = *(_DWORD *)(v10 + 68);
      if ( v11 != -1 )
      {
        if ( a3 == v11 )
        {
          *(_BYTE *)(v10 + 72) &= ~2u;
          *(_DWORD *)(v10 + 68) = -1;
        }
        else if ( a3 < v11 )
        {
          *(_DWORD *)(v10 + 68) = v11 - 1;
        }
      }
    }
    if ( (*(_QWORD *)v10 & 2) != 0 )
      goto LABEL_14;
    v12 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)v12 & 2) == 0 )
    {
      do
      {
        v10 = v12;
        v12 = *(_QWORD *)(v12 + 8);
      }
      while ( (*(_BYTE *)v12 & 2) == 0 );
      goto LABEL_14;
    }
    v13 = (_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCLL);
    v14 = *v13;
    if ( (*v13 & 2) == 0 && v13[2] == v10 )
      break;
    v10 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCLL;
LABEL_14:
    if ( *v8 == v10 )
      goto LABEL_15;
  }
  do
  {
    v15 = v13;
    v16 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v14 & 2) != 0 )
    {
      v15 = (_QWORD *)v16;
      goto LABEL_22;
    }
    v13 = (_QWORD *)v16;
LABEL_40:
    ;
  }
  while ( (_QWORD *)v13[2] == v15 );
LABEL_38:
  v15 = v13;
LABEL_22:
  if ( (_QWORD *)*v8 == v15 )
    goto LABEL_32;
  do
  {
LABEL_23:
    if ( *((_DWORD *)v15 + 17) != -1 )
    {
      v17 = *((_DWORD *)v15 + 17);
      if ( v17 != -1 )
      {
        if ( a3 == v17 )
        {
          *((_BYTE *)v15 + 72) &= ~2u;
          *((_DWORD *)v15 + 17) = -1;
        }
        else if ( a3 < v17 )
        {
          *((_DWORD *)v15 + 17) = v17 - 1;
        }
      }
    }
    if ( (*v15 & 2) != 0 )
      goto LABEL_22;
    v18 = (_QWORD *)v15[2];
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
      v13 = (_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFFCLL);
      v14 = *v13;
      if ( (*v13 & 2) == 0 )
        goto LABEL_40;
      goto LABEL_38;
    }
    do
    {
      v15 = v18;
      v18 = (_QWORD *)v18[1];
    }
    while ( (*(_BYTE *)v18 & 2) == 0 );
  }
  while ( (_QWORD *)*v8 != v15 );
LABEL_32:
  while ( 1 )
  {
    ++v7;
    v6 += 24;
    if ( v3 == v7 )
      break;
    v8 = (_QWORD *)(v6 + *a1);
    v19 = (_QWORD *)*v8;
    if ( *v8 )
    {
      if ( v8[1] )
      {
        v15 = (_QWORD *)v19[1];
        if ( v19 != v15 )
          goto LABEL_23;
      }
    }
  }
}
