__int64 __fastcall sub_178B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax
  unsigned __int16 v7; // cx
  __int64 v8; // rdx
  int v9; // edx

  result = a1;
  *(_QWORD *)a1 = &off_22CB8;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 66) = 0;
  *(_BYTE *)(a1 + 67) = a6;
  *(_QWORD *)(a1 + 72) = sub_154F0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  if ( (unsigned __int16)a4 > 0x1F7u )
  {
    if ( (unsigned __int16)a4 <= 0x8001u )
    {
      if ( (a4 & 0x8000u) == 0LL )
      {
        if ( (_WORD)a4 == 2560 )
        {
          *(_QWORD *)(a1 + 72) = sub_16B00;
          return result;
        }
        if ( (unsigned __int16)a4 <= 0xA00u )
        {
          if ( (_WORD)a4 == 1280 || (_WORD)a4 == 1360 )
          {
            *(_QWORD *)(a1 + 72) = sub_13F30;
            return result;
          }
        }
        else
        {
          if ( (_WORD)a4 == 3772 )
          {
            *(_QWORD *)(a1 + 72) = sub_143F0;
            return result;
          }
          if ( (_WORD)a4 == 21020 )
          {
            *(_QWORD *)(a1 + 72) = sub_16FE0;
            return result;
          }
        }
        return sub_5A70((__int64)"Relocation information is processed in general way - not tested!");
      }
LABEL_45:
      *(_QWORD *)(a1 + 72) = sub_144C0;
      return result;
    }
    if ( (_WORD)a4 == 0x8664 )
    {
      *(_QWORD *)(a1 + 72) = sub_16040;
      return result;
    }
    if ( (unsigned __int16)a4 <= 0x8664u )
    {
      if ( (unsigned __int16)a4 > 0x8302u )
      {
        if ( (_WORD)a4 != 0x8380 && (_WORD)a4 != 0x8462 )
          return sub_5A70((__int64)"Relocation information is processed in general way - not tested!");
      }
      else
      {
        if ( (unsigned __int16)a4 > 0x82FFu )
        {
          *(_QWORD *)(a1 + 72) = sub_14020;
          return result;
        }
        if ( (_WORD)a4 != 0x808C && (_WORD)a4 != 0x8180 )
          return sub_5A70((__int64)"Relocation information is processed in general way - not tested!");
      }
      goto LABEL_45;
    }
    if ( (_WORD)a4 != 0xA641 )
    {
      if ( (unsigned __int16)a4 <= 0xA641u )
      {
        if ( (_WORD)a4 != 0x8C50 )
        {
          if ( (unsigned __int16)a4 > 0x8C50u )
          {
            if ( (_WORD)a4 != 0x8E00 )
              return sub_5A70((__int64)"Relocation information is processed in general way - not tested!");
          }
          else if ( (_WORD)a4 != 0x8C00 && (_WORD)a4 != 0x8C25 )
          {
            return sub_5A70((__int64)"Relocation information is processed in general way - not tested!");
          }
        }
        goto LABEL_45;
      }
      if ( (_WORD)a4 != 0xAA64 )
        return sub_5A70((__int64)"Relocation information is processed in general way - not tested!");
    }
    *(_QWORD *)(a1 + 72) = sub_175C0;
    return result;
  }
  if ( (unsigned __int16)a4 > 0x1D7u )
  {
    v8 = 1LL << ((unsigned __int8)a4 + 40);
    if ( (v8 & 0x80A1) != 0 )
    {
      *(_QWORD *)(a1 + 72) = sub_17470;
      return result;
    }
    if ( (v8 & 0x7000000) != 0 )
    {
      *(_QWORD *)(a1 + 72) = sub_14280;
      return result;
    }
    if ( (v8 & 0x80800000) != 0 )
    {
      *(_QWORD *)(a1 + 72) = sub_17480;
      return result;
    }
    return sub_5A70((__int64)"Relocation information is processed in general way - not tested!");
  }
  if ( (unsigned __int16)a4 > 0x185u )
  {
    v7 = a4 - 418;
    if ( v7 <= 0x22u )
    {
      if ( ((1LL << v7) & 0x540000000LL) != 0 )
      {
        *(_QWORD *)(a1 + 72) = sub_16370;
        return result;
      }
      if ( ((1LL << v7) & 0x11) != 0 )
      {
        *(_QWORD *)(a1 + 72) = sub_14370;
        return result;
      }
    }
    return sub_5A70((__int64)"Relocation information is processed in general way - not tested!");
  }
  if ( (unsigned __int16)a4 <= 0x13Fu )
  {
    if ( (_WORD)a4 == 147 || (unsigned __int16)(a4 - 193) <= 1u )
    {
      v9 = *(_DWORD *)(a2 + 24);
      switch ( v9 )
      {
        case 54:
          *(_QWORD *)(a1 + 72) = sub_14DE0;
          break;
        case 470:
        case 55:
          *(_QWORD *)(a1 + 72) = sub_15990;
          break;
        case 3:
          *(_QWORD *)(a1 + 72) = sub_15DA0;
          break;
        case 28:
          *(_QWORD *)(a1 + 72) = sub_15730;
          break;
        default:
LABEL_40:
          *(_QWORD *)(a1 + 72) = sub_14FA0;
          break;
      }
      return result;
    }
    return sub_5A70((__int64)"Relocation information is processed in general way - not tested!");
  }
  LOWORD(a4) = a4 - 320;
  switch ( a4 )
  {
    case 0LL:
    case 2LL:
    case 34LL:
    case 35LL:
      goto LABEL_23;
    case 12LL:
      *(_QWORD *)(a1 + 72) = sub_13DE0;
      return result;
    case 16LL:
      goto LABEL_40;
    case 32LL:
      if ( !a5 )
        goto LABEL_24;
LABEL_23:
      *(_QWORD *)(a1 + 72) = sub_149D0;
      break;
    case 33LL:
LABEL_24:
      *(_QWORD *)(a1 + 72) = sub_14AA0;
      break;
    case 38LL:
      *(_QWORD *)(a1 + 72) = sub_14BA0;
      break;
    case 67LL:
    case 69LL:
      *(_QWORD *)(a1 + 72) = sub_14830;
      break;
    case 68LL:
      *(_QWORD *)(a1 + 72) = sub_146A0;
      break;
    default:
      return sub_5A70((__int64)"Relocation information is processed in general way - not tested!");
  }
  return result;
}

