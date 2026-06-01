__int64 __fastcall sub_6B0F60(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // r13
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  char v6; // r14
  unsigned __int64 v7; // rdx
  char v8; // al
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rdx

  result = 1;
  v2 = a1[10];
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) != 0x29 && (*(_BYTE *)(v2 + 97) & 0x40) == 0 )
  {
    v4 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
      v4 = *(_QWORD *)v4;
    result = 1;
    if ( ((*(_BYTE *)(v4 + 8) + 72) & 0x7Fu) <= 3 )
    {
      v5 = (unsigned __int64)a1;
      v6 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
LABEL_9:
            v7 = *(_QWORD *)(v7 + 8);
LABEL_10:
          if ( (*(_BYTE *)(v7 + 8) & 0x7F) == 0 || (*(_BYTE *)(v7 + 8) & 0x7F) == 0x16 )
          {
            if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0x29 )
            {
              v8 = *(_BYTE *)(v5 + 97);
              if ( (v8 & 0x40) != 0 )
                goto LABEL_17;
              if ( v8 < 0 )
                return 3;
            }
            if ( (*(_BYTE *)(v2 + 28) & 0x7F) != 0x29 && *(char *)(v2 + 97) < 0 )
              return 3;
          }
LABEL_17:
          v9 = *(_QWORD *)(v5 + 72);
          if ( (v9 & 1) != 0 )
            break;
          if ( (v9 & 2) != 0 )
          {
            if ( v6 )
              return 2;
            v6 = 1;
            v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v9 & 1) != 0 )
              goto LABEL_31;
            goto LABEL_21;
          }
          v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v9 & 1) != 0 )
            goto LABEL_30;
          if ( v10 <= 3 )
            return 2;
          v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v10 & 2) != 0 )
            goto LABEL_45;
          if ( a1 == v11 )
            return 2;
          v5 = (unsigned __int64)v11;
        }
        if ( v6 )
          return 2;
        v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v9 & 1) != 0 )
        {
          v6 = 1;
          goto LABEL_30;
        }
LABEL_21:
        if ( v10 <= 3 )
        {
          v6 = 1;
          v13 = v9 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_36;
        }
        v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v10 & 2) == 0 )
        {
          if ( a1 == v11 )
            return 2;
          v5 = (unsigned __int64)v11;
          v6 = 1;
          v7 = v11[2] & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v11[2] & 4) != 0 )
            goto LABEL_9;
          goto LABEL_10;
        }
        v6 = 1;
LABEL_45:
        v16 = v11[2275];
        if ( !v16 )
        {
          v10 = v5 & 0xFFFFFFFFFFFFFFFALL;
          v9 = v5 & 0xFFFFFFFFFFFFFFFALL | 1;
          *(_QWORD *)(v5 + 72) = v9;
LABEL_30:
          if ( v10 )
            goto LABEL_31;
          return 2;
        }
        v17 = v11[274];
        v11[284] += 24LL;
        v10 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v11[275] >= v10 + 24 && v17 )
          v11[274] = v10 + 24;
        else
          v10 = sub_6A76A0((__int64)(v11 + 274), 24, 3);
        *(_QWORD *)v10 = v16;
        *(_DWORD *)(v10 + 8) = 0;
        v9 = v10 | 5;
        *(_QWORD *)(v10 + 16) = v5;
        *(_QWORD *)(v5 + 72) = v10 | 5;
        LOBYTE(v10) = v10 & 0xFA | 4;
LABEL_31:
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v10 & 4) != 0 )
        {
          if ( v12 )
          {
            v14 = *(_QWORD *)v12;
            v15 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
            if ( *(_DWORD *)(v12 + 8) != v15 )
            {
              *(_DWORD *)(v12 + 8) = v15;
              (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v14 + 144LL))(
                v14,
                v5,
                v13);
            }
            v13 = *(_QWORD *)(v12 + 16);
            goto LABEL_36;
          }
          return 2;
        }
LABEL_36:
        if ( a1 == (_QWORD *)v13 || !v13 )
          return 2;
        v5 = v13;
      }
    }
  }
  return result;
}

