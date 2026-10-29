__int64 __fastcall sub_1A0B6A0(_DWORD *a1, char a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax

  switch ( *a1 )
  {
    case 0:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x14:
    case 0x15:
      result = 4;
      break;
    case 1:
      v3 = sub_1A0B620((__int64)a1);
      result = 1;
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 16);
        v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v4 & 4) != 0 )
          v5 = *(_QWORD *)v5;
        result = 4 * (unsigned int)((*(_BYTE *)(v5 + 8) & 0x7F) == 18) + 1;
      }
      break;
    case 2:
      result = 3;
      break;
    case 3:
    case 4:
      result = 2;
      break;
    case 9:
    case 0x12:
      result = 6;
      break;
    case 0x13:
      v6 = sub_1A0B620((__int64)a1);
      if ( !v6 )
        goto LABEL_15;
      v7 = *(_QWORD *)(v6 + 16);
      v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 4) != 0 )
        v8 = *(_QWORD *)v8;
      if ( (*(_BYTE *)(v8 + 8) & 0x7F) == 0x12 )
        result = 5;
      else
LABEL_15:
        result = a2 == 0 ? 1 : 7;
      break;
  }
  return result;
}
