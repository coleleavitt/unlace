__int64 __fastcall sub_78B990(_QWORD *a1, unsigned __int64 *a2)
{
  char v2; // r14
  unsigned __int64 v4; // rbx
  char v5; // al
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  _DWORD **v9; // rdi
  _DWORD **v10; // r12
  _DWORD **v11; // rdx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rdi
  _DWORD *v14; // rdi
  int v15; // eax

  v2 = 0;
  v4 = (unsigned __int64)a1;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(_BYTE *)(v4 + 83);
        if ( (v5 & 8) == 0 && ((*(_BYTE *)(v4 + 128) & 1) != 0 || *(_QWORD *)(v4 + 128)) || (v5 & 0x40) != 0 )
        {
          *a2 = v4;
          return 1;
        }
        v7 = *(_QWORD *)(v4 + 104);
        if ( (v7 & 1) == 0 )
          break;
        if ( v2 )
          return 0;
        v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v7 & 1) != 0 )
        {
          v2 = 1;
          goto LABEL_11;
        }
LABEL_23:
        if ( v8 <= 3 )
        {
          v2 = 1;
          v4 = v7 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_32;
        }
        v12 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v8 & 2) != 0 )
        {
          v2 = 1;
          goto LABEL_26;
        }
        if ( a1 == v12 )
          return 0;
        v4 = (unsigned __int64)v12;
        v2 = 1;
      }
      if ( (v7 & 2) != 0 )
      {
        if ( v2 )
          return 0;
        v2 = 1;
        v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v7 & 1) != 0 )
          goto LABEL_12;
        goto LABEL_23;
      }
      v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v7 & 1) != 0 )
        goto LABEL_11;
      if ( v8 <= 3 )
        return 0;
      v12 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v8 & 2) != 0 )
        break;
      if ( a1 == v12 )
        return 0;
      v4 = (unsigned __int64)v12;
    }
LABEL_26:
    v13 = sub_6D4E90(v12, v4);
    v8 = v13 & 0xFFFFFFFFFFFFFFFELL;
    v7 = v13 | 1;
    *(_QWORD *)(v4 + 104) = v7;
LABEL_11:
    if ( !v8 )
      return 0;
LABEL_12:
    v9 = (_DWORD **)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    v10 = v9;
    v11 = v9;
    if ( (v8 & 4) != 0 )
    {
      if ( !v9 )
        return 0;
      v14 = *v9;
      v15 = v14[3];
      if ( *((_DWORD *)v10 + 2) != v15 )
      {
        *((_DWORD *)v10 + 2) = v15;
        (*(void (__fastcall **)(_DWORD *, unsigned __int64, _DWORD **))(*(_QWORD *)v14 + 144LL))(v14, v4, v11);
      }
      v11 = (_DWORD **)v10[2];
    }
    if ( a1 == v11 )
      return 0;
    v4 = (unsigned __int64)v11;
LABEL_32:
    ;
  }
  while ( v4 );
  return 0;
}

