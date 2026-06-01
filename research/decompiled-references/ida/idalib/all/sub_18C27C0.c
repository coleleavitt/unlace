bool __fastcall sub_18C27C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // al
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  char v14; // al
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ecx
  __int64 v20; // rdi
  char v21; // al
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax

  v6 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 200LL) >> 6;
  if ( v6 )
  {
    if ( v6 != 1 )
      return sub_18C25E0(a1, a2, a3, a4, a5, a6);
    v9 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(unsigned __int8 *)(v10 + 16);
    switch ( (_BYTE)v11 )
    {
      case 0xD:
        if ( (((*(_WORD *)(v10 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
          goto LABEL_13;
        break;
      case 0x2F:
        v16 = sub_F60F10(v10, a2, a3, v11, a5, a6);
        if ( (*((_BYTE *)v16 + 74) & 1) != 0 || (v16[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          goto LABEL_13;
        v9 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
        break;
      case 0xA:
        goto LABEL_13;
    }
    v12 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 57;
    if ( (unsigned int)v12 > 1 )
    {
      v9 = sub_18BBF30(v9, a2, a3, v12);
      if ( !v9 )
        return 0;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(_BYTE *)(v13 + 16);
    switch ( v14 )
    {
      case 13:
        if ( (((*(_WORD *)(v13 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
          return 0;
        break;
      case 47:
        v23 = sub_F60F10(v13, a2, a3, v12, a5, a6);
        if ( (*((_BYTE *)v23 + 74) & 1) == 0 && (v23[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return 0;
        break;
      case 10:
        break;
      default:
        return 0;
    }
LABEL_13:
    v17 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    a4 = *(unsigned __int8 *)(v18 + 16);
    switch ( (_BYTE)a4 )
    {
      case 0xD:
        v19 = *(unsigned __int16 *)(v18 + 18);
        LOWORD(v19) = (unsigned __int16)v19 >> 3;
        a4 = (unsigned int)(v19 + 76);
        LOWORD(a4) = a4 & 0x1FF;
        if ( (unsigned __int16)a4 > 0x13u )
        {
LABEL_15:
          a4 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 57;
          if ( (unsigned int)a4 > 1 )
          {
            v17 = sub_18BBF30(v17, a2, a3, a4);
            if ( !v17 )
              return 0;
          }
          v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          v21 = *(_BYTE *)(v20 + 16);
          switch ( v21 )
          {
            case 13:
              if ( (((*(_WORD *)(v20 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
                return 0;
              break;
            case 47:
              v24 = sub_F60F10(v20, a2, a3, a4, a5, a6);
              if ( (*((_BYTE *)v24 + 74) & 1) == 0 && (v24[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                return 0;
              break;
            case 10:
              break;
            default:
              return 0;
          }
        }
        break;
      case 0x2F:
        v22 = sub_F60F10(v18, a2, a3, a4, a5, a6);
        if ( (*((_BYTE *)v22 + 74) & 1) == 0 && (v22[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v17 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_15;
        }
        break;
      case 0xA:
        break;
      default:
        goto LABEL_15;
    }
    return sub_18C25E0(a1, a2, a3, a4, a5, a6);
  }
  return 0;
}
