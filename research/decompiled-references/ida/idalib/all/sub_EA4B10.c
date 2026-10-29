__int64 __fastcall sub_EA4B10(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rdx

  result = 0;
  if ( (*(_BYTE *)(a1 + 29) & 2) == 0 )
  {
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    {
      result = 0;
      if ( a2 != (_QWORD *)*v3 )
        return result;
    }
    else
    {
      result = 0;
      if ( a2 != v3 )
        return result;
    }
    switch ( (*(_BYTE *)(a1 + 28) + 119) & 0x7F )
    {
      case 0:
      case 9:
      case 0x18:
      case 0x1A:
      case 0x1B:
      case 0x1D:
      case 0x1F:
      case 0x28:
      case 0x29:
      case 0x37:
      case 0x38:
      case 0x3E:
      case 0x42:
      case 0x4D:
      case 0x50:
        result = 1;
        break;
      default:
        result = 0;
        break;
    }
  }
  return result;
}
