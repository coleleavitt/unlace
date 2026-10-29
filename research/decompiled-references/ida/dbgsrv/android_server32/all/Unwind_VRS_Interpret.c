/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_VRS_Interpret
// Address: 0x00099060

//----- (00099060) --------------------------------------------------------
int __fastcall Unwind_VRS_Interpret(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v8; // r11
  unsigned int v9; // r5
  int v10; // r8
  int v11; // r2
  unsigned int v12; // r2
  int result; // r0
  unsigned int v14; // r2
  unsigned int v15; // r1
  unsigned int v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r3
  unsigned int v20; // r2
  int v21; // r0
  int v22; // r3
  int v23; // r5
  int v24; // r0
  int v25; // r1
  int v26; // [sp+8h] [bp-28h]
  __int64 v27; // [sp+Ch] [bp-24h] BYREF

  v8 = 0;
  v26 = 0;
  while ( 1 )
  {
LABEL_2:
    if ( v8 << 31 || (v9 = a3, a3 >= a4) )
    {
      if ( !(v26 << 31) )
      {
        unw_get_reg(a1, 14, &v27);
        unw_set_reg(a1, 15, v27);
      }
      return 8;
    }
    ++a3;
    v10 = *(unsigned __int8 *)(a2 + (v9 ^ 3));
    if ( (v10 & 0x80) != 0 )
      break;
    unw_get_reg(a1, 13, &v27);
    if ( (v10 & 0x40) != 0 )
      v11 = -4 - (unsigned __int8)(4 * v10) + v27;
    else
      v11 = 4 * v10 + v27 + 4;
LABEL_12:
    LODWORD(v27) = v11;
    unw_set_reg(a1, 13, v11);
    v8 = 0;
  }
  switch ( ((v10 & 0xF0u) - 128) >> 4 )
  {
    case 0u:
      if ( a3 >= a4 )
        return 9;
      v12 = (unsigned __int16)((_WORD)v10 << 12) | (16 * *(unsigned __int8 *)(a2 + (a3 ^ 3)));
      if ( !v12 )
        return 9;
      v8 = 0;
      Unwind_VRS_Pop(a1, 0, v12, 0);
      a3 = v9 + 2;
      v26 |= (unsigned __int8)(v10 & 8) >> 3;
      goto LABEL_2;
    case 1u:
      if ( (v10 & 0xD | 2) == 0xF )
        return 9;
      v8 = 0;
      Unwind_VRS_Get(a1, 0, v10 & 0xF, 0, &v27);
      unw_set_reg(a1, 13, v27);
      goto LABEL_2;
    case 2u:
      v8 = 0;
      Unwind_VRS_Pop(a1, 0, ((32 << (v10 & 7)) - 16) | ((v10 & 8) << 11), 0);
      goto LABEL_2;
    case 3u:
      result = 9;
      v8 = 1;
      switch ( *(_BYTE *)(a2 + (v9 ^ 3)) )
      {
        case 0xB0:
          goto LABEL_2;
        case 0xB1:
          if ( a3 >= a4 )
            return 9;
          v14 = *(unsigned __int8 *)(a2 + (a3 ^ 3));
          result = 9;
          if ( !*(_BYTE *)(a2 + (a3 ^ 3)) || (v14 & 0xF0) != 0 )
            return result;
          v8 = 0;
          Unwind_VRS_Pop(a1, 0, v14, 0);
          a3 = v9 + 2;
          goto LABEL_2;
        case 0xB2:
          v23 = 0;
          v24 = 0;
          break;
        case 0xB3:
          v19 = 1;
          v20 = ((*(_BYTE *)(a2 + (a3 ^ 3)) & 0xF) + 1) | ((*(_BYTE *)(a2 + (a3 ^ 3)) & 0xF0) << 12);
          goto LABEL_24;
        case 0xB4:
        case 0xB5:
        case 0xB6:
        case 0xB7:
          return result;
        default:
          v21 = (v10 & 7) + 1;
          v22 = 1;
          goto LABEL_27;
      }
      break;
    case 4u:
      if ( (v10 & 0xFE) != 0xC8 )
        return 9;
      v15 = *(unsigned __int8 *)(a2 + (a3 ^ 3));
      v16 = v15 >> 4;
      v17 = v15 & 0xF;
      v18 = v16 | (16 * (v10 == 200));
      if ( (unsigned int)(v18 + v17) > 0x1F )
        return 9;
      v19 = 5;
      v20 = (v17 + 1) | (v18 << 16);
LABEL_24:
      Unwind_VRS_Pop(a1, 1, v20, v19);
      a3 = v9 + 2;
      v8 = 0;
      goto LABEL_2;
    case 5u:
      if ( (v10 & 8) != 0 )
        return 9;
      v21 = (v10 & 7) + 1;
      v22 = 5;
LABEL_27:
      Unwind_VRS_Pop(a1, 1, v21 + 0x80000, v22);
      v8 = 0;
      goto LABEL_2;
    default:
      return 9;
  }
  while ( a3 < a4 )
  {
    v25 = a3++ ^ 3;
    LOBYTE(v25) = *(_BYTE *)(a2 + v25);
    v23 |= (v25 & 0x7F) << v24;
    v24 += 7;
    if ( (v25 & 0x80) == 0 )
    {
      unw_get_reg(a1, 13, &v27);
      v11 = v27 + 4 * v23 + 516;
      goto LABEL_12;
    }
  }
  return 9;
}
