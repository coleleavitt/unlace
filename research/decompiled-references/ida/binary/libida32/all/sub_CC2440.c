__int64 __fastcall sub_CC2440(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  unsigned int v10; // eax
  char v11; // dl
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edx
  bool v18; // cc
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rdx
  bool v22; // cc
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rdi
  __int64 v28; // rsi
  unsigned int v29; // eax
  char v30; // dl

  while ( 1 )
  {
    v5 = a1;
    v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    v7 = *(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v7 + 16) != 13 )
      goto LABEL_23;
    v8 = (*(_WORD *)(v7 + 18) >> 3) & 0x1FF;
    switch ( v8 )
    {
      case 0x1B4u:
        return 0x10000000ALL;
      case 0x1E8u:
        return 0x10000000DLL;
      case 0x1F3u:
        return 0x10000000ELL;
      case 0x1C3u:
        v17 = *(_DWORD *)(a1 + 36);
        v18 = v17 <= 0x10;
        if ( v17 != 16 )
          goto LABEL_33;
LABEL_28:
        v19 = 2;
        return v19 & 0x3F | 0x100000000LL;
      case 0x1BBu:
        v17 = *(_DWORD *)(a1 + 36);
        v22 = v17 <= 0x10;
        if ( v17 == 16 )
          goto LABEL_55;
        goto LABEL_48;
      case 0x1C4u:
        v17 = *(_DWORD *)(a1 + 40);
        v18 = v17 <= 0x10;
        if ( v17 != 16 )
          goto LABEL_33;
        goto LABEL_28;
      case 0x1BCu:
        v17 = *(_DWORD *)(a1 + 40);
        v22 = v17 <= 0x10;
        if ( v17 == 16 )
          goto LABEL_55;
        goto LABEL_48;
      case 0x1C5u:
        v17 = *(_DWORD *)(a1 + 44);
        v18 = v17 <= 0x10;
        if ( v17 != 16 )
          goto LABEL_33;
        goto LABEL_28;
      case 0x1BDu:
        v17 = *(_DWORD *)(a1 + 44);
        v22 = v17 <= 0x10;
        if ( v17 == 16 )
          goto LABEL_55;
        goto LABEL_48;
      case 0x1C6u:
        v17 = *(_DWORD *)(a1 + 48);
        v18 = v17 <= 0x10;
        if ( v17 != 16 )
          goto LABEL_33;
        goto LABEL_28;
    }
    if ( v8 == 446 )
      break;
    if ( (unsigned int)v8 - 448 <= 1 )
      return 0x100000000LL;
    v9 = (unsigned int)v8 - 437;
    if ( (unsigned int)v9 <= 1 || v8 == 440 )
      return 0x100000001LL;
    if ( v8 <= 0x1BFu )
    {
      if ( v8 > 0x1B3u )
      {
        v29 = sub_A884B0(*(_QWORD *)a1, a2, v8, v9, a5);
        if ( v29 == 16 )
        {
          v30 = 3;
        }
        else if ( v29 <= 0x10 )
        {
          v30 = 1;
          if ( v29 != 8 )
            v30 = 8;
        }
        else
        {
          v30 = 5;
          if ( v29 != 32 )
            v30 = (v29 != 64) + 7;
        }
        return v30 & 0xF | 0x100000000LL;
      }
    }
    else
    {
      if ( v8 <= 0x1C7u )
      {
        v10 = sub_A884B0(*(_QWORD *)a1, a2, v8, v9, a5);
        if ( v10 == 16 )
        {
          v11 = 2;
        }
        else if ( v10 <= 0x10 )
        {
          v11 = 9 * (v10 != 8);
        }
        else
        {
          v11 = 4;
          if ( v10 != 32 )
            v11 = 3 * (v10 != 64) + 6;
        }
        return v11 & 0x3F | 0x100000000LL;
      }
      if ( ((v8 + 32) & 0x1FFu) <= 7 )
        return 0x10000000CLL;
    }
LABEL_23:
    v13 = *(_QWORD *)v6;
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v15 = *(unsigned __int8 *)(v14 + 16);
    v16 = (unsigned int)(v15 - 42);
    if ( (unsigned __int8)(v15 - 42) <= 2u )
      return 0x10000000DLL;
    if ( (_BYTE)v15 == 33 )
      return 0x10000000ELL;
    if ( *(_BYTE *)(v13 + 16) == 10 )
      goto LABEL_26;
    if ( (_BYTE)v15 == 10 )
    {
      v13 = sub_F3F310(v13, a2, v15, v16);
      if ( !v13 )
      {
        v13 = *(_QWORD *)v6;
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v15 = *(unsigned __int8 *)(v14 + 16);
        goto LABEL_41;
      }
LABEL_26:
      v17 = (*(_DWORD *)(v13 + 32) >> 1) & 0xFFFFFF;
      if ( (*(_BYTE *)(v13 + 32) & 1) != 0 )
      {
        v22 = v17 <= 0x10;
        if ( v17 == 16 )
          goto LABEL_55;
        goto LABEL_48;
      }
      v18 = v17 <= 0x10;
      if ( v17 == 16 )
        goto LABEL_28;
LABEL_33:
      if ( v18 )
      {
        v19 = 9 * (v17 != 8);
      }
      else
      {
        v19 = 4;
        if ( v17 != 32 )
          v19 = 3 * (v17 != 64) + 6;
      }
      return v19 & 0x3F | 0x100000000LL;
    }
LABEL_41:
    if ( (_BYTE)v15 != 47 )
    {
      v24 = *(unsigned __int8 *)(v13 + 16);
      if ( (_BYTE)v24 == 7 )
      {
LABEL_63:
        a2 = *(_QWORD *)(v13 + 32);
        goto LABEL_46;
      }
      if ( (_BYTE)v15 == 7 )
      {
        v13 = sub_F3F310(v13, a2, v15, v24);
        if ( v13 )
          goto LABEL_63;
        v13 = *(_QWORD *)v6;
        LOBYTE(v24) = *(_BYTE *)(*(_QWORD *)v6 + 16LL);
      }
      if ( (_BYTE)v24 != 15 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v26 = *(_BYTE *)(v25 + 16);
        if ( v26 == 34 || v26 == 11 )
          return 0x10000000DLL;
        if ( v26 == 13 && (((*(_WORD *)(v25 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
          return 0x10000000BLL;
        else
          return 0;
      }
      goto LABEL_63;
    }
    v20 = sub_F3D1D0(v14, a2, v15, v16, a5);
    v21 = *(_QWORD *)(v20 + 128);
    if ( (*(_BYTE *)(v20 + 74) & 1) != 0 )
    {
      a2 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v21 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_46;
    }
    else
    {
      a2 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v21 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return 0;
    }
    if ( (v21 & 4) != 0 )
    {
      v27 = *(_QWORD *)a2;
      v28 = *(_QWORD *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_QWORD *)(v28 + 8) & 7LL | (*(__int64 *)(v28 + 8) >> 3) & 1 )
        a2 = sub_F411C0(v27) & 0xFFFFFFFFFFFFFFF0LL;
      else
        a2 = v28 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      a2 = v21 & 0xFFFFFFFFFFFFFFF0LL;
    }
LABEL_46:
    a1 = v5;
  }
  v17 = *(_DWORD *)(a1 + 48);
  v22 = v17 <= 0x10;
  if ( v17 == 16 )
  {
LABEL_55:
    v23 = 3;
    return v23 & 0xF | 0x100000000LL;
  }
LABEL_48:
  if ( v22 )
  {
    v23 = 1;
    if ( v17 != 8 )
      v23 = 8;
  }
  else
  {
    v23 = 5;
    if ( v17 != 32 )
      v23 = (v17 != 64) + 7;
  }
  return v23 & 0xF | 0x100000000LL;
}

