__int64 __fastcall sub_104B9F0(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // r12d
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 260) > 0x1Fu )
    return 64;
  v2 = a1 + 216;
  switch ( *(_DWORD *)(a1 + 260) )
  {
    case 0:
    case 2:
    case 3:
    case 4:
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
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1D:
    case 0x1E:
      return 64;
    case 1:
    case 9:
      v3 = 14;
      v4 = 10;
      goto LABEL_4;
    case 5:
    case 0x1B:
      v3 = 0;
      v4 = 12;
      goto LABEL_4;
    case 0x1C:
      v3 = 0;
      v4 = 5;
LABEL_4:
      v5 = sub_2293DC0(v2);
      if ( (unsigned int)v5 < v4 || (_DWORD)v5 == v4 && (HIDWORD(v5) & 0x7FFFFFFFu) < v3 )
        return 64;
      goto LABEL_10;
    case 0x1F:
      sub_2293DC0(v2);
LABEL_10:
      result = *(unsigned __int8 *)(a1 + 60);
      break;
  }
  return result;
}

