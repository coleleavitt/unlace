__int64 __fastcall sub_9F760(__int64 a1)
{
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 16) & 0xFFFFFFF )
  {
    case 0:
    case 5:
    case 6:
      return 0;
    case 1:
    case 2:
    case 4:
    case 0xA:
      goto LABEL_2;
    case 3:
      if ( *(_QWORD *)(a1 + 28) > 1u )
        goto LABEL_5;
LABEL_2:
      qstrncpy();
      goto LABEL_3;
    case 7:
    case 8:
    case 9:
LABEL_5:
      qsnprintf();
LABEL_3:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

