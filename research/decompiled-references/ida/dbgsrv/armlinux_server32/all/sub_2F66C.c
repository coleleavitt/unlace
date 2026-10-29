/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F66C
// Address: 0x0002F66C

//----- (0002F66C) --------------------------------------------------------
int __fastcall sub_2F66C(int a1, void *s, int a3)
{
  int v5; // r8
  int v6; // r7
  int v7; // r4
  _DWORD *v9; // r0
  int v10; // r2
  int v11; // r2
  unsigned __int16 v12; // r4

  switch ( a3 )
  {
    case 1:
      v5 = 11;
      break;
    case 2:
    case 4:
      v5 = 9;
      break;
    case 3:
    case 5:
      v5 = 4;
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 480) == 7 )
        v5 = 4;
      else
        v5 = 9;
      break;
    case 12:
      v5 = 1879048189;
      break;
    case 13:
      v5 = 1879048190;
      break;
    case 14:
      v5 = 1879048191;
      break;
    default:
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(20101);
  }
  v6 = 32 * a3;
  v7 = a1 + 32 * a3;
  if ( *(__int64 *)v7 < 1 || !*(_QWORD *)(v7 + 16) )
    return 0;
  v9 = memset(s, 0, 0x40u);
  v10 = *(_DWORD *)(v7 + 12);
  v9[4] = *(_DWORD *)(v7 + 8);
  v9[5] = v10;
  v9[6] = *(_DWORD *)(a1 + v6);
  v9[7] = *(_DWORD *)(v7 + 4);
  *((_QWORD *)v9 + 4) = *(_QWORD *)(v7 + 16);
  v11 = *(_DWORD *)(v7 + 28);
  v9[1] = v5;
  v9[11] = v11;
  if ( (unsigned int)(a3 - 4) <= 1 )
    return 1;
  if ( v5 == 11 )
  {
    v12 = *(_WORD *)(v7 + 24);
  }
  else if ( v5 == 4 )
  {
    v12 = *(_WORD *)(a1 + 120);
  }
  else
  {
    v12 = *(_WORD *)(a1 + 88);
  }
  *((_QWORD *)v9 + 7) = v12;
  return 1;
}
// D6C20: using guessed type char under_debugger;
