/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89E90
// Address: 0x00089E90

//----- (00089E90) --------------------------------------------------------
int __fastcall sub_89E90(int a1, int a2, int *a3, int *********a4)
{
  int *********v8; // r2
  int v9; // r8
  int v10; // r1
  int v11; // r1
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r3
  int v17; // r2
  int v18; // r2
  void (__fastcall *v19)(int, int, int); // r3
  int v20; // r3
  int v21; // r2
  void (__fastcall *v22)(int, int, int); // r3
  int v23; // r3
  int v24; // r1
  int result; // r0

  if ( !a4 || a4[2] )
  {
LABEL_7:
    v9 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(a1 + 276) = 0;
    sub_8A05C(a1, a2, a4, 0);
    v10 = *(_DWORD *)(a1 + 256);
  }
  else
  {
    v8 = a4;
    while ( 2 )
    {
      switch ( (unsigned int)*v8[1] )
      {
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x21u:
        case 0x25u:
        case 0x26u:
        case 0x2Bu:
          v14 = *(unsigned __int8 *)(a1 + 260);
          v15 = *(_DWORD *)(a1 + 256);
          goto LABEL_12;
        case 0x22u:
        case 0x23u:
        case 0x24u:
          v14 = *(unsigned __int8 *)(a1 + 260);
          v15 = *(_DWORD *)(a1 + 256);
          if ( (v14 & 0xFD) == 0x28 )
            goto LABEL_17;
LABEL_12:
          if ( v14 == 32 )
            goto LABEL_17;
          if ( v15 == 255 )
          {
            *(_BYTE *)(a1 + 255) = 0;
            (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
            v16 = *(_DWORD *)(a1 + 292);
            v15 = 1;
            *(_BYTE *)a1 = 32;
            *(_DWORD *)(a1 + 292) = v16 + 1;
LABEL_15:
            v17 = v15 + 1;
            goto LABEL_19;
          }
          *(_DWORD *)(a1 + 256) = v15 + 1;
          *(_BYTE *)(a1 + v15++) = 32;
          *(_BYTE *)(a1 + 260) = 32;
LABEL_17:
          if ( v15 != 255 )
            goto LABEL_15;
          v18 = *(_DWORD *)(a1 + 268);
          v19 = *(void (__fastcall **)(int, int, int))(a1 + 264);
          *(_BYTE *)(a1 + 255) = 0;
          v19(a1, 255, v18);
          v17 = 1;
          v15 = 0;
          ++*(_DWORD *)(a1 + 292);
LABEL_19:
          *(_DWORD *)(a1 + 256) = v17;
          *(_BYTE *)(a1 + v15) = 40;
          *(_BYTE *)(a1 + 260) = 40;
          v9 = *(_DWORD *)(a1 + 276);
          *(_DWORD *)(a1 + 276) = 0;
          sub_8A05C(a1, a2, a4, 0);
          v20 = *(_DWORD *)(a1 + 256);
          if ( v20 == 255 )
          {
            v21 = *(_DWORD *)(a1 + 268);
            v22 = *(void (__fastcall **)(int, int, int))(a1 + 264);
            *(_BYTE *)(a1 + 255) = 0;
            v22(a1, 255, v21);
            v23 = *(_DWORD *)(a1 + 292);
            v10 = 1;
            *(_BYTE *)a1 = 41;
            *(_DWORD *)(a1 + 292) = v23 + 1;
            goto LABEL_21;
          }
          v10 = v20 + 1;
          *(_DWORD *)(a1 + 256) = v20 + 1;
          *(_BYTE *)(a1 + v20) = 41;
          *(_BYTE *)(a1 + 260) = 41;
          break;
        default:
          v8 = (int *********)*v8;
          if ( !v8 || v8[2] )
            goto LABEL_7;
          continue;
      }
      break;
    }
  }
  if ( v10 == 255 )
  {
    *(_BYTE *)(a1 + 255) = 0;
    (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
    v11 = *(_DWORD *)(a1 + 292);
    *(_BYTE *)a1 = 40;
    v12 = 1;
    *(_BYTE *)(a1 + 260) = 40;
    v13 = *a3;
    *(_DWORD *)(a1 + 292) = v11 + 1;
    *(_DWORD *)(a1 + 256) = 1;
    if ( !v13 )
    {
LABEL_25:
      v24 = v12 + 1;
      goto LABEL_24;
    }
    goto LABEL_10;
  }
LABEL_21:
  v12 = v10 + 1;
  *(_DWORD *)(a1 + 256) = v10 + 1;
  *(_BYTE *)(a1 + v10) = 40;
  *(_BYTE *)(a1 + 260) = 40;
  v13 = *a3;
  if ( *a3 )
  {
LABEL_10:
    sub_86C84(a1, a2, v13);
    v12 = *(_DWORD *)(a1 + 256);
  }
  if ( v12 != 255 )
    goto LABEL_25;
  *(_BYTE *)(a1 + 255) = 0;
  (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
  v24 = 1;
  v12 = 0;
  ++*(_DWORD *)(a1 + 292);
LABEL_24:
  *(_DWORD *)(a1 + 256) = v24;
  *(_BYTE *)(a1 + v12) = 41;
  *(_BYTE *)(a1 + 260) = 41;
  result = sub_8A05C(a1, a2, a4, 1);
  *(_DWORD *)(a1 + 276) = v9;
  return result;
}
