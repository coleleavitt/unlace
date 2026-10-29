/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30C14
// Address: 0x00030C14

//----- (00030C14) --------------------------------------------------------
int __fastcall sub_30C14(int a1, unsigned __int8 **a2, unsigned int a3, int a4, int a5, _DWORD *a6)
{
  unsigned __int8 *v8; // r4
  int v9; // r6
  unsigned __int8 *v10; // r3
  int v11; // r2
  int v12; // r1
  int v13; // r2
  int v14; // r0
  int result; // r0
  int v16; // r2
  int v17; // r1
  int v18; // r1
  unsigned __int8 *v19; // r0
  int v20; // r2
  int v21; // r6
  int v22; // r6
  int v23; // r1
  int v24; // r1
  int v27; // [sp+18h] [bp-28h] BYREF
  unsigned __int8 *v28; // [sp+1Ch] [bp-24h] BYREF
  void *v29; // [sp+20h] [bp-20h] BYREF
  int v30; // [sp+24h] [bp-1Ch]
  int v31; // [sp+28h] [bp-18h]
  int v32; // [sp+2Ch] [bp-14h] BYREF
  _DWORD v33[2]; // [sp+30h] [bp-10h] BYREF
  char v34; // [sp+38h] [bp-8h]

  v8 = *a2;
  v28 = v8;
  v9 = 0;
  if ( (unsigned int)v8 >= a3 )
    return v9;
  v9 = 0;
  v31 = 0;
  v30 = 0;
  v29 = nullptr;
  v10 = v8 + 1;
  v28 = v8 + 1;
  v11 = *v8;
  v12 = v11 & 0xC0;
  switch ( v12 )
  {
    case 192:
      v34 = -64;
      v32 = v11 & 0x3F;
      break;
    case 128:
      v34 = 0x80;
      v32 = v11 & 0x3F;
      v9 = 0;
      if ( !unpack_xleb128(v33, 32, 0, &v28, a3) )
        goto LABEL_10;
      v33[1] = v33[0] * *(_DWORD *)(a4 + 52);
      break;
    case 64:
      v34 = 64;
      v13 = v11 & 0x3F;
      v32 = v13;
      if ( !a6 )
        goto LABEL_10;
      v14 = *a6 + v13;
      *a6 = v14;
      v33[0] = v14;
      break;
    default:
      v34 = *v8;
      switch ( v11 )
      {
        case 0:
        case 10:
        case 11:
        case 28:
          goto LABEL_14;
        case 2:
          v17 = *v10;
          v32 = v17;
          if ( a6 )
          {
            v18 = *a6 + v17;
            *a6 = v18;
            v19 = v8 + 2;
LABEL_33:
            v28 = v19;
            v33[0] = v18;
            goto LABEL_14;
          }
          if ( !under_debugger )
            interr(20142);
          return result;
        case 3:
          v20 = 1;
          v21 = 2;
          if ( !a5 )
            v21 = 1;
          v22 = v8[v21];
          if ( !a5 )
            v20 = 2;
          v23 = (v8[v20] << 8) + v22;
          v32 = v23;
          if ( a6 )
          {
            v18 = *a6 + v23;
            *a6 = v18;
            v19 = v8 + 3;
            goto LABEL_33;
          }
          if ( !under_debugger )
            interr(20142);
          return result;
        case 4:
          if ( a5 )
          {
            v16 = (v8[2] << 16) + (v8[1] << 24) + (v8[3] << 8);
            v10 = v8 + 4;
          }
          else
          {
            v16 = (v8[3] << 16) + (v8[4] << 24) + (v8[2] << 8);
          }
          v24 = *v10 | v16;
          v32 = v24;
          if ( a6 )
          {
            v18 = *a6 + v24;
            *a6 = v18;
            v19 = v8 + 5;
            goto LABEL_33;
          }
          if ( !under_debugger )
            interr(20142);
          break;
        case 5:
        case 9:
        case 12:
        case 20:
          v9 = 0;
          if ( unpack_xleb128(v33, 32, 0, &v28, a3) )
            goto LABEL_16;
          goto LABEL_10;
        case 6:
        case 7:
        case 8:
        case 13:
        case 14:
        case 46:
LABEL_16:
          v9 = 0;
          if ( !unpack_xleb128(&v32, 32, 0, &v28, a3) )
            goto LABEL_10;
          goto LABEL_14;
        case 15:
          if ( unpack_xleb128(&v27, 32, 0, &v28, a3) )
          {
            ((void (__fastcall *)(void **, unsigned __int8 *, int))loc_30B84)(&v29, v28, v27);
            v28 += v27;
            goto LABEL_14;
          }
          v9 = 0;
          goto LABEL_10;
        default:
          goto LABEL_10;
      }
      __debugbreak();
  }
LABEL_14:
  sub_36578(a1, (int)&v29);
  *a2 = v28;
  v9 = 1;
LABEL_10:
  if ( v29 )
  {
    v30 = 0;
    qfree(v29);
    v31 = 0;
    v29 = nullptr;
  }
  return v9;
}
// E0550: using guessed type char under_debugger;
