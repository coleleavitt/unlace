/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8077010
// Address: 0x08077010

//----- (08077010) --------------------------------------------------------
int __cdecl sub_8077010(int a1)
{
  void **v1; // edi
  _BYTE *v2; // edx
  void *v3; // eax

  switch ( *(_BYTE *)(a1 + 116) )
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
      v1 = *(void ***)(a1 + 108);
      *(_BYTE *)(a1 + 116) = -50;
      v2 = v1[1];
      v3 = *v1;
      if ( v1[2] < v2 + 1 )
      {
        v3 = sub_80CF920((int)v1, v3, (unsigned int)(v2 + 1), 1u);
        v2 = v1[1];
        *v1 = v3;
      }
      v2[(_DWORD)v3] = -50;
      v1[1] = (char *)v1[1] + 1;
      ++*(_DWORD *)(a1 + 112);
      break;
  }
  return 0;
}
