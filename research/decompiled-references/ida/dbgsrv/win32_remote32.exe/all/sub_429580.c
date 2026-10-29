/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429580
// Address: 0x00429580

//----- (00429580) --------------------------------------------------------
int __stdcall sub_429580(int a1)
{
  char v1; // cl
  int result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // eax

  v1 = *(_BYTE *)(a1 + 112);
  switch ( v1 )
  {
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
      sub_428710(*(_DWORD **)(a1 + 104), *(_DWORD *)(a1 + 108) - 1, v1 - 32);
      *(_BYTE *)(a1 + 112) = -87;
      result = 0;
      break;
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
      v3 = *(_DWORD *)(a1 + 108);
      if ( !v3 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(708);
      }
      v4 = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(a1 + 108) = v3 - 1;
      sub_4028B0(v4, v3 - 1);
      *(_BYTE *)(a1 + 112) = -87;
      result = 0;
      break;
    case -120:
    case -118:
      sub_428710(*(_DWORD **)(a1 + 104), *(_DWORD *)(a1 + 108) - 2, v1 - 4);
      *(_BYTE *)(a1 + 112) = -87;
      result = 0;
      break;
    case -119:
    case -117:
      sub_428710(*(_DWORD **)(a1 + 104), *(_DWORD *)(a1 + 108) - 3, v1 - 4);
      *(_BYTE *)(a1 + 112) = -87;
      result = 0;
      break;
    case -116:
    case -114:
      sub_42E720(a1, 2u);
      *(_BYTE *)(a1 + 112) = -87;
      result = 0;
      break;
    case -115:
    case -113:
      sub_42E720(a1, 3u);
      *(_BYTE *)(a1 + 112) = -87;
      result = 0;
      break;
    case -39:
      sub_428710(*(_DWORD **)(a1 + 104), *(_DWORD *)(a1 + 108) - 2, 215);
      *(_BYTE *)(a1 + 112) = -87;
      result = 0;
      break;
    case -38:
      sub_428710(*(_DWORD **)(a1 + 104), *(_DWORD *)(a1 + 108) - 3, 216);
      *(_BYTE *)(a1 + 112) = -87;
      result = 0;
      break;
    case -13:
      sub_428710(*(_DWORD **)(a1 + 104), *(_DWORD *)(a1 + 108) - 1, 244);
      *(_BYTE *)(a1 + 112) = -87;
      result = 0;
      break;
    default:
      v5 = *(_DWORD *)(a1 + 104);
      *(_BYTE *)(a1 + 112) = -87;
      v6 = *(_DWORD *)(v5 + 4) + 1;
      if ( v6 > *(_DWORD *)(v5 + 8) )
        *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v6, 1u);
      *(_BYTE *)(*(_DWORD *)(v5 + 4) + *(_DWORD *)v5) = -87;
      ++*(_DWORD *)(v5 + 4);
      ++*(_DWORD *)(a1 + 108);
      *(_BYTE *)(a1 + 112) = -87;
      result = 0;
      break;
  }
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
