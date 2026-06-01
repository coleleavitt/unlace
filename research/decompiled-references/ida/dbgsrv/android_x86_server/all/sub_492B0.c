/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492B0
// Address: 0x000492B0

//----- (000492B0) --------------------------------------------------------
int __cdecl sub_492B0(int a1)
{
  int v1; // esi
  char v2; // al
  int v3; // ecx
  char v4; // al
  int v5; // edi
  unsigned int v6; // edi
  int v7; // esi
  unsigned int v8; // ecx
  char *v9; // eax
  char *v10; // eax
  unsigned int v12; // edi
  unsigned int v13; // edi
  int v14; // eax
  int v15; // esi
  int v16; // ecx
  _BYTE *v17; // eax
  char v18; // [esp-8h] [ebp-24h]
  char v19; // [esp+5h] [ebp-17h] BYREF
  char v20; // [esp+6h] [ebp-16h] BYREF
  char v21; // [esp+7h] [ebp-15h] BYREF
  unsigned int v22; // [esp+8h] [ebp-14h]

  v1 = a1;
  v22 = __readgsdword(0x14u);
  v2 = *(_BYTE *)(a1 + 116);
  switch ( v2 )
  {
    case -120:
    case -118:
      v3 = *(_DWORD *)(a1 + 112) - 2;
      goto LABEL_17;
    case -119:
    case -117:
      v3 = *(_DWORD *)(a1 + 112) - 3;
LABEL_17:
      v4 = v2 - 4;
      goto LABEL_3;
    case -116:
    case -114:
      v12 = *(_DWORD *)(a1 + 112);
      if ( v12 <= 1 )
        goto LABEL_34;
      v6 = v12 - 2;
      *(_DWORD *)(a1 + 112) = v6;
      v7 = *(_DWORD *)(a1 + 108);
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 < v6 )
        goto LABEL_7;
      if ( v8 == v6 )
        goto LABEL_13;
      v20 = 0;
      v10 = &v20;
      goto LABEL_12;
    case -115:
    case -113:
      v13 = *(_DWORD *)(a1 + 112);
      if ( v13 <= 2 )
        goto LABEL_34;
      v6 = v13 - 3;
      *(_DWORD *)(a1 + 112) = v6;
      v7 = *(_DWORD *)(a1 + 108);
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 < v6 )
        goto LABEL_7;
      if ( v8 == v6 )
        goto LABEL_13;
      v21 = 0;
      v10 = &v21;
      goto LABEL_12;
    case -39:
      v14 = *(_DWORD *)(a1 + 112) - 2;
      v18 = -41;
      goto LABEL_29;
    case -38:
      v14 = *(_DWORD *)(a1 + 112) - 3;
      v18 = -40;
      goto LABEL_29;
    case -13:
      v14 = *(_DWORD *)(a1 + 112) - 1;
      v18 = -12;
LABEL_29:
      sub_51FE0(*(_DWORD **)(a1 + 108), v14, v18);
      goto LABEL_14;
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
      v3 = *(_DWORD *)(a1 + 112) - 1;
      v4 = v2 - 32;
LABEL_3:
      sub_51FE0(*(_DWORD **)(a1 + 108), v3, v4);
      goto LABEL_14;
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
      v5 = *(_DWORD *)(a1 + 112);
      if ( !v5 )
      {
LABEL_34:
        if ( !(_BYTE)under_debugger )
          interr(708);
        BUG();
      }
      v6 = v5 - 1;
      *(_DWORD *)(a1 + 112) = v6;
      v7 = *(_DWORD *)(a1 + 108);
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 >= v6 )
      {
        if ( v8 != v6 )
        {
          v19 = 0;
          v10 = &v19;
LABEL_12:
          sub_43860((char **)v7, v6, v10);
        }
      }
      else
      {
LABEL_7:
        v9 = *(char **)v7;
        if ( *(_DWORD *)(v7 + 8) < v6 )
        {
          v9 = (char *)qvector_reserve(v7, v9, v6, 1u);
          *(_DWORD *)v7 = v9;
          v8 = *(_DWORD *)(v7 + 4);
        }
        memset(&v9[v8], 0, v6 - v8);
        *(_DWORD *)(v7 + 4) = v6;
      }
LABEL_13:
      v1 = a1;
      *(_BYTE *)(a1 + 116) = -87;
LABEL_14:
      *(_BYTE *)(v1 + 116) = -87;
      return 0;
    default:
      *(_BYTE *)(a1 + 116) = -87;
      v15 = *(_DWORD *)(a1 + 108);
      v16 = *(_DWORD *)(v15 + 4);
      if ( *(_DWORD *)(v15 + 8) >= (unsigned int)(v16 + 1) )
      {
        v17 = *(_BYTE **)v15;
      }
      else
      {
        v17 = qvector_reserve(v15, *(void **)v15, v16 + 1, 1u);
        *(_DWORD *)v15 = v17;
        v16 = *(_DWORD *)(v15 + 4);
      }
      v17[v16] = -87;
      ++*(_DWORD *)(v15 + 4);
      v1 = a1;
      ++*(_DWORD *)(a1 + 112);
      goto LABEL_14;
  }
}
// 13E34C: using guessed type int under_debugger;
