__int64 __fastcall sub_788D80(_QWORD *a1, unsigned __int64 a2)
{
  char v3; // bp
  unsigned __int64 v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  unsigned int v9; // ebp
  _DWORD **v11; // rdi
  _DWORD **v12; // r14
  _DWORD **v13; // rdx
  _DWORD *v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // rdi
  __int64 v17; // r15
  char v18; // r14
  unsigned __int64 v19; // r12
  _BYTE *v20; // rax
  char v21; // bp
  _BYTE *v22; // rbx

  v3 = 0;
  v4 = (unsigned __int64)a1;
  while ( 1 )
  {
    v5 = (_DWORD *)sub_77BC00(v4);
    if ( v5 )
      break;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + 72);
      if ( (v6 & 1) == 0 )
        break;
      if ( v3 )
        return 0;
      v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v6 & 1) != 0 )
      {
        v3 = 1;
        goto LABEL_18;
      }
LABEL_7:
      if ( v7 <= 3 )
      {
        v3 = 1;
        v4 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_26;
      }
      v8 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v7 & 2) != 0 )
      {
        v3 = 1;
        goto LABEL_34;
      }
      if ( a1 == v8 )
        return 0;
      v4 = (unsigned __int64)v8;
      v3 = 1;
      v5 = (_DWORD *)sub_77BC00((__int64)v8);
      if ( v5 )
        goto LABEL_11;
    }
    if ( (v6 & 2) != 0 )
    {
      if ( v3 )
        return 0;
      v3 = 1;
      v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v6 & 1) != 0 )
        goto LABEL_19;
      goto LABEL_7;
    }
    v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v6 & 1) != 0 )
      goto LABEL_18;
    if ( v7 <= 3 )
      return 0;
    v8 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 2) != 0 )
    {
LABEL_34:
      v16 = sub_6D4E90(v8, v4);
      v7 = v16 & 0xFFFFFFFFFFFFFFFELL;
      v6 = v16 | 1;
      *(_QWORD *)(v4 + 72) = v6;
LABEL_18:
      if ( !v7 )
        return 0;
LABEL_19:
      v11 = (_DWORD **)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      v12 = v11;
      v13 = v11;
      if ( (v7 & 4) != 0 )
      {
        if ( !v11 )
          return 0;
        v14 = *v11;
        v15 = v14[3];
        if ( *((_DWORD *)v12 + 2) != v15 )
        {
          *((_DWORD *)v12 + 2) = v15;
          (*(void (__fastcall **)(_DWORD *, unsigned __int64, _DWORD **))(*(_QWORD *)v14 + 144LL))(v14, v4, v13);
        }
        v13 = (_DWORD **)v12[2];
      }
      if ( a1 == v13 )
        return 0;
      v4 = (unsigned __int64)v13;
LABEL_26:
      if ( v4 )
        continue;
      return 0;
    }
    if ( a1 == v8 )
      return 0;
    v4 = (unsigned __int64)v8;
  }
LABEL_11:
  if ( (*v5 & 0x20000) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1[6] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 0;
  v9 = sub_7837E0(v4, a2);
  if ( !(_BYTE)v9 )
    return 0;
  v17 = *(_QWORD *)(a2 + 2160);
  v18 = *(_BYTE *)(v17 + 1);
  if ( (v18 & 8) == 0 && (*(_BYTE *)sub_798D60(a1) & 8) == 0 )
  {
LABEL_38:
    if ( (*(_BYTE *)(v17 + 47) & 0x20) != 0 )
      goto LABEL_39;
    return v9;
  }
  if ( !sub_77C620(v4, a2) )
    return 0;
  v17 = *(_QWORD *)(a2 + 2160);
  v18 = *(_BYTE *)(v17 + 1);
  if ( (v18 & 8) == 0 )
    goto LABEL_38;
LABEL_39:
  if ( (v18 & 0x10) == 0 )
  {
    v19 = sub_77BC00(v4);
    v20 = (_BYTE *)sub_77C090(v4);
    v21 = *v20;
    v22 = v20;
    if ( (*v20 & 0x20) != 0 )
    {
      return (v21 & 0x10) != 0;
    }
    else
    {
      *v20 = v21 | 0x20;
      v9 = sub_865090(v19, a2, 0);
      *v22 = (16 * (v9 & 1)) | *v22 & 0xEF;
    }
  }
  return v9;
}

