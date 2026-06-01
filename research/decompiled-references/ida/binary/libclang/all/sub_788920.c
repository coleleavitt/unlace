__int64 __fastcall sub_788920(_QWORD *a1, __int64 a2, char a3)
{
  char v3; // r13
  _QWORD *v4; // r12
  __int64 v6; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdi
  char v11; // al
  char v12; // al
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  int v20; // eax
  _QWORD *v21; // r14
  _DWORD *v22; // rdi
  int v23; // eax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // [rsp+8h] [rbp-30h]

  v3 = 0;
  v4 = (_QWORD *)a2;
  v6 = (__int64)a1;
  if ( !a3 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v6 + 82) & 0x40) != 0 )
        goto LABEL_3;
      v12 = *(_BYTE *)(v6 + 83);
      if ( (v12 & 2) != 0 || (v12 & 8) == 0 && ((*(_BYTE *)(v6 + 128) & 1) != 0 || *(_QWORD *)(v6 + 128)) )
        goto LABEL_3;
      if ( (v12 & 0x40) != 0 || (*(_BYTE *)(v6 + 84) & 0x60) != 0 || (unsigned __int8)sub_799100(v6) )
        goto LABEL_3;
      v13 = *(_QWORD *)(v6 + 104);
      if ( (v13 & 1) == 0 )
        break;
      if ( v3 )
        return 0;
      v3 = 1;
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v13 & 1) == 0 )
      {
        if ( v14 <= 3 )
          goto LABEL_70;
        goto LABEL_33;
      }
LABEL_45:
      if ( !v14 )
        return 0;
LABEL_46:
      v18 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      v16 = (_QWORD *)v18;
      if ( (v14 & 4) != 0 )
      {
        if ( !v18 )
          return 0;
        v19 = *(_QWORD *)v18;
        v20 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
        if ( *(_DWORD *)(v18 + 8) != v20 )
        {
          *(_DWORD *)(v18 + 8) = v20;
          v25 = v18;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 144LL))(v19, v6);
          v18 = v25;
        }
        v16 = *(_QWORD **)(v18 + 16);
      }
      if ( a1 == v16 )
        return 0;
LABEL_52:
      if ( !v16 )
        return 0;
LABEL_35:
      v6 = (__int64)v16;
    }
    if ( (v13 & 2) != 0 )
    {
      if ( v3 )
        return 0;
      v3 = 1;
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v13 & 1) != 0 )
        goto LABEL_46;
      if ( v14 <= 3 )
      {
LABEL_70:
        v3 = 1;
        v16 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
        goto LABEL_52;
      }
      v15 = v13 & 0xFFFFFFFFFFFFFFFCLL;
      v3 = 1;
      v16 = (_QWORD *)v15;
      if ( (v14 & 2) == 0 )
      {
LABEL_34:
        if ( a1 == (_QWORD *)v15 )
          return 0;
        goto LABEL_35;
      }
    }
    else
    {
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v13 & 1) != 0 )
        goto LABEL_45;
      if ( v14 <= 3 )
        return 0;
LABEL_33:
      v15 = v13 & 0xFFFFFFFFFFFFFFFCLL;
      v16 = (_QWORD *)v15;
      if ( (v14 & 2) == 0 )
        goto LABEL_34;
    }
    v17 = sub_6D4E90(v16, v6);
    v14 = v17 & 0xFFFFFFFFFFFFFFFELL;
    v13 = v17 | 1;
    *(_QWORD *)(v6 + 104) = v13;
    goto LABEL_45;
  }
  while ( 1 )
  {
    if ( (*(_BYTE *)(v6 + 82) & 0x40) != 0
      || (v11 = *(_BYTE *)(v6 + 83), (v11 & 2) != 0)
      || (v11 & 8) == 0 && ((*(_BYTE *)(v6 + 128) & 1) != 0 || *(_QWORD *)(v6 + 128))
      || (v11 & 0x40) != 0
      || (*(_BYTE *)(v6 + 84) & 0x60) != 0
      || (unsigned __int8)sub_799100(v6)
      || (unsigned __int8)sub_780CE0(v6, a2) )
    {
LABEL_3:
      *v4 = v6;
      return 1;
    }
    v8 = *(_QWORD *)(v6 + 104);
    if ( (v8 & 1) == 0 )
      break;
    if ( v3 )
      return 0;
    v3 = 1;
    v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v8 & 1) != 0 )
      goto LABEL_56;
LABEL_12:
    if ( v9 <= 3 )
    {
      v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      v3 = 1;
      goto LABEL_63;
    }
    v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v9 & 2) != 0 )
      goto LABEL_68;
LABEL_14:
    if ( a1 == v10 )
      return 0;
LABEL_15:
    v6 = (__int64)v10;
  }
  if ( (v8 & 2) != 0 )
  {
    if ( v3 )
      return 0;
    v3 = 1;
    v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v8 & 1) != 0 )
      goto LABEL_57;
    goto LABEL_12;
  }
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) != 0 )
    goto LABEL_56;
  if ( v9 <= 3 )
    return 0;
  v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v9 & 2) == 0 )
    goto LABEL_14;
LABEL_68:
  a2 = v6;
  v24 = sub_6D4E90(v10, v6);
  v9 = v24 & 0xFFFFFFFFFFFFFFFELL;
  v8 = v24 | 1;
  *(_QWORD *)(v6 + 104) = v8;
LABEL_56:
  if ( !v9 )
    return 0;
LABEL_57:
  v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  v21 = v10;
  if ( (v9 & 4) != 0 )
  {
    if ( !v10 )
      return 0;
    v22 = (_DWORD *)*v10;
    v23 = v22[3];
    if ( *((_DWORD *)v21 + 2) != v23 )
    {
      *((_DWORD *)v21 + 2) = v23;
      a2 = v6;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v22 + 144LL))(v22, v6);
    }
    v10 = (_QWORD *)v21[2];
  }
  if ( a1 == v10 )
    return 0;
LABEL_63:
  if ( v10 )
    goto LABEL_15;
  return 0;
}

