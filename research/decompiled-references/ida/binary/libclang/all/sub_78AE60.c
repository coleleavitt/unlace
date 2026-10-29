__int64 __fastcall sub_78AE60(_BYTE *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  char v4; // r12
  char v5; // r12
  char v6; // al
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // eax
  __int64 i; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdi
  _DWORD **v21; // rdi
  _DWORD **v22; // r13
  _DWORD *v23; // rdi
  int v24; // eax
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax

  v2 = sub_798D40(a1);
  v3 = *(_QWORD *)(v2 + 2160);
  v4 = *(_BYTE *)(v3 + 45) & 1;
  if ( !v4 )
  {
    if ( (a1[29] & 1) == 0 )
    {
LABEL_31:
      for ( i = (__int64)a1; ; i = (__int64)v20 )
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(i + 16) & 4) != 0 )
            v17 = *(_QWORD *)(v17 + 8);
          if ( (*(_BYTE *)(v17 + 8) & 0x7F) == 0
            && (*(_BYTE *)(i + 29) & 2) == 0
            && ((*(_BYTE *)(i + 82) & 2) == 0 || *(_BYTE *)(i + 81) >> 5 == 1) )
          {
            return 1;
          }
          v18 = *(_QWORD *)(i + 104);
          if ( (v18 & 1) == 0 )
            break;
          if ( v4 )
            return 0;
          v4 = 1;
          v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v18 & 1) == 0 )
            goto LABEL_42;
LABEL_48:
          if ( !v19 )
            return 0;
LABEL_49:
          v21 = (_DWORD **)(v18 & 0xFFFFFFFFFFFFFFF8LL);
          v22 = v21;
          if ( (v19 & 4) != 0 )
          {
            if ( !v21 )
              return 0;
            v23 = *v21;
            v24 = v23[3];
            if ( *((_DWORD *)v22 + 2) != v24 )
            {
              *((_DWORD *)v22 + 2) = v24;
              (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v23 + 144LL))(v23, i);
            }
            v21 = (_DWORD **)v22[2];
          }
          if ( a1 == (_BYTE *)v21 )
            return 0;
LABEL_55:
          if ( !v21 )
            return 0;
          i = (__int64)v21;
        }
        if ( (v18 & 2) != 0 )
          break;
        v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v18 & 1) != 0 )
          goto LABEL_48;
        if ( v19 <= 3 )
          return 0;
        v20 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v19 & 2) != 0 )
          goto LABEL_60;
LABEL_44:
        if ( a1 == (_BYTE *)v20 )
          return 0;
      }
      if ( v4 )
        return 0;
      v4 = 1;
      v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v18 & 1) != 0 )
        goto LABEL_49;
LABEL_42:
      if ( v19 <= 3 )
      {
        v21 = (_DWORD **)(v18 & 0xFFFFFFFFFFFFFFF8LL);
        v4 = 1;
        goto LABEL_55;
      }
      v20 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v19 & 2) == 0 )
        goto LABEL_44;
LABEL_60:
      v25 = sub_6D4E90(v20, i);
      v19 = v25 & 0xFFFFFFFFFFFFFFFELL;
      v18 = v25 | 1;
      *(_QWORD *)(i + 104) = v18;
      goto LABEL_48;
    }
    v27 = sub_79A2B0(a1);
    v28 = *(_QWORD *)v27;
    v29 = *(_QWORD *)v27 + 8LL * *(unsigned int *)(v27 + 8);
    if ( v28 < v29 )
    {
      while ( *(_WORD *)(*(_QWORD *)v28 + 32LL) != 215 )
      {
        v28 += 8LL;
        if ( v29 == v28 )
          goto LABEL_31;
      }
    }
    else
    {
      if ( v28 == v29 )
        goto LABEL_31;
      while ( *(_WORD *)(*(_QWORD *)v29 + 32LL) != 215 )
      {
        v29 += 8LL;
        if ( v28 == v29 )
          goto LABEL_31;
      }
    }
    if ( v28 != v29 )
    {
      v3 = *(_QWORD *)(v2 + 2160);
      goto LABEL_2;
    }
    goto LABEL_31;
  }
LABEL_2:
  v5 = *(_BYTE *)(v3 + 1) & 8;
  if ( v5 )
    return 0;
  v6 = a1[82];
  if ( (v6 & 2) != 0 && a1[81] >> 5 == 1 )
  {
    v7 = (unsigned __int64)a1;
    if ( (v6 & 2) == 0 )
      goto LABEL_7;
LABEL_6:
    if ( *(_BYTE *)(v7 + 81) >> 5 == 1 )
    {
LABEL_7:
      v8 = *(_QWORD *)(v7 + 104);
      if ( (v8 & 1) != 0 )
      {
        while ( !v5 )
        {
          v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v8 & 1) != 0 )
          {
            v5 = 1;
            goto LABEL_19;
          }
LABEL_63:
          if ( v9 <= 3 )
          {
            v5 = 1;
            v7 = v8 & 0xFFFFFFFFFFFFFFF8LL;
            goto LABEL_27;
          }
          v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v9 & 2) != 0 )
          {
            v5 = 1;
            goto LABEL_68;
          }
          if ( a1 == (_BYTE *)v10 )
            return 0;
          v7 = (unsigned __int64)v10;
          v5 = 1;
LABEL_14:
          if ( (*(_BYTE *)(v7 + 82) & 2) != 0 )
            goto LABEL_6;
          v8 = *(_QWORD *)(v7 + 104);
          if ( (v8 & 1) == 0 )
            goto LABEL_8;
        }
        return 0;
      }
LABEL_8:
      if ( (v8 & 2) != 0 )
      {
        if ( v5 )
          return 0;
        v5 = 1;
        v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v8 & 1) == 0 )
          goto LABEL_63;
      }
      else
      {
        v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v8 & 1) == 0 )
        {
          if ( v9 <= 3 )
            return 0;
          v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v9 & 2) == 0 )
          {
            if ( a1 != (_BYTE *)v10 )
            {
              v7 = (unsigned __int64)v10;
              goto LABEL_14;
            }
            return 0;
          }
LABEL_68:
          v26 = sub_6D4E90(v10, v7);
          v9 = v26 & 0xFFFFFFFFFFFFFFFELL;
          v8 = v26 | 1;
          *(_QWORD *)(v7 + 104) = v8;
        }
LABEL_19:
        if ( !v9 )
          return 0;
      }
      v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      v12 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v9 & 4) == 0 )
        goto LABEL_25;
      if ( v11 )
      {
        v13 = *(_QWORD *)v11;
        v14 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
        if ( *(_DWORD *)(v11 + 8) != v14 )
        {
          *(_DWORD *)(v11 + 8) = v14;
          (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v13 + 144LL))(v13, v7, v12);
        }
        v12 = *(_QWORD *)(v11 + 16);
LABEL_25:
        if ( a1 != (_BYTE *)v12 )
        {
          v7 = v12;
LABEL_27:
          if ( v7 )
            goto LABEL_14;
        }
      }
      return 0;
    }
  }
  return 1;
}

