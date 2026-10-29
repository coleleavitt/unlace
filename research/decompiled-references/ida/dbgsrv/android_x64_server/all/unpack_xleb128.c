/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_xleb128
// Address: 0x00000000000C0690

//----- (00000000000C0690) ----------------------------------------------------
char __fastcall unpack_xleb128(__int64 *a1, int a2, char a3, char **a4, unsigned __int64 a5)
{
  char *v6; // r11
  int v7; // r10d
  __int64 v8; // r15
  int v9; // eax
  char v10; // r14
  __int64 v11; // rbx
  int v12; // ecx
  bool v13; // cc
  __int64 v15; // rax
  __int64 v16; // r15

  v6 = *a4;
  v7 = 7;
  v8 = 0;
  v9 = a2;
  while ( 1 )
  {
    if ( (unsigned __int64)v6 >= a5 )
      return 0;
    v10 = *v6;
    v11 = *v6 & 0x7F;
    if ( v9 <= 6 )
    {
      v12 = (255 << v9) & 0x3F;
      if ( !a3 )
        v12 = 255 << v9;
      if ( v10 < 0 )
        v12 = 255 << v9;
      if ( ((unsigned int)v11 & v12) != 0 )
        return 0;
    }
    v8 |= v11 << ((unsigned __int8)v7 - 7);
    if ( v10 >= 0 )
      break;
    ++v6;
    v9 -= 7;
    v13 = v7 < a2;
    v7 += 7;
    if ( !v13 )
      return 0;
  }
  if ( a1 )
  {
    v15 = -1LL << v7;
    if ( !a3 )
      v15 = 0;
    if ( (v10 & 0x40) == 0 )
      v15 = 0;
    v16 = v15 | v8;
    switch ( a2 )
    {
      case 64:
        *a1 = v16;
        break;
      case 32:
        *(_DWORD *)a1 = v16;
        break;
      case 16:
        *(_WORD *)a1 = v16;
        break;
      default:
        if ( !(_BYTE)under_debugger )
          interr(1187);
        BUG();
    }
  }
  *a4 = v6 + 1;
  return 1;
}
// 158B40: using guessed type __int64 under_debugger;
