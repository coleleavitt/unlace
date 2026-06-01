/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002F420
// Address: 0x000000014002F420

//----- (000000014002F420) ----------------------------------------------------
__int64 __fastcall sub_14002F420(__int64 a1)
{
  char v1; // r8
  __int64 result; // rax
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // eax

  v1 = *(_BYTE *)(a1 + 204);
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
      sub_14002E350(*(__int64 **)(a1 + 192), (unsigned int)(*(_DWORD *)(a1 + 200) - 1), v1 - 32);
      *(_BYTE *)(a1 + 204) = -87;
      return 0;
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
      v4 = *(_DWORD *)(a1 + 200);
      if ( !v4 )
        goto LABEL_16;
      v5 = v4 - 1;
      goto LABEL_9;
    case -120:
    case -118:
      sub_14002E350(*(__int64 **)(a1 + 192), (unsigned int)(*(_DWORD *)(a1 + 200) - 2), v1 - 4);
      *(_BYTE *)(a1 + 204) = -87;
      return 0;
    case -119:
    case -117:
      sub_14002E350(*(__int64 **)(a1 + 192), (unsigned int)(*(_DWORD *)(a1 + 200) - 3), v1 - 4);
      *(_BYTE *)(a1 + 204) = -87;
      return 0;
    case -116:
    case -114:
      v7 = *(_DWORD *)(a1 + 200);
      if ( v7 < 2 )
        goto LABEL_16;
      v5 = v7 - 2;
      goto LABEL_9;
    case -115:
    case -113:
      v8 = *(_DWORD *)(a1 + 200);
      if ( v8 < 3 )
      {
LABEL_16:
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(708);
      }
      v5 = v8 - 3;
LABEL_9:
      v6 = *(_QWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 200) = v5;
      sub_140002EF0(v6, v5);
      *(_BYTE *)(a1 + 204) = -87;
      result = 0;
      break;
    case -39:
      sub_14002E350(*(__int64 **)(a1 + 192), (unsigned int)(*(_DWORD *)(a1 + 200) - 2), 215);
      *(_BYTE *)(a1 + 204) = -87;
      result = 0;
      break;
    case -38:
      sub_14002E350(*(__int64 **)(a1 + 192), (unsigned int)(*(_DWORD *)(a1 + 200) - 3), 216);
      *(_BYTE *)(a1 + 204) = -87;
      result = 0;
      break;
    case -13:
      sub_14002E350(*(__int64 **)(a1 + 192), (unsigned int)(*(_DWORD *)(a1 + 200) - 1), 244);
      *(_BYTE *)(a1 + 204) = -87;
      result = 0;
      break;
    default:
      sub_1400347C0(a1, 169);
      *(_BYTE *)(a1 + 204) = -87;
      result = 0;
      break;
  }
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
