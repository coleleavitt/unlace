/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BB6C
// Address: 0x0004BB6C

//----- (0004BB6C) --------------------------------------------------------
bool __fastcall sub_4BB6C(int a1, int a2, void *src)
{
  _BOOL4 result; // r0
  int v6; // r6
  _BYTE *v7; // r0
  size_t v8; // r6

  switch ( *(_WORD *)(a2 + 12) )
  {
    case 2:
      result = 1;
      break;
    case 3:
    case 6:
    case 7:
    case 8:
      if ( src && *(_DWORD *)(a1 + 4) > (unsigned int)src )
      {
        *(_DWORD *)(a2 + 4) = 0;
        v6 = *(_DWORD *)(a1 + 4);
        v7 = *(_BYTE **)a2;
        v8 = v6 - (_DWORD)src;
        if ( v8 + 1 > *(_DWORD *)(a2 + 8) )
        {
          v7 = sub_78018(a2, *(void **)a2, v8 + 1, 1u);
          *(_DWORD *)a2 = v7;
        }
        *(_DWORD *)(a2 + 4) = v8 + 1;
        v7[v8] = 0;
        memmove(*(void **)a2, src, v8);
        result = 1;
      }
      else
      {
        result = 0;
      }
      break;
    default:
      result = *(unsigned __int16 *)(a2 + 12) > 0x7Fu;
      break;
  }
  return result;
}
