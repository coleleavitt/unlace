/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38C64
// Address: 0x00038C64

//----- (00038C64) --------------------------------------------------------
int __fastcall sub_38C64(int a1)
{
  int v1; // r4
  int v3; // r3
  _BYTE *v4; // r0

  switch ( *(_BYTE *)(a1 + 120) )
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
      v1 = *(_DWORD *)(a1 + 112);
      *(_BYTE *)(a1 + 120) = -50;
      v3 = *(_DWORD *)(v1 + 4);
      if ( (unsigned int)(v3 + 1) > *(_DWORD *)(v1 + 8) )
      {
        v4 = sub_77EB0(v1, *(void **)v1, v3 + 1, 1u);
        v3 = *(_DWORD *)(v1 + 4);
        *(_DWORD *)v1 = v4;
      }
      else
      {
        v4 = *(_BYTE **)v1;
      }
      v4[v3] = -50;
      ++*(_DWORD *)(v1 + 4);
      ++*(_DWORD *)(a1 + 116);
      break;
  }
  return 0;
}
