unsigned __int64 __fastcall sub_79CC40(__int64 a1)
{
  char v2; // al
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  _DWORD *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  int v21; // edx

  v2 = *(_BYTE *)(a1 + 8) & 0x7F;
  switch ( v2 )
  {
    case 0:
      result = *(_QWORD *)(a1 + 40);
      if ( result )
        result += 40LL;
      return result;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 16:
    case 19:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
      return a1;
    case 17:
      v4 = *(_QWORD *)(a1 + 56);
      v5 = v4;
      if ( v4 )
        goto LABEL_8;
      v12 = *(_QWORD *)(a1 + 48);
      v13 = *(_QWORD *)(v12 + 88);
      v9 = v13 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v13 & 1) != 0 )
      {
        if ( !v9 )
          return a1;
        goto LABEL_26;
      }
      if ( v9 <= 3 )
        goto LABEL_45;
      if ( (v13 & 2) != 0 )
      {
        v14 = sub_6D4E90((_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL), v12);
        v13 = v14 | 1;
        *(_QWORD *)(v12 + 88) = v14 | 1;
        v9 = v14 & 0xFFFFFFFFFFFFFFFELL;
        if ( !v9 )
        {
LABEL_44:
          v4 = *(_QWORD *)(a1 + 56);
          goto LABEL_8;
        }
LABEL_26:
        if ( (v9 & 4) == 0
          || (v15 = (_DWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
          || (v20 = *(_QWORD *)v15, v21 = *(_DWORD *)(*(_QWORD *)v15 + 12LL), v15[2] == v21) )
        {
          v5 = *(_QWORD *)(a1 + 56);
          goto LABEL_29;
        }
        v15[2] = v21;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 144LL))(v20, v12);
        goto LABEL_44;
      }
      return a1;
    case 18:
      v4 = *(_QWORD *)(a1 + 72);
      v5 = v4;
      if ( v4 )
        goto LABEL_8;
      v7 = *(_QWORD *)(a1 + 48);
      v8 = *(_QWORD *)(v7 + 88);
      v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v8 & 1) != 0 )
      {
        if ( !v9 )
          return a1;
        goto LABEL_16;
      }
      if ( v9 <= 3 )
      {
LABEL_45:
        if ( !v9 )
          return a1;
        goto LABEL_29;
      }
      if ( (v8 & 2) == 0 )
        return a1;
      v10 = sub_6D4E90((_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL), v7);
      v8 = v10 | 1;
      *(_QWORD *)(v7 + 88) = v10 | 1;
      v9 = v10 & 0xFFFFFFFFFFFFFFFELL;
      if ( v9 )
      {
LABEL_16:
        if ( (v9 & 4) != 0 )
        {
          v11 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v11 )
          {
            v18 = *(_QWORD *)v11;
            v19 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
            if ( v11[2] != v19 )
            {
              v11[2] = v19;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 144LL))(v18, v7);
              goto LABEL_41;
            }
          }
        }
        v5 = *(_QWORD *)(a1 + 72);
LABEL_29:
        v4 = v5;
        goto LABEL_8;
      }
LABEL_41:
      v4 = *(_QWORD *)(a1 + 72);
LABEL_8:
      if ( v4 > 7 )
      {
        v6 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v6 )
          return v6 + 48;
      }
      return a1;
    case 22:
      result = *(_QWORD *)(a1 + 40);
      if ( result )
        result += 48LL;
      return result;
    default:
      if ( ((v2 + 72) & 0x7Fu) > 4 )
        return a1;
      v16 = sub_78B3D0(a1 - 64);
      if ( !v16 )
      {
        v17 = *(_QWORD *)(a1 - 16);
        if ( (unsigned int)*(unsigned __int8 *)(v17 + 16) - 46 > 1 )
          return a1;
        v16 = sub_B14A40(v17);
        if ( (*(_BYTE *)(v16 + 74) & 2) == 0 )
          return a1;
      }
      return v16 + 64;
  }
}

