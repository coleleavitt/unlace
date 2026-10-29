/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_636B0
// Address: 0x00000000000636B0

//----- (00000000000636B0) ----------------------------------------------------
__int64 __fastcall sub_636B0(__int64 a1)
{
  char v1; // al
  __int64 v2; // rsi
  char v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int64 v7; // rcx
  char *v8; // rax
  char *v9; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 v14; // rcx
  char *v15; // rax
  char v16; // [rsp+5h] [rbp-23h] BYREF
  char v17; // [rsp+6h] [rbp-22h] BYREF
  char v18; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v1 = *(_BYTE *)(a1 + 212);
  switch ( v1 )
  {
    case -120:
    case -118:
      v2 = (unsigned int)(*(_DWORD *)(a1 + 208) - 2);
      goto LABEL_16;
    case -119:
    case -117:
      v2 = (unsigned int)(*(_DWORD *)(a1 + 208) - 3);
LABEL_16:
      v3 = v1 - 4;
      goto LABEL_3;
    case -116:
    case -114:
      v11 = *(_DWORD *)(a1 + 208);
      if ( v11 <= 1 )
        goto LABEL_32;
      v5 = v11 - 2;
      *(_DWORD *)(a1 + 208) = v5;
      v6 = *(_QWORD *)(a1 + 200);
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 < v5 )
        goto LABEL_6;
      if ( v7 == v5 )
        goto LABEL_12;
      v17 = 0;
      v9 = &v17;
      goto LABEL_11;
    case -115:
    case -113:
      v12 = *(_DWORD *)(a1 + 208);
      if ( v12 <= 2 )
        goto LABEL_32;
      v5 = v12 - 3;
      *(_DWORD *)(a1 + 208) = v5;
      v6 = *(_QWORD *)(a1 + 200);
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 < v5 )
        goto LABEL_6;
      if ( v7 == v5 )
        goto LABEL_12;
      v18 = 0;
      v9 = &v18;
      goto LABEL_11;
    case -39:
      sub_6BE80(*(_QWORD **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 2), 215);
      goto LABEL_13;
    case -38:
      sub_6BE80(*(_QWORD **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 3), 216);
      goto LABEL_13;
    case -13:
      sub_6BE80(*(_QWORD **)(a1 + 200), (unsigned int)(*(_DWORD *)(a1 + 208) - 1), 244);
      goto LABEL_13;
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
      v2 = (unsigned int)(*(_DWORD *)(a1 + 208) - 1);
      v3 = v1 - 32;
LABEL_3:
      sub_6BE80(*(_QWORD **)(a1 + 200), v2, v3);
      goto LABEL_13;
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
      v4 = *(_DWORD *)(a1 + 208);
      if ( !v4 )
      {
LABEL_32:
        if ( !(_BYTE)under_debugger )
          interr(708);
        BUG();
      }
      v5 = (unsigned int)(v4 - 1);
      *(_DWORD *)(a1 + 208) = v5;
      v6 = *(_QWORD *)(a1 + 200);
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 >= v5 )
      {
        if ( v7 != v5 )
        {
          v16 = 0;
          v9 = &v16;
LABEL_11:
          sub_5E330(v6, v5, v9);
        }
      }
      else
      {
LABEL_6:
        v8 = *(char **)v6;
        if ( *(_QWORD *)(v6 + 16) < v5 )
        {
          v8 = (char *)qvector_reserve(v6, *(char **)v6, v5, 1u);
          *(_QWORD *)v6 = v8;
          v7 = *(_QWORD *)(v6 + 8);
        }
        memset(&v8[v7], 0, v5 - v7);
        *(_QWORD *)(v6 + 8) = v5;
      }
LABEL_12:
      *(_BYTE *)(a1 + 212) = -87;
LABEL_13:
      *(_BYTE *)(a1 + 212) = -87;
      return 0;
    default:
      *(_BYTE *)(a1 + 212) = -87;
      v13 = *(_QWORD *)(a1 + 200);
      v14 = *(_QWORD *)(v13 + 8);
      if ( *(_QWORD *)(v13 + 16) >= (unsigned __int64)(v14 + 1) )
      {
        v15 = *(char **)v13;
      }
      else
      {
        v15 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v13, v14 + 1, 1u);
        *(_QWORD *)v13 = v15;
        v14 = *(_QWORD *)(v13 + 8);
      }
      v15[v14] = -87;
      ++*(_QWORD *)(v13 + 8);
      ++*(_DWORD *)(a1 + 208);
      goto LABEL_13;
  }
}
// 158B40: using guessed type __int64 under_debugger;
