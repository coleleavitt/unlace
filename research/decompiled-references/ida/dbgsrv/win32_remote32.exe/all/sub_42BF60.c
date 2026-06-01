/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BF60
// Address: 0x0042BF60

//----- (0042BF60) --------------------------------------------------------
int __stdcall sub_42BF60(int a1)
{
  int v1; // ecx
  __int16 v2; // dx
  const char *v3; // edi
  int v4; // ebx
  int v5; // eax
  const char **v6; // eax
  const char *v7; // ecx
  int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax

  v1 = *(_DWORD *)(a1 + 176);
  v2 = *(_WORD *)(*(_DWORD *)(a1 + 172) + 2 * v1 - 2);
  if ( v1 )
    *(_DWORD *)(a1 + 176) = v1 - 1;
  v3 = MultiByteStr;
  v4 = v2;
  v5 = *(_DWORD *)(a1 + 84);
  if ( *(_DWORD *)(v5 + 12 * *(_DWORD *)(a1 + 88) - 8) )
    v3 = *(const char **)(v5 + 12 * *(_DWORD *)(a1 + 88) - 12);
  v6 = sub_4278D0(v3);
  if ( v6 )
  {
    v7 = v6[2];
    switch ( v7[v4] )
    {
      case 2:
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
            goto LABEL_13;
          default:
            v8 = *(_DWORD *)(a1 + 104);
            *(_BYTE *)(a1 + 112) = -50;
            v12 = *(_DWORD *)(v8 + 4) + 1;
            if ( v12 > *(_DWORD *)(v8 + 8) )
              *(_DWORD *)v8 = sub_453B00(v8, *(void **)v8, v12, 1u);
            *(_BYTE *)(*(_DWORD *)(v8 + 4) + *(_DWORD *)v8) = -50;
            goto LABEL_12;
        }
        goto LABEL_13;
      case 3:
        if ( *(unsigned __int8 *)(a1 + 112) == 208 || *(unsigned __int8 *)(a1 + 112) == 210 )
          goto LABEL_13;
        v8 = *(_DWORD *)(a1 + 104);
        *(_BYTE *)(a1 + 112) = -48;
        v14 = *(_DWORD *)(v8 + 4) + 1;
        if ( v14 > *(_DWORD *)(v8 + 8) )
          *(_DWORD *)v8 = sub_453B00(v8, *(void **)v8, v14, 1u);
        *(_BYTE *)(*(_DWORD *)(v8 + 4) + *(_DWORD *)v8) = -48;
        break;
      case 4:
        if ( !v7[v4 + 1] )
          LOWORD(v4) = v4 - 1;
        goto LABEL_13;
      case 5:
      case 6:
      case 8:
      case 0xA:
        goto LABEL_13;
      case 7:
        if ( *(unsigned __int8 *)(a1 + 112) == 168 || *(unsigned __int8 *)(a1 + 112) == 191 )
          goto LABEL_13;
        v8 = *(_DWORD *)(a1 + 104);
        *(_BYTE *)(a1 + 112) = -65;
        v9 = *(_DWORD *)(v8 + 4) + 1;
        if ( v9 > *(_DWORD *)(v8 + 8) )
          *(_DWORD *)v8 = sub_453B00(v8, *(void **)v8, v9, 1u);
        *(_BYTE *)(*(_DWORD *)(v8 + 4) + *(_DWORD *)v8) = -65;
        break;
      case 9:
        if ( *(_BYTE *)(a1 + 112) == 0xD3 )
          goto LABEL_13;
        v8 = *(_DWORD *)(a1 + 104);
        *(_BYTE *)(a1 + 112) = -47;
        v13 = *(_DWORD *)(v8 + 4) + 1;
        if ( v13 > *(_DWORD *)(v8 + 8) )
          *(_DWORD *)v8 = sub_453B00(v8, *(void **)v8, v13, 1u);
        *(_BYTE *)(*(_DWORD *)v8 + *(_DWORD *)(v8 + 4)) = -47;
        break;
      default:
        goto LABEL_33;
    }
LABEL_12:
    ++*(_DWORD *)(v8 + 4);
    ++*(_DWORD *)(a1 + 108);
  }
  else
  {
    v15 = sub_427E40(*(_DWORD **)(a1 + 56), v3);
    if ( v15 != -1 && v4 >= *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(a1 + 56) + 4 * v15) + 12) )
    {
LABEL_33:
      sub_45CB10(0, v3);
      return sub_45CC20(56);
    }
  }
LABEL_13:
  v10 = *(_DWORD *)(a1 + 176) + 1;
  if ( v10 > *(_DWORD *)(a1 + 180) )
    *(_DWORD *)(a1 + 172) = sub_453B00(a1 + 172, *(void **)(a1 + 172), v10, 2u);
  *(_WORD *)(*(_DWORD *)(a1 + 172) + 2 * (*(_DWORD *)(a1 + 176))++) = v4 + 1;
  return 0;
}
