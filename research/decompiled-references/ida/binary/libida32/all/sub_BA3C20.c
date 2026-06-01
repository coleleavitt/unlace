__int64 __fastcall sub_BA3C20(_BYTE *a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rax

  if ( !a2 )
    return 1;
  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( !a1[10] )
  {
    if ( (*(_BYTE *)(a2 + 29) & 2) != 0 )
    {
      if ( v2 == 67 )
      {
        result = (*(_BYTE *)(a2 + 60) & 4) != 0;
        if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
        {
          if ( a2 != -80 )
            return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 152LL))(a1);
          return result;
        }
      }
      return 1;
    }
    if ( v2 == 71 )
    {
      if ( (*(_DWORD *)(a2 + 40) & 7) != 7 )
        return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 864LL))(a1);
      v4 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_DWORD *)v4 )
        return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 864LL))(a1);
      v5 = *(_QWORD *)(v4 + 16);
      if ( !v5 || (*(_BYTE *)(v5 + 28) & 0x7F) != 0x46 )
        return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 864LL))(a1);
      return 1;
    }
  }
  switch ( v2 )
  {
    case 0:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 296LL))(a1);
      break;
    case 1:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 304LL))(a1);
      break;
    case 2:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 312LL))(a1);
      break;
    case 3:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 320LL))(a1);
      break;
    case 4:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 328LL))(a1);
      break;
    case 5:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 336LL))(a1);
      break;
    case 6:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 344LL))(a1);
      break;
    case 7:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 352LL))(a1);
      break;
    case 8:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 360LL))(a1);
      break;
    case 9:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 368LL))(a1);
      break;
    case 10:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 376LL))(a1);
      break;
    case 11:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 384LL))(a1);
      break;
    case 12:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 392LL))(a1);
      break;
    case 13:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 400LL))(a1);
      break;
    case 14:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 408LL))(a1);
      break;
    case 15:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 416LL))(a1);
      break;
    case 16:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 424LL))(a1);
      break;
    case 17:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 432LL))(a1);
      break;
    case 18:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 440LL))(a1);
      break;
    case 19:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 448LL))(a1);
      break;
    case 20:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 456LL))(a1);
      break;
    case 21:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 464LL))(a1);
      break;
    case 22:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 472LL))(a1);
      break;
    case 23:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 480LL))(a1);
      break;
    case 24:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 488LL))(a1);
      break;
    case 25:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 496LL))(a1);
      break;
    case 26:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 504LL))(a1);
      break;
    case 27:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 512LL))(a1);
      break;
    case 28:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 520LL))(a1);
      break;
    case 29:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 528LL))(a1);
      break;
    case 30:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 536LL))(a1);
      break;
    case 31:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 544LL))(a1);
      break;
    case 32:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 552LL))(a1);
      break;
    case 33:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 560LL))(a1);
      break;
    case 34:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 568LL))(a1);
      break;
    case 35:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 576LL))(a1);
      break;
    case 36:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 584LL))(a1);
      break;
    case 37:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 592LL))(a1);
      break;
    case 38:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 600LL))(a1);
      break;
    case 39:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 608LL))(a1);
      break;
    case 40:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 616LL))(a1);
      break;
    case 41:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 624LL))(a1);
      break;
    case 42:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 632LL))(a1);
      break;
    case 43:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 640LL))(a1);
      break;
    case 44:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 648LL))(a1);
      break;
    case 45:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 656LL))(a1);
      break;
    case 46:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 664LL))(a1);
      break;
    case 47:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 672LL))(a1);
      break;
    case 48:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 680LL))(a1);
      break;
    case 49:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 688LL))(a1);
      break;
    case 50:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 696LL))(a1);
      break;
    case 51:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 704LL))(a1);
      break;
    case 52:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 712LL))(a1);
      break;
    case 53:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 720LL))(a1);
      break;
    case 54:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 728LL))(a1);
      break;
    case 55:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 736LL))(a1);
      break;
    case 56:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 744LL))(a1);
      break;
    case 57:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 752LL))(a1);
      break;
    case 58:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 760LL))(a1);
      break;
    case 59:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 768LL))(a1);
      break;
    case 60:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 776LL))(a1);
      break;
    case 61:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 784LL))(a1);
      break;
    case 62:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 792LL))(a1);
      break;
    case 63:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 800LL))(a1);
      break;
    case 64:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 808LL))(a1);
      break;
    case 65:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 816LL))(a1);
      break;
    case 66:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 824LL))(a1);
      break;
    case 67:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 832LL))(a1);
      break;
    case 68:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 840LL))(a1);
      break;
    case 69:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 848LL))(a1);
      break;
    case 70:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 856LL))(a1);
      break;
    case 71:
      return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 864LL))(a1);
    case 72:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 872LL))(a1);
      break;
    case 73:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 880LL))(a1);
      break;
    case 74:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 888LL))(a1);
      break;
    case 75:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 896LL))(a1);
      break;
    case 76:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 904LL))(a1);
      break;
    case 77:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 912LL))(a1);
      break;
    case 78:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 920LL))(a1);
      break;
    case 79:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 928LL))(a1);
      break;
    case 80:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 936LL))(a1);
      break;
    case 81:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 944LL))(a1);
      break;
    case 82:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 952LL))(a1);
      break;
    case 83:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 960LL))(a1);
      break;
    case 84:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 968LL))(a1);
      break;
    case 85:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 976LL))(a1);
      break;
    case 86:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 984LL))(a1);
      break;
    case 87:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 992LL))(a1);
      break;
    case 88:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1000LL))(a1);
      break;
    case 89:
      result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1008LL))(a1);
      break;
    default:
      return 1;
  }
  return result;
}

