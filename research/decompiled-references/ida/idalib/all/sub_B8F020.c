void __fastcall sub_B8F020(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  char v4; // al
  _QWORD *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // r9
  __int64 v9; // rax
  _BYTE *v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // r9
  __int64 v19; // rax
  _BYTE *v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax

  if ( !a1 )
    return;
  v2 = a1;
  do
  {
    v3 = v2[9];
    v4 = *(_BYTE *)v2 & 1;
    if ( !(_BYTE)a2 )
    {
      if ( v4 )
      {
        v15 = v2 + 1;
        v18 = v2 + 9;
        goto LABEL_27;
      }
      v15 = (_QWORD *)v2[1];
      v16 = *((unsigned int *)v2 + 4);
      v17 = 2 * v16;
      if ( !(_DWORD)v16 )
        goto LABEL_45;
      v18 = &v15[v17];
      if ( &v15[v17] == v15 )
        goto LABEL_45;
      while ( 1 )
      {
LABEL_27:
        while ( 1 )
        {
          if ( *v15 != -2 && *v15 != -1 )
          {
            v19 = v15[1];
            v20 = (_BYTE *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              break;
          }
LABEL_26:
          v15 += 2;
          if ( v15 == v18 )
            goto LABEL_36;
        }
        v21 = v19 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v19 & 4) != 0 )
        {
          v22 = *(_QWORD *)v20;
          if ( (*(_BYTE *)(*(_QWORD *)v20 + 28LL) & 0x7F) == 0 )
            goto LABEL_31;
        }
        else
        {
          v22 = v15[1] & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v20[28] & 0x7F) == 0 )
            goto LABEL_31;
        }
        v22 = sub_B8C2C0(v22);
LABEL_31:
        v23 = *(_QWORD *)(v22 + 88);
        do
        {
          if ( (v21 & 4) == 0 )
            goto LABEL_26;
          v24 = v21 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v21 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            goto LABEL_26;
          v21 = *(_QWORD *)(v24 + 8);
          *(_QWORD *)(v24 + 8) = *(_QWORD *)(v23 + 17496) | 4LL;
          *(_QWORD *)(v23 + 17496) = v24;
        }
        while ( v21 );
        v15 += 2;
        if ( v15 == v18 )
        {
LABEL_36:
          if ( (*(_BYTE *)v2 & 1) != 0 )
          {
LABEL_37:
            operator delete(v2, 0x50u);
            goto LABEL_20;
          }
          v15 = (_QWORD *)v2[1];
          v17 = 2LL * *((unsigned int *)v2 + 4);
LABEL_45:
          operator delete(v15, v17 * 8, 8);
          goto LABEL_37;
        }
      }
    }
    if ( v4 )
    {
      v5 = v2 + 1;
      v8 = v2 + 9;
      goto LABEL_9;
    }
    v5 = (_QWORD *)v2[1];
    v6 = *((unsigned int *)v2 + 4);
    v7 = 2 * v6;
    if ( !(_DWORD)v6 )
      goto LABEL_43;
    v8 = &v5[v7];
    if ( &v5[v7] == v5 )
      goto LABEL_43;
    do
    {
LABEL_9:
      if ( *v5 == -2 || *v5 == -1 )
        goto LABEL_8;
      v9 = v5[1];
      v10 = (_BYTE *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_8;
      v11 = v9 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v9 & 4) != 0 )
      {
        v12 = *(_QWORD *)v10;
        if ( (*(_BYTE *)(*(_QWORD *)v10 + 28LL) & 0x7F) == 0 )
          goto LABEL_13;
      }
      else
      {
        v12 = v5[1] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v10[28] & 0x7F) == 0 )
          goto LABEL_13;
      }
      v12 = sub_B8C2C0(v12);
LABEL_13:
      v13 = *(_QWORD *)(v12 + 88);
      while ( (v11 & 4) != 0 )
      {
        v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          break;
        v11 = *(_QWORD *)(v14 + 8);
        *(_QWORD *)(v14 + 8) = *(_QWORD *)(v13 + 17496) | 4LL;
        *(_QWORD *)(v13 + 17496) = v14;
        if ( !v11 )
        {
          v5 += 2;
          if ( v5 != v8 )
            goto LABEL_9;
          goto LABEL_18;
        }
      }
LABEL_8:
      v5 += 2;
    }
    while ( v5 != v8 );
LABEL_18:
    if ( (*(_BYTE *)v2 & 1) != 0 )
      goto LABEL_19;
    v5 = (_QWORD *)v2[1];
    v7 = 2LL * *((unsigned int *)v2 + 4);
LABEL_43:
    operator delete(v5, v7 * 8, 8);
LABEL_19:
    operator delete(v2, 0x58u);
LABEL_20:
    a2 = (v3 >> 2) & 1;
    v2 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  }
  while ( (v3 & 0xFFFFFFFFFFFFFFF8LL) != 0 );
}
