/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A4EC
// Address: 0x0003A4EC

//----- (0003A4EC) --------------------------------------------------------
int __fastcall sub_3A4EC(int a1)
{
  int v2; // r0
  _BYTE *v3; // r7
  char v4; // r0
  int v5; // r0
  unsigned int v6; // r5
  int v7; // r4
  unsigned int v8; // r2
  char *v9; // r1
  char *v10; // r2
  unsigned int v12; // r0
  unsigned int v13; // r0
  char v14; // r0
  char v15; // r0
  int v16; // r5
  int v17; // r1
  _BYTE *v18; // r0
  char v19; // [sp+8h] [bp-10h] BYREF
  char v20; // [sp+Ch] [bp-Ch] BYREF
  char v21; // [sp+10h] [bp-8h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 120);
  v3 = (_BYTE *)(a1 + 120);
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
      v5 = *(_DWORD *)(a1 + 116);
      if ( !v5 )
        goto LABEL_33;
      v6 = v5 - 1;
      *(_DWORD *)(a1 + 116) = v5 - 1;
      v7 = *(_DWORD *)(a1 + 112);
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 < v5 - 1 )
        goto LABEL_6;
      if ( v8 == v5 - 1 )
        goto LABEL_12;
      v10 = &v19;
      goto LABEL_11;
    case 136:
    case 138:
      v14 = v2 - 4;
      goto LABEL_25;
    case 137:
    case 139:
      v15 = v2 - 4;
      goto LABEL_27;
    case 140:
    case 142:
      v12 = *(_DWORD *)(a1 + 116);
      if ( v12 <= 1 )
        goto LABEL_33;
      v6 = v12 - 2;
      *(_DWORD *)(a1 + 116) = v12 - 2;
      v7 = *(_DWORD *)(a1 + 112);
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 < v12 - 2 )
        goto LABEL_6;
      if ( v8 == v12 - 2 )
        goto LABEL_12;
      v10 = &v20;
      goto LABEL_11;
    case 141:
    case 143:
      v13 = *(_DWORD *)(a1 + 116);
      if ( v13 <= 2 )
      {
LABEL_33:
        if ( !under_debugger )
          interr(708);
        __debugbreak();
      }
      v6 = v13 - 3;
      *(_DWORD *)(a1 + 116) = v13 - 3;
      v7 = *(_DWORD *)(a1 + 112);
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 < v13 - 3 )
      {
LABEL_6:
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
      else if ( v8 != v13 - 3 )
      {
        v10 = &v21;
LABEL_11:
        *v10 = 0;
        sub_370F6((void **)v7, v6, v10);
      }
LABEL_12:
      *v3 = -87;
LABEL_13:
      *v3 = -87;
      return 0;
    case 217:
      v14 = -41;
LABEL_25:
      sub_401CC(*(int **)(a1 + 112), *(_DWORD *)(a1 + 116) - 2, v14);
      goto LABEL_13;
    case 218:
      v15 = -40;
LABEL_27:
      sub_401CC(*(int **)(a1 + 112), *(_DWORD *)(a1 + 116) - 3, v15);
      goto LABEL_13;
    case 243:
      v4 = -12;
LABEL_3:
      sub_401CC(*(int **)(a1 + 112), *(_DWORD *)(a1 + 116) - 1, v4);
      goto LABEL_13;
    default:
      *v3 = -87;
      v16 = *(_DWORD *)(a1 + 112);
      v17 = *(_DWORD *)(v16 + 4);
      if ( *(_DWORD *)(v16 + 8) >= (unsigned int)(v17 + 1) )
      {
        v18 = *(_BYTE **)v16;
      }
      else
      {
        v18 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v16, v17 + 1, 1u);
        *(_DWORD *)v16 = v18;
        v17 = *(_DWORD *)(v16 + 4);
      }
      v18[v17] = -87;
      ++*(_DWORD *)(v16 + 4);
      ++*(_DWORD *)(a1 + 116);
      goto LABEL_13;
  }
}
// E0550: using guessed type char under_debugger;
