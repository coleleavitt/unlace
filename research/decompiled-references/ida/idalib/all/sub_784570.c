__int64 __fastcall sub_784570(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  v1 = *(_BYTE *)(a1 + 212);
  if ( v1 > 0x8Fu )
  {
    switch ( v1 )
    {
      case 0xDA:
        sub_78C650(*(_QWORD *)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 3), 216);
        *(_BYTE *)(a1 + 212) = -87;
        return 0;
      case 0xF3:
        sub_78C650(*(_QWORD *)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 1), 244);
        *(_BYTE *)(a1 + 212) = -87;
        return 0;
      case 0xD9:
        sub_78C650(*(_QWORD *)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 2), 215);
        *(_BYTE *)(a1 + 212) = -87;
        return 0;
    }
    goto LABEL_11;
  }
  if ( v1 <= 0x3Fu )
  {
LABEL_11:
    v3 = *(__int64 **)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -87;
    v4 = v3[1];
    v5 = *v3;
    if ( v3[2] < (unsigned __int64)(v4 + 1) )
    {
      v6 = qvector_reserve(v3, v5, v4 + 1, 1);
      *v3 = v6;
      v5 = v6;
      v4 = v3[1];
    }
    *(_BYTE *)(v5 + v4) = -87;
    ++v3[1];
    *(_BYTE *)(a1 + 212) = -87;
    ++*(_DWORD *)(a1 + 208);
    return 0;
  }
  switch ( v1 )
  {
    case 0x40u:
    case 0x41u:
    case 0x42u:
    case 0x43u:
    case 0x44u:
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x48u:
    case 0x49u:
    case 0x4Au:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
    case 0x4Eu:
    case 0x4Fu:
    case 0x50u:
    case 0x51u:
    case 0x52u:
    case 0x53u:
    case 0x54u:
    case 0x55u:
    case 0x56u:
    case 0x57u:
    case 0x58u:
    case 0x59u:
    case 0x5Au:
    case 0x5Bu:
    case 0x5Cu:
    case 0x5Du:
    case 0x5Eu:
    case 0x5Fu:
      sub_78C650(*(_QWORD *)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 1), (unsigned int)(char)(v1 - 32));
      *(_BYTE *)(a1 + 212) = -87;
      result = 0;
      break;
    case 0x60u:
    case 0x61u:
    case 0x62u:
    case 0x63u:
    case 0x64u:
    case 0x65u:
    case 0x66u:
    case 0x67u:
    case 0x68u:
    case 0x69u:
    case 0x6Au:
    case 0x6Bu:
    case 0x6Cu:
    case 0x6Du:
    case 0x6Eu:
    case 0x6Fu:
    case 0x70u:
    case 0x71u:
    case 0x72u:
    case 0x73u:
    case 0x74u:
    case 0x75u:
    case 0x76u:
    case 0x77u:
    case 0x78u:
    case 0x79u:
    case 0x7Au:
    case 0x7Bu:
    case 0x7Cu:
    case 0x7Du:
    case 0x7Eu:
    case 0x7Fu:
      sub_7844A0(a1, 1u);
      *(_BYTE *)(a1 + 212) = -87;
      result = 0;
      break;
    case 0x88u:
    case 0x8Au:
      sub_78C650(*(_QWORD *)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 2), (unsigned __int8)(v1 - 4));
      *(_BYTE *)(a1 + 212) = -87;
      result = 0;
      break;
    case 0x89u:
    case 0x8Bu:
      sub_78C650(*(_QWORD *)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 3), (unsigned __int8)(v1 - 4));
      *(_BYTE *)(a1 + 212) = -87;
      result = 0;
      break;
    case 0x8Cu:
    case 0x8Eu:
      sub_7844A0(a1, 2u);
      *(_BYTE *)(a1 + 212) = -87;
      result = 0;
      break;
    case 0x8Du:
    case 0x8Fu:
      sub_7844A0(a1, 3u);
      *(_BYTE *)(a1 + 212) = -87;
      result = 0;
      break;
    default:
      goto LABEL_11;
  }
  return result;
}
