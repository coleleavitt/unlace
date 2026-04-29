unsigned __int64 __fastcall sub_82F0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rbp
  char *v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // eax
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // kr28_8
  __int16 v26; // ax
  unsigned __int64 v27; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-30h]

  v7 = *(int *)(a1 + 4LL * a3 + 160);
  v28 = __readfsqword(0x28u);
  v8 = a4;
  v9 = v7;
  v10 = (char *)&unk_22680 + 64 * v7;
  v11 = *(int *)(a1 + 208);
  v12 = *(_QWORD *)(a1 + 8 * v11 + 184);
  switch ( (_DWORD)v9 )
  {
    case 'E':
      v19 = *(_QWORD *)(a1 + 192);
      *(_BYTE *)(a4 + 5) = 7;
      v20 = (v12 >> 36 << 63) | (v12 >> 13) & 0x7F | v12 & 0x200000 | (v19 << 22);
      v21 = v12;
      v12 = (v12 >> 6) & 0x1F0000;
      v14 = (v21 >> 20) & 0xFF80;
      v27 = v12 | v14 | v20;
      break;
    case 'D':
      v16 = *(_QWORD *)(a1 + 192);
      v17 = *(_QWORD *)(a1 + 8 * v11 + 184);
      *(_BYTE *)(a4 + 5) = 7;
      v12 = (v12 >> 16) & 0x100000;
      v14 = (v17 >> 6) & 0xFFFFF;
      v27 = v12 | v14 | (v16 << 21);
      break;
    case 'Q':
      v24 = (v12 >> 13) & 0xFFFFF | (*(_QWORD *)(a1 + 192) << 20);
      v14 = 0x800000000000000LL;
      v12 = (v12 << 23) & 0x800000000000000LL;
      v27 = 16 * (v12 | v24);
      break;
    default:
      if ( (*((__int64 (__fastcall **)(char *, unsigned __int64, unsigned __int64 *))v10 + 1))(v10, v12, &v27) )
      {
        if ( !under_debugger )
        {
          interr(10369, v12, v13, a4, a5, a6);
LABEL_74:
          if ( !under_debugger )
            interr(10220, v12, v14, a4, a5, a6);
        }
LABEL_76:
        BUG();
      }
      if ( (_DWORD)v9 == 32 )
      {
        v25 = (unsigned int)*(unsigned __int16 *)(a2 + 24) - 125;
LABEL_31:
        switch ( v25 )
        {
          case 0LL:
          case 111LL:
            v14 = 0;
            break;
          case 1LL:
          case 112LL:
            v14 = 1;
            break;
          case 3LL:
          case 5LL:
          case 6LL:
          case 10LL:
          case 114LL:
          case 116LL:
          case 117LL:
            v14 = 7;
            break;
          case 7LL:
          case 118LL:
            v14 = 5;
            break;
          case 8LL:
          case 9LL:
            v14 = 8;
            break;
          default:
            goto LABEL_26;
        }
      }
      else
      {
        a4 = (unsigned int)(v9 - 38);
        if ( (unsigned int)a4 > 0x2B )
        {
LABEL_26:
          v14 = 2;
        }
        else
        {
          v14 = 0;
          v15 = 1LL << ((unsigned __int8)v9 - 38);
          a4 = 0x3F001FFFFFLL;
          if ( (v15 & 0x3F001FFFFFLL) == 0 )
          {
            a4 = 0xC001E00000LL;
            v14 = 1;
            if ( (v15 & 0xC001E00000LL) == 0 )
              v14 = (v15 & 0x80022000000LL) == 0 ? 2 : 7;
          }
        }
      }
      *(_BYTE *)(v8 + 5) = v14;
      break;
  }
  switch ( *(_DWORD *)v10 )
  {
    case 0:
      if ( (unsigned __int8)(**((_BYTE **)v10 + 2) - 48) > 9u )
      {
        switch ( v9 )
        {
          case 1LL:
            *(_BYTE *)(v8 + 1) = 11;
            *(_WORD *)(v8 + 6) = 32;
            return v28 - __readfsqword(0x28u);
          case 2LL:
            *(_BYTE *)(v8 + 1) = 11;
            *(_WORD *)(v8 + 6) = 64;
            return v28 - __readfsqword(0x28u);
          case 6LL:
            *(_BYTE *)(v8 + 1) = 1;
            *(_WORD *)(v8 + 6) = 0;
            return v28 - __readfsqword(0x28u);
          case 7LL:
            *(_BYTE *)(v8 + 1) = 13;
            *(_WORD *)(v8 + 6) = 10;
            return v28 - __readfsqword(0x28u);
          case 8LL:
            *(_BYTE *)(v8 + 1) = 13;
            *(_WORD *)(v8 + 6) = 13;
            return v28 - __readfsqword(0x28u);
          case 9LL:
            *(_BYTE *)(v8 + 1) = 13;
            *(_WORD *)(v8 + 6) = 14;
            return v28 - __readfsqword(0x28u);
          case 10LL:
            *(_BYTE *)(v8 + 1) = 13;
            *(_WORD *)(v8 + 6) = 15;
            return v28 - __readfsqword(0x28u);
          case 11LL:
            *(_BYTE *)(v8 + 1) = 13;
            *(_WORD *)(v8 + 6) = 16;
            return v28 - __readfsqword(0x28u);
          case 12LL:
            *(_BYTE *)(v8 + 1) = 13;
            *(_WORD *)(v8 + 6) = 17;
            return v28 - __readfsqword(0x28u);
          default:
            if ( under_debugger )
              goto LABEL_76;
            interr(10218, v12, v14, a4, a5, a6);
            break;
        }
LABEL_35:
        *(_WORD *)(v8 + 6) = 0;
      }
      else
      {
        *(_BYTE *)(v8 + 1) = 5;
        *(_QWORD *)(v8 + 8) = (int)strtol(*((const char **)v10 + 2), nullptr, 10);
      }
      return v28 - __readfsqword(0x28u);
    case 1:
      *(_WORD *)(v8 + 6) = v27;
      switch ( **((_BYTE **)v10 + 2) )
      {
        case 'a':
          *(_BYTE *)(v8 + 1) = 11;
          return v28 - __readfsqword(0x28u);
        case 'b':
          *(_BYTE *)(v8 + 1) = 10;
          return v28 - __readfsqword(0x28u);
        case 'c':
          *(_BYTE *)(v8 + 1) = 12;
          return v28 - __readfsqword(0x28u);
        case 'f':
          *(_BYTE *)(v8 + 1) = 8;
          return v28 - __readfsqword(0x28u);
        case 'p':
          *(_BYTE *)(v8 + 1) = 9;
          return v28 - __readfsqword(0x28u);
        case 'r':
          *(_BYTE *)(v8 + 1) = 1;
          return v28 - __readfsqword(0x28u);
        default:
          if ( under_debugger )
            goto LABEL_76;
          v25 = interr(10219, v12, v14, a4, a5, a6);
          break;
      }
      goto LABEL_31;
    case 2:
      v23 = v27;
      *(_BYTE *)(v8 + 1) = 3;
      *(_BYTE *)(v8 + 32) = v23;
      switch ( (int)v9 )
      {
        case 27:
          *(_WORD *)(v8 + 6) = 2;
          return v28 - __readfsqword(0x28u);
        case 28:
          *(_WORD *)(v8 + 6) = 9;
          return v28 - __readfsqword(0x28u);
        case 29:
          *(_WORD *)(v8 + 6) = 7;
          return v28 - __readfsqword(0x28u);
        case 30:
          *(_WORD *)(v8 + 6) = 6;
          return v28 - __readfsqword(0x28u);
        case 31:
          *(_WORD *)(v8 + 6) = 8;
          return v28 - __readfsqword(0x28u);
        case 32:
          *(_WORD *)(v8 + 6) = 24;
          return v28 - __readfsqword(0x28u);
        case 33:
          *(_WORD *)(v8 + 6) = 4;
          return v28 - __readfsqword(0x28u);
        case 34:
          *(_WORD *)(v8 + 6) = 5;
          return v28 - __readfsqword(0x28u);
        case 35:
          *(_WORD *)(v8 + 6) = 1;
          return v28 - __readfsqword(0x28u);
        case 36:
          goto LABEL_35;
        case 37:
          *(_WORD *)(v8 + 6) = 3;
          return v28 - __readfsqword(0x28u);
        default:
          goto LABEL_74;
      }
    case 3:
      *(_BYTE *)(v8 + 1) = 5;
      if ( (_DWORD)v9 != 73 || HIDWORD(v27) )
      {
LABEL_17:
        *(_QWORD *)(v8 + 8) = v27;
        v22 = *((_DWORD *)v10 + 14);
        if ( (v22 & 1) != 0 )
          *(_BYTE *)(v8 + 32) = 1;
        else
          *(_BYTE *)(v8 + 32) = v22 & 2;
      }
      else
      {
        switch ( (int)v27 )
        {
          case 0:
            v26 = 18;
            break;
          case 8:
            v26 = 19;
            break;
          case 9:
            v26 = 20;
            break;
          case 10:
            v26 = 21;
            break;
          case 11:
            v26 = 22;
            break;
          default:
            goto LABEL_17;
        }
        *(_BYTE *)(v8 + 1) = 13;
        *(_WORD *)(v8 + 6) = v26;
      }
      return v28 - __readfsqword(0x28u);
    case 4:
      *(_BYTE *)(v8 + 1) = 7;
      *(_BYTE *)(v8 + 5) = 9;
      *(_QWORD *)(v8 + 16) = v27 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      return v28 - __readfsqword(0x28u);
    default:
      return v28 - __readfsqword(0x28u);
  }
}
