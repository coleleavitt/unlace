/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_xleb128
// Address: 0x0007CC04

//----- (0007CC04) --------------------------------------------------------
int __fastcall unpack_xleb128(_DWORD *a1, int a2, int a3, _BYTE **a4, unsigned int a5)
{
  int v5; // r5
  int v6; // r4
  int v7; // r7
  _BYTE *v8; // r1
  int v9; // r3
  char v10; // r2
  char v11; // r6
  int v12; // r3
  int v13; // r7
  int v14; // r6
  unsigned __int64 v15; // r0
  _BYTE *v16; // r1
  char v21; // [sp+18h] [bp-20h]
  _BYTE *v22; // [sp+1Ch] [bp-1Ch]
  _BYTE *v24; // [sp+28h] [bp-10h]
  int v25; // [sp+2Ch] [bp-Ch]
  int v26; // [sp+30h] [bp-8h]

  v5 = a2;
  v6 = 0;
  v7 = 7;
  v8 = *a4;
  v9 = 0;
  while ( 1 )
  {
    v10 = v7 - 7;
    if ( (unsigned int)v8 >= a5 )
      return 0;
    v26 = v9;
    v11 = *v8;
    v22 = v8;
    v24 = v8 + 1;
    v25 = v7;
    if ( v5 >= 7 )
    {
      v13 = v11 & 0x80;
    }
    else
    {
      v12 = (255 << v5) & 0x3F;
      if ( !a3 )
        v12 = 255 << v5;
      v13 = v11 & 0x80;
      if ( (*v8 & 0x80) != 0 )
        v12 = 255 << v5;
      if ( ((unsigned __int8)v12 & *v8 & 0x7F) != 0 )
        return 0;
    }
    v21 = *v8;
    v14 = 0;
    v15 = (unsigned __int64)(*v8 & 0x7F) << v10;
    v6 |= HIDWORD(v15);
    v9 = v26 | v15;
    if ( !v13 )
      break;
    v5 -= 7;
    v7 = v25 + 7;
    v8 = v24;
    if ( v25 >= a2 )
      return v14;
  }
  v16 = v22 + 1;
  if ( a1 )
  {
    if ( (v21 & 0x40) != 0 && a3 )
    {
      v6 |= (unsigned __int64)(-1LL << v25) >> 32;
      v16 = v22 + 1;
      v9 |= -1LL << v25;
    }
    switch ( a2 )
    {
      case 64:
        *a1 = v9;
        a1[1] = v6;
        break;
      case 32:
        *a1 = v9;
        break;
      case 16:
        *(_WORD *)a1 = v9;
        break;
      default:
        if ( !under_debugger )
          interr(1187);
        __debugbreak();
    }
  }
  *a4 = v16;
  return 1;
}
// E0550: using guessed type char under_debugger;
