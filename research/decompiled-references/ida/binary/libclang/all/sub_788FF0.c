unsigned __int64 __fastcall sub_788FF0(unsigned __int64 a1)
{
  unsigned __int64 v2; // r13
  char v3; // r12
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdi
  _DWORD **v14; // rdi
  _DWORD **v15; // rbp
  _DWORD **v16; // rdx
  _DWORD *v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // rdi

  v2 = 0;
  v3 = 0;
  v4 = a1;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v4 + 28) & 0x7F) != 0x29 || (((*(_BYTE *)(v4 + 97) & 6) - 2) & 0xFC) != 0 )
    {
      v5 = *(_QWORD *)(v4 + 88);
      if ( v5 )
      {
        if ( (v5 & 4) != 0 )
        {
          v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v6 && ((*(_BYTE *)(v6 + 8) & 1) != 0 || *(_QWORD *)(v6 + 8)) )
            return v4;
        }
        else if ( v5 > 7 )
        {
          return v4;
        }
      }
    }
    v8 = sub_798D40(v4);
    if ( !(unsigned int)sub_77B6A0(v4, v8, v9) )
      goto LABEL_17;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x29 )
    {
      v10 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v10 = *(_QWORD *)v10;
      if ( ((*(_BYTE *)(v10 + 8) + 72) & 0x7Fu) <= 3 )
        return v4;
    }
    v2 = v4;
LABEL_17:
    v11 = *(_QWORD *)(v4 + 72);
    if ( (v11 & 1) != 0 )
    {
      if ( v3 )
        return v2;
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v11 & 1) != 0 )
      {
        v3 = 1;
        goto LABEL_28;
      }
LABEL_21:
      if ( v12 <= 3 )
      {
        v3 = 1;
        v4 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_36;
      }
      v13 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v12 & 2) != 0 )
      {
        v3 = 1;
LABEL_44:
        v19 = sub_6D4E90(v13, v4);
        v12 = v19 & 0xFFFFFFFFFFFFFFFELL;
        v11 = v19 | 1;
        *(_QWORD *)(v4 + 72) = v11;
LABEL_28:
        if ( !v12 )
          return v2;
        goto LABEL_29;
      }
      if ( (_QWORD *)a1 == v13 )
        return v2;
      v4 = (unsigned __int64)v13;
      v3 = 1;
    }
    else if ( (v11 & 2) != 0 )
    {
      if ( v3 )
        return v2;
      v3 = 1;
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v11 & 1) == 0 )
        goto LABEL_21;
LABEL_29:
      v14 = (_DWORD **)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      v15 = v14;
      v16 = v14;
      if ( (v12 & 4) != 0 )
      {
        if ( !v14 )
          return v2;
        v17 = *v14;
        v18 = v17[3];
        if ( *((_DWORD *)v15 + 2) != v18 )
        {
          *((_DWORD *)v15 + 2) = v18;
          (*(void (__fastcall **)(_DWORD *, unsigned __int64, _DWORD **))(*(_QWORD *)v17 + 144LL))(v17, v4, v16);
        }
        v16 = (_DWORD **)v15[2];
      }
      if ( (_DWORD **)a1 == v16 )
        return v2;
      v4 = (unsigned __int64)v16;
LABEL_36:
      if ( !v4 )
        return v2;
    }
    else
    {
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v11 & 1) != 0 )
        goto LABEL_28;
      if ( v12 <= 3 )
        return v2;
      v13 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v12 & 2) != 0 )
        goto LABEL_44;
      if ( (_QWORD *)a1 == v13 )
        return v2;
      v4 = (unsigned __int64)v13;
    }
  }
}

