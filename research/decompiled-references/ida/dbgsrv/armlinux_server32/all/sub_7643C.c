/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7643C
// Address: 0x0007643C

//----- (0007643C) --------------------------------------------------------
bool __fastcall sub_7643C(_DWORD *a1, int a2, int a3, char **a4, char *a5)
{
  char *v5; // r6
  int v6; // r4
  int v8; // r5
  int v9; // r12
  int v10; // lr
  char v11; // r7
  char v12; // t1
  int v13; // r3
  int v14; // r10
  _BOOL4 result; // r0
  int v16; // r1

  v5 = *a4;
  if ( *a4 >= a5 )
    return 0;
  v6 = 0;
  v8 = a2;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v12 = *v5++;
    v11 = v12;
    v13 = v12 & 0x7F;
    v14 = v12;
    if ( v8 > 6 )
      goto LABEL_12;
    result = v14 >= 0 && a3 & 1;
    v16 = 255 << v8;
    if ( result )
      break;
    if ( (v13 & v16) != 0 )
      return result;
LABEL_12:
    v9 |= (unsigned __int8)v13 << v6;
    v10 |= ((unsigned __int8)v13 << (v6 - 32)) | ((unsigned __int8)v13 >> (32 - v6));
    v6 += 7;
    if ( v14 >= 0 )
      goto LABEL_17;
    if ( a2 > v6 )
    {
      v8 -= 7;
      if ( a5 != v5 )
        continue;
    }
    return 0;
  }
  if ( (v16 & 0xFFFFFFBF & v13) != 0 )
    return 0;
  v9 |= (unsigned __int8)v13 << v6;
  v10 |= ((unsigned __int8)v13 << (v6 - 32)) | ((unsigned __int8)v13 >> (32 - v6));
  LOBYTE(v6) = v6 + 7;
LABEL_17:
  if ( a1 )
  {
    if ( a3 && (v11 & 0x40) != 0 )
    {
      v9 |= -1 << v6;
      v10 |= (unsigned __int64)(-1LL << v6) >> 32;
    }
    switch ( a2 )
    {
      case 32:
        *a1 = v9;
        break;
      case 64:
        *a1 = v9;
        a1[1] = v10;
        break;
      case 16:
        *(_WORD *)a1 = v9;
        break;
      default:
        if ( under_debugger )
          __und(0xFFu);
        sub_78C64(1187);
    }
  }
  *a4 = v5;
  return 1;
}
// D6C20: using guessed type char under_debugger;
