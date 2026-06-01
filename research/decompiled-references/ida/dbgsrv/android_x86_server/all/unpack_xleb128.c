/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_xleb128
// Address: 0x000ADBE0

//----- (000ADBE0) --------------------------------------------------------
char __cdecl unpack_xleb128(int *a1, int a2, char a3, char **a4, unsigned int a5)
{
  int v5; // edx
  char *v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  char v10; // al
  int v11; // ebx
  int v12; // ecx
  int v13; // esi
  int v14; // ebx
  int v15; // esi
  bool v16; // cc
  int v18; // edx
  int v19; // eax
  int v20; // [esp+Ch] [ebp-20h]
  int v21; // [esp+Ch] [ebp-20h]
  int v22; // [esp+10h] [ebp-1Ch]
  char *v23; // [esp+18h] [ebp-14h]

  v5 = a2;
  v6 = *a4;
  v7 = 7;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= a5 )
      return 0;
    v20 = v9;
    v22 = v8;
    v23 = v6;
    v10 = *v6;
    v11 = v10 & 0x7F;
    if ( v5 <= 6 )
    {
      v12 = (255 << v5) & 0x3F;
      if ( !a3 )
        v12 = 255 << v5;
      if ( v10 < 0 )
        v12 = 255 << v5;
      if ( (v11 & v12) != 0 )
        return 0;
    }
    v13 = (unsigned __int8)v11;
    v14 = (unsigned __int64)(unsigned __int8)v11 << ((unsigned __int8)v7 - 7) >> 32;
    v15 = v13 << (v7 - 7);
    if ( (((_BYTE)v7 - 7) & 0x20) != 0 )
    {
      v14 = v15;
      v15 = 0;
    }
    v9 = v14 | v20;
    v8 = v15 | v22;
    if ( v10 >= 0 )
      break;
    v6 = v23 + 1;
    v5 -= 7;
    v16 = v7 < a2;
    v7 += 7;
    if ( !v16 )
      return 0;
  }
  v21 = v9;
  if ( a1 )
  {
    if ( (v10 & 0x40) != 0 && a3 )
    {
      v18 = (unsigned __int64)(-1LL << v7) >> 32;
      v19 = 0;
      if ( (v7 & 0x20) != 0 )
        v18 = -1 << v7;
      else
        v19 = -1 << v7;
      v21 = v18 | v9;
      v8 |= v19;
    }
    switch ( a2 )
    {
      case 64:
        *a1 = v8;
        a1[1] = v21;
        break;
      case 32:
        *a1 = v8;
        break;
      case 16:
        *(_WORD *)a1 = v8;
        break;
      default:
        if ( !(_BYTE)under_debugger )
          interr(1187);
        BUG();
    }
  }
  *a4 = v23 + 1;
  return 1;
}
// 13E34C: using guessed type int under_debugger;
