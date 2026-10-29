/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_846D4
// Address: 0x000846D4

//----- (000846D4) --------------------------------------------------------
_DWORD *__fastcall sub_846D4(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *result; // r0

  if ( !a2 )
    return nullptr;
  v3 = a2;
  while ( 2 )
  {
    switch ( *v3 )
    {
      case 0:
      case 6:
      case 0x18:
      case 0x27:
      case 0x2C:
      case 0x31:
      case 0x40:
      case 0x41:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x4A:
      case 0x4B:
        goto LABEL_6;
      case 5:
        result = sub_846B4(a1, v3 + 2);
        if ( result && *result == 47 )
          return result;
        goto LABEL_6;
      case 7:
      case 8:
      case 0x32:
        goto LABEL_5;
      default:
        result = (_DWORD *)sub_846D4(a1, v3[2]);
        if ( result )
          return result;
LABEL_5:
        v3 = (_DWORD *)v3[3];
        if ( v3 )
          continue;
LABEL_6:
        result = nullptr;
        break;
    }
    return result;
  }
}
