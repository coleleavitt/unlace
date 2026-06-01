/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_string
// Address: 0x00044C90

//----- (00044C90) --------------------------------------------------------
int __fastcall idcv_string(int a1)
{
  int v3; // r5
  _BYTE *v4; // r0
  char *s; // [sp+0h] [bp-4h]
  int v7; // [sp+4h] [bp+0h]
  int v8[52]; // [sp+8h] [bp+4h] BYREF
  char v9; // [sp+D8h] [bp+D4h]
  int v10; // [sp+DCh] [bp+D8h]
  int v11; // [sp+E0h] [bp+DCh]
  int v12; // [sp+E4h] [bp+E0h]
  int v13; // [sp+E8h] [bp+E4h]
  int v14; // [sp+ECh] [bp+E8h]
  char v15; // [sp+F0h] [bp+ECh]
  int v16; // [sp+F4h] [bp+F0h]
  int v17; // [sp+F8h] [bp+F4h]
  int v18; // [sp+FCh] [bp+F8h]
  int v19; // [sp+100h] [bp+FCh]
  int v20; // [sp+104h] [bp+100h]
  char v21; // [sp+108h] [bp+104h]
  int v22; // [sp+10Ch] [bp+108h]
  int v23; // [sp+110h] [bp+10Ch]
  int v24; // [sp+114h] [bp+110h]
  int v25; // [sp+118h] [bp+114h]
  int v26; // [sp+11Ch] [bp+118h]
  char v27; // [sp+120h] [bp+11Ch]

  if ( a1 )
  {
    while ( *(_BYTE *)a1 == 10 )
    {
      if ( !deref_idcv((unsigned __int8 *)a1, 2) )
        return get_qerrno();
    }
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        LOBYTE(v8[0]) = *(_BYTE *)(a1 + 8);
        sub_266B8((_DWORD *)(a1 + 8), v8, LOBYTE(v8[0]) != 0);
        goto LABEL_10;
      case 3:
        realtoasc(
          (int)v8,
          1024,
          (_WORD *)(a1 + 8),
          50,
          (int)v8,
          v7,
          v8[0],
          v8[1],
          v8[2],
          v8[3],
          v8[4],
          v8[5],
          v8[6],
          v8[7],
          v8[8],
          v8[9],
          v8[10],
          v8[11],
          v8[12],
          v8[13],
          v8[14],
          v8[15],
          v8[16],
          v8[17],
          v8[18],
          v8[19],
          v8[20],
          v8[21],
          v8[22],
          v8[23],
          v8[24],
          v8[25],
          v8[26],
          v8[27],
          v8[28],
          v8[29],
          v8[30],
          v8[31],
          v8[32],
          v8[33],
          v8[34],
          v8[35],
          v8[36],
          v8[37],
          v8[38],
          v8[39],
          v8[40],
          v8[41],
          v8[42],
          v8[43],
          v8[44],
          v8[45],
          v8[46],
          v8[47],
          v8[48],
          v8[49],
          v8[50],
          v8[51],
          v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        sub_1B09C(a1 + 8, s);
LABEL_10:
        *(_BYTE *)a1 = 7;
        goto LABEL_11;
      case 7:
LABEL_11:
        v3 = 0;
        break;
      case 9:
        LOBYTE(v8[0]) = *(_BYTE *)(a1 + 8);
        v3 = 0;
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 12) = 0;
        *(_DWORD *)(a1 + 16) = 0;
        v4 = qvector_reserve(a1 + 8, nullptr, 2u, 1u);
        *(_DWORD *)(a1 + 8) = v4;
        *(_DWORD *)(a1 + 12) = 2;
        *v4 = v8[0];
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1) = 0;
        *(_BYTE *)a1 = 7;
        break;
      default:
        return set_qerrno(1531);
    }
  }
  else
  {
    return set_qerrno(1531);
  }
  return v3;
}
// 44D0A: variable 'v7' is possibly undefined
// 44D12: variable 's' is possibly undefined
