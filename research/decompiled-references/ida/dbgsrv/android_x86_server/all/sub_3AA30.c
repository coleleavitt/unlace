/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AA30
// Address: 0x0003AA30

//----- (0003AA30) --------------------------------------------------------
__int64 *__fastcall sub_3AA30(int a1, unsigned __int8 **a2, unsigned int a3, int a4, unsigned __int8 a5, _DWORD *a6)
{
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // esi
  int v8; // ecx
  char v9; // dh
  int v10; // ecx
  int v11; // ecx
  __int64 *v12; // ebx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  char *v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int v20; // edx
  __int64 *result; // eax
  size_t v24; // [esp+10h] [ebp-3Ch] BYREF
  char *v25; // [esp+14h] [ebp-38h] BYREF
  int v26; // [esp+18h] [ebp-34h] BYREF
  int v27; // [esp+1Ch] [ebp-30h]
  int v28; // [esp+20h] [ebp-2Ch]
  int v29; // [esp+24h] [ebp-28h] BYREF
  int v30[2]; // [esp+28h] [ebp-24h] BYREF
  char v31; // [esp+30h] [ebp-1Ch]
  unsigned int v32; // [esp+38h] [ebp-14h]

  v32 = __readgsdword(0x14u);
  v6 = *a2;
  v25 = (char *)v6;
  if ( (unsigned int)v6 >= a3 )
    return nullptr;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v7 = v6 + 1;
  v25 = (char *)(v6 + 1);
  v8 = *v6;
  v9 = *v6 & 0xC0;
  if ( v9 == (char)0x80 )
  {
    v31 = 0x80;
    v29 = v8 & 0x3F;
    if ( unpack_xleb128(v30, 32, 0, &v25, a3) )
    {
      v30[1] = v30[0] * *(_DWORD *)(a4 + 52);
      goto LABEL_27;
    }
LABEL_14:
    v12 = nullptr;
    goto LABEL_28;
  }
  if ( v9 == -64 )
  {
    v31 = -64;
    v29 = v8 & 0x3F;
    goto LABEL_27;
  }
  if ( v9 != 64 )
  {
    v31 = *v6;
    switch ( v8 )
    {
      case 0:
      case 10:
      case 11:
      case 28:
        goto LABEL_27;
      case 2:
        v14 = *v7;
        v29 = v14;
        if ( a6 )
        {
          v15 = *a6 + v14;
          *a6 = v15;
          v30[0] = v15;
          v16 = (char *)(v6 + 2);
LABEL_26:
          v25 = v16;
          goto LABEL_27;
        }
        if ( !(_BYTE)under_debugger )
          interr(20142);
        return result;
      case 3:
        v17 = (v6[-a5 + 2] << 8) | v6[a5 + 1];
        v29 = v17;
        if ( a6 )
        {
          v18 = *a6 + v17;
          *a6 = v18;
          v30[0] = v18;
          v16 = (char *)(v6 + 3);
          goto LABEL_26;
        }
        if ( !(_BYTE)under_debugger )
          interr(20142);
        return result;
      case 4:
        if ( a5 )
        {
          v13 = (v6[1] << 24) | (v6[2] << 16) | (v6[3] << 8);
          v7 = v6 + 4;
        }
        else
        {
          v13 = (v6[4] << 24) | (v6[3] << 16) | (v6[2] << 8);
        }
        v19 = v13 | *v7;
        v29 = v19;
        if ( a6 )
        {
          v20 = *a6 + v19;
          *a6 = v20;
          v30[0] = v20;
          v16 = (char *)(v6 + 5);
          goto LABEL_26;
        }
        if ( !(_BYTE)under_debugger )
          interr(20142);
        break;
      case 5:
      case 9:
      case 12:
      case 20:
        if ( unpack_xleb128(v30, 32, 0, &v25, a3) )
          goto LABEL_13;
        goto LABEL_14;
      case 6:
      case 7:
      case 8:
      case 13:
      case 14:
      case 46:
LABEL_13:
        if ( !unpack_xleb128(&v29, 32, 0, &v25, a3) )
          goto LABEL_14;
        goto LABEL_27;
      case 15:
        if ( !unpack_xleb128((int *)&v24, 32, 0, &v25, a3) )
          goto LABEL_14;
        sub_3A950(&v26, v25, v24);
        v25 += v24;
        goto LABEL_27;
      default:
        v12 = nullptr;
        goto LABEL_28;
    }
    BUG();
  }
  v31 = 64;
  v10 = v8 & 0x3F;
  v29 = v10;
  if ( !a6 )
    goto LABEL_14;
  v11 = *a6 + v10;
  *a6 = v11;
  v30[0] = v11;
LABEL_27:
  v12 = &qword_13ACD8;
  sub_42560(a1, (int)&v26);
  *a2 = (unsigned __int8 *)v25;
  LOBYTE(v12) = 1;
LABEL_28:
  if ( v26 )
  {
    v27 = 0;
    qfree((void *)v26);
    v26 = 0;
    v28 = 0;
  }
  return v12;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13E34C: using guessed type int under_debugger;
