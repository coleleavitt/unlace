void __fastcall sub_1703B10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // r12d
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rdi
  char v11; // al
  unsigned __int16 v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v6 = a3;
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    if ( a4 )
    {
      v8 = *(_QWORD *)(a4 + 8);
      v9 = v8;
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v11 = *(_BYTE *)(v10 + 16);
      if ( v11 == 42 )
      {
        if ( (a5 & 0xFFFD) == 0x21 || (_WORD)a5 == 39 )
        {
          v9 = sub_A63D20(*(_QWORD **)(a2 + 248));
        }
        else if ( (_WORD)a5 != 36 )
        {
          switch ( a5 )
          {
            case 29:
            case 59:
LABEL_18:
              v9 = *(_QWORD *)(*(_QWORD *)(a2 + 248) + 18640LL);
              break;
            case 31:
            case 32:
            case 33:
            case 35:
            case 39:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 49:
            case 51:
            case 52:
            case 54:
            case 64:
            case 65:
LABEL_17:
              v9 = v8;
              break;
            default:
              goto LABEL_7;
          }
        }
        goto LABEL_8;
      }
      v12 = a5 - 28;
      switch ( v12 )
      {
        case 0u:
        case 2u:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x20u:
          switch ( v11 )
          {
            case 13:
              if ( (((*(_WORD *)(v10 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
                goto LABEL_8;
              break;
            case 47:
              v14 = sub_F60F10(v10, a2, a3, v8, v12, a6);
              if ( (*((_BYTE *)v14 + 74) & 1) != 0 || (v14[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                goto LABEL_8;
              break;
            case 10:
              goto LABEL_8;
          }
          break;
        case 1u:
        case 0x1Fu:
          goto LABEL_18;
        case 3u:
        case 4u:
        case 5u:
        case 7u:
        case 8u:
        case 0xBu:
        case 0xEu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x15u:
        case 0x17u:
        case 0x18u:
        case 0x1Au:
        case 0x24u:
        case 0x25u:
          goto LABEL_17;
        case 0x14u:
        case 0x16u:
        case 0x19u:
        case 0x1Bu:
          switch ( v11 )
          {
            case 13:
              if ( (((*(_WORD *)(v10 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
                goto LABEL_7;
              goto LABEL_16;
            case 47:
              v13 = sub_F60F10(v10, a2, a3, v8, v12, a6);
              if ( (*((_BYTE *)v13 + 74) & 1) == 0 && (v13[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                goto LABEL_7;
LABEL_16:
              v9 = *(_QWORD *)(*(_QWORD *)(a2 + 248) + 18720LL);
              goto LABEL_8;
            case 10:
              goto LABEL_16;
          }
          break;
        default:
          break;
      }
    }
LABEL_7:
    v9 = 0;
LABEL_8:
    *(_QWORD *)(a1 + 16) = v9;
    *(_DWORD *)(a1 + 12) = v6;
  }
}
