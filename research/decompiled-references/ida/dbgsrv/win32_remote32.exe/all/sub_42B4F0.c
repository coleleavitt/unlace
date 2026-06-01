/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B4F0
// Address: 0x0042B4F0

//----- (0042B4F0) --------------------------------------------------------
int __stdcall sub_42B4F0(int a1)
{
  int v1; // esi
  unsigned int v2; // eax

  switch ( *(_BYTE *)(a1 + 112) )
  {
    case 0xA0:
    case 0xA1:
    case 0xA7:
    case 0xB4:
    case 0xB5:
    case 0xB6:
    case 0xB7:
    case 0xB8:
    case 0xB9:
    case 0xBA:
    case 0xBB:
    case 0xBC:
    case 0xBD:
    case 0xBE:
    case 0xC8:
    case 0xC9:
    case 0xCA:
    case 0xCB:
    case 0xCC:
    case 0xCD:
    case 0xCE:
    case 0xD3:
    case 0xE0:
    case 0xE1:
    case 0xE2:
    case 0xE3:
    case 0xE4:
    case 0xE5:
    case 0xE6:
    case 0xE7:
    case 0xE8:
    case 0xE9:
    case 0xEA:
    case 0xEB:
    case 0xEC:
    case 0xED:
    case 0xEE:
    case 0xEF:
      return 0;
    default:
      v1 = *(_DWORD *)(a1 + 104);
      *(_BYTE *)(a1 + 112) = -50;
      v2 = *(_DWORD *)(v1 + 4) + 1;
      if ( v2 > *(_DWORD *)(v1 + 8) )
        *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v2, 1u);
      *(_BYTE *)(*(_DWORD *)v1 + (*(_DWORD *)(v1 + 4))++) = -50;
      ++*(_DWORD *)(a1 + 108);
      break;
  }
  return 0;
}
