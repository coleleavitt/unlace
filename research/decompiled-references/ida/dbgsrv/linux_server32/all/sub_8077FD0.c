/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8077FD0
// Address: 0x08077FD0

//----- (08077FD0) --------------------------------------------------------
int __cdecl sub_8077FD0(int a1)
{
  unsigned __int8 v1; // al
  int result; // eax
  void **v3; // edi
  _BYTE *v4; // edx
  void *v5; // eax

  v1 = *(_BYTE *)(a1 + 116);
  if ( v1 > 0x8Fu )
  {
    switch ( v1 )
    {
      case 0xDA:
        sub_807FB00(*(int **)(a1 + 108), *(_DWORD *)(a1 + 112) - 3, 216);
LABEL_18:
        *(_BYTE *)(a1 + 116) = -87;
        return 0;
      case 0xF3:
        sub_807FB00(*(int **)(a1 + 108), *(_DWORD *)(a1 + 112) - 1, 244);
LABEL_11:
        *(_BYTE *)(a1 + 116) = -87;
        return 0;
      case 0xD9:
        sub_807FB00(*(int **)(a1 + 108), *(_DWORD *)(a1 + 112) - 2, 215);
LABEL_8:
        *(_BYTE *)(a1 + 116) = -87;
        return 0;
    }
LABEL_13:
    v3 = *(void ***)(a1 + 108);
    *(_BYTE *)(a1 + 116) = -87;
    v4 = v3[1];
    v5 = *v3;
    if ( v3[2] < v4 + 1 )
    {
      v5 = sub_80CF920((int)v3, v5, (unsigned int)(v4 + 1), 1u);
      v4 = v3[1];
      *v3 = v5;
    }
    v4[(_DWORD)v5] = -87;
    v3[1] = (char *)v3[1] + 1;
    *(_BYTE *)(a1 + 116) = -87;
    ++*(_DWORD *)(a1 + 112);
    return 0;
  }
  if ( v1 <= 0x3Fu )
    goto LABEL_13;
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
      sub_807FB00(*(int **)(a1 + 108), *(_DWORD *)(a1 + 112) - 1, v1 - 32);
      goto LABEL_11;
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
      sub_8077EF0(a1, 1u);
      *(_BYTE *)(a1 + 116) = -87;
      result = 0;
      break;
    case 0x88u:
    case 0x8Au:
      sub_807FB00(*(int **)(a1 + 108), *(_DWORD *)(a1 + 112) - 2, v1 - 4);
      goto LABEL_8;
    case 0x89u:
    case 0x8Bu:
      sub_807FB00(*(int **)(a1 + 108), *(_DWORD *)(a1 + 112) - 3, v1 - 4);
      goto LABEL_18;
    case 0x8Cu:
    case 0x8Eu:
      sub_8077EF0(a1, 2u);
      *(_BYTE *)(a1 + 116) = -87;
      result = 0;
      break;
    case 0x8Du:
    case 0x8Fu:
      sub_8077EF0(a1, 3u);
      *(_BYTE *)(a1 + 116) = -87;
      result = 0;
      break;
    default:
      goto LABEL_13;
  }
  return result;
}
