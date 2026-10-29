/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023CB4
// Address: 0x0000000100023CB4

//----- (0000000100023CB4) ----------------------------------------------------
__int64 __fastcall sub_100023CB4(__int64 a1)
{
  char v2; // w8
  __int64 v3; // x1
  char v4; // w8
  int v5; // w8
  unsigned __int64 v6; // x20
  _QWORD **v7; // x21
  _QWORD *v8; // x9
  _QWORD *v9; // x8
  char *v10; // x2
  unsigned int v12; // w8
  unsigned int v13; // w8
  __int64 v14; // x0
  char v15; // [xsp+5h] [xbp-2Bh] BYREF
  char v16; // [xsp+6h] [xbp-2Ah] BYREF
  char v17; // [xsp+7h] [xbp-29h] BYREF

  v2 = *(_BYTE *)(a1 + 212);
  switch ( v2 )
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
      v3 = (unsigned int)(*(_DWORD *)(a1 + 208) - 1);
      v4 = v2 - 32;
      goto LABEL_3;
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
      v5 = *(_DWORD *)(a1 + 208);
      if ( !v5 )
        goto LABEL_28;
      v6 = (unsigned int)(v5 - 1);
      *(_DWORD *)(a1 + 208) = v6;
      v7 = *(_QWORD ***)(a1 + 200);
      v8 = v7[1];
      if ( (unsigned __int64)v8 < v6 )
        goto LABEL_6;
      if ( v8 == (_QWORD *)v6 )
        goto LABEL_12;
      v15 = 0;
      v10 = &v15;
      goto LABEL_11;
    case -120:
    case -118:
      v3 = (unsigned int)(*(_DWORD *)(a1 + 208) - 2);
      goto LABEL_23;
    case -119:
    case -117:
      v3 = (unsigned int)(*(_DWORD *)(a1 + 208) - 3);
LABEL_23:
      v4 = v2 - 4;
LABEL_3:
      sub_10002CB60(*(_QWORD **)(a1 + 200), v3, v4);
      goto LABEL_12;
    case -116:
    case -114:
      v12 = *(_DWORD *)(a1 + 208);
      if ( v12 <= 1 )
        goto LABEL_28;
      v6 = v12 - 2;
      *(_DWORD *)(a1 + 208) = v6;
      v7 = *(_QWORD ***)(a1 + 200);
      v8 = v7[1];
      if ( (unsigned __int64)v8 < v6 )
        goto LABEL_6;
      if ( v8 == (_QWORD *)v6 )
        goto LABEL_12;
      v16 = 0;
      v10 = &v16;
      goto LABEL_11;
    case -115:
    case -113:
      v13 = *(_DWORD *)(a1 + 208);
      if ( v13 <= 2 )
      {
LABEL_28:
        if ( under_debugger == 1 )
          __break(1u);
        interr(708);
        return sub_100023ED4(v14);
      }
      else
      {
        v6 = v13 - 3;
        *(_DWORD *)(a1 + 208) = v6;
        v7 = *(_QWORD ***)(a1 + 200);
        v8 = v7[1];
        if ( (unsigned __int64)v8 < v6 )
        {
LABEL_6:
          v9 = *v7;
          if ( (unsigned __int64)v7[2] < v6 )
          {
            v9 = qvector_reserve(v7, *v7, v6, 1u);
            *v7 = v9;
            v8 = v7[1];
          }
          bzero((char *)v8 + (_QWORD)v9, v6 - (_QWORD)v8);
          v7[1] = (_QWORD *)v6;
        }
        else if ( v8 != (_QWORD *)v6 )
        {
          v17 = 0;
          v10 = &v17;
LABEL_11:
          sub_100019CE4(v7, v6, v10);
        }
LABEL_12:
        *(_BYTE *)(a1 + 212) = -87;
        return 0;
      }
    case -39:
      sub_10002CB60(*(_QWORD **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 2), 215);
      goto LABEL_12;
    case -38:
      sub_10002CB60(*(_QWORD **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 3), 216);
      goto LABEL_12;
    case -13:
      sub_10002CB60(*(_QWORD **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 1), 244);
      goto LABEL_12;
    default:
      sub_100021A70((_BYTE *)a1, 169);
      goto LABEL_12;
  }
}
// 100023ED1: variable 'v14' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
