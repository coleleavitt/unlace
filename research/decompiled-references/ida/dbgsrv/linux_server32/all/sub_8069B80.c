/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069B80
// Address: 0x08069B80

//----- (08069B80) --------------------------------------------------------
int __cdecl sub_8069B80(int a1)
{
  unsigned __int16 v1; // ax
  int v2; // edx

  v1 = *(_WORD *)(a1 + 402);
  if ( v1 > 0xF9u )
  {
    v2 = 55;
    if ( v1 != 28927 )
    {
      v2 = -1;
      if ( v1 == 0x9026 )
        return 24;
    }
  }
  else if ( v1 <= 1u )
  {
    return -1;
  }
  else
  {
    switch ( *(_WORD *)(a1 + 402) )
    {
      case 2:
      case 0x12:
      case 0x2B:
        v2 = 23;
        break;
      case 3:
      case 6:
      case 0x3E:
        v2 = 0;
        break;
      case 4:
        v2 = 7;
        break;
      case 7:
        v2 = 2;
        break;
      case 8:
      case 0x19:
      case 0x1E:
      case 0xF9:
        v2 = 12;
        break;
      case 0xF:
        v2 = 25;
        break;
      case 0x13:
        v2 = 32;
        break;
      case 0x14:
      case 0x15:
        v2 = 15;
        break;
      case 0x16:
        v2 = 70;
        break;
      case 0x17:
        v2 = 59;
        break;
      case 0x28:
        v2 = 13;
        break;
      case 0x2A:
        v2 = 18;
        break;
      case 0x2D:
      case 0x5D:
      case 0xC3:
        v2 = 63;
        break;
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x31:
        v2 = 21;
        break;
      case 0x32:
        v2 = 31;
        break;
      case 0x35:
        v2 = 11;
        break;
      case 0x43:
        v2 = 42;
        break;
      case 0x46:
        v2 = 9;
        break;
      case 0x53:
        v2 = 20;
        break;
      case 0x54:
        v2 = 43;
        break;
      case 0x57:
        v2 = 55;
        break;
      case 0x58:
        v2 = 37;
        break;
      case 0x5A:
        v2 = 53;
        break;
      case 0x74:
        v2 = 29;
        break;
      case 0x75:
        v2 = 62;
        break;
      default:
        return -1;
    }
  }
  return v2;
}
