__int64 __fastcall sub_788760(_QWORD *a1, unsigned __int64 *a2)
{
  char v2; // r13
  unsigned __int64 v4; // rbp
  char v5; // al
  unsigned int v6; // r15d
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // eax
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rdi

  v2 = 0;
  v4 = (unsigned __int64)a1;
  while ( (*(_BYTE *)(v4 + 82) & 0x40) == 0 )
  {
    v5 = *(_BYTE *)(v4 + 83);
    if ( (v5 & 2) != 0 || (v5 & 8) == 0 && ((*(_BYTE *)(v4 + 128) & 1) != 0 || *(_QWORD *)(v4 + 128)) )
      break;
    if ( (v5 & 0x40) != 0 )
      break;
    if ( (*(_BYTE *)(v4 + 84) & 0x60) != 0 )
      break;
    v6 = sub_799100(v4);
    if ( (_BYTE)v6 )
      break;
    v8 = *(_QWORD *)(v4 + 104);
    if ( (v8 & 1) != 0 )
    {
      if ( v2 )
        return v6;
      v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v8 & 1) != 0 )
      {
        v2 = 1;
        goto LABEL_16;
      }
LABEL_29:
      if ( v9 <= 3 )
      {
        v2 = 1;
        v4 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_24;
      }
      v14 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v9 & 2) != 0 )
      {
        v2 = 1;
        goto LABEL_39;
      }
      if ( a1 == v14 )
        return v6;
      v4 = (unsigned __int64)v14;
      v2 = 1;
    }
    else
    {
      if ( (v8 & 2) != 0 )
      {
        if ( v2 )
          return v6;
        v2 = 1;
        v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v8 & 1) != 0 )
          goto LABEL_17;
        goto LABEL_29;
      }
      v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v8 & 1) != 0 )
        goto LABEL_16;
      if ( v9 <= 3 )
        return v6;
      v14 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v9 & 2) != 0 )
      {
LABEL_39:
        v15 = sub_6D4E90(v14, v4);
        v9 = v15 & 0xFFFFFFFFFFFFFFFELL;
        v8 = v15 | 1;
        *(_QWORD *)(v4 + 104) = v8;
LABEL_16:
        if ( !v9 )
          return v6;
LABEL_17:
        v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v9 & 4) != 0 )
        {
          if ( !v10 )
            return v6;
          v12 = *(_QWORD *)v10;
          v13 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
          if ( *(_DWORD *)(v10 + 8) != v13 )
          {
            *(_DWORD *)(v10 + 8) = v13;
            (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v12 + 144LL))(v12, v4, v11);
          }
          v11 = *(_QWORD *)(v10 + 16);
        }
        if ( a1 == (_QWORD *)v11 )
          return v6;
        v4 = v11;
LABEL_24:
        if ( !v4 )
          return v6;
      }
      else
      {
        if ( a1 == v14 )
          return v6;
        v4 = (unsigned __int64)v14;
      }
    }
  }
  *a2 = v4;
  return 1;
}

